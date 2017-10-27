#include "..\script_component.hpp"
params ["_unit", "_array"];

private _gps = selectRandom _array;

private _oldGps = assignedItems _unit select {
    (_x isKindOf ["ItemGPS", configFile >> "CfgWeapons"])
    or
    (_x isKindOf ["UavTerminal_base", configFile >> "CfgWeapons"])
};
if (count _oldGps > 0) then {
    _unit unlinkItem (_oldGps select 0);
};
if (_gps != "") then {
    _unit linkItem _gps;
};
