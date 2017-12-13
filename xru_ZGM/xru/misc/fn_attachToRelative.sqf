/*
 * Author: xrufix
 * Attaches object to another one and keeps directions.
 * Uses some code from KillzoneKid: http://killzonekid.com/arma-scripting-tutorials-attach-to-relative/
 *
 * Arguments:
 * 0: Object that shall be attached. <OBJECT>
 * 1: Target to which the object shall be attached. <OBJECT>
 *
 * Return Value:
 * none
 *
 * Example:
 * [object_1,object_2] call xru_misc_fnc_attachToRelative;
 *
 */
#include "script_component.hpp"

params ["_object","_target"];

private _vector = _target worldToModelVisual [0,0,0];
_vector = [
	_target worldToModelVisual vectorDirVisual _object vectorDiff _vector,
	_target worldToModelVisual vectorUpVisual  _object vectorDiff _vector
];
_object attachTo [_target];
_object setVectorDirAndUp _vector;
_vector