/*
 * Author: xrufix
 * Adds anything except logics and animals to all Curator modules.
 *
 * Arguments: none
 *
 * Return Value:
 * none
 *
 * Example:
 * [] call xru_misc_fnc_zeusHandle;
 *
 */
#include "script_component.hpp"

["All", "init", {
    {
        _x addCuratorEditableObjects [_this,true]; 
    } forEach allCurators;
}, true, ["logic","animal"], true] call CBA_fnc_addClassEventHandler;