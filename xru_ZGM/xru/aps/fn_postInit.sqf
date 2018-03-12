/*
 * Author: xrufix
 * Initializes Event Handlers, HUD and classes.
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example: [] call xru_hardkill_fnc_postInit
 *
 * Public: No 
 *
 */
#include "script_component.hpp"

// Add Fired EventHandler to all units.
["All", "fired", {_this call FUNC(firedEH)}] call CBA_fnc_addClassEventHandler;

// Add Hud to vehicles. Uses code from ACE3.
["turret", {_this call FUNC(showVehicleHud)}, false] call CBA_fnc_addPlayerEventHandler;
["vehicle", {_this call FUNC(showVehicleHud)}, true] call CBA_fnc_addPlayerEventHandler;
["weapon", {_this call FUNC(showVehicleHud)}, true] call CBA_fnc_addPlayerEventHandler;
["ACE_controlledUAV", {
	params ["_UAV", "_seatAI", "_turret", "_position"];
	if (!isNull _seatAI) then {
		[_seatAI] call FUNC(showVehicleHud);
	} else {
		[ace_player] call FUNC(showVehicleHud);
	};
}] call CBA_fnc_addEventHandler;

// Initialize classes
// Custom settings from description.ext
private _config = getArray (missionConfigFile >> "xru_hardkill");
{_x call FUNC(initClass)} forEach _config;
// Default settings (wont apply if class was initialised before)
{_x call FUNC(initClass)} forEach [
	["B_MBT_01_base_F", 12, true, true],
	["I_MBT_03_cannon_F", 12, true, false]
];
