#include "script_component.hpp"

// Original Author: Blaubär / BaerMitUmlaut

{
    _x addEventHandler ["CuratorGroupPlaced", {
        params ["", "_group"];
        [QGVAR(transferGroup), [_group]] call CBA_fnc_serverEvent;
    }];

    _x addEventHandler ["CuratorObjectPlaced", {
        params ["", "_object"];
        if (_object isKindOf "CAManBase") then {
            if (count units _object == 1) then {
                [QGVAR(transferGroup), [group _object]] call CBA_fnc_serverEvent;
            };
        } else {
            if (count crew _object > 1) then {
                [QGVAR(transferGroup), [group (crew _object select 0)]] call CBA_fnc_serverEvent;
            };
        };
    }];

    false
} count allcurators;

[QGVAR(transferGroup), {
    params ["_group"];

    private _activeHCs = (entities "HeadlessClient_F") select {!local _x};
    if (_activeHCs isEqualTo []) exitWith {};

    private _hcClientIDs = _activeHCs apply {owner _x};
    private _hcsWithLoad = _hcClientIDs apply {[0, _x]};

    {
        private _hcIndex = _hcClientIDs find groupOwner _x;
        if (_hcIndex != -1) then {
            private _loadArray = _hcsWithLoad select _hcIndex;
            _loadArray params ["_load", "_hcID"];
            _loadArray set [0, _load + count units _x];
            _hcsWithLoad set [_hcIndex, _loadArray];
        };

        false
    } count allGroups;

    _hcsWithLoad sort true;
    _group setGroupOwner ((_hcsWithLoad select 0) select 1);
}] call CBA_fnc_addEventHandler;