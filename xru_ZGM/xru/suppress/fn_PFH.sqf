#include "script_component.hpp"

private _timeFactor = (time - GVAR(lastReduce));

GVAR(bullets) = GVAR(bullets) select {
	_x params ["_bullet","_hit","_radius"];
	private _distance = _bullet distance ((position ace_player) vectorAdd (ace_player selectionPosition "head"));
	switch true do {
		case (!alive _bullet) : {			// Remove bullets which are no longer present.
			false
		};
		case (_distance < _radius) : {		// Create suppression effects for all bullets near ace_player.
			[_hit,_distance,_radius] call FUNC(effect);
			true
		};
		default {							// Keep all other bullets.
			true
		};
	};
};

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
	//[ace_player, "xru_suppress", 1 + 9 * (_factor ^ 1.5)] call ace_common_fnc_setAimCoef;
} else {
	//[ace_player, "xru_suppress", 0, false] call ace_common_fnc_setAimCoef;
};

#ifdef DEBUG_MODE
	hintSilent format [
		"xru_suppress: \n" 
		+ "Suppression: %1 \n" 
		+ "Redcution Factor: %2 \n"
		+ "Last Shot at ace_player: %3s ago. \n"
		+ "Weapon Sway: %4 \n"
		+ "Tracked Bullets: \n %5",
		GVAR(suppression),
		_timeFactor * GVAR(sinkRate),
		0.1 * round ((time - GVAR(lastShotAt)) * 10),
		getCustomAimCoef ace_player,
		GVAR(bullets)
	];
#endif

GVAR(lastReduce) = time;
