/*
    author: @Aebian
    description: AirSupport script for TIC (complete re-write).
    returns: nothing
	created: 2020-12-19
	[Vulture21CR, Vulture21VHC, 600, [7660.26,11162.2,2.86102e-005]] execVM "itsAebian\KI_airSupport.sqf";
*/

params["_group", "_aircraft", "_gameTime", "_targetRAW"];

(_group getVariable ["KI_airSupport_cfSwitch", "RFT"]) params ["_cond"];

(units _group) params ["_gunner", "_pilot"];

if (!alive _aircraft) exitWith // Break if no aircraft left
{
    diag_log format ["%1, %2", groupId _group, "have lost the aircraft." ];
    _group setVariable ["KI_airSupport_cfSwitch", "RTB"];

    [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\KI_AirSupport.sqf";
};

if ({ alive _x } count units _group == 0) exitWith // Break if soliders died
{
diag_log format ["%1, %2", groupId _group, "is KIA." ];
_group setVariable ["KI_airSupport_cfSwitch", "KIA"];
};

switch (_cond) do 
{

    case "RFT": // Ready for Tasking
    {
        _group setVariable ["KI_airSupport_WaitingArea", (getPos _gunner)];

        _pilot assignAsDriver _aircraft;
		_gunner assignAsGunner _aircraft;

        _aircraft setVariable ["KI_airSupport_heliPad", nearestObject [_aircraft, ("Helipad_base_F")]];
        _aircraft setVariable ["KI_airSupport_heliHeading", (getDir _aircraft)];

        _group setVariable ["KI_airSupport_cfSwitch", "IAO"];

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\KI_AirSupport.sqf";
    };

    case "IAO": // Insert to AO
    {
    
    	[_pilot, _gunner] orderGetIn true;

		_group setCombatMode "RED";
	    _group setBehaviour "COMBAT";

        _target = objNull;

        switch (typeName _targetRAW) do
        {
            case "ARRAY":
            {
                _target =  _targetRAW;
            };

            case "STRING":
            {
                _target = (getMarkerPos _targetRAW);
            };

            case "OBJECT": 
            {
            _target = (getPos _targetRAW);
            };
        };

        _onTarget = _group addWaypoint [_target, 1, 1, "Target Area"];
        _onTarget setWaypointType "SAD";
        [_group, 0] setWaypointSpeed "NORMAL";

        [format ["%1, %2", groupId _group, "is en route for close air support, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is en route for close air support, out." ];

        waitUntil {(_aircraft distance _target) < 1500};

        [format ["%1, %2", groupId _group, "arrived at the AO." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "arrived at the AO." ];
        
        params["_enemies", "_visTargets", "_bulletMagnet"];

        private _playTime = diag_tickTime + _gameTime;

        while {diag_tickTime < _playTime} do 
        {
            sleep 1;
            _enemies = allUnits select {side group _x getFriend side _group < 0.6 && {_x distance _target < 1500}};
            _visTargets = _enemies select {([objNull, "VIEW"] checkVisibility [eyePos (gunner _aircraft), eyePos _x] > 0.3)};

            _bulletMagnet = _visTargets call BIS_fnc_selectRandom;

            if (!(count _visTargets == 0)) then {

                if (alive _bulletMagnet) then
                {
                    (gunner _aircraft) doWatch _bulletMagnet;
                    (gunner _aircraft) doTarget _bulletMagnet;
                };

            } 
            else 
            {
                {
                    _x doWatch objNull;
                    _x doTarget objNull;
                    _x commandWatch objNull;
                } forEach units _group;
            };
        };

        _group setVariable ["KI_airSupport_cfSwitch", "RTB"];    
        deleteWaypoint [_group, 1];

        {
            _x doWatch objNull;
            _x doTarget objNull;
            _x commandWatch objNull;
        } forEach units _group;

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\KI_AirSupport.sqf";
    };

    case "RTB": // Returning to Base
    {
        private _weapons = _aircraft weaponsTurret [-1];
        {
        if ("cmdispenser" in toLowerANSI _x || "CMFlareLauncher" in toLowerANSI _x) exitWith
        {
            for "_fire" from 1 to 4 do {
            _pilot forceWeaponFire [_x, "AIBurst"];
            sleep 1;
            };
        };
        
        } forEach _weapons;

	 	_group setBehaviour "CARELESS";
        {
            _x disableAI "AUTOCOMBAT";
            _x disableAI "CHECKVISIBLE";
        } forEach units _group;

        _rtbPoint = _group addWaypoint [(_aircraft getVariable ["KI_airSupport_heliPad", objNull]), 1, 1, "Return to Base"];

        [format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ];

	 	_aircraft landAt (_aircraft getVariable ["KI_airSupport_heliPad", objNull]);
        waitUntil {_aircraft distance (_aircraft getVariable ["KI_airSupport_heliPad", objNull]) < 150};

        _aircraft land "LAND";
        _group setFormDir (_aircraft getVariable ["KI_airSupport_heliHeading", objNull]);

        _group setCombatMode "BLUE";
		_group setBehaviour "SAFE";

        waitUntil {_aircraft distance (_aircraft getVariable ["KI_airSupport_heliPad", objNull]) < 5.5 && isEngineOn _aircraft == false};

        {
            _x enableAI "AUTOCOMBAT";
            _x enableAI "CHECKVISIBLE";
        } forEach units _group;

        sleep 36;

        unassignVehicle _pilot;
		unassignVehicle _gunner;

		[_pilot, _gunner] orderGetIn false;
        _group move (_group getVariable ["KI_airSupport_WaitingArea", objNull]);

        _group setVariable ["KI_airSupport_cfSwitch", "SVC"];
        diag_log format ["%1, %2", groupId _group, "on ground for maintenance" ];

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\KI_AirSupport.sqf";


    };

    case "SVC": // Maintenance run on that aircraft
    {
        _group setVariable ["KI_airSupport_cfSwitch", "DND"];
        sleep 300;
        _aircraft setDamage 0;
        _aircraft setFuel 1;
        _aircraft setAmmo 1;

        _group setVariable ["KI_airSupport_cfSwitch", "RTF"];
        diag_log format ["%1, %2", groupId _group, "ready for tasking" ];
        
    };

};