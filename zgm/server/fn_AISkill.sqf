#include "script_component.hpp"

params ["_skill"];

GVAR(AISkill) = (0.1 * _skill);

["All", "init", {
	params ["_unit"];
	_unit setSkill ["general",GVAR(AISkill)];
    _unit setSkill ["aimingAccuracy",(GVAR(AISkill) * 0.5)];
	_unit setSkill ["aimingShake",(GVAR(AISkill) * 0.5)];
	_unit setSkill ["aimingSpeed",(GVAR(AISkill) * 0.5)];
	_unit setSkill ["courage",(GVAR(AISkill) * 0.5)];
}, true] call CBA_fnc_addClassEventHandler;