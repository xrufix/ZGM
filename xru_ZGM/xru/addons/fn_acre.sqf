#include "script_component.hpp"

params ["_setting"];

_setting = switch _setting do {
	case 1 : {true};
	default {false};
};

[false, _setting] call acre_api_fnc_setupMission;