#include "script_component.hpp"

params [["_setting",0,[0]]];

_setting = switch _setting do {
	case 1 : {true};
	default {false};
};

[false, _setting] call acre_api_fnc_setupMission;