/*
 * Author: xrufix
 * Make a given AI-Vehicle suppress a position or object. Should be executed global or where unit is local.
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
 * 8: Muzzle to use <STRING> (default: primary weapon for infantry, current muzzle for vehicles)
 * 9: Code to execute when the timeout condition has been met. <CODE> (default: {})
 * 10: Arguments passed to the stopCondition && exitCode. <ANY> (default: [])
 *
 * Return Value:
 * Handle of PFH. <NUMBER>
 *
 * Example:
 * [synchronizedObjects thisTrigger, thisTrigger, nil, nil, nil, {params ["_trigger"]; !(triggerActivated _trigger)}, .2, true, nil, {}, thisTrigger] call xru_doSuppress_fnc_start;
 *
 */

#include "script_component.hpp"

#ifdef DEBUG_MODE_FULL
    #define DUMMYCLASS "Sign_Sphere100cm_F"
#else
    #define DUMMYCLASS "Helper_Base_F"
#endif

TRACE_1("",_this);

params [
    ["_unit", objNull, [[], objNull]],
    ["_target", objNull, [objNull, []]],
    ["_distance", 10, [0]],
    ["_dummyCount", 10, [0]],
    ["_height", 2, [0]],
    ["_stopCondition", 10, [0, {}, ""]],
    ["_switchTime", 1, [0]],
    ["_rearm", true, [true]],
    ["_muzzle", "", [""]],
    ["_exitCode", {}, [{}]],
    ["_codeArguments", []]
];

TRACE_9("Params", _unit, _target, _distance, _dummyCount, _height, _stopCondition, _switchTime, _rearm, _muzzle);

if (_unit isEqualType []) exitWith {
    {[_x, _target, _distance, _dummyCount, _height, _stopCondition, _switchTime, _rearm, _muzzle] call FUNC(start)} forEach _unit;
};
if (isNull _unit) exitWith {ERROR("Suppressing vehicle is invalid or was not found.")};
if (!local _unit) exitWith {};

_unit = vehicle _unit;
private _isMan = (vehicle _unit) isKindOf "Man";

private _targets = [];
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
            ERROR("Invalid position provided as target");
        };
    };
};
TRACE_2("Target selection/creation", _target, _targets);

if (_stopCondition isEqualType "") then {
    _stopCondition = compile _stopCondition;
};

if _isMan then {
    if (_muzzle == "") then {
        private _weapon = primaryWeapon _unit;
        _muzzle = if !(_weapon == "") then {
            private _m = (getArray (configFile >> "CfgWeapons" >> (primaryWeapon _unit) >> "muzzles")) select 0;
            if (_m == "this") then {
                _unit selectWeapon _weapon;
                currentMuzzle _unit
            } else {
                _m
            };
        } else {
            currentMuzzle _unit
        };
    } else {
        private _hasMuzzle = false;
        {   if (
                _muzzle in (getArray (configFile >> "CfgWeapons" >> _x >> "muzzles"))
            ) exitWith {_hasMuzzle = true};
            false
        } count (weapons _unit);
        if (!_hasMuzzle) exitWith {
            ERROR("The requested muzzle is not available on the unit");
        };
    };
    _unit selectWeapon _muzzle;
    TRACE_1("", _muzzle);
} else {
    if (_muzzle == "") then {
        _muzzle = (weaponState [_unit, [0]]) select 1;
    } else {
        // Check if the vehicle has the muzzle
        private _hasMuzzle = false;
        {   if (
                _muzzle in (getArray (configFile >> "CfgWeapons" >> _x >> "muzzles"))
            ) exitWith {_hasMuzzle = true};
            false
        } count (_unit weaponsTurret [0]);
        if (!_hasMuzzle) exitWith {
            ERROR("The requested muzzle is not available on the turret");
        };
    };
    _unit selectWeaponTurret [_muzzle, [0]];
};

private _handleArguments = [_unit, _targets, _muzzle, _isMan, _rearm, time, _stopCondition, _exitCode, _codeArguments];
TRACE_1("Starting handle", _handleArguments);

private _handle = [{_this call FUNC(handle)}, _switchTime, _handleArguments] call CBA_fnc_addPerFrameHandler;

_handle
