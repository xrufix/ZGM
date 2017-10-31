#include "script_component.hpp"

params ["_index"];

GVAR(INDEP) = configName (("true" configClasses (missionConfigFile >> "CfgFactions")) select _index);