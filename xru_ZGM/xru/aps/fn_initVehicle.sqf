/*
 * Author: xrufix
 * Initializes variables and adds actions to a single vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Ammo count. (Default: 10) <NUMBER><OPTIONAL>
 * 2: Active at start? (Default: true) <BOOL><OPTIONAL>
 * 3: Add ACE-Interactions? (Default: true) <BOOL><OPTIONAL>
 *
 * Return Value:
 * NONE
 *
 * Example: [tankymctankface, 20] call xru_aps_fnc_initVehicle
 *
 * Public: Yes
 *
 */
#include "script_component.hpp"

params [["_vehicle", objNull, [objNull]], ["_ammo", 10, [1]], ["_activate", true, [true]], ["_addActions", true, [true]]];
#ifdef DEBUG_MODE_FULL
    (format ["Init Vehicle %1: _ammo = %2; _activate = %3; _addActions = %4", _vehicle, _ammo, _activate, _addActions]) remoteExec ["hint"];
#endif

_vehicle setVariable [QGVAR(ammo), _ammo, true];

if (_activate && !(_vehicle getVariable [QGVAR(enabled), false])) then {
    [_vehicle] call FUNC(activate);
};

if (_addActions && !(_vehicle getVariable [QGVAR(initialised), false])) then {
    [_vehicle, 1, ["ACE_SelfActions"], GVAR(interaction_root)] call ace_interact_menu_fnc_addActionToObject;
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(interaction_root)], GVAR(interaction_enable)] call ace_interact_menu_fnc_addActionToObject;
    [_vehicle, 1, ["ACE_SelfActions", QGVAR(interaction_root)], GVAR(interaction_disable)] call ace_interact_menu_fnc_addActionToObject;
    [_vehicle, 0, ["ACE_MainActions"], GVAR(interaction_rearm)] call ace_interact_menu_fnc_addActionToObject;
};

_vehicle setVariable [QGVAR(initialised), true, true];
