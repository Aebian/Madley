/*
            author: @Aebian
            description: snipe of units at long distances
            returns: death to enemies
            created: 2020-12-14
		    // [ViperS, thisList, 5, 0] execVM "itsAebian\KI_snipeAction.sqf";
*/


params [
	"_sniper","_targets",["_shots",1],["_delay",0],
	"_direction","_angleDelta"
];

(_sniper getVariable ["KI_snipeAction_cfSwitch", objNull]) params ["_cond"];

switch (_cond) do 
{
	case 0:
    default
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

		[_sniper, _targets, _shots, _delay] execVM "itsAebian\KI_snipeAction.sqf";

	};

	case 1:
	{
		 (_sniper getVariable ["KI_snipeAction_Target", objNull]) params ["_bulletMagnet"];

		if (alive _bulletMagnet) then
		{
		_sniper reveal [_bulletMagnet, 4];
		_sniper doWatch _bulletMagnet;
		_sniper doTarget _bulletMagnet;

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
