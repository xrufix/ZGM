#include "script_component.hpp"

["All", "init", {
    params ["_unit"];
    if !(local _unit) exitWith {};

    _unit setSkill 1;
    _unit setSkill ["aimingAccuracy", 0.15];
    _unit setSkill ["aimingShake", 0.15];
    _unit setSkill ["aimingSpeed", 0.15];
    _unit setSkill ["courage", 0.5];

}, true, [], true] call CBA_fnc_addClassEventHandler;
