#include "script_component.hpp"

if !isServer exitWith {};

// Disable AI in SP for performance
if (!isMultiplayer) then {
    private _allAI = allUnits;
    _allAI deleteAt (_allAI find player);
    {
        _x disableAI "ALL";
        false
    } count _allAI;
};


// Add spawn positions to zeus, so they can be moved, and add players.
{
    _x addCuratorEditableObjects [allMissionObjects "Site_Military_Base", false];
	_x addCuratorEditableObjects [allMissionObjects "Man",true];
} forEach allCurators;

// Add EH that adds all spawned objects to all curators (except modules).
["All", "init", {
    {
        _x addCuratorEditableObjects [_this,true]; 
    }forEach allCurators;
}, true, ["logic","animal"], false] call CBA_fnc_addClassEventHandler;

// Add EH that removes link between players and curators on disconnect of player.
addMissionEventHandler ["HandleDisconnect",{
	params ["_unit","","",""];

	private _module = getAssignedCuratorLogic _unit;
	if (isNull _module) exitWith {};
	unassignCurator _module;

	false
}];