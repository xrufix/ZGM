#include "script_component.hpp"

player addAction ["Change Loadout",{createDialog "RscZGMLoadouts";},[],6,false,true,"",QUOTE([player] call EFUNC(main,isNearSpawn))];