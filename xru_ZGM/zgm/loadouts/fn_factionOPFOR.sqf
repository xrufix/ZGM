#include "script_component.hpp"

params ["_index"];

GVAR(OPFOR) = configName (("true" configClasses (missionConfigFile >> "CfgFactions")) select _index);