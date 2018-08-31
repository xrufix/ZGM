#include "script_component.hpp"

private _timeFactor = (time - GVAR(lastReduce));

GVAR(bullets) = GVAR(bullets) select {
	_x params ["_bullet","_hit","_radius"];
	private _distance = (getPosASL _bullet) distance (eyePos ace_player);
	if (!alive _bullet) then {false} else {
		if (_distance < _radius) then {
			[_hit,_distance,_radius] call FUNC(effect);
		};
		true
	};
};

GVAR(suppression) = 0 max (GVAR(suppression) - _timeFactor * (((time - GVAR(lastShotAt)) / 20) min 1) ^ 2);

if (GVAR(suppression) > 0) then {
	if (GVAR(Tunnelvision) > 0) then {
    	private _inner = (0.7 - GVAR(suppression) / 2) / GVAR(Tunnelvision);
    	private _outer = (1 - GVAR(suppression) / 5) / GVAR(Tunnelvision);
		GVAR(suppressionCC) ppEffectAdjust [1, 1, 0, [0,0,0,1], [1,1,1,1], [1,1,1,0], [_outer , _outer, 0, 0, 0, _inner , 0.5]];
		GVAR(suppressionCC) ppEffectCommit 0;
	};
	[ace_player, "xru_suppress", 15 * (GVAR(suppression) ^ 1)] call ace_common_fnc_setAimCoef;
} else {
	[ace_player, "xru_suppress", 0, false] call ace_common_fnc_setAimCoef;
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
