#include "script_component.hpp"

params ["_display"];

// Get Display IDCs
private _factionsTV = _display displayCtrl 12;
private _rolesTV = _display displayCtrl 13;


// Get Configs
private _factionsConfigs = ("true" configClasses (missionConfigFile >> "CfgFactions"));
private _rolesConfigs = ("true" configClasses (missionConfigFile >> "CfgRoles"));


// Get players faction, group and role.
private _faction = [player] call FUNC(getFaction);
(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];
private _groupsIndex = (_rolesConfigs apply {configName _x}) find _group;
private _rolesIndex = ("true" configClasses (_rolesConfigs select _groupsIndex) apply {configName _x}) find _role;


{   // Add an entry for the side.
    private _parent = _forEachIndex;
    private _sideShort = toLower (_x select [0,1]);
    _factionsTV tvAdd [[], _x];
    _factionsTV tvSetData [[_parent], _sideShort];
    {
        private _currentItem = [_parent,_forEachIndex];
        private _displayName = getText (_x >> "displayName");
        private _configName = configName _x;
        // Add an entry for the faction.
        _factionsTV tvAdd [[_parent], _displayName];
        _factionsTV tvSetData [_currentItem,_configName];
        // Select the entry if it is the players faction
        if (_configName == _faction) then {
            _factionsTV tvSetCurSel _currentItem;
        };
        // Add an picture if it is configured in CfgFactions or use default empty.
        if (isText (_x >> "icon")) then {
            _factionsTV tvSetPicture [_currentItem, getText (_x >> "icon")];
        } else {
            _factionsTV tvSetPicture [_currentItem, "\a3\characters_f\data\ui\icon_null_ca.paa"];
        };
    } forEach (_factionsConfigs select {getText (_x >> "sideShort") == _sideShort});
} forEach ["BLUFOR","INDEP","OPFOR"];

// Add groups as parents, roles as children in roles tree. Select players role.
{	private _parent = _forEachIndex;
    _rolesTV tvAdd [[], getText (_x >> "displayName")];

    {	_rolesTV tvAdd [[_parent], getText (_x >> "displayName")];
        if (isText (_x >> "icon")) then {
        _rolesTV tvSetPicture [[_parent,_forEachIndex], getText (_x >> "icon")]
        };
    } forEach ("true" configClasses _x);
} forEach _rolesConfigs;

_rolesTV tvExpand [_groupsIndex];
_rolesTV tvSetCurSel [_groupsIndex,_rolesIndex];
