#include "script_component.hpp"

params ["_unit"];

(_unit getVariable [QGVAR(role),["squad","light"]]) params ["_group","_role"];

private _faction = [_unit] call FUNC(getFaction);

private _loadout = format ["%1_%2_%3",_faction,_group,_role];

if (!isClass (missionConfigFile >> "CfgLoadouts" >> _loadout)) then {
    _loadout = [_unit] call poppy_fnc_selectLoadout;
};

_unit setVariable [QGVAR(loadout),_loadout,true];

_loadout;
