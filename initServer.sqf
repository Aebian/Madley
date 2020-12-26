/*
    The initServer.sqf
 */

[] execVM "itsAebian\KI_CanonBlast.sqf"; 

CIVILIAN setFriend [INDEPENDENT, 0];

WEST setFriend [CIVILIAN, 1];
CIVILIAN setFriend [WEST, 1];

// execVM "itsAebian\us_reveal.sqf";

 curGrpW =  createGroup WEST; theCurator  = curGrpW createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

 curGrpE =  createGroup EAST; theCurator  = curGrpE createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

[A_wallUS, "cscreenfeed", [4024.6,5412.24,940.87], obj49, 161.5, 2] execVM "itsAebian\KI_uavOps.sqf";

[CellTab_01, CellHouse_01, 628400] execVM "itsAebian\CodeLock\KI_CodeLock.sqf";

 ["Madley loaded!"] remoteExecCall ["systemChat"];
