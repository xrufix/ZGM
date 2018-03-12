/*
 * Author: xrufix
 * Checks for incoming missiles and destructs them.
 *
 * Arguments:
 * 0: Arguments <ARRAY>
 * 	  0: The tank for which the system is enabled. <OBJECT>
 * 1: ID of this PFH <NUMBER>
 *
 * Return Value:
 * NONE
 *
 * Example: [tankymctankface, 2] call xru_hardkill_fnc_pfh
 *
 * Public: No 
 *
 */
#include "script_component.hpp"

params ["_args", "_handle"];
_args params ["_tank"];

// Exit if no Projectiles are tracked.
if (count GVAR(trackedProjectiles) < 1) exitWith {};

// Exit the PFH if ammo is empty or system was disabled.
if (_tank getVariable [QGVAR(ammo), DEFAULT_CHARGES] <= 0) exitWith {
	_handle call CBA_fnc_removePerFrameHandler;
	_tank setVariable [QGVAR(enabled), false, true];
};
if !(_tank getVariable [QGVAR(enabled), false]) exitWith {
	_handle call CBA_fnc_removePerFrameHandler;
};
// Do nothing while reloading.
if (_tank getVariable [QGVAR(reloading), false]) exitWith {};

private _pos = (position _tank) vectorAdd (_tank selectionPosition "vez");

// Detect incoming projectiles.
GVAR(trackedProjectiles) = GVAR(trackedProjectiles) select {!(isNull (_x select 0))};
private _threats = GVAR(trackedProjectiles) select {_tank != (_x select 1)};
if (count _threats < 1) exitWith {};
_threats = _threats select {((_x select 0) distance _pos) < 6};
if (count _threats < 1) exitWith {};
_projectile = _threats select 0 select 0;

// Delete incomming projectile and create destruction effect.
_tank setVariable [QGVAR(ammo), (_tank getVariable [QGVAR(ammo), DEFAULT_CHARGES]) - 1, true];
private _explosion = "SmallSecondary" createVehicle getPos _projectile;
deleteVehicle _projectile;

// Set reloading state and remove it again after pause.
_tank setVariable [QGVAR(reloading), true, true];
[{params ["_tank"], _tank setVariable [QGVAR(reloading), false, true]}, [_tank], 2] call CBA_fnc_waitAndExecute;
