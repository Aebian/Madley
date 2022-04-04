/*
author: @Aebian
description: ss
returns: ss
// ss
*/


_obj addEventHandler ["Hit", {
    _object = _this select 0 select 0;
    _hits = _object getVariable "hitTimes";
    _unit = _object getVariable ["KI_unitToKill", objNull];
    _light = _object getVariable ["KI_vehToRemove", objNull];
    if(isNil "_hits") exitWith { _object setVariable ["hitTimes", 1]; };
    if(_hits == 1 && alive _object) exitWith {
        for "_i" from 1 to 2 do {
            createVehicle ["Bo_GBU12_LGB",[(getPos _object select 0)+ (_i*cos (_i*17.5)),(getPos _object select 1)+ (_i*sin (_i*17.5)),0],[],0,"CAN_COLLIDE"];
            _object setDamage 1;
            _unit setDamage 1;
            deleteVehicle _light;
        };
        _object setVariable ["hitTimes", 0];
    };
    _object setVariable ["hitTimes", (_hits + 1)];
}];

magazines[] = {"rhs_pod_empty","rhs_pod_empty","rhs_pod_FFAR_7","rhs_pod_FFAR_7","RHS_14Rnd_M151_Magazine_MELB","rhs_19_pod_empty","RHS_6000Rnd_762x51_Belt_Red_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB"};

weapons[] = {"rhs_weap_MASTERSAFE","RHS_M134x2_MELB","RHS_M260_MELB","RHS_LWIRCM_MELB"};


{this removeMagazineTurret [_x, [-1]]} forEach ["rhs_pod_empty","rhs_pod_empty","rhs_pod_FFAR_7","rhs_pod_FFAR_7","RHS_14Rnd_M151_Magazine_MELB"];
{this removeWeaponTurret [_x, [-1]]} forEach ["RHS_M260_MELB"];

["rhs_pod_empty","rhs_pod_empty","rhs_pod_FFAR_7","rhs_pod_FFAR_7","RHS_14Rnd_M151_Magazine_MELB","rhs_19_pod_empty","RHS_6000Rnd_762x51_Belt_Red_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB","RHS_LWIRCM_Magazine_MELB"]

vehicle player removeMagazineGlobal "rhs_pod_FFAR_7";
vehicle player removeMagazineGlobal "rhs_pod_FFAR_7";
vehicle player removeMagazineGlobal "RHS_14Rnd_M151_Magazine_MELB";
vehicle player removeWeaponGlobal "RHS_M260_MELB";

{ _x setLightAttenuation [100,1,0,0] } forEach allMissionObjects "Land_LampAirport_F";
{ _x setLightAttenuation [100,1,0,0] } forEach allMissionObjects "Land_PortableLight_double_F";
{ _x setLightAttenuation [100,1,0,0] } forEach allMissionObjects "Land_LampHalogen_F";

 [_this, "Acts_AidlPsitMstpSsurWnonDnon05"] remoteExec ["playMove"];
 _animEH = _this addEventHandler ["AnimDone", {(_this select 0) playMove (_this select 1)}];
 _this setVariable ["BIS_animEH", _animEH];
 _killedEH = _this addEventHandler ["Killed", {(_this select 0) removeEventHandler ["AnimDone", (_this select 0) getVariable "BIS_animEH"]}];
 _this setVariable ["BIS_killedEH", _killedEH]};




//////////////////////////////////


this addEventHandler ["Fired",{
    params ["_helo", "_weapon"];
_ammo = _helo ammoOnPylon "pylon1";
if (_ammo == 50) then {sleep 0.75};_helo setAmmoOnPylon ["pylon1", 250] && _helo setAmmoOnPylon ["pylon2", 250]
}];








[  
 MedTabletNH,             
 "Heal People",            
 "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",   
 "\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa", 
 "_this distance _target < 2",        
 "_caller distance _target < 2",        
 {},               
 {},               
 {   
  
  MedTrigger = true; 
 
},      
 {},               
 [],               
 1,               
 0,               
 false,  
 false              
] remoteExec ["BIS_fnc_holdActionAdd", 0, MedTabletNH];  



if (local (_this select 0)) then {[(_this select 0), "", [], false] call bis_fnc_initVehicle;};

[(_this select 0), "", [], false] call bis_fnc_initVehicle;
[this, "", []] call BIS_fnc_initVehicle;







(vehicle player) weaponsTurret [0] findIf {{(vehicle player) weaponsTurret [0] select 0 isKindOf [_x, configFile >> "CfgWeapons"]} forEach ["autocannon_Base_F","autocannon_35mm","rhs_weap_azp23","rhs_weap_2a42"]} !=-1

["turret",[0]]



{ (vehicle player) weaponsTurret [0] select 0 isKindOf [_x, configFile >> "CfgWeapons"]} forEach ["autocannon_Base_F","autocannon_35mm","rhs_weap_azp23","rhs_weap_2a42"];



{ (vehicle player) weaponsTurret [0] select 0 isKindOf [_x, configFile >> "CfgWeapons"]} forEach ["autocannon_Base_F","autocannon_35mm","rhs_weap_azp23","rhs_weap_2a42"];




!({(vehicle player) weaponsTurret [0] select 0 isKindOf [_x, configFile >> "CfgWeapons"]} forEach ["autocannon_Base_F","autocannon_35mm","rhs_weap_2a42","rhs_weap_azp23"])

