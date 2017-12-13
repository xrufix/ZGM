#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(Tunnelvision) = _setting / 100;

TRACE_1("Tunnelvision set to:", GVAR(Tunnelvision));