#include "script_component.hpp"

params ["_unit"];

if !([_unit] call FUNC(isCurator)) exitWith {};

private _module = missionNamespace getVariable (format["m_%1",vehicleVarName _unit select [2]]);

_unit assignCurator _module;
