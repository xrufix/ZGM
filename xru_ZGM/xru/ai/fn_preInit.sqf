#include "script_component.hpp"

GVAR(groups) = [];
GVAR(units) = [];

// Add spawned units and their groups to the detect and share groups.
["Man", "init", {
    params ["_unit"];
    _unit call FUNC(setCamoValue);
    if !(local _unit) exitWith {};
    if (isPlayer _unit) exitWith {};
    if !((side _unit) in [east, west, resistance]) exitWith {};
    GVAR(units) pushBackUnique _unit;
    GVAR(groups) pushBackUnique (group _unit);
}, true, [], true] call CBA_fnc_addClassEventHandler;

// Set uniforms camouflage value when changing uniforms.
if (hasInterface) then {
    ["loadout", {
        params ["_player", ""];

        [_player, true] call FUNC(setCamoValue);
    }] call CBA_fnc_addPlayerEventHandler;
};

// Start detect and share loops.
[{call FUNC(detectPFH)}, DETECT_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
[{call FUNC(sharePFH)}, REVEAL_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
