/*
 * Author: xrufix
 * Lets given AI-Vehicle suppress given Objects. Should not be called manually.
 *
 * Arguments:
 * 0: Arguments from xru_doSuppress_fnc_start <ARRAY>
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
_arguments params ["_unit", "_targets", "_muzzle", "_isMan", "_rearm", "_startTime", "_stopCondition", "_exitCode", "_codeArguments"];

TRACE_9("Params", _unit, _targets, _muzzle, _isMan, _rearm, _startTime, _stopCondition, _exitCode, _codeArguments);

// Exit if conditions are met.
#define EXIT_HANDLE [_handle] call CBA_fnc_removePerFrameHandler; if (_targets isEqualType []) then {{if (typeOf _x == DUMMYCLASS) then {deleteVehicle _x}} forEach _targets}; _codeArguments call _exitCode;

if (!alive _unit) exitWith {
    EXIT_HANDLE;
    TRACE_1("Exit - Unit Dead", _unit);
};
if (!alive (gunner _unit)) exitWith {
    EXIT_HANDLE;
    TRACE_1("Exit - Gunner dead", gunner _unit);
};
if ((_stopCondition isEqualType 0) && {(_startTime + _stopCondition) < time}) exitWith {
    EXIT_HANDLE;
    TRACE_3("Exit - Time limit", _startTime, _stopCondition, time);
};
if (_stopCondition isEqualType {}) then {
    if (_codeArguments call _stopCondition) exitWith {
        EXIT_HANDLE;
        TRACE_1("Exit - Stop Condition", _stopCondition);
    };
};

// Select a target
private _target = _targets call FUNC(selectTarget);


if _isMan then {
    // Handle empty magazines
    private _weaponState = weaponState _unit;
    _weaponState params ["","","", "_magazine", "_ammoCount"];
    if (_ammoCount == 0) exitWith {
        private _magazines = magazines _unit;
        if (({_x == _magazine} count _magazines) <= 1) then {
            if (!_rearm) exitWith {
                EXIT_HANDLE;
                TRACE_1("Exit - no ammo left", _magazine);
            };
            _unit addMagazineGlobal _magazine;
        };
    };
    // Fire
    TRACE_3("before shooting", _unit, _target, _muzzle);
    _unit doWatch _target;
    _unit doTarget _target;
    [{
        params ["_unit", "_target", "_muzzle"];
        _unit selectWeapon _muzzle;
        [_unit, _muzzle] call BIS_fnc_fire
    }, [_unit, _target, _muzzle], 1] call CBA_fnc_waitAndExecute;
} else {
    // Handle empty magazines
    private _weaponState = weaponState [_unit, [0], _muzzle];
    _weaponState params ["","","", "_magazine", "_ammoCount"];
    if (_ammoCount == 0) exitWith {
        // private _magazines = _unit magazinesTurret [0];
        // if (({_x == _magazine} count _magazines) <= 1) then {
            if (!_rearm) exitWith {
                EXIT_HANDLE;
                TRACE_1("Exit - no ammo left", _magazine);
            };
            _unit setVehicleAmmo 1;
        //     _unit addMagazineTurret [_magazine, [0]]
        // };
    };
    // Fire
    TRACE_3("before shooting", _unit, _target, _muzzle);
    _unit doWatch _target;
    _unit doTarget _target;
    [{
        params ["_unit", "_target", "_muzzle"];
        _unit selectWeaponTurret [_muzzle, [0]];
        _unit fireAtTarget [_target, _muzzle];
    }, [_unit, _target, _muzzle], 1] call CBA_fnc_waitAndExecute;
};
