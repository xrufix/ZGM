#include "script_component.hpp"

params ["_button"];
private _display = ctrlParent _button;

private _sidesList = _display displayCtrl 11;
private _factionsList = _display displayCtrl 12;
private _rolesList = _display displayCtrl 13;

private _side = switch (lbCurSel _sidesList) do {
	case 0 : {"b"};
	case 1 : {"i"};
	case 2 : {"o"};
	default {false};
};
if !(_side isEqualType "") exitWith {hint "No side selected!"};

private _factionIndex = (lbCurSel _factionsList);
if !(_factionIndex isEqualType 0) exitWith {hint "No faction selected!"};
private _faction = configName ( ("true" configClasses (missionConfigFile >> "CfgFactions")) select _factionIndex );

private _roleSelected = tvCurSel _rolesList;
if (count _roleSelected != 2) exitWith {hint "No role selected!"};
_roleSelected params ["_groupIndex","_roleIndex"];

private _group = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles")) select _groupIndex );

private _role = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles" >> _group)) select _roleIndex );

private _loadout = format ["%1_%2_%3_%4", _side, _faction, _group, _role];

[player, _loadout] call poppy_fnc_applyLoadout;