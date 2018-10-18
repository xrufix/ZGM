#include "script_component.hpp"

params ["_button"];
private _display = ctrlParent _button;
private _factionsList = _display displayCtrl 12;
private _rolesList = _display displayCtrl 13;

if (count (tvCurSel _factionsList) != 2) exitWith {
	[_display] spawn {
		params ["_display"];
		private _endState = ["No faction selected! Select a faction and try again.","ERROR",true,true] call BIS_fnc_guiMessage;
		if (!_endState) then {_display closeDisplay 2};
	};
};
private _faction = _factionsList tvData tvCurSel _factionsList;

private _roleSelected = tvCurSel _rolesList;
if (count _roleSelected != 2) exitWith {
	[_display] spawn {
		params ["_display"];
		private _endState = ["No role selected! Select a role and try again.","ERROR",true,true] call BIS_fnc_guiMessage;
		if (!_endState) then {_display closeDisplay 2};
	};
};
_roleSelected params ["_groupIndex","_roleIndex"];

private _group = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles")) select _groupIndex );
private _role = configName ( ("true" configClasses (missionConfigFile >> "CfgRoles" >> _group)) select _roleIndex );

private _loadout = format ["%1_%2_%3", _faction, _group, _role];
[player, _loadout] call poppy_fnc_applyLoadout;

player setVariable [QGVAR(faction), _faction];
player setVariable [QGVAR(role), [_group,_role]];

_display closeDisplay 1;
