#include "script_component.hpp"

ADDON = false;
if (!hasInterface) exitWith {};

GVAR(bullets) = [];
GVAR(lastShotAt) = 0;
GVAR(suppression) = 0;

if (isNil QGVAR(Blinking)) 		then {GVAR(Blinking = 1)};
if (isNil QGVAR(Camshake))	 	then {GVAR(Camshake) = 1};
if (isNil QGVAR(Tunnelvision)) 	then {GVAR(Tunnelvision) = 1};
if (isNil QGVAR(weaponSway)) 	then {GVAR(weaponSway) = 1};

if (isNil QGVAR(climbRate)) 	then {GVAR(climbRate) = 1};
if (isNil QGVAR(sinkRate)) 		then {GVAR(sinkRate) = 1};

// Add Fired Eventhandler to all classes.
["All", "Fired", {call FUNC(firedEH)}, true] call CBA_fnc_addClassEventHandler;

// Add PFH tracking bullets.
[{call FUNC(bulletPFH)}] call CBA_fnc_addPerFrameHandler;

// Add PFH reducing suppression
[{[] call FUNC(reduce);},0.1] call CBA_fnc_addPerFrameHandler;

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

// Add Debug-Hints
#ifdef DEBUG_MODE
	[{
		hintSilent format [
			"xru_suppress: \n" 
			+ "Suppression: %1 \n" 
			+ "Suppression Factor: %2 \n"
			+ "Last Shot at Player: %3s ago. \n"
			+ "Weapon Sway: %4 \n"
			+ "Tracked Bullets: \n %5",
			GVAR(suppression),
			GVAR(suppression) / MAXSUPPRESS,
			0.1 * round ((time - GVAR(lastShotAt)) * 10),
			getCustomAimCoef player,
			GVAR(bullets)
		];
	}] call CBA_fnc_addPerFrameHandler;

	player addAction["Effect",{[10,5] call xru_suppress_fnc_effect},nil,1.5,true,true,"defaultAction"];
#endif

ADDON = true;