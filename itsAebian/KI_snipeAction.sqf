/*
            author: @Aebian
            description: snipe of units at long distances (Sniper must be leader of the group)
            returns: death to enemies
            created: 2020-12-14
			updated: 2021-01-10
		    // [Viper, thisList, 5, 0] execVM "itsAebian\KI_snipeAction.sqf";
*/


params [
	"_group","_targets",["_shots",1],["_delay",0],
	"_direction","_angleDelta"
];

(units _group) params ["_sniper", "_spotter"];

(_sniper getVariable ["KI_snipeAction_cfSwitch", 0]) params ["_cond"];

{
	_x kbaddtopic ["BIS_distanceReport","A3\functions_f\systems\fn_spotter.bikb",""];
} foreach [_sniper,_spotter];

_numberToString = 
{
	_number = _this;
	_result = switch _number do 
	{
		case 0: {"zero2"};
		case 1: {"one2"};
		case 2: {"two2"};
		case 3: {"three2"};
		case 4: {"four2"};
		case 5: {"five2"};
		case 6: {"six2"};
		case 7: {"seven2"};
		case 8: {"eight2"};
		case 9: {"nine2"};
		default {"zero2"};
	};
	_result;
};

switch (_cond) do 
{
	case 0:
	{

		_visTargets = _targets select {([objNull, "VIEW"] checkVisibility [eyePos _sniper, eyePos _x] > 0.8)};

		_sniper  setVariable ["KI_snipeAction_Target", (_visTargets call BIS_fnc_selectRandom), true];
		_sniper disableAI "AIMINGERROR";
		{
			_sniper setSkill [_x,1];
		} forEach [
			"aimingAccuracy",
			"aimingShake",
			"aimingSpeed",
			"spotDistance",
			"spotTime"
		];

		_sniper  setVariable ["KI_snipeAction_cfSwitch", 1, true];	

		[_group, _targets, _shots, _delay] execVM "itsAebian\KI_snipeAction.sqf";

	};

	case 1:
	{
		 (_sniper getVariable ["KI_snipeAction_Target", objNull]) params ["_bulletMagnet"];


		if (alive _bulletMagnet) then
		{
		_sniper reveal [_bulletMagnet, 4];
		_sniper doWatch _bulletMagnet;
		_sniper doTarget _bulletMagnet;

		_dis = 0;
		_disTemp = _sniper distance _bulletMagnet;
		_disRel = abs (_dis - _disTemp);
		
		if (_disRel > 50 && _disTemp >= 50) then 
		{
			//_disText = (round (_disTemp / 100)) * 100;
			_disText = round _disTemp;
			_disText0001 = (_disText % 10);
			_disText0010 = (_disText % 100 - _disText0001);
			_disText0100 = (_disText % 1000 - _disText0001 - _disText0010);
			_disText1000 = (_disText - _disText0100 - _disText0001 - _disText0010);
			_disText0001 = _disText0001 / 0001;
			_disText0010 = _disText0010 / 0010;
			_disText0100 = _disText0100 / 0100;
			_disText1000 = _disText1000 / 1000;

			_speechArray = [];
			if (_disText >= 1000) then {_speechArray = _speechArray + [_disText1000 call _numberToString]};
			if (_disText >= 0100) then {_speechArray = _speechArray + [_disText0100 call _numberToString]};
			if (_disText >= 0010) then {_speechArray = _speechArray + [_disText0010 call _numberToString]};
			if (_disText >= 0001) then {_speechArray = _speechArray + [_disText0001 call _numberToString]};
			_speechArray = _speechArray + ["Meters"];

			_sentence = [_sniper,"BIS_distanceReport","distanceReport",["Dist",{},str _disText + " " + localize "str_ep1_wordmeters",_speechArray], true];
			_spotter kbtell _sentence;
		};

		_dis = _disTemp;
		_direction = _sniper getDir _bulletMagnet;

		waitUntil {
			_angleDelta = [((_sniper weaponDirection (currentWeapon _sniper)) select 0) atan2 ((_sniper weaponDirection (currentWeapon _sniper)) select 1),_sniper getDir _bulletMagnet] call BIS_fnc_getAngleDelta;
			(_angleDelta > -5) && (_angleDelta < 5)
		};

		sleep 1;

		for "_i" from 1 to _shots do {
			_sniper forceWeaponFire [currentWeapon _sniper,"Single"];
			sleep _delay;
			
			if (!alive _bulletMagnet) then 
			{
				_sniper  setVariable ["KI_snipeAction_cfSwitch", 0, true];	
			}

		};

		_sniper enableAI "AIMINGERROR";

		} 
		else 
		{
			_sniper  setVariable ["KI_snipeAction_cfSwitch", 0, true];	
		}

	};

}
