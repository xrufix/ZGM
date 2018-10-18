#define DEBUG_MODE_FULL

#include "script_component.hpp"

params ["_display"];

// Get Display IDCs
private _factionsTV = _display displayCtrl 12;
private _rolesTV = _display displayCtrl 13;

// Get Configs
private _factionsConfigs = "true" configClasses (missionConfigFile >> "CfgFactions");
private _rolesConfigs = "true" configClasses (missionConfigFile >> "CfgRoles");

// Get players faction, group and role.
private _playerFaction = [player] call FUNC(getFaction);
(player getVariable [QGVAR(role),["squad","light"]]) params ["_playerGroup","_playerRole"];


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
        if (_configName == _playerFaction) then {
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
{
    private _parent = _forEachIndex;
    private _group = configName _x;
    _rolesTV tvAdd [[], getText (_x >> "displayName")];
    _rolesTV tvSetData [[_parent], _group];

    {
        private _role = configName _x;
        _rolesTV tvAdd [[_parent], getText (_x >> "displayName")];
        _rolesTV tvSetData [[_parent, _forEachIndex], _role];

        if (isText (_x >> "icon")) then {
            _rolesTV tvSetPicture [[_parent,_forEachIndex], getText (_x >> "icon")];
        };

        TRACE_6("",_group,_playerGroup,_group==_playerGroup,_role,_playerRole,_group==_playerGroup);
        if ((_group == _playerGroup) && {_role == _playerRole}) then {
            _rolesTV tvExpand [_parent];
            _rolesTV tvSetCurSel [_parent, _forEachIndex];
        };
    } forEach ("true" configClasses _x);
} forEach _rolesConfigs;
