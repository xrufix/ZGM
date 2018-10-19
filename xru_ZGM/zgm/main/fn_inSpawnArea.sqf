#include "script_component.hpp"

params ["_unit"];

if ([_unit] call FUNC(isCurator)) exitWith {true};

private _center = [_unit] call FUNC(getSpawnArea);

_unit distance _center <= SPAWN_RADIUS
