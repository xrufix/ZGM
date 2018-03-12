/*
 * Author: xrufix
 * Lets given AI-Vehicle suppress a position or object. Should be executed global or where shooting units are local.
 *
 * Arguments:
 * 0: Suppressing vehicle or list of vehicles. <OBJECT|ARRAY>
 * 1: Target(s) of Suppression <OBJECT|ARRAY|LOCATION|TRIGGER>
 * 2: Radius arround target location <NUMBER> (default: 10)
 * 3: Number of dummy targets to create near target location <NUMBER> (default: 10)
 * 4: Height above ground level at which shall be aimed. Only used if positions are provided. <NUMBER> (default: 2)
 * 5: Time limit until shooting stops in seconds OR condition to stop firing <NUMBER|CODE|STRING> (default: 10)
 * 6: Time between switching targets. <NUMBER> (default: 1)
 * 7: Rearm Weapons after shooting. <BOOL> (default: true)
 * 8: Weapon index of Weapon to use. <NUMBER> (default: 1)
 *
 * Return Value:
 * Handle of PFH. Can be stopped with CBA_fnc_removePerFrameHandler manually. <NUMBER|ARRAY>
 *
 * Example:
 * [tankyMcTankface, trigger_targetArea, 10, 5, 1, {!(triggerActivated trigger_targetArea)}, 1, true, 1] call xru_ai_fnc_doSuppress;
 *
 */

#include "script_component.hpp"

#ifdef DEBUG_MODE_FULL
	#define DUMMYCLASS "Sign_Sphere100cm_F"
#else
	#define DUMMYCLASS "Helper_Base_F"
#endif

params [["_unit", objNull, [[], objNull]], ["_target", objNull, [objNull, []]], ["_distance", 10, [0]], ["_dummyCount", 10, [0]], ["_height", 2, [0]], ["_stopCondition", 10, [0, {}, ""]], ["_switch", 1, [0]], ["_rearm", true, [true]], ["_weapon", 1, [0]]];
TRACE_5("Params", _unit, _target, _distance, _dummyCount, _stopCondition);

if (_unit isEqualType []) exitWith {
	_unit apply {[_x, _target] call FUNC(doSuppress)};
};
if (isNull _unit) exitWith {ERROR("Suppressing vehicle is invalid or was not found.")};
if (!local _unit) exitWith {};

private _targets = [];
_distance = floor _distance;
_dummyCount = floor _dummyCount;
if (_distance < 1) then {_distance = 1};
if (_dummyCount < 1) then {_dummyCount = 1};

if (_target isEqualType objNull) then {
	if (isNull _target) exitWith {ERROR("Target or target location is invalid or was not found")};
	if (typeOf _target == "EmptyDetector") then {
		_targets = _target;
	} else {
		_target = position _target;
	};	
};
if (_target isEqualType []) then {
	if (_target isEqualTypeAll objNull) then {
		_targets = _target;
	} else {
		if (_target isEqualTypeAll []) then {
			{
				private _position == _x;
				if !((count _position == 3) && {_position isEqualTypeAll 0}) exitWith {
					ERROR("Element in target array is not a position");
				};
				_position set [2, _height];
				private _dummy = DUMMYCLASS createVehicle [0, 0, 0];
				_dummy setPos _position;
				_targets pushBack _dummy;

			} forEach _target;
		};
		if ((count _target == 3) && (_target isEqualTypeAll 0) && !(_target isEqualTo [0,0,0])) then {
			for "_i" from 1 to _dummyCount do {
				private _position = [[_target, _distance, _distance, 0, false]] call CBA_fnc_randPosArea;
				_position set [2, _height];
				private _dummy = DUMMYCLASS createVehicle [0, 0, 0];
				_dummy setPos _position;
				_targets pushBack _dummy;
			};
		} else {
			throw "Invalid position provided as target";
		};
	};
};

if (_stopCondition isEqualType "") then {
	_stopCondition = compile _stopCondition;
};

private _handleArguments = [_unit, _targets, _stopCondition, time, _weapon, _rearm];
TRACE_1("Starting handle with", _handleArguments);
private _handle = [{_this call FUNC(handleSuppress)}, _switch, _handleArguments] call CBA_fnc_addPerFrameHandler;

_handle;