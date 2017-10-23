#include "script_component.hpp"

params ["_display"];

// Get Display IDCs
private _sidesList = _display displayCtrl 11;
private _factionsList = _display displayCtrl 12;
private _rolesList = _display displayCtrl 13;

// Get players faction, group and role.
private _faction = switch (side _unit) do {
	case west : {GVAR(BLUFOR)};
	case east : {GVAR(OPFOR)};
	case guer : {GVAR(INDEP)};
	default		{GVAR(BLUFOR)};
};
(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];

// Add sides to listbox and select players side.
{	_sidesList lbAdd _x;
} forEach ["BLUFOR","INDEP","OPFOR"];
switch (side player) do {
	case west : {_sidesList lbSetCurSel 0};
	case guer : {_sidesList lbSetCurSel 1};
	case east : {_sidesList lbSetCurSel 2};
	default 	{_sidesList lbSetCurSel 0};
};

// Add factions to listbox.
{	/* private _configName = configName _x; */
	_factionsList lbAdd (getText (_x >> "displayName"));
/* 	if (_configName == _faction) then {
		_factionsList lbSetCurSel _forEachIndex;
	}; */
} forEach ("true" configClasses (missionConfigFile >> "CfgFactions"));

// Add groups as parents, roles as children in roles tree. Select players role.
{	/* private _configNameGroup = configName _x; */
	private _parent = _forEachIndex;
	_rolesList tvAdd [[], getText (_x >> "displayName")];
	
	{	/* private _configNameRole = configName _x; */
		_rolesList tvAdd [[_parent], getText (_x >> "displayName")];
/* 		if ((_configNameGroup == _group) && (_roleText == _role)) then {
			_rolesList tvExpand [_parent];
			_rolesList tvSetCurSel [_parent, _forEachIndex];
		};	 */
	} forEach ("true" configClasses _x);
} forEach ("true" configClasses (missionConfigFile >> "CfgRoles"));