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
 * Example: ["tank", 20, false, true] call xru_aps_fnc_initClass
 *
 * Public: Yes
 *
 */
#include "script_component.hpp"

params ["_unit","","","","_ammo","","_projectile","_gunner"];

if (!((_ammo isKindOf "MissileBase") or (_ammo isKindOf "RocketBase"))) exitWith {};
if (isNull _projectile) then {
    _projectile = nearestObject [_unit, _ammo];
};
if (!(local _projectile)) exitWith {};

GVAR(trackedProjectiles) pushBack [_projectile, _unit];
