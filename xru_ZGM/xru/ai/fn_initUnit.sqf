#include "script_component.hpp"

params ["_unit"];

_unit addEventHandler ["Local", {
	params ["_unit", "_isLocal"];
	if (_isLocal) then {
		GVAR(units) pushBackUnique _unit;
		GVAR(groups) pushBackUnique (group _unit);
	};
}];

_unit call FUNC(setCamoValue);

if !(local _unit) exitWith {};
if (isPlayer _unit) exitWith {};
if !((side _unit) in [east, west, resistance]) exitWith {};

GVAR(units) pushBackUnique _unit;
GVAR(groups) pushBackUnique (group _unit);
