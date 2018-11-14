#include "script_component.hpp"

params ["_unit", ["_public", false]];

private _uniform = uniform _unit;

private _vehicle = if (_uniform != "") then {
    getText (configFile >> "CfgWeapons" >> _uniform >> "ItemInfo" >> "uniformClass");
} else {
    "Underwear_F"
};
private _camouflage = getNumber (configFile >> "CfgVehicles" >> _vehicle >> "camouflage");
_camouflage = _camouflage - 0.4;

_unit setVariable [QGVAR(camouflage), _camouflage, _public];
_camouflage
