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
	case independent : {GVAR(INDEP)};
	default		{GVAR(BLUFOR)};
};
(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];

// Add sides to listbox and select players side.
{	_sidesList lbAdd _x;
} forEach ["BLUFOR","INDEP","OPFOR"];
switch (side player) do {
	case west : {_sidesList lbSetCurSel 0};
	case independent : {_sidesList lbSetCurSel 1};
	case east : {_sidesList lbSetCurSel 2};
	default 	{_sidesList lbSetCurSel 0};
};

// Add factions to listbox.
{	/* private _configName = configName _x; */
	private _displayName = getText (_x >> "displayName");
	_factionsList lbAdd _displayName;
	_factionsList lbSetTooltip [_forEachIndex, _displayName];
	if (isText (_x >> "icon")) then {
		_factionsList lbSetPicture [_forEachIndex, getText (_x >> "icon")];
	} else {
		_factionsList lbSetPicture [_forEachIndex, "\a3\characters_f\data\ui\icon_null_ca.paa"];
	};
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
		if (isText (_x >> "icon")) then {
		_rolesList tvSetPicture [[_parent,_forEachIndex], getText (_x >> "icon")]
		};
/* 		if ((_configNameGroup == _group) && (_roleText == _role)) then {
			_rolesList tvExpand [_parent];
			_rolesList tvSetCurSel [_parent, _forEachIndex];
		};	 */
	} forEach ("true" configClasses _x);
} forEach ("true" configClasses (missionConfigFile >> "CfgRoles"));