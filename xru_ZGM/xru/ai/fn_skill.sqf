#include "script_component.hpp"

["All", "init", {
	params ["_unit"];
	if !(local _unit) exitWith {};

	_unit setSkill 1;
	_unit setSkill ["aimingAccuracy", 0.2];
	_unit setSkill ["aimingShake", 0.2];
	_unit setSkill ["aimingSpeed", 0.2];

}, true, [], true] call CBA_fnc_addClassEventHandler;
