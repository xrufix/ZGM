#include "script_component.hpp"

params [["_hit",10,[1]],["_distance",5,[1]],["_radius",10,[1]]];
private _impact = (10 min (_hit / 2)) * (1 - _distance / _radius);
GVAR(suppression) = 0.25 max (GVAR(suppression) + _impact * GVAR(climbRate) / 100) min 1;

#ifdef DEBUG_MODE
    systemChat format ["hit: %1 – dist: %2 – rad: %3 | impact: %4 – suppression: %5",_hit,_distance,_radius,_impact,GVAR(suppression)];
#endif

addCamShake [_impact * GVAR(Camshake) / 2, 0.3, 30];

GVAR(impactBlur) ppEffectAdjust [_impact * GVAR(Blinking) / 2];
GVAR(impactBlur) ppEffectCommit 0;
GVAR(impactBlur) ppEffectAdjust [0];
GVAR(impactBlur) ppEffectCommit (0.2 + _impact / 10);

GVAR(lastShotAt) = time;
