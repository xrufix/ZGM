#include "script_component.hpp"

if (!isServer) exitWith {};

params ["_daytime"];

diag_log _daytime;

switch (_daytime) do {
    case 1: {skipTime (15 + random [0,3,6])};
    case 2: {skipTime (21 + random [0,3,6])};
	case 3:	{skipTime (3 + random [0,3,6])};
	case 4:	{skipTime (9 + random [0,3,6])};
    default {skipTime (12 + random [0,12,24])};
};
