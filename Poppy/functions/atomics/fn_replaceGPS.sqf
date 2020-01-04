#include "..\script_component.hpp"
params ["_unit", "_array"];

private _gps = selectRandom _array;

{
    if ((_x isKindOf ["ItemGPS", configFile >> "CfgWeapons"]) or (_x isKindOf ["UavTerminal_base", configFile >> "CfgWeapons"])) exitWith {
        _unit unlinkItem _x;
    };
} count (assignedItems _unit);

if (_gps != "") then {
    _unit linkItem _gps;
};
