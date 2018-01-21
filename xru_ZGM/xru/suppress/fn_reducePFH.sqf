#include "script_component.hpp"

private _timeFactor = (time - GVAR(lastReduce));

if (time - GVAR(lastshotat) > 3) then {
	GVAR(suppression) = 0 max (GVAR(suppression) - GVAR(sinkRate) * _timeFactor);
};

if (GVAR(suppression) > 0) then {
	private _factor = GVAR(suppression) / MAXSUPPRESS;
	if (GVAR(Tunnelvision) > 0) then {
    	private _inner = (0.7 - GVAR(suppression) / 200) / GVAR(Tunnelvision);
    	private _outer = (1 - GVAR(suppression) / 500) / GVAR(Tunnelvision);
		GVAR(suppressionCC) ppEffectAdjust [1, 1, 0, [0,0,0,1], [1,1,1,1], [1,1,1,0], [_outer , _outer, 0, 0, 0, _inner , 0.5]];
		GVAR(suppressionCC) ppEffectCommit 0;
	};
	//[player, "xru_suppress", 1 + 9 * (_factor ^ 1.5)] call ace_common_fnc_setAimCoef;
} else {
	//[player, "xru_suppress", 0, false] call ace_common_fnc_setAimCoef;
};

#ifdef DEBUG_MODE
	hintSilent format [
		"xru_suppress: \n" 
		+ "Suppression: %1 \n" 
		+ "Redcution Factor: %2 \n"
		+ "Last Shot at Player: %3s ago. \n"
		+ "Weapon Sway: %4 \n"
		+ "Tracked Bullets: \n %5",
		GVAR(suppression),
		_timeFactor * GVAR(sinkRate),
		0.1 * round ((time - GVAR(lastShotAt)) * 10),
		getCustomAimCoef player,
		GVAR(bullets)
	];
#endif

GVAR(lastReduce) = time;
