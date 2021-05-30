/*
    author: @Aebian
    description: AirSupport script for TIC (complete re-write).
    returns: nothing
	created: 2020-12-19
	[Vulture21CR, Vulture21VHC, 600, [7660.26,11162.2,2.86102e-005]] execVM "itsAebian\NH_airSupport.sqf";
*/

params["_group", "_aircraft", "_gameTime", "_targetRAW"];

(_group getVariable ["NH_airSupport_cfSwitch", "RFT"]) params ["_cond"];

(units _group) params ["_pilot", "_gunner"];

if (!alive _aircraft) exitWith // Break if no aircraft left
{
    diag_log format ["%1, %2", groupId _group, "have lost the aircraft." ];
    _group setVariable ["NH_airSupport_cfSwitch", "RTB"];

    [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\NH_airSupport.sqf";
};

if ({ alive _x } count units _group == 0) exitWith // Break if soliders died
{
diag_log format ["%1, %2", groupId _group, "is KIA." ];
_group setVariable ["NH_airSupport_cfSwitch", "KIA"];
};

switch (_cond) do 
{

    case "RFT": // Ready for Tasking
    {
        _group setVariable ["NH_airSupport_WaitingArea", (getPos _gunner)];

        _pilot assignAsDriver _aircraft;
		_gunner assignAsGunner _aircraft;

        _aircraft setVariable ["NH_airSupport_heliPad", nearestObject [_aircraft, ("Helipad_base_F")]];
        _aircraft setVariable ["NH_airSupport_heliHeading", (getDir _aircraft)];

        _group setVariable ["NH_airSupport_cfSwitch", "IAO"];

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\NH_airSupport.sqf";
    };

    case "IAO": // Insert to AO
    {
    
    	[_pilot, _gunner] orderGetIn true;

        waitUntil 
        { {_x != (vehicle _x) } forEach units _group};

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

        waitUntil {(getPosATL _aircraft) select 2 > 10};

        [format ["%1, %2", groupId _group, "is en route for close air support, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is en route for close air support, out." ];

        waitUntil {(_aircraft distance _target) < 2000};

        [format ["%1, %2, %3 %4", groupId _group, "arrived at the AO, time on station is", [_gameTime, "MM:SS"] call BIS_fnc_secondsToString, "mike(s)."]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2, %3 %4", groupId _group, "arrived at the AO, time on station is", [_gameTime, "MM:SS"] call BIS_fnc_secondsToString, "mike(s)."];
        
        params["_enemies", "_visTargets", "_bulletMagnet"];

        private _playTime = diag_tickTime + _gameTime;

        while {diag_tickTime < _playTime} do 
        {
            scopeName "attackLoop";
            sleep 1;

            _enemies = allUnits select {side group _x getFriend side _group < 0.6 && (alive _x) && {_x distance _target < 4000}};
            _visTargets = _enemies select {([objNull, "VIEW"] checkVisibility [eyePos (gunner _aircraft), eyePos _x] > 0.3)};

            _bulletMagnet = _visTargets call BIS_fnc_selectRandom;

            if (!(count _visTargets == 0)) then 
            {
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

            if (count _enemies == 0) then 
            {
                [format ["%1, %2", groupId _group, "destroyed all targets around specified location and is RTB, good luck, out." ]] remoteExecCall ["sideChat"];
                diag_log format ["%1, %2", groupId _group, "destroyed all targets around specified location and is RTB, good luck, out." ];
                breakOut  "attackLoop"
                
            };

            private _aircraftWeapons = _aircraft weaponsTurret [0];
            {
                if ( _x isKindOf ["CannonCore" ,configFile >> "CfgWeapons"] ) then 
                {
                    if ((_aircraft ammo _x) < 80) then 
                    {
                        [format ["%1, %2", groupId _group, "is Winchester and is RTB, good luck, out." ]] remoteExecCall ["sideChat"];
                        diag_log format ["%1, %2", groupId _group, "is Winchester and is RTB, good luck, out." ];
                        breakOut  "attackLoop" 
                    }; 
                }

            } forEach _aircraftWeapons;

        };

        if (!(diag_tickTime < _playTime)) then 
        {
            [format ["%1, %2", groupId _group, "is bingo fuel and RTB, good luck, out." ]] remoteExecCall ["sideChat"];
            diag_log format ["%1, %2", groupId _group, "is bingo fuel and RTB, good luck, out." ];
        };

        _group setVariable ["NH_airSupport_cfSwitch", "RTB"];    
        deleteWaypoint [_group, 1];

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\NH_airSupport.sqf";
    };

    case "RTB": // Returning to Base
    {
	 	_group setBehaviour "CARELESS";
        {
            _x disableAI "AUTOCOMBAT";
            _x disableAI "AUTOTARGET";
            _x disableAI "TARGET";
            _x disableAI "CHECKVISIBLE";
        } forEach units _group;
        
        {
            _x doWatch objNull;
            _x doTarget objNull;
            _x commandWatch objNull;
        } forEach units _group;

        _heliPad = (_aircraft getVariable ["NH_airSupport_heliPad", objNull]);
        _originalHeading = (_aircraft getVariable ["NH_airSupport_heliHeading", objNull]);

        _rtbPoint = _group addWaypoint [_heliPad, 1, 1, "Return to Base"];
        sleep 2;

        private _weapons = _aircraft weaponsTurret [-1];
        {
            if ("cmdispenser" in toLowerANSI _x || "CMFlareLauncher" in toLowerANSI _x) exitWith
            {
                _dispenserMode = (getArray(configFile >> "CfgWeapons" >> _x >> "modes") select 0);
                for "_fire" from 1 to 4 do {
                (_pilot) forceWeaponFire [_x, _dispenserMode];
                sleep 1;
            };
        };
        
        } forEach _weapons;

        waitUntil {_aircraft distance _heliPad < 150};
        _aircraft land "LAND";

         waitUntil {_aircraft distance (getPos _heliPad) < 7};
		_aircraftRight = true;

        if (_originalHeading < 180) then 
        {
            _aircraftRight = false;
        };

        _aircraftAdjust = true;
        while {_aircraftAdjust} do 
        {
            if (_aircraftRight) then 
            {
                _aircraft setDir ((getDir _aircraft) + 1);
            } else 
            {
                _aircraft setDir ((getDir _aircraft) - 1);
            };

            sleep 0.01;
            if ((round (getDir _aircraft)) == (round _originalHeading)) then {_aircraftAdjust = false};
        
        };
       
        _group setCombatMode "BLUE";
		_group setBehaviour "SAFE";

        waitUntil {_aircraft distance (_aircraft getVariable ["NH_airSupport_heliPad", objNull]) < 5 && isEngineOn _aircraft == false};

        {
            _x enableAI "AUTOCOMBAT";
            _x enableAI "AUTOTARGET";
            _x enableAI "TARGET";
            _x enableAI "CHECKVISIBLE";
        } forEach units _group;

        sleep 36;

        unassignVehicle _pilot;
		unassignVehicle _gunner;

		[_pilot, _gunner] orderGetIn false;
        _group move (_group getVariable ["NH_airSupport_WaitingArea", objNull]);

        _group setVariable ["NH_airSupport_cfSwitch", "SVC"];
        diag_log format ["%1, %2", groupId _group, "on ground for maintenance" ];

        [_group, _aircraft, _gameTime, _targetRAW] execVM "itsAebian\NH_airSupport.sqf";


    };

    case "SVC": // Maintenance run on that aircraft
    {
        _group setVariable ["NH_airSupport_cfSwitch", "DND"];
        sleep 300;

        _aircraft setDamage 0;
        _aircraft setFuel 1;
        
        _aircraft setAmmo 1;
        {_x setDamage 0} forEach units _group;

        _group setVariable ["NH_airSupport_cfSwitch", "RFT"];
        diag_log format ["%1, %2", groupId _group, "ready for tasking" ];
        
    };

    case "DND": // Unavailable
    {
        [format ["%1, %2", groupId _group, "is currently unavailable for tasking. Ask the command center for another aircraft on standby." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is currently unavailable for tasking. Ask the command center for another aircraft on standby." ];

    };

};