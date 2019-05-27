#include "script_component.hpp"

GVAR(groups) = [];
GVAR(units) = [];

// Add spawned units and their groups to the detect and share groups.
["Man", "init", {
    _this call FUNC(initUnit);
}, true, [], true] call CBA_fnc_addClassEventHandler;

// Set uniforms camouflage value when changing uniforms.
if (hasInterface) then {
    ["loadout", {
        params ["_player", ""];

        [_player, true] call FUNC(setCamoValue);
    }] call CBA_fnc_addPlayerEventHandler;
};

// Start detect and share loops.
GVAR(detectPFH) = [{call FUNC(detectPFH)}, DETECT_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
GVAR(sharePFH) = [{call FUNC(sharePFH)}, REVEAL_INTERVAL, []] call CBA_fnc_addPerFrameHandler;
