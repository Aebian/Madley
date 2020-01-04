/*
author: @Aebian
description: Entrance script
returns: nothing
//  _null = this addAction ["Area 69","itsAebian\lab_gate.sqf","toLab"];
*/

params ["_target", "_caller",  "_id", "_args"];
_args params ["_state", "_obj"];

if (rankId _caller >= 2 && _state isEqualTo "toLab") then
    {

    GateBunker animate ["TurnDoor",0];
    sleep 3;
    GateBunker animate ["MoveDoor",0];
    sleep 5;
    titleCut ["", "BLACK OUT", 2];
    [
    ["Area 69","font = 'PuristaSemiBold'"],
    ["","<br/>"],
    ["Secret Laboratory","font = 'PuristaMedium'"],
    ["","<br/>"],
    ["Knight Industries Ground","font = 'PuristaLight'"]
    ]  execVM "\a3\missions_f_bootcamp\Campaign\Functions\GUI\fn_SITREP.sqf";


    sleep 3;
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 5;
    titleCut ["", "BLACK IN", 5];
    _caller setPosASL [872.876,6929.8,305.332];
    _caller setFormDir 30;
    };


if (rankId _caller >= 2 && _state isEqualTo "toBase") then
    {
    titleCut ["", "BLACK OUT", 2];
    [
    ["Base 22","font = 'PuristaSemiBold'"],
    ["","<br/>"],
    ["Main Operating Base","font = 'PuristaMedium'"],
    ["","<br/>"],
    ["Knight Industries Ground","font = 'PuristaLight'"]
    ]  execVM "\a3\missions_f_bootcamp\Campaign\Functions\GUI\fn_SITREP.sqf";


    sleep 3;
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 5;
    titleCut ["", "BLACK IN", 5];
    _caller setPos [7541.05,7392.53,0.43043];
    _caller setFormDir 319;

    GateBunker animate ["MoveDoor",1];
    sleep 3;
    GateBunker animate ["TurnDoor",1];
    sleep 5;

    };

if (rankId _caller >= 2 && _state isEqualTo "doorShut") then
    {

    LabHouse_01 animate ["Door_5_rot",0];
    LabHouse_01 setVariable ['bis_disabled_Door_5',1, true];

    };

if (rankId _caller >= 2 && _state isEqualTo "doorStart") then

    {

    LabHouse_01 setVariable ['bis_disabled_Door_5',0, true];

    };


if (rankId _caller >= 2 && _state isEqualTo "doDestroy") then
    {
    [base_speaker, "base_alarm"] remoteExecCall ["say3D"];
    [base_speaker1, "base_alarm"] remoteExecCall ["say3D"];
    sleep 20;
    if (!isServer) exitWith {};

    for "_i" from 1 to 50 do {
    createVehicle ["Bo_GBU12_LGB",[(getPos _obj select 0)+ (_i*cos (_i*17.5)),(getPos _obj select 1)+ (_i*sin (_i*17.5)),0],[],0,"CAN_COLLIDE"];
    };
    hint "Self Destruction 69 done!";
    };

if (rankId _caller >= 2 && _state isEqualTo "doDeSpawn") then
    {
    sleep 2;
    if (!isServer) exitWith {};

    for "_i" from 1 to 4 do {
    createVehicle ["Bo_GBU12_LGB",[(getPos _obj select 0)+ (_i*cos (_i*17.5)),(getPos _obj select 1)+ (_i*sin (_i*17.5)),0],[],0,"CAN_COLLIDE"];
    };
    };
