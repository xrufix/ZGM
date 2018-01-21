#include "script_component.hpp"

params ["_unit","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];

if (_unit == player) exitWith {};
if (_unit == vehicle player) exitWith {};
if ((vehicle player != player) && !(isTurnedOut player)) exitWith {};
if ((tolower _weapon) in ["put","throw"]) exitWith {};
if (player distance _unit > 2000) exitWith {};
if (player distance _unit < 10) exitWith {};

if (isNull _projectile) then {
    _projectile = nearestObject [_unit, _ammo];
};

private _hit = getNumber (configfile >> "CfgAmmo" >> _ammo >> "hit");

if (lineIntersects [getPosASL _projectile, (getposASL player) vectorAdd (player selectionPosition "head"), _unit, player]) then {
    _hit = _hit / 3;
};

private _radius = 10 min (_hit / 2);

GVAR(bullets) pushBack [_projectile,_hit,_radius];

// #ifdef DEBUG_MODE
//     systemChat str [_projectile,_hit,_radius];
// #endif