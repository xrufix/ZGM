#include "script_component.hpp"

params ["_unit"];

if ([_unit] call FUNC(isCurator)) exitWith {true};

switch ([_unit] call FUNC(getSide)) do {
    case "b" : 	{_unit distance spawn_blufor < 50};
    case "i" : 	{_unit distance spawn_indep < 50};
    case "o" : 	{_unit distance spawn_opfor < 50};
    default 	{false};
};