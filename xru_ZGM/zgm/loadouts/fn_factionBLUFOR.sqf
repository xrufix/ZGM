#include "script_component.hpp"

params ["_index"];

GVAR(BLUFOR) = configName (("getNumber (_x >> 'index') == _index" configClasses (missionConfigFile >> "CfgFactions")) select 0);
