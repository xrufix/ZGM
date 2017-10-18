#include "script_component.hpp"

params ["_index"];

_faction = [
	"NATO_MTP",
	"NATO_TRPC",
	"NATO_WDL",
	"NATO_CTRG",
	"USARMY_OCP",
	"USARMY_UCP",
	"USMC_D",
	"USMC_W",
	"IDF"
	] select _index;

GVAR(BLUFOR) = _faction;