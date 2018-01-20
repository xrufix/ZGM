/*
 * Author: xrufix
 * Remove Maps, GPS and Binoculars from AI to prevent unwanted looting.
 *
 * Arguments:
 * none
 *
 * Return Value:
 * none
 *
 * Example:
 * [] call xru_ai_fnc_removeMapsFromAI;
 *
 */

#include "script_component.hpp"

if !isServer exitWith {};

["CaManBase", "init", {
	private _unit = (_this select 0);
	if (isPlayer _unit) exitWith {};
	_unit unlinkItem "ItemMap";
	_unit unlinkItem "ItemGPS";
	_unit unlinkItem "Binocular";
}, true, [], true] call CBA_fnc_addClassEventHandler;