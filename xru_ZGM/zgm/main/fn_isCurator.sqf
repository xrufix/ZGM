#include "script_component.hpp"

params ["_unit"];

(vehicleVarname _unit) select [0,6] == "p_zeus"
