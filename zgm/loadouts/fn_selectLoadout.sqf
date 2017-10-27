#include "script_component.hpp"

params ["_unit"];

(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];

private _side = [_unit] call EFUNC(main,getSide);
private _faction = [_unit] call FUNC(getFaction);

_loadout = format ["%1_%2_%3_%4",_side,_faction,_group,_role];

if (isClass (missionConfigFile >> "CfgLoadouts" >> _loadout)) then {
    _loadout;
} else {
    [_unit] call poppy_fnc_selectLoadout;
};