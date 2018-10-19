#include "script_component.hpp"

if (!hasInterface) exitWith {};

player addAction ["Change Loadout",{ createDialog "RscZGMLoadouts" },[],6,false,true,"",QUOTE([player] call FUNC(inSpawnArea))];
player addAction ["Teleport to your team",{ createDialog "RscFrameworkTeleporter" },[],6,false,true,"",QUOTE([player] call FUNC(inSpawnArea))];

if ([player] call FUNC(isCurator)) then { // Applies only to currators

    player allowDamage false;
    player setVariable ["ace_medical_allowDamage", false];

    if (didJIP) then { // Fix for unassigned curator after jip
        player call FUNC(reassignCurator);
    };

} else { // Applies to all players except currators

    private _spawn = [player] call FUNC(getSpawnArea);
    player setPos (getPos _spawn) findEmptyPosition [0, 20, "B_Soldier_F"];

};
