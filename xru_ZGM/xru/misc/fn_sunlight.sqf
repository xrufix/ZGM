
#include "script_component.hpp"

private _daytime = if (daytime > 12) then {24 - daytime} else {daytime};
GVAR(dawn) params ["_start", "_end"];

linearConversion [_start, _end, _daytime, 0, 1, true];
