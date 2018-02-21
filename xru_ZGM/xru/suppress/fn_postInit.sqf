#include "script_component.hpp"

ADDON = false;
if (!hasInterface) exitWith {};

// Add Fired Eventhandler to all classes.
["All", "Fired", {call FUNC(firedEH)}, true] call CBA_fnc_addClassEventHandler;

// Add PFH for effects
[{call FUNC(PFH)}] call CBA_fnc_addPerFrameHandler;

// Initialize PPE
GVAR(suppressionCC) = ppEffectCreate ["colorCorrections", 1452];
GVAR(suppressionCC) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1], [1,1,1,0], [1,1,0,0,0,1,0]];
GVAR(suppressionCC) ppEffectEnable true;
GVAR(suppressionCC) ppEffectForceInNVG true;
GVAR(suppressionCC) ppEffectCommit 0;

GVAR(impactBlur) = ppEffectCreate ["DynamicBlur", 776];
GVAR(impactBlur) ppEffectAdjust [0];
GVAR(impactBlur) ppEffectEnable true;
GVAR(impactBlur) ppEffectForceInNVG true;
GVAR(impactBlur) ppEffectCommit 0;

#ifdef DEBUG_MODE
	player addAction["Effect",{[10, 2, 5] call xru_suppress_fnc_effect},nil,1.5,true,true,"defaultAction"];
#endif

ADDON = true;