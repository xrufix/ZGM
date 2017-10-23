#include "script_component.hpp"

player addAction ["Change Loadout",{createDialog "RscZGMSlots";},[],6,false,true,"",QUOTE([player] call EFUNC(main,isNearSpawn))];