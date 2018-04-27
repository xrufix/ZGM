/*
 * Author: xrufix
 * Shows a Hud indicating if the system is active and remaining ammo in vehicles with enabled APS.
 *
 * This uses much code from PabstMirrors laser HUD for ACE3.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * NONE
 *
 * Example: [ace_player] call xru_aps_fnc_showVehicleHud
 *
 * Public: No 
 *
 */
#include "script_component.hpp"

#define COLOR_WHITE		[1,1,1,0.75]
#define COLOR_GREEN		[0,1,0,0.75]
#define COLOR_ORANGE	[1,0.55,0,0.75]
#define COLOR_RED		[1,0,0,0.75]

params ["_player"];

private _enabled = false;
private _vehicle = vehicle _player;

_enabled = (_vehicle getVariable [QGVAR(initialised), false]) && (commander _vehicle == _player) && !(isTurnedOut _player);

// Exit if nothing has changed.
if ((!_enabled) && (GVAR(hudPfId < 0))) exitWith {};

// Remove PFH and Display if not longer applicable.
[GVAR(hudPfId)] call CBA_fnc_removePerFrameHandler;
if (!isNull (uiNamespace getVariable [QGVAR(hud), displayNull])) then {
	([QGVAR(hud)] call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
};
GVAR(hudPfId) = -1;

if (!_enabled) exitWith {};

GVAR(hudPfId) = [{
	params  ["_args", "_pfID"];
	_args params ["_vehicle"];

	if (isNull (uiNamespace getVariable [QGVAR(hud), displayNull])) then {
        ([QGVAR(hud)] call BIS_fnc_rscLayer) cutRsc [QGVAR(hud), "PLAIN", 1, false];
    };

	private _ctrlGroup = (uiNamespace getVariable [QGVAR(hud), displayNull]) displayCtrl 20;
	_ctrlGroup ctrlShow true;

	private _active = _vehicle getVariable [QGVAR(enabled), false];
	private _reloading = _vehicle getVariable [QGVAR(reloading), false];
	private _ammo = _vehicle getVariable [QGVAR(ammo), 0];
	private _colorIcon = switch true do {
		case (_active && _reloading) : {COLOR_ORANGE};
		case (_active && !_reloading) : {COLOR_GREEN};
		default {COLOR_RED}; 
	};
	private _colorAmmo = switch true do {
		case (!(_ammo > 0)) : {COLOR_RED};
		case ((_ammo > 0) && _reloading) : {COLOR_ORANGE};
		default {COLOR_WHITE};
	};

	private _ctrlText = (uiNamespace getVariable [QGVAR(hud), displayNull]) displayCtrl 21;
	_ctrlText ctrlSetTextColor _colorAmmo;
	
	private _ctrlAmmo = (uiNamespace getVariable [QGVAR(hud), displayNull]) displayCtrl 22;
	_ctrlAmmo ctrlSetText str _ammo;
	_ctrlAmmo ctrlSetTextColor _colorAmmo;

	private _ctrlActive = (uiNamespace getVariable [QGVAR(hud), displayNull]) displayCtrl 23;
	_ctrlActive ctrlSetTextColor _colorIcon;

}, 0.1, [_vehicle]] call CBA_fnc_addPerFrameHandler;
