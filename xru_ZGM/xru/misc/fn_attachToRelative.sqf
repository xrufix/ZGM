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

_this call bis_fnc_attachToRelative
