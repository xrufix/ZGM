#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(Blinking) = _setting / 100;

TRACE_1("Blinking set to:", GVAR(Blinking));