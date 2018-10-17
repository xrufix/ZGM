#include "script_component.hpp"

params ["_unit"];

(_unit in (allPlayers select {vehicleVarName _x select [0,6] == "p_zeus"}))
