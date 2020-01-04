// [[833.078,4734.87,137.625]] execVM "itsAebian\FM\Køleskab.sqf"

params ["_posize"];

_soldiaG = createGroup resistance;
_soldia  = _soldiaG createUnit ["rhssaf_army_m93_oakleaf_summer_engineer", _posize , [], 0, "NONE"];
_soldia allowDamage false;    
_soldia setUnitPos "UP";

_fridge = createVehicle ["Fridge_01_closed_F", position _soldia, [], 0, "CAN_COLLIDE"];
_fridge attachTo [_soldia ,[0,0,1.35]];
_soldia setMass 600;
_fridge setDir 180; _fridge setPos getPos _fridge;

removeAllWeapons _soldia;
removeUniform _soldia;
removeVest _soldia;


_light = "#lightpoint" createVehicle (getpos _soldia);
_light setLightBrightness 0.8;
_light setLightAmbient [0,0,0];
_light setLightColor [0.5,0,0.5];
_light lightAttachObject [_soldia, [0,0,1]];
_soldia setSpeaker "NoVoice";

_fridge setVariable ["KI_unitToKill", _soldia, true];
_fridge setVariable ["KI_vehToRemove", _light, true];


[_fridge, ["HitPart", {
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
}]] remoteExecCall ["addEventHandler", 0, _fridge];
    
// [833.078,4734.87,137.625]