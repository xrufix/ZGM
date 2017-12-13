#include "script_component.hpp"

params ["_setting"];

if (_setting == 2) then {
	[] spawn CL_RFT_fnc_init;
	_setting = _setting - 1;
};
if (_setting == 1) then {
	[] spawn CL_BFT_fnc_init;
};