#include "script_component.hpp"

GVAR(suppression) = 0 max (GVAR(suppression) - GVAR(sinkRate));

private _factor = GVAR(suppression) / MAXSUPPRESS;
if (GVAR(suppression) > 0) then {
	if (GVAR(Tunnelvision) > 0) then {
		GVAR(suppressionCC) ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1], [1,1,1,0], [0.9,0.9,0,0,0,0.7,0]];
		GVAR(suppressionCC) ppEffectCommit (10 / GVAR(sinkRate));
	};
	[player, "xru_suppress", 1 + 9 * (_factor ^ 1.5)] call ace_common_fnc_setAimCoef;
} else {
	[player, "xru_suppress", 0, false] call ace_common_fnc_setAimCoef;
};
