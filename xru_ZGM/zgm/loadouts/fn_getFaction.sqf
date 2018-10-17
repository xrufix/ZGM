#include "script_component.hpp"

params ["_unit"];

switch ([_unit] call EFUNC(main,getSide)) do {
    case "b" : {GVAR(BLUFOR)};
    case "o" : {GVAR(OPFOR)};
    case "i" : {GVAR(INDEP)};
    default	   {GVAR(BLUFOR)};
};
