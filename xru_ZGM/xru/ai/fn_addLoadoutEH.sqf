/*
 * Author: xrufix
 * Adds event handler that applies Poppy loadouts to specified soldier class.
 *
 * Arguments:
 * 0: Classname or object to which loadout shall be applied. <STRING or OBJECT>
 * 1: Config name of loadout (optional) <STRING>
 *
 * Return Value:
 * none
 *
 * Example (Classname):
 * ["b_soldier_f",""] call xru_ai_fnc_addLoadoutEH;
 *
 * Example (Object init):
 * [this,"usmc_rifleman"] call xru_ai_fnc_addLoadoutEH;
 *
 */

#include "script_component.hpp"

params [["_class", "", ["", objNull]],["_loadout","",[""]]];

if isNil QGVAR(AILoadouts) then {GVAR(AILoadouts) = []};

if !(_class isKindOf "man") exitWith {
	TRACE_2("ERROR, not a soldier class.",_class,_loadout)
};

if (_class isEqualType objNull) then {
	_class = typeOf _class;
};

if (_loadout != "") then {
	GVAR(AILoadouts) pushBack [_class,_loadout];
};

[_class, "init", {
	private _unit = (_this select 0);
	private _class = typeOf _unit;
	private _loadout = if (_class in (GVAR(AILoadouts) apply {_x select 0})) then {
		GVAR(AILoadouts) select {_x select 0 == _class} select 0 select 1
	} else {
		[_unit] call poppy_fnc_selectLoadout
	};
	[_unit,_loadout] call poppy_fnc_applyLoadout;
	TRACE_3("Applied loadout to soldier class.",_unit,_class,_loadout);
}, true, [], true] call CBA_fnc_addClassEventHandler;

TRACE_2("Applied loadout EH to soldier class.",_class,_loadout);