

//  _null = [100] execVM "itsAebian\cutter.sqf";

params["_size"];
{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "CUP_A2_Road_OA_runway_main_ep1";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "CUP_A2_Road_OA_runway_end22_ep1";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "CUP_A2_Road_OA_runway_end24_ep1";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "CUP_A1_Road_runway_poj_Tcross";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "CUP_A1_Road_runway_poj_end27";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "Land_MetalWire_F";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "Land_LandMark_F";

{
{ _x hideObjectGlobal true } forEach (nearestTerrainObjects [_x,[],_size]);
} forEach allMissionObjects "Land_Hangar_F";