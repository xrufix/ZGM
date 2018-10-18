#include "script_component.hpp"

player addAction ["Change Loadout",{ createDialog "RscZGMLoadouts" },[],6,false,true,"",QUOTE([player] call EFUNC(main,inSpawnArea))];
player addAction ["Teleport to your team",{ createDialog "RscFrameworkTeleporter" },[],6,false,true,"",QUOTE([player] call EFUNC(main,inSpawnArea))];

if ([player] call EFUNC(main,isCurator)) exitWith {
	[] call FUNC(postInitZeus);
};

// Teleport players to starting position.
private _spawn = [player] call EFUNC(main,getSpawnArea);
player setPos (getPos _spawn) findEmptyPosition [0, 20, "B_Soldier_F"];
