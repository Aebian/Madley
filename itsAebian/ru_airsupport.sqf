/*
 	author: @Aebian
 	description: Airsupport script for my test mission.
 	returns: nothing
 	// _null = [grpTAIGA, Helo22, "A_ONSTAT", Landing22, Engineer1] execVM "itsAebian\ru_airsupport.sqf"
 */

 params["_group", "_vehicle", "_cond", "_helipad", "_engineer"];

 (units _group) params ["_leader","_gunner"];

 A_AIRS_AVAIL = "free";



 if (_cond isEqualTo "A_ONSTAT" && A_AIRS_AVAIL isEqualTo "free") then { // On station thingy

 [lspeaker1, "ru_incoming"] remoteExecCall ["say3D"];
 [lspeaker2, "ru_incoming"] remoteExecCall ["say3D"];

 A_AIRS_AVAIL = "inAction";

 _leader assignAsDriver _vehicle;
 _gunner assignAsGunner _vehicle;

 sleep 2;
 [_leader, _gunner] orderGetIn true;

 sleep 10;
 _group move (getMarkerPos "havoc_return");


 sleep 240;
 A_AIRS_AVAIL = "missionCompleted";
 } else { // RTB thingy

 if (_cond isEqualTo "A_RTB" && A_AIRS_AVAIL isEqualTo "missionCompleted") then {

 _leader land "LAND";
 _leader landAt _helipad;

 unassignVehicle _leader;
 unassignVehicle _gunner;
 _leader setCombatMode "BLUE";
 _leader setBehaviour "SAFE";

 _gunner setCombatMode "BLUE";
 _gunner setBehaviour "SAFE";

 _group move position theRadio;

 A_AIRS_AVAIL = "readyFix";
 _null = [_vehicle, _engineer] execVM "ru_resupply.sqf";
 sleep 240;
 A_AIRS_AVAIL = "free";
 }
 }