#include "script_component.hpp"

params ["_skill"];

if (_skill < 0) then {
	GVAR(AISkill) = _skill;
	["All", "init", {
		params ["_unit"];
		private _skill = skill _unit;
		_unit setSkill ["aimingAccuracy", _skill / 2];
		_unit setSkill ["aimingShake", _skill / 2];
		_unit setSkill ["aimingSpeed", _skill / 2];
		_unit setSkill ["courage", _skill / 2];
	}, true] call CBA_fnc_addClassEventHandler;
} else {
	GVAR(AISkill) = _skill / 10;
	["All", "init", {
		params ["_unit"];
		_unit setSkill ["general", GVAR(AISkill)];
		_unit setSkill ["aimingAccuracy", GVAR(AISkill) / 2];
		_unit setSkill ["aimingShake", GVAR(AISkill) / 2];
		_unit setSkill ["aimingSpeed", GVAR(AISkill) / 2];
		_unit setSkill ["courage", GVAR(AISkill) / 2];
	}, true] call CBA_fnc_addClassEventHandler;
};