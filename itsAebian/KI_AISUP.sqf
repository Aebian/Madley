/*
    author: @Aebian
    description: Airsupport script for my test mission.
    returns: nothing
	[Vulture21CR, Vulture21, 3600, "KION", US_HeliPad01,"OnStatCampMiddle","CIRCLE","US_PilotWait01", Engineer01, "US_EngineerWait01"] execVM "itsAebian\KI_AISUP.sqf"; 
	[Vulture22CR, Vulture22, 1800, "KION", US_HeliPad02,"OnStatCampMiddle","CIRCLE_L","US_PilotWait02", Engineer02, "US_EngineerWait02"] execVM "itsAebian\KI_AISUP.sqf";

    */

 params["_group", "_vehicle", "_gametime", "_switch", "_helipad", "_prepos", "_loiterType", "_waitpos", "_engineer", "_engpos"];

    (units _group) params ["_gunner", "_pilot"];

    if (isNil {_group getVariable "status"} ) then
		
		{

		 _group setVariable ["status", "free"];

		};

		sleep 10;

(_group getVariable "status") params ["_getstatus"];

	if (_switch isEqualTo "KION" && _getstatus isEqualTo "free") then 

	 		{ // On station thingy

		 	_pilot assignAsDriver _vehicle;
		 	_gunner assignAsGunner _vehicle;

		 	sleep 2;
		 	[_pilot, _gunner] orderGetIn true;

		 	_pilot setCombatMode "RED";
			_pilot setBehaviour "COMBAT";

			_gunner setCombatMode "RED";
			_gunner setBehaviour "COMBAT";

		 	sleep 15;
		 	_onguard = _group addWaypoint [(getMarkerPos _prepos), 0];
			_onguard setWaypointType "LOITER";

			[_group, 0] setWaypointLoiterType _loiterType;
			[_group, 0] setWaypointLoiterRadius 800;
			[_group, 0] setWaypointSpeed "LIMITED";

		 	_group setVariable ["status", "inAction"];

		 	[_group, 0] setWaypointSpeed "LIMITED";
		 	diag_log format ["%1, %2, %3", groupId _group, "on station, game time", _gametime ];
		 	[format ["%1, %2", groupId _group, "is on station for close air support, out." ]] remoteExecCall ["sideChat"];
		 	
		 	sleep _gametime;
		 	_group setVariable ["status", "RTB"];
		 	diag_log format ["%1, %2", groupId _group, "has bingo fuel, RTB" ];

		 	[_group, _vehicle, "KIOFF", _helipad, _prepos, _waitpos, _engineer, _engpos] execVM "itsAebian\KI_AISUP.sqf";

	 		} 

	else 

	 	{ // RTB

		 if (_switch isEqualTo "KIOFF" && (_getstatus isEqualTo "RTB")) then 

	 		{

	 			deleteWaypoint [_group, 0];

	 			_pilot setBehaviour "CARELESS";
	 			_gunner setBehaviour "CARELESS";

	 			_helipadPos = (getPos _helipad);
	 			_onrtb = _group addWaypoint [_helipadPos, 0];
	 			
	 			[format ["%1, %2", groupId _group, "is RTB, good luck soldiers, out." ]] remoteExecCall ["sideChat"];

	 			sleep 20;

	 			deleteWaypoint [_group, 0];

	 			_pilot land "LAND";
	 			_pilot landAt _helipad;


			 	unassignVehicle _pilot;
				unassignVehicle _gunner;

			 	if ((count crew _vehicle < 1)) then

				{

					_pilot setCombatMode "BLUE";
					_pilot setBehaviour "SAFE";

					 _gunner setCombatMode "BLUE";
					 _gunner setBehaviour "SAFE";

				 	 _group move (getMarkerPos _waitpos);
				 	_group setVariable ["status", "readyFix"];

				 	diag_log format ["%1, %2", groupId _group, "on ground for maintenance" ];

				 	_engineer move position _vehicle;
					_engineer action ["repairVehicle", _vehicle];

					sleep 250;
					_engineer move (getMarkerPos _engpos);


				 	sleep 40;
				 	_group setVariable ["status", "free"];

				 	diag_log format ["%1, %2", groupId _group, "ready for service" ];

				 }

			}

}