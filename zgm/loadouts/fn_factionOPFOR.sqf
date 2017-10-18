#include "script_component.hpp"

params ["_index"];

_faction = [
	"CSAT",
	"CSAT_P"
	] select _index;

GVAR(OPFOR) = _faction;