/*
 * Author: xrufix
 * Makes Unit Insignia show up in multiplayer by reapplying it 6 seconds after mission start.
 *
 * Arguments:
 * NONE
 *
 * Return Value:
 * NONE
 *
 * Example:
 * [] call xru_misc_fnc_insigniaFix;
 *
 */
#include "script_component.hpp"

if !hasInterface exitWith {};

[] spawn {
	sleep 6;
	[player, (getArray (missionConfigFile >> "CfgLoadouts" >> ([player] call Poppy_fnc_selectLoadout) >> "insignia"))] call Poppy_fnc_replaceInsignia;
};