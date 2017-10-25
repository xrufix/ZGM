#include "script_component.hpp"

params ["_unit"];

if ([_unit] call FUNC(isCurator)) exitWith {true};

switch (side _unit) do {
	case west : {_unit distance spawn_blufor < 50};
	case independent : {_unit distance spawn_indep < 50};
	case east : {_unit distance spawn_opfor < 50};
	default 	{false};
};