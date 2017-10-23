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
if !(_side isEqualType "") exitWith {
	[_display] spawn {
		params ["_display"];
		private _endState = ["No side selected! Select a side and try again.","Error",true,true] call BIS_fnc_guiMessage;
		if !_endState then {_display closeDisplay 2};
	};
};

private _factionIndex = (lbCurSel _factionsList);
if (_factionIndex == -1) exitWith {
	[_display] spawn {
		params ["_display"];
		private _endState = ["No faction selected! Select a faction and try again.","Error",true,true] call BIS_fnc_guiMessage;
		if !_endState then {_display closeDisplay 2};
	};
};
private _faction = configName ( ("true" configClasses (missionConfigFile >> "CfgFactions")) select _factionIndex );

private _roleSelected = tvCurSel _rolesList;
if (count _roleSelected != 2) exitWith {
	[_display] spawn {
		params ["_display"];
		private _endState = ["No role selected! Select a role and try again.","Error",true,true] call BIS_fnc_guiMessage;
		if !_endState then {_display closeDisplay 2};
	};
};
_roleSelected params ["_groupIndex","_roleIndex"];

private _group = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles")) select _groupIndex );

private _role = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles" >> _group)) select _roleIndex );

private _loadout = format ["%1_%2_%3_%4", _side, _faction, _group, _role];

[player, _loadout] call poppy_fnc_applyLoadout;
_display closeDisplay 1;