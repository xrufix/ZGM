#include "script_component.hpp"

params [["_setting",100,[0]]];

GVAR(Camshake) = _setting / 100;

TRACE_1("Camshake set to:", GVAR(CamShake));