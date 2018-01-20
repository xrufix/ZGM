#include "script_component.hpp"

["Land_PlasticBarrier_03_F", "init", { 
 params ["_object"]; 
    [_object, true, [0,1,0.5]] call ace_dragging_fnc_setCarryable; 
	[_object, true, [0,1,0]] call ace_dragging_fnc_setDraggable;
	[_object, true, 1] call ace_cargo_fnc_makeLoadable;
}, true, [], true] call CBA_fnc_addClassEventHandler;

["RoadBarrier_small_F", "init", {
	params ["_object"];
    [_object, true, [0,1,0.5]] call ace_dragging_fnc_setCarryable; 
	[_object, true, [0,1,0]] call ace_dragging_fnc_setDraggable;
	[_object, true, 1] call ace_cargo_fnc_makeLoadable;
}, true, [], true] call CBA_fnc_addClassEventHandler;