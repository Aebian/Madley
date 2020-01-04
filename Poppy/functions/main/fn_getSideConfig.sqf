#include "..\script_component.hpp"
params ["_side"];

switch (_side) do {
    case west:        { "CommonBlufor" };
    case east:        { "CommonOpfor" };
    case independent: { "CommonIndependent" };
    case civilian:    { "CommonCivilian" };
    default           { "CommonDefault" };
};
