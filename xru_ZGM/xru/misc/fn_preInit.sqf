
#include "script_component.hpp"

_fnc_hourFromElevation = {
    params ["_date", "_elevation"];

    private _equinox = (360 * datetonumber _date) - (360 * 81 / 365);
    private _inc = asin (sin 23.44 * sin _equinox);
    private _lat = - getnumber (configfile >> "cfgworlds" >> worldname >> "latitude");

    private _hourAngle = ((sin _elevation) - (sin _inc) * (sin _lat)) / ((cos _lat) * (cos _inc));
    private _hour = (180 - acos _hourAngle) / 15;
    _hour
};

GVAR(dawn) = [
    [date,-12] call _fnc_hourFromElevation,
    [date,6] call _fnc_hourFromElevation
];
