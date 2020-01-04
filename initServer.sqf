/*
    The initServer.sqf
 */

 {
    if  ((typeOf _x) isKindOf ["rhsusf_m1a1tank_base", configFile >> "CfgVehicles"]) then {

        _x addEventHandler ["Fired", {
            _wep = _this select 1;
            if (_wep isKindOf ["CannonCore", configFile >> "CfgWeapons"]) then {
                _veh = _this select 0;
                _vel = velocity _veh;
                _dir = _veh weaponDirection _wep;
                _veh setVelocity [
                    (_vel select 0) + (_dir select 0) * -3.5,
                    (_vel select 1) + (_dir select 1) * -3.5,
                    (_vel select 2) + (_dir select 2) * -3.5
                ];
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

 ["Madley loaded!"] remoteExecCall ["systemChat"];
