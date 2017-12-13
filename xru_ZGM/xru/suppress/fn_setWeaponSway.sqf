#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(weaponSway) = _setting / 100;

TRACE_1("Weapon Sway set to:", GVAR(weaponSway));