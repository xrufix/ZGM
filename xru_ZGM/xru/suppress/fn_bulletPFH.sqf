#include "script_component.hpp"

GVAR(bullets) = GVAR(bullets) select {
	_x params ["_bullet","_hit","_radius"];
	private _distance = player distance _bullet;
	switch true do {
		case (!alive _bullet) : {			// Remove bullets which are no longer present.
			false
		};
		case (_distance < _radius) : {		// Create suppression effects for all bullets near player.
			[_hit,_distance,_radius] call FUNC(effect);
			true
		};
		default {							// Keep all other bullets.
			true
		};
	};
};