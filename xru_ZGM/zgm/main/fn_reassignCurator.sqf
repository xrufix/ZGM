#include "script_component.hpp"

params ["_unit"];

private _unitName = vehicleVarName _unit;
private _moduleName = "m" + (_unitName select [1]);

private _module = missionNamespace getVariable _moduleName;

[{	// Unassign any assigned curator
    _this remoteExec ["unassignCurator", 2];
}, [_module], 3] call CBA_fnc_waitAndExecute;

[{	// Assign the player to the now vacant module
    _this remoteExec ["assignCurator", 2];
}, [_unit, _module], 6] call CBA_fnc_waitAndExecute;
