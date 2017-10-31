#include "script_component.hpp"

player addAction ["Change Loadout",{createDialog "RscZGMLoadouts";},[],6,false,true,"",QUOTE([player] call EFUNC(main,isNearSpawn))];
player addAction ["Teleport to your team",{createDialog "RscFrameworkTeleporter"},[],6,false,true,"",QUOTE([player] call EFUNC(main,isNearSpawn))];

if ([player] call EFUNC(main,iscurator)) exitWith {
	[] call FUNC(postInitZeus);
};

// Teleport players to starting position.
switch ([player] call EFUNC(loadouts,selectLoadout) select [0,1]) do {
	case "b" : {
		_position = (getPos spawn_blufor) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
	case "o" : {
		_position = (getPos spawn_opfor) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
	case "i" : {
		_position = (getPos spawn_indep) findEmptyPosition [0, 50, "B_Soldier_F"];
		_position set [2, 0];
		player setPosATL _position;
	};
};

