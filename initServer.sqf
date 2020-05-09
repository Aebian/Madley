/*
    The initServer.sqf
 */

 {
    if   (_x isKindOf "Tank_F" &&
        !(_x isKindOf "APC_Wheeled_01_base_F") &&
        !(_x isKindOf "APC_Tracked_01_base_F") &&

        !(_x isKindOf "APC_Wheeled_02_base_F") &&
        !(_x isKindOf "APC_Tracked_02_base_F") &&

        !(_x isKindOf "APC_Wheeled_03_base_F") &&
        !(_x isKindOf "APC_Tracked_03_base_F") &&
        
        !(_x isKindOf "LT_01_base_F")) then {

        _x addEventHandler ["Fired", {
            params ["_veh", "_wep"];
            if (_wep isKindOf ["CannonCore", configFile >> "CfgWeapons"]) then {
                private _vel = velocity _veh;
                private _dir = _veh weaponDirection _wep;
                _veh setVelocity (_vel vectorAdd (_dir vectorMultiply -3.0));
            };
        }];
    };
} forEach vehicles;

CIVILIAN setFriend [INDEPENDENT, 0];

WEST setFriend [CIVILIAN, 1];
CIVILIAN setFriend [WEST, 1];

// execVM "itsAebian\us_reveal.sqf";

 curGrpW =  createGroup WEST; theCurator  = curGrpW createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

 curGrpE =  createGroup EAST; theCurator  = curGrpE createUnit ["ModuleCurator_F", player, [], 0, "NONE"];
 theCurator setCuratorEditingAreaType true; theCurator addCuratorEditableObjects [entities "all",true];

["SILENT", [US_SAM_BATTERY_01, US_SAM_BATTERY_02, US_SAM_AAA_01]] execVM "itsAebian\KI_airDefense.sqf";

 [CellTab_01, CellHouse_01, 628400] execVM "itsAebian\CodeLock\KI_CodeLock.sqf";

 [CIAAccess_01, (nearestBuilding CIAAccess_01), 735900] execVM "itsAebian\CodeLock\KI_CodeLock.sqf";

 ["Madley loaded!"] remoteExecCall ["systemChat"];
