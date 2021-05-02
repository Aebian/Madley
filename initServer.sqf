/*
    The initServer.sqf
 */

[] execVM "itsAebian\KI_CanonBlast.sqf"; 

ace_medical_selections = ["Head", "Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg"];

WEST setFriend [CIVILIAN, 1];
CIVILIAN setFriend [WEST, 1];

// execVM "itsAebian\us_reveal.sqf";

 curGrpW =  createGroup WEST; theCurator  = curGrpW createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

 curGrpE =  createGroup EAST; theCurator  = curGrpE createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

[CellTab_01, CellHouse_01, 628400] execVM "itsAebian\CodeLock\KI_CodeLock.sqf";

// ["SILENT", [US_SAM_BATTERY_01, US_SAM_BATTERY_02]] execVM "itsAebian\KI_airDefense.sqf";

[] execVM "itsAebian\functions\KI_fn_MissionRun.sqf";

{_x enableChannel true} forEach [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];

AR_MAX_RAPPEL_POINTS_OVERRIDE = 2;
AP_CUSTOM_RAPPEL_POINTS = [
	["RHS_MELB_base",[[1.17,0.8,-0.04],[-1.17,0.8,-0.04],"fastrope0"]],
    ["GR_UH60_1",[[1.1671,1.397,0.8],[-1.13093,1.397,0.8],"fastrope0"]],
	["RHS_UH60M_base", [[1.43,1.92,-0.3],[-1.43,1.92,-0.3],"fastrope0"]],
	["RHS_UH1Y_base", [[1.43,1.92,-0.3],[-1.43,1.92,-0.3],"fastrope0"]],
	["RHS_CH_47F_base", [[0.7,-7.6,-1.0],[-0.7,-7.6,-1.0],"fastrope0"]],
	["RHS_Mi8_base", [[0.6,-0.9,-0.2],[-0.6,-0.6,-0.7],"fastrope0"]],
	["Heli_Light_02_base_F", [[1.42,1.3,-0.01],[-1.42,1.3,-0.01],"fastrope0"]],
	["RHS_Mi24_base", [[1.0,2.85,-0.3],[-1.0,2.85,-0.3],"fastrope0"]]	
];

 ["Madley loaded!"] remoteExecCall ["systemChat"];