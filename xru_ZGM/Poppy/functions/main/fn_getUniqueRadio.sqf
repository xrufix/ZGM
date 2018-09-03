#include "..\script_component.hpp"
params ["_unit", "_config"];

private _srRadio = if (isText (_config >> "srRadio")) then {
    getText (_config >> "srRadio")
} else {
    "ACRE_PRC343"
};
if (_srRadio == "") exitWith {""};

switch (true) do {
    case (GVAR(usesACRE)): {
        {
            if (_x isKindOf [_srRadio, configFile >> "CfgWeapons"]) exitWith {_x};
            _srRadio
        } forEach (items _unit);
    };
    case (GVAR(usesTFAR)): {
        {
            if (_x isKindOf ["ItemRadio", configFile >> "CfgWeapons"]) exitWith {_x};
            "ItemRadio"
        } forEach (assignedItems _unit);
    };
    default {
        "ItemRadio"
    };
};
