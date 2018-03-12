/*
 * Author: xrufix
 * Lets given AI-Vehicle suppress given Objects. Should not be called manually.
 *
 * Arguments:
 * 0: Arguments from xru_ai_func_doSuppress <ARRAY>
 * 1: PFH ID <NUMBER>
 *
 * Return Value:
 * none
 *
 * Example:
 * [[], 21] call xru_ai_fnc_handleSuppress;
 *
 */
#include "script_component.hpp"

params ["_arguments", "_handle"];
_arguments params ["_unit", "_targets", "_stopCondition", "_startTime", "_weapon", "_rearm"];
private _gunner = gunner _unit;
TRACE_6("Params", _unit, _targets, _stopCondition, _startTime, _weapon, _rearm);

#define EXIT_HANDLE [_handle] call CBA_fnc_removePerFrameHandler; if (_targets isEqualType []) then {{deleteVehicle _x} forEach (_targets select {typeOf _x == DUMMYCLASS})}

if (!alive _unit) exitWith {
	EXIT_HANDLE;
	TRACE_1("Exit - Unit dead", _unit);
};
if (!alive _gunner) exitWith {
	EXIT_HANDLE;
	TRACE_1("Exit - Gunner dead", _gunner);
};
if (!(count (magazines _unit) > 1)) exitWith {
	EXIT_HANDLE;
	TRACE_1("Exit - Ammo empty", magazines _unit);
};
if ((_stopCondition isEqualType 0) && {(_startTime + _stopCondition) < time}) exitWith {
	EXIT_HANDLE;
	TRACE_3("Exit - Time limit", _startTime, _stopCondition, time);
};
if (_stopCondition isEqualType {}) then {
	if (call _stopCondition) exitWith {
		EXIT_HANDLE;
		TRACE_1("Exit - Stop Condition", _stopCondition);
	};
};

private _target = if ((_targets isEqualType objNull) && {typeOf _targets == "EmptyDetector"}) then {
	TRACE_1("Trigger detected", list _targets);
	selectRandom (list _targets);
} else {
	selectRandom _targets;
};

TRACE_2("Final Params", _gunner, _target);

_gunner doWatch objNull;
_gunner doWatch _target;
_gunner doTarget _target;
_unit action ["useWeapon", _unit, _gunner, _weapon];

if (_rearm) then {
	_unit setVehicleAmmo 1;
};