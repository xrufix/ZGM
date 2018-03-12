/*
 * Author: xrufix
 * Get weapon index of a given weapon type.
 *
 * Arguments:
 * 0: Unit which should have the weapon.
 * 1: Type of weapon.
 *
 * Return Value:
 * none
 *
 * Example:
 * [soldier, "autocannon_30mm_CTWS"] call xru_misc_fnc_getWeaponIndex;
 *
 */
#include "script_component.hpp"

params [["_unit", objNull [objNull]], ["_weapon", "", [""]]];
TRACE_2("Params", _unit, _weapon);

if (isNull _unit) exitWith {ERROR("No valid unit provided")};
if (_weapon == "") exitWith {ERROR("No valid weapon provided")};
if (!(isClass (configFile >> "CfgWeapons" >> _weapon))) exitWith {
	ERROR(_weapon + " is not a weapon");
};

private _index = 0;
