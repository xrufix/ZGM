/*
 * Author: xrufix
 * Gets an array or the complete hash for a given object or type.
 *
 * Arguments:
 * 0: Vehicle <OBJECT> or Classname <STRING>
 * 1: Index (1 for ammo count, 2 for activation, 3 for inheritance) <NUMBER><OPTIONAL>
 *
 * Return Value:
 * Array (classname, ammo count, activation, inheritance) or false (when class name was not found or index is wrong) or classname/ammo count/activation/inheritance.
 *
 * Example: ["my_tank_class"] call xru_hardkill_fnc_getHash
 *
 * Public: No
 *
 */
#include "script_component.hpp"

params [["_class", "", ["", objNull]], ["_index", -1, [1]]];

if (_class isEqualType objNull) then {
	_class = typeOf _class
};

private _hash = GVAR(classHash) select {_x select 0 == _class};
if (count _hash == 0) then {
	_hash = GVAR(classHash) select {(_class isKindOf (_x select 0)) && (_x select 3)}
	
};
if (count _hash == 0) exitWith {
	WARNING("Class " + _class + " not found in classHash");
	false
};

if (_index == -1) exitWith {_hash select 0};

if (_index in [0, 1, 2, 3]) exitWith {_hash select 0 select _index};

ERROR("given index invalid");
false