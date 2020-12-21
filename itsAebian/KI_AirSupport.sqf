/*
    author: @Aebian
    description: AirSupport script for TIC (complete re-write).
    returns: nothing
	created: 2020-12-19
	[Vulture21CR, Vulture21VHC, 600, [7660.26,11162.2,2.86102e-005]] execVM "itsAebian\KI_AirSupport.sqf";
*/

params["_group", "_vehicle", "_gametime", "_target"];

(_group getVariable ["KI_airSupport_cfSwitch", "RFT"]) params ["_cond"];

(units _group) params ["_gunner", "_pilot"];

switch (_cond) do 
{

    case "RFT":
    {
        _group setVariable ["KI_airSupport_WaitingArea", (getPos _gunner)];

        _pilot assignAsDriver _vehicle;
		_gunner assignAsGunner _vehicle;

        _vehicle setVariable ["KI_airSupport_heliPad", nearestObject [_vehicle, ("Helipad_base_F")]];

        _group setVariable ["KI_airSupport_cfSwitch", "IAO"];

        [_group, _vehicle, _gametime, _target] execVM "itsAebian\KI_AirSupport.sqf";
    };

    case "IAO": 
    {
    
    	[_pilot, _gunner] orderGetIn true;

		_pilot setCombatMode "RED";
		_pilot setBehaviour "COMBAT";

		_gunner setCombatMode "RED";
		_gunner setBehaviour "COMBAT";

        switch (typeName _target) do
        {
            case "ARRAY":
            {

                _onguard = _group addWaypoint [_target, 0];
                _onguard setWaypointType "SAD";
                [_group, 0] setWaypointSpeed "NORMAL";

            };

            case "STRING":
            {
                _onguard = _group addWaypoint [(getMarkerPos _target), 0];
                _onguard setWaypointType "SAD";
                [_group, 0] setWaypointSpeed "NORMAL";
            };

            case "OBJECT": 
            {
                _onguard = _group addWaypoint [(getPos _target), 0];
                _onguard setWaypointType "SAD";
                [_group, 0] setWaypointSpeed "NORMAL";

            };
        };

        [format ["%1, %2", groupId _group, "is en route for close air support, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is en route for close air support, out." ];
        
        sleep _gametime;
        
        _group setVariable ["KI_airSupport_cfSwitch", "RTB"];
        [_group, _vehicle, _gametime, _target] execVM "itsAebian\KI_AirSupport.sqf";

    };

    case "RTB":
    {
        deleteWaypoint [_group, 0];

	 	_pilot setBehaviour "CARELESS";
	 	_gunner setBehaviour "CARELESS";

         deleteWaypoint [_group, 0];
        _rtbpoint = _group addWaypoint [(_vehicle getVariable ["KI_airSupport_heliPad", objNull]), 0];

        [format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ];

        _pilot land "LAND";
	 	_pilot landAt (_vehicle getVariable ["KI_airSupport_heliPad", objNull]);

        waitUntil {(getPos _vehicle select 2) < 2 AND (speed _vehicle) < 1};

        _pilot setCombatMode "BLUE";
		_pilot setBehaviour "SAFE";

		_gunner setCombatMode "BLUE";
		_gunner setBehaviour "SAFE";

        unassignVehicle _pilot;
		unassignVehicle _gunner;

		[_pilot, _gunner] orderGetIn false;
         _group move (_group getVariable ["KI_airSupport_WaitingArea"]);

        _group setVariable ["KI_airSupport_cfSwitch", "SVC"];
        diag_log format ["%1, %2", groupId _group, "on ground for maintenance" ];

        [_group, _vehicle, _gametime, _target] execVM "itsAebian\KI_AirSupport.sqf";


    };

    case "SVC":
    {
        sleep 300;
        _vehicle setDamage 0;
        _vehicle setAmmo 1;

        _group setVariable ["KI_airSupport_cfSwitch", "RTF"];
        diag_log format ["%1, %2", groupId _group, "ready for tasking" ];
        
    };

}