/*
 * Author: xrufix
 * Remove Maps, GPS and Binoculars from AI to prevent unwanted looting.
 *
 * Arguments:
 * none
 *
 * Return Value:
 * none
 *
 * Example:
 * [] call xru_ai_fnc_removeMapsFromAI;
 *
 */

#include "script_component.hpp"

["Man", "init", {
    private _unit = (_this select 0);
    if (!local _unit) exitWith {};
    if (isPlayer _unit) exitWith {};
    _unit removeItems "ItemMap"; _unit unlinkitem "ItemMap";
    _unit removeItems "ItemGPS"; _unit unlinkitem "ItemGPS";
    _unit removeItems "Binocular"; _unit unlinkitem "Binocular";
}, true, [], true] call CBA_fnc_addClassEventHandler;
