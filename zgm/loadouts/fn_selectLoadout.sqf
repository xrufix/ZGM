#include "script_component.hpp"

params ["_unit"];

(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];

private _side = switch (side _unit) do {
	case west : {"b";};
	case east : {"o";};
	case guer : {"i";};
	default 	{"b"};
};
private _faction = switch (side _unit) do {
	case west : {GVAR(BLUFOR)};
	case east : {GVAR(OPFOR)};
	case guer : {GVAR(INDEP)};
	default		{GVAR(BLUFOR)};
};

_loadout = format ["%1_%2_%3_%4",_side,_faction,_group,_role];

if (isClass (missionConfigFile >> "CfgLoadouts" >> _loadout)) then {
	_loadout
} else {
	[_unit] call poppy_fnc_selectLoadout
};