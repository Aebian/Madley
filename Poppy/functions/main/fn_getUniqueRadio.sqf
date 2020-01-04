#include "..\script_component.hpp"
params ["_unit", "_config"];

private _srRadio = if (isText (_config >> "srRadio")) then {
    getText (_config >> "srRadio")
} else {
    if (GVAR(usesACRE)) then {"ACRE_PRC343"} else {"ItemRadio"};
};

if (_srRadio == "") exitWith {""};

switch (true) do {
    case (GVAR(usesACRE)): {
        {
            if (_x isKindOf [_srRadio, configFile >> "CfgWeapons"]) exitWith {_x};
            _srRadio
        } forEach (items _unit);
    };
    case (GVAR(usesTFAR)): {
        {
            if (_x isKindOf [_srRadio, configFile >> "CfgWeapons"]) exitWith {_x};
            _srRadio
        } forEach (assignedItems _unit);
    };
    default {
        _srRadio
    };
};
