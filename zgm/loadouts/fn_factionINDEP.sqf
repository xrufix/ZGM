#include "script_component.hpp"

params ["_index"];

_faction = [
	"AAF",
	"ISD",
	"CTRG"
	] select _index;

GVAR(INDEP) = _faction;