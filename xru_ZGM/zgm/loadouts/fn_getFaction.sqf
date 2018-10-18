#include "script_component.hpp"

params ["_unit"];

private _faction = _unit getVariable [QGVAR(faction), ""];

if (_faction == "") then {
    _faction = switch (side _unit) do {
        case west : {GVAR(BLUFOR)};
        case east : {GVAR(OPFOR)};
        case guer : {GVAR(INDEP)};
        default	    {GVAR(BLUFOR)};
    };
    _unit setVariable [QGVAR(faction), _faction, true];
};

_faction
