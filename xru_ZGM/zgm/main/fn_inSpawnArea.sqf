#include "script_component.hpp"

params ["_unit"];

private _center = [_unit] call FUNC(getSpawnArea);

_unit distance _center <= SPAWN_RADIUS
