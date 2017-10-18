#include "script_component.hpp"

if ([player] call EFUNC(main,iscurator)) exitWith {
	[] call FUNC(postInitZeus);
};

// Teleport players to starting position.
switch (side player) do {
	case west : {
		_position = (getPos spawn_blufor) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
	case east : {
		_position = (getPos spawn_opfor) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
	case independent : {
		_position = (getPos spawn_indep) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
};

