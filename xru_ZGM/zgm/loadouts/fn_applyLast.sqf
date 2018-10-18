#include "script_component.hpp"

params ["_button"];
private _display = ctrlParent _button;

[player, player getVariable QGVAR(loadout)] call poppy_fnc_applyLoadout;

_display closeDisplay 1;
