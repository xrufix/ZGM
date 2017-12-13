#include "script_component.hpp"

params [["_hit",10],["_distance",5],["_radius",10]];
private _hitFactor = 3 min (_hit / 10);
GVAR(suppression) = (GVAR(suppression) + _hitFactor * GVAR(climbRate)) min MAXSUPPRESS;

private _impact = _hitFactor * (1 - _distance / _radius);
private _suppression = GVAR(suppression) / MAXSUPPRESS;

#ifdef DEBUG_MODE
    systemChat format ["hit: %1 – dist: %2 – rad: %3 | hitFactor: %4 – impact: %5 – suppression: %6",_hit,_distance,_radius,_hitFactor,_impact,_suppression];
#endif

addCamShake [_impact * GVAR(Camshake), 0.3, 30];

if (GVAR(Tunnelvision) > 0) then {
    private _inner = (0.7 - _suppression / 2) / GVAR(Tunnelvision);
    private _outer = (0.9 - _suppression / 6) / GVAR(Tunnelvision);
    GVAR(suppressionCC) ppEffectAdjust [1, 1, 0, [0,0,0,1], [1,1,1,1], [1,1,1,0], [_outer , _outer, 0, 0, 0, _inner , 0.5]];
    GVAR(suppressionCC) ppEffectCommit 0;
};

GVAR(impactBlur) ppEffectAdjust [_impact * GVAR(Blinking)];
GVAR(impactBlur) ppEffectCommit 0;
GVAR(impactBlur) ppEffectAdjust [0];
GVAR(impactBlur) ppEffectCommit (0.2 + _impact / 10);

[player, "xru_suppress", 1 + GVAR(weaponSway) * 9 * (_suppression ^ 1.5)] call ace_common_fnc_setAimCoef;

GVAR(lastShotAt) = time;
