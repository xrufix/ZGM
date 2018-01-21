#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(sinkRate) = _setting / 10;

TRACE_1("Sink Rate set to:", GVAR(SinkRate));