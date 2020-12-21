/*
    author: @Aebian
    description: AirSupport script for TIC (complete re-write).
    returns: nothing
	created: 2020-12-19
	[Vulture21CR, Vulture21VHC, 600, [7660.26,11162.2,2.86102e-005]] execVM "itsAebian\KI_airSupport.sqf";
*/

params["_group", "_vehicle", "_gametime", "_target"];

(_group getVariable ["KI_airSupport_cfSwitch", "RFT"]) params ["_cond"];

(units _group) params ["_gunner", "_pilot"];

if (!alive _vehicle) exitWith 
{
    diag_log format ["%1, %2", groupId _group, "have lost the aircraft." ];
};

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

        if (typeOf _vehicle == "RHS_AH64_base") then
        {
            _pilot forceWeaponFire ["rhsusf_weap_CMDispenser_M130", "AIBurst"];
            sleep 1;
            _pilot forceWeaponFire ["rhsusf_weap_CMDispenser_M130", "AIBurst"];
        };

	 	_group setBehaviour "CARELESS";
        {
            _x disableAI "AUTOCOMBAT";
            _x disableAI "CHECKVISIBLE";
        } forEach units _group;

         deleteWaypoint [_group, 0];
        _rtbpoint = _group addWaypoint [(_vehicle getVariable ["KI_airSupport_heliPad", objNull]), 0];

        [format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ]] remoteExecCall ["sideChat"];
        diag_log format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ];

        _pilot land "LAND";
	 	_pilot landAt (_vehicle getVariable ["KI_airSupport_heliPad", objNull]);

        waitUntil {_vehicle distance (_vehicle getVariable ["KI_airSupport_heliPad", objNull]) < 150};

        unassignVehicle _pilot;
		unassignVehicle _gunner;

        _group setCombatMode "BLUE";
		_group setBehaviour "SAFE";

		[_pilot, _gunner] orderGetIn false;
        _group move (_group getVariable ["KI_airSupport_WaitingArea", objNull]);

        _group setVariable ["KI_airSupport_cfSwitch", "SVC"];
        diag_log format ["%1, %2", groupId _group, "on ground for maintenance" ];

        {
            _x enableAI "AUTOCOMBAT";
            _x enableAI "CHECKVISIBLE";
        } forEach units _group;

        [_group, _vehicle, _gametime, _target] execVM "itsAebian\KI_AirSupport.sqf";


    };

    case "SVC":
    {
        _group setVariable ["KI_airSupport_cfSwitch", "DND"];
        sleep 300;
        _vehicle setDamage 0;
        _vehicle setAmmo 1;

        _group setVariable ["KI_airSupport_cfSwitch", "RTF"];
        diag_log format ["%1, %2", groupId _group, "ready for tasking" ];
        
    };

}