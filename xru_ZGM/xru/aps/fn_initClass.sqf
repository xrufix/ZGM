/*
 * Author: xrufix
 * Adds class and params to hash, adds ACE interactions to the class, adds ClassEH which initialises every spawned vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Ammo count. (Default: 10) <NUMBER><OPTIONAL>
 * 2: Active at start? (Default: true) <BOOL><OPTIONAL>
 * 3: Allow inheritance? (Default: true) <BOOL><OPTIONAL>
 *
 * Return Value:
 * NONE
 *
 * Example: ["tank", 20, false, true] call xru_hardkill_fnc_initClass
 *
 * Public: Yes
 *
 */
#include "script_component.hpp"

params [["_classname", "", [""]], ["_ammo", 10, [1]], ["_activate", true, [true]], ["_inherit", true, [true]]];

if (([_classname] call FUNC(getHash)) isEqualType []) exitWith {
    private _warning = format ["Class %1 already initialised, ignoring", _classname];
    WARNING(_warning);
};
GVAR(classHash) pushBack [_classname, _ammo, _activate, _inherit];

[_classname, 1, ["ACE_SelfActions"], GVAR(interaction_root), _inherit] call ace_interact_menu_fnc_addActionToClass;
[_classname, 1, ["ACE_SelfActions", QGVAR(interaction_root)], GVAR(interaction_enable), _inherit] call ace_interact_menu_fnc_addActionToClass;
[_classname, 1, ["ACE_SelfActions", QGVAR(interaction_root)], GVAR(interaction_disable), _inherit] call ace_interact_menu_fnc_addActionToClass;
[_classname, 0, ["ACE_MainActions"], GVAR(interaction_rearm), _inherit] call ace_interact_menu_fnc_addActionToClass;

if (isServer) then {
    [_classname, "init", {
        params ["_vehicle"];
        private _args = [_vehicle] call FUNC(getHash);
        _args params ["", "_ammo", "_activate", ""];

        [_vehicle, _ammo, _activate, false] call FUNC(initVehicle);

    }, _inherit, [], true] call CBA_fnc_addClassEventHandler;
};
