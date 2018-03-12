/*
 * Author: xrufix
 * Initializes global variables.
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example: [] call xru_hardkill_fnc_preInit
 *
 * Public: No 
 *
 */
#include "script_component.hpp"

// Init GVARs
GVAR(classHash) = [];
GVAR(trackedProjectiles) = [];
GVAR(hudPfId) = -1;

// Create CBA EventHandlers
[QGVAR(enablePFH), {
	[{_this call FUNC(PFH)}, 0, _this] call CBA_fnc_addPerFrameHandler; 
}] call CBA_fnc_addEventHandler;

// Create ACE-Interactions

GVAR(interaction_root) = [QGVAR(interaction_root), "APS", "", {}, {
	params ["_target", "_player", ""];
	true //(_player == commander _target)
}] call ace_interact_menu_fnc_createAction;

GVAR(interaction_enable) = [QGVAR(interaction_enable), "Engage", "", {
	params ["_target", "", ""];
	_target call FUNC(activate);
}, {
	params ["_target", "_player", ""];
	!(_target getVariable [QGVAR(enabled), false])
	&& (_target getVariable [QGVAR(ammo), DEFAULT_CHARGES] > 0)
	&& (_player == commander _target)
	&& !(isTurnedOut _player)
}] call ace_interact_menu_fnc_createAction;

GVAR(interaction_disable) = [QGVAR(interaction_disable), "Disengage", "", {
	params ["_target", "", ""];
	[_target, false] call FUNC(activate);
}, {
	params ["_target", "_player", ""];
	(_target getVariable [QGVAR(enabled), false])
	&& (_player == commander _target)
	&& !(isTurnedOut _player)
}] call ace_interact_menu_fnc_createAction;

GVAR(interaction_rearm) = [QGVAR(interaction_rearm), "Rearm APS", "", {
	params ["_target", "", ""];
	_target setVariable [QGVAR(ammo), [_target, 1] call FUNC(getHash), true];
}, {
	params ["_target", "", ""];
	private _vehicles = (_target nearObjects ["all", 20]) select {(typeOf _x) in ace_rearm_configTypesAdded};
	(count _vehicles > 0) && ((_target getVariable [QGVAR(ammo), 0]) < ([_target, 1] call FUNC(getHash)))
}] call ace_interact_menu_fnc_createAction;