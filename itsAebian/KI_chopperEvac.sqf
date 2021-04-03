/*
    author: @Aebian
    description: Chopper insert / exfill 
    returns: at least a helo
	created: 2021-02-28
	[TigerOneCR, "FRI", PJMarker] execVM "itsAebian\KI_chopperEvac.sqf";
	_wait is optional and only needed when used with EVAC. 
*/

params["_helicrew", "_assignment", "_dropzone", "_wait"];

(_helicrew getVariable ["KI_chopperEvac_cfSwitch", "RFT"]) params ["_cond"];
_aircraft = ([_helicrew, true] call BIS_fnc_groupVehicles) select 0;

if (isNil "_wait") then { _wait = 120; };

if (!alive _aircraft) exitWith // Break if no aircraft left
{
    diag_log format ["%1, %2", groupId _helicrew, "have lost the aircraft." ];
    _helicrew setVariable ["KI_chopperEvac_cfSwitch", "RTB"];

	[_helicrew, _assignment, _dropzone, _wait] execVM "itsAebian\KI_chopperEvac.sqf";
};

if ({ alive _x } count units _helicrew == 0) exitWith // Break if soliders died
{
diag_log format ["%1, %2", groupId _helicrew, "is KIA." ];
_helicrew setVariable ["KI_chopperEvac_cfSwitch", "KIA"];
};


private _kiDescend = 
{
    params["_z1"];
    _v1 = -6;
    _refreshTime = 0.1;
                
    _z2 = getPosATL _aircraft select 2;
    _v2 = velocity _aircraft select 2;
    _Vel = [];
    _velZ = 0;
    _z = getPosATL _aircraft select 2;
    while{_z >= _z1} do
    {
        _z = getPosATL _aircraft select 2;
        _velZ = [_v1,_v2,(_z-_z1)/(_z2-_z1)] call BIS_fnc_lerp;
        _vel = (velocity _aircraft);
        _vel set [2,_velZ];
        _aircraft setVelocity _vel;
        sleep _refreshTime;
    };  
};

_destination = objNull;

switch (typeName _dropzone) do
{
    case "ARRAY":
    {
        _destination =  _dropzone;
    };

    case "STRING":
    {
        _destination = (getMarkerPos _dropzone);
    };

    case "OBJECT": 
    {
    _destination = (getPosATL _dropzone);
    };
};

switch (_cond) do 
{

    case "RFT": // Ready for Tasking
    {

        {
			_x disableAI "AUTOCOMBAT";
			_x disableAI "AUTOTARGET";
			_x disableAI "TARGET";
            _x disableAI "COVER";
		} forEach [driver _aircraft];
				
		{
			_x doWatch objNull;
			_x doTarget objNull;
			_x commandWatch objNull;
		} forEach [driver _aircraft];


		_helicrew setVariable ["KI_chopperEvac_BasePad", (getPosATL _aircraft)];
		_helicrew setVariable ["KI_chopperEvac_cfSwitch", "IAO"];

		[_helicrew, _assignment, _dropzone, _wait] execVM "itsAebian\KI_chopperEvac.sqf";

	};

	case "IAO": // Insert to AO
    {
        if (count ((waypoints _helicrew) apply {_x select 1}) >= 2) then
        {
            deleteWaypoint [_helicrew, 1];
            _onTarget = _helicrew addWaypoint [_destination, 1, 1, "Dropzone / Pickup"];

            _onTarget setWaypointType "MOVE";
            [_helicrew, 1] setWaypointSpeed "FULL";

        }
        else 
        {
            _onTarget = _helicrew addWaypoint [_destination, 1, 1, "Dropzone / Pickup"];
            _onTarget setWaypointType "MOVE";

            [_helicrew, 1] setWaypointSpeed "FULL";
            [_helicrew, 1] setWaypointCompletionRadius 3;

        };

        waitUntil {(getPosATL _aircraft) select 2 > 10};

		switch (_assignment) do 
		{
			case "FRI": // Fast Rope Insert (Hover)
			{
                waitUntil {(_aircraft distance _destination) < 1200};
                if ((_destination select 2) <= 18) then
                {
                    [18] call _kiDescend;
                } 
                else 
                {
                    [(_destination select 2)+ 2] call _kiDescend;
                };

				waitUntil {(_aircraft distance _destination) < 400};

                [format ["%1, %2", groupId _helicrew, "is on target to insert troops, over." ]] remoteExecCall ["sideChat"];
				diag_log format ["%1, %2", groupId _helicrew, "is on target to insert troops, over." ];	

                waitUntil {(_aircraft distance _destination) < 120};

                _vect = (getposATL _aircraft) vectorDiff [_destination select 0,_destination select 1,getposATL _aircraft select 2]; 
                _phi = (_vect select 1) atan2 (_vect select 0); 
                
                _aircraft doMove ([(_destination select 0)+48*cos(_phi+180),(_destination select 1)+48*sin(_phi+180),200]);
				waitUntil {speed _aircraft < 1};

				_troops = (fullCrew [_aircraft, "cargo", false]) apply {_x select 0};


                if ((_destination select 2) <= 18) then 
                {
                    [_aircraft, 18] call AR_Rappel_All_Cargo; // Needs Advanced Rappel Mod to work (ACE3 is eeeh)
                } 
                else 
                {
                    [_aircraft, ((_destination select 2)+ 3)] call AR_Rappel_All_Cargo; // Needs Advanced Rappel Mod to work (ACE3 is eeeh)

                };
                waitUntil { count ((fullCrew [_aircraft, "cargo", false]) apply {_x select 0}) == 0};
				
                fullCrew [_aircraft, "cargo", false] apply {unassignVehicle (_x#0)};
                deleteWaypoint [_helicrew, 1];

                sleep 10;
				_helicrew setVariable ["KI_chopperEvac_cfSwitch", "RTB"];

				[_helicrew, _assignment, _dropzone, _wait] execVM "itsAebian\KI_chopperEvac.sqf";

			};

			case "WDI": // Wheels Down Insert (Landing)
			{
                waitUntil {(_aircraft distance _destination) < 1200};
                [0.5] call _kiDescend;     
		
				 waitUntil {(_aircraft distance _destination) < 499};
                _lpad = nearestObject [_dropzone, ("Helipad_base_F")];

                if (isNull _lpad) then
                {
            
                    _tempad = createVehicle ["Land_HelipadEmpty_F", _dropzone];

                };

                deleteWaypoint [_helicrew, 1];
                _aircraft LAND "GET OUT";

                [format ["%1, %2", groupId _helicrew, "is on target to insert troops, over." ]] remoteExecCall ["sideChat"];
				diag_log format ["%1, %2", groupId _helicrew, "is on target to insert troops, over." ];	

                if (_aircraft isKindOf "RHS_MELB_base") then 
                {
                    _troops = (fullCrew [_aircraft, "turret", false]) apply {_x select 0};
				    fullCrew [_aircraft, "cargo", false] apply {unassignVehicle (_x#0)};
                    
                    _troops allowGetIn false;
                    {doGetOut _x} forEach _troops;

                    waitUntil { count ((fullCrew [_aircraft, "turret", false]) apply {_x select 0}) == 0};
                } 
                else 
                {
                    _troops = (fullCrew [_aircraft, "cargo", false]) apply {_x select 0};
				    fullCrew [_aircraft, "cargo", false] apply {unassignVehicle (_x#0)};
                    
                    _troops allowGetIn false;
                    {doGetOut _x} forEach _troops;

                    waitUntil { count ((fullCrew [_aircraft, "cargo", false]) apply {_x select 0}) == 0};
                };

                if !(isNil "_tempad") then 
                {
                    deleteVehicle _tempad;
                };

                sleep 10;

                _helicrew setVariable ["KI_chopperEvac_cfSwitch", "RTB"];
				[_helicrew, _assignment, _dropzone, _wait] execVM "itsAebian\KI_chopperEvac.sqf";

			};

			case "EVAC": // Evac of Troops
			{
                waitUntil {(_aircraft distance _destination) < 1200};
                [0.5] call _kiDescend;

				 waitUntil {(_aircraft distance _destination) < 499};

                [format ["%1, %2", "%3", "%4", groupId _helicrew, "is on target to evacute the troops and is waiting for",[_wait, "MM:SS"] call BIS_fnc_secondsToString,"mikes, over." ]] remoteExecCall ["sideChat"];
			    diag_log format ["%1, %2", "%3", "%4", groupId _helicrew, "is on target to evacute the troops and is waiting for",[_wait, "MM:SS"] call BIS_fnc_secondsToString,"mikes, over." ];

			    _aircraft flyInHeight 30;
                _lpad = nearestObject [_dropzone, ("Helipad_base_F")];

            if (isNull _lpad) then
            {
            
            _tempad = createVehicle ["Land_HelipadEmpty_F", _dropzone];

            };

            _aircraft LAND "GET IN";
            waitUntil {isTouchingGround _aircraft};

            sleep _wait;

            if !(isNil "_tempad") then 
            {
                deleteVehicle _tempad;
            };

            _helicrew setVariable ["KI_chopperEvac_cfSwitch", "RTB"];
            deleteWaypoint [_helicrew, 1];

			[_helicrew, _assignment, _dropzone, _wait] execVM "itsAebian\KI_chopperEvac.sqf";


			};
		};

	};

	case "RTB": // Return to Base
	{
		_helicrew setBehaviour "CARELESS";
        _heliPad = (_helicrew getVariable ["KI_chopperEvac_BasePad", objNull]);

        _rtbPoint = _helicrew addWaypoint [_heliPad, 1, 1, "Return to Base"];
        _rtbPoint setWaypointType "SCRIPTED";

        _rtbPoint setWaypointScript "A3\functions_f\waypoints\fn_wpLand.sqf";
        _aircraft limitSpeed 1000;

        waitUntil {(_aircraft distance _destination) > 40};
         _weapons = _aircraft weaponsTurret [-1];
        {
            if ("cmdispenser" in toLowerANSI _x || "CMFlareLauncher" in toLowerANSI _x) exitWith
            {
                _dispenserMode = (getArray(configFile >> "CfgWeapons" >> _x >> "modes") select 0);
                for "_fire" from 1 to 4 do {
                (driver _aircraft) forceWeaponFire [_x, _dispenserMode];
                sleep 1;
            };
        };
        
        } forEach _weapons;

        [format ["%1, %2", groupId _helicrew, "is RTB, over." ]] remoteExecCall ["sideChat"];
		diag_log format ["%1, %2", groupId _helicrew, "is RTB, over." ];	

        waitUntil {_aircraft distance _heliPad < 150};
        deleteWaypoint [_helicrew, 1];

        {
            _x enableAI "AUTOCOMBAT";
            _x enableAI "AUTOTARGET";
            _x enableAI "TARGET";
            _x enableAI "COVER";
        } forEach [driver _aircraft];

        _aircraft land "LAND";
		waitUntil {_aircraft distance _heliPad < 35};
        
		_helicrew setCombatMode "BLUE";
		_helicrew setBehaviour "SAFE";

        waitUntil {_aircraft distance (_aircraft getVariable ["KI_chopperEvac_BasePad", objNull]) < 5};
        sleep 36;

        _aircraft engineOn false;
        _helicrew setVariable ["KI_chopperEvac_cfSwitch", "SVC"];

        diag_log format ["%1, %2", groupId _helicrew, "on ground for maintenance" ];
	};

	case "SVC": // Maintenance run on that aircraft
	{
		_helicrew setVariable ["KI_chopperEvac_cfSwitch", "DND"];
		sleep 300;

        _aircraft setDamage 0;
        _aircraft setFuel 1;
        
        _aircraft setAmmo 1;
        {_x setDamage 0} forEach units _helicrew;

        _helicrew setVariable ["KI_chopperEvac_cfSwitch", "RFT"];
        diag_log format ["%1, %2", groupId _helicrew, "ready for tasking" ];

	};

	case "DND": // Unavailable
    {
        [format ["%1, %2", groupId _helicrew, "is currently unavailable for tasking. Ask the command center for another aircraft on standby." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _helicrew, "is currently unavailable for tasking. Ask the command center for another aircraft on standby." ];

    };
};