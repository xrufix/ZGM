#include "script_component.hpp"

params ["_index"];

GVAR(BLUFOR) = configName (("true" configClasses (missionConfigFile >> "CfgFactions")) select _index);