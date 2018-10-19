#include "script_component.hpp"

if (!isServer) exitWith {};

// Disable AI in SP
if (!isMultiplayer) then {
    {
        _x enableSimulation false;
        false
    } count (allUnits - [player]);
};

// Add spawn positions to Zeus, so they can be moved, and add players.
{
    _x addCuratorEditableObjects [allMissionObjects "Site_Military_Base", false];
	_x addCuratorEditableObjects [allMissionObjects "Man",true];
} forEach allCurators;

// Add EH that adds all spawned objects to all curators (except modules).
["All", "init", {
    {
        _x addCuratorEditableObjects [_this,true];
    } forEach allCurators;
}, true, ["logic","animal"], false] call CBA_fnc_addClassEventHandler;
