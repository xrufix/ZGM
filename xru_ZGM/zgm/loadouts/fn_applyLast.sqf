#include "script_component.hpp"

params ["_button"];
private _display = ctrlParent _button;

[player, [player] call FUNC(selectLoadout)] call poppy_fnc_applyLoadout;

_display closeDisplay 1;
