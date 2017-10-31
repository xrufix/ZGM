#include "script_component.hpp"

params ["_display"];

// Get Display IDCs
private _sidesList = _display displayCtrl 11;
private _factionsList = _display displayCtrl 12;
private _rolesList = _display displayCtrl 13;


// Get Configs
private _factionsConfigs = ("true" configClasses (missionConfigFile >> "CfgFactions"));
private _rolesConfigs = ("true" configClasses (missionConfigFile >> "CfgRoles"));


// Get players faction, group and role.
private _side 	    = [player] call EFUNC(main,getSide);
private _faction 	= [player] call EFUNC(loadouts,getFaction);
(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];


// Show players side in side listbox.
{_sidesList lbAdd _x;} forEach ["BLUFOR","INDEP","OPFOR"];
switch _side do {
    case "b" : {
        _sidesList lbSetCurSel 0;
    };
    case "i" : {
        _sidesList lbSetCurSel 1;
    };
    case "o" : {
        _sidesList lbSetCurSel 2;
    };
    default {
        _sidesList lbSetCurSel 0;
    };
};


// Add factions to listbox. Select players faction.
{	private _displayName = getText (_x >> "displayName");
    _factionsList lbAdd _displayName;
    _factionsList lbSetTooltip [_forEachIndex, _displayName];
    if (isText (_x >> "icon")) then {
        _factionsList lbSetPicture [_forEachIndex, getText (_x >> "icon")];
    } else {
        _factionsList lbSetPicture [_forEachIndex, "\a3\characters_f\data\ui\icon_null_ca.paa"];
    };
} forEach _factionsConfigs;
_factionsList lbSetCurSel ((_factionsConfigs apply {configName _x}) find _faction);


// Add groups as parents, roles as children in roles tree. Select players role.
{	private _parent = _forEachIndex;
    _rolesList tvAdd [[], getText (_x >> "displayName")];
    
    {	_rolesList tvAdd [[_parent], getText (_x >> "displayName")];
        if (isText (_x >> "icon")) then {
        _rolesList tvSetPicture [[_parent,_forEachIndex], getText (_x >> "icon")]
        };
    } forEach ("true" configClasses _x);
} forEach _rolesConfigs;

private _groupsIndex = (_rolesConfigs apply {configName _x}) find _group;
_rolesList tvExpand [_groupsIndex];
private _rolesIndex = ("true" configClasses (_rolesConfigs select _groupsIndex) apply {configName _x}) find _role;
_rolesList tvSetCurSel [_groupsIndex,_rolesIndex];