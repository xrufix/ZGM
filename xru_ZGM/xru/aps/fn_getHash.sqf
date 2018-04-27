/*
 * Author: xrufix
 * Gets an array or the complete hash for a given object or type.
 *
 * Arguments:
 * 0: Vehicle <OBJECT> or Classname <STRING>
 * 1: Index (0 for ammo count, 1 for activation, 2 for inheritance) <NUMBER><OPTIONAL>
 *
 * Return Value:
 * Array (ammo count, activation, inheritance) or ammo count/activation/inheritance or nil (when class name was not found or index is wrong).
 *
 * Example: ["my_tank_class"] call xru_aps_fnc_getHash
 *
 * Public: No
 *
 */
#include "script_component.hpp"

params [["_class", "", ["", objNull]], ["_index", -1, [1]]];

if (_class isEqualType objNull) then {
	_class = tolower (typeOf _class);
};

private _hash = GVAR(classHash) getVariable [_class, 0];

if (_hash isEqualTo 0) then {
	private _parents = ([(configFile >> "CfgVehicles" >> _class), true] call BIS_fnc_returnParents) apply {tolower _x};
	_hash = {
		private _currentHash = GVAR(classHash) getVariable [_x, 0];
		if (!(_currentHash isEqualTo 0)) exitWith {_currentHash};
	} count _parents;
};

if (_hash isEqualTo 0) exitWith {
	WARNING("Class " + _class + " not found in classHash");
	nil
};

if (_index == -1) exitWith {_hash};

if (_index in [0, 1, 2]) exitWith {_hash select _index};

ERROR("given index invalid");
nil