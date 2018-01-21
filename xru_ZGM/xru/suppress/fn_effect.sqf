#include "script_component.hpp"

params [["_hit",10,[1]],["_distance",5,[1]],["_radius",10,[1]]];
private _hitFactor = 3 min (_hit / 10);
GVAR(suppression) = 25 max (GVAR(suppression) + _hitFactor * GVAR(climbRate)) min MAXSUPPRESS;

private _impact = _hitFactor * (1 - _distance / _radius);
private _suppression = GVAR(suppression) / MAXSUPPRESS;

#ifdef DEBUG_MODE
    systemChat format ["hit: %1 – dist: %2 – rad: %3 | hitFactor: %4 – impact: %5 – suppression: %6",_hit,_distance,_radius,_hitFactor,_impact,_suppression];
#endif

addCamShake [_impact * GVAR(Camshake), 0.3, 30];

GVAR(impactBlur) ppEffectAdjust [_impact * GVAR(Blinking)];
GVAR(impactBlur) ppEffectCommit 0;
GVAR(impactBlur) ppEffectAdjust [0];
GVAR(impactBlur) ppEffectCommit (0.2 + _impact / 10);

//[player, "xru_suppress", 1 + GVAR(weaponSway) * 9 * (_suppression ^ 1.5)] call ace_common_fnc_setAimCoef;

GVAR(lastShotAt) = time;
