#include "script_component.hpp"

params ["_unit"];

switch (side _unit) do {
    case west : { spawn_blufor };
    case guer : { spawn_indep };
    case east : { spawn_opfor };
    default { _unit };
};
