#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(ClimbRate) = _setting / 10;

TRACE_1("Climb Rate set to:", GVAR(ClimbRate));