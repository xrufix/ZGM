#include "script_component.hpp"

params [["_skill",1,[1]]]];

GVAR(AISkill) = _skill / 10;
["All", "init", {
	params ["_unit"];
	if !(local _unit) exitWith {};
	_unit setSkill GVAR(AISkill);
	_unit setSkill ["aimingAccuracy", _skill / 3];
	_unit setSkill ["aimingShake", _skill / 3];
	_unit setSkill ["aimingSpeed", _skill / 3];
}, true] call CBA_fnc_addClassEventHandler;
