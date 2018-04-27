/*
 * Author: xrufix, BaerMitUmlaut/Blaubär
 * Adds actions to all vehicles to flip them if they get flipped.
 *
 * Arguments: 
 * none
 *
 * Return Value:
 * none
 *
 * Example:
 * [] call xru_misc_fnc_tankFlip;
 *
 */
#include "script_component.hpp"

GVAR(tankFlip) = false;

private _flip = {
	private _position = (getPosATL _target) findEmptyPosition [0, 100, typeOf _target];
	_target setPos _position;
};

private _canFlip = {
	(vectorUp _target) vectorDotProduct (surfaceNormal position _target) < 0.8
};

private _action = [
    QGVAR(tankFlip),
    "Flip tank",
    "",
    _flip,
    _canFlip,
    {},
    [],
    {[0, 0, 0]},
    10
] call ace_interact_menu_fnc_createAction;

[
    "LandVehicle",
    0,
    ["ACE_MainActions"],
    _action,
    true
] call ace_interact_menu_fnc_addActionToClass;

GVAR(tankFlip) = true;