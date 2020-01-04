/*
    author: @Aebian
    description: Rescue Chopper move out.
    returns: nothing
    // [Carrier_YellowShirt_01, HawkeyeChopper, "Hawkeye", CNMORTARG,Carrier_YellowShirt_01] execVM "itsAebian\rescue_chopper.sqf"
    */

params["_carriercrew", "_helo" , "_airlead", "_coords1", "_coords2"];


sleep 1;
[ _carriercrew, "Acts_JetsCrewaidFCrouchThumbup_loop_m"] remoteExecCall ["switchMove"];
sleep 6;
[ _carriercrew, "Acts_JetsCrewaidFCrouchThumbup_out_m"] remoteExecCall ["switchMove"];
sleep 2;
[ _carriercrew, "Acts_JetsCrewaidFCrouch_out_m"] remoteExecCall ["switchMove"];
sleep 3;
[ _carriercrew, "Acts_JetsMarshallingEnginesOn_in"] remoteExecCall ["switchMove"];
sleep 4;
[ _carriercrew, "Acts_JetsMarshallingEnginesOn_loop"] remoteExecCall ["switchMove"];
sleep 4;
_helo engineOn true;
[ _carriercrew, "Acts_JetsMarshallingEnginesOn_out"] remoteExecCall ["switchMove"];
sleep 50;
[ _carriercrew, "Acts_JetsMarshallingLeft_in"] remoteExecCall ["switchMove"];
sleep 2;
[ _carriercrew, "Acts_JetsMarshallingLeft_loop"] remoteExecCall ["switchMove"];
sleep 2;
		_saronewp_01 = _airlead addWaypoint [position _coords1, 0];
		_saronewp_01 setWaypointType "MOVE";
		_saronewp_01 setWaypointBehaviour "SAFE";

		_saronewp_02 = _airlead addWaypoint [position _coords2, 1];
		_saronewp_02 setWaypointType "MOVE";
		_saronewp_02 setWaypointBehaviour "SAFE";

sleep 5;
[ _carriercrew, "Acts_JetsMarshallingLeft_out"] remoteExecCall ["switchMove"];

sleep 8;
[_carriercrew, ""] remoteExecCall ["switchMove"];
sleep 1;

//[_carriercrew, "amovpercmwlkslowwrfldf_ver2"] remoteExecCall ["switchMove"];

[_carriercrew, ""] remoteExecCall ["switchMove"];