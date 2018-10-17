#include "script_component.hpp"

params ["_index"];

GVAR(OPFOR) = configName (("getNumber (_x >> 'index') == _index" configClasses (missionConfigFile >> "CfgFactions")) select 0);
