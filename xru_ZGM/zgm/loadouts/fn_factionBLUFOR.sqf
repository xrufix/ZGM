#include "script_component.hpp"

params ["_index"];

private _factions = "true" configClasses (missionConfigFile >> "CfgFactions") apply {configName _x};

GVAR(BLUFOR) = _factions select _index;