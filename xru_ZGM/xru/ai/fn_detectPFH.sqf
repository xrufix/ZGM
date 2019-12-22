#include "script_component.hpp"

if (isGamePaused) exitWith {};

private _factor = (time - GVAR(detect_lastTime)) / DETECT_TIMETOMAX;

// Caculate environmental effects:
private _rain = 1 - (rain / 2);
private _sunlight = call EFUNC(misc,sunlight);
private _moonlight = moonIntensity / 3 * (1 - overcast);
private _lightFactor = _sunlight max _moonlight;
TRACE_4("environmental",_rain,overcast,_sunlight,_moonlight);

GVAR(units) = GVAR(units) select {
    private _unit = _x;
    if !(local _unit) then {false} else {
        if !(alive _unit) then {false} else {
            if !(_unit getVariable ["ACE_isUnconscious",false]) then {
                {
                    private _player = _x;
                    if !(_player getVariable ["ACE_isUnconscious",false]) then {
                        private _distance = _player distance _unit;
                        if (_distance < DETECT_DISTANCE) then {
                            private _knowsAbout = _unit knowsAbout _player;
                            if (_knowsAbout < 4) then {
                                if (CHECK_IN_FOV(_unit,_player)) then {
                                    private _playerPos = eyePos _player vectorAdd [0,0,-0.4];
                                    private _unitPos = eyePos _unit;
                                    if ((count lineIntersectsSurfaces [_playerPos, _unitPos, _player, _unit]) == 0) then {
                                        // compare distance
                                        private _value = linearConversion [DETECT_DISTANCE / 4, DETECT_DISTANCE, _distance, 4 , 1, true];
                                        // compare players camouflage
                                        private _camoTrait = [_player getUnitTrait "camouflageCoef"] param [0,1];
                                        private _camouflage = _player getVariable [QGVAR(camouflage), 1];
                                        // compare environmental/weather effects
                                        private _visionMode = currentVisionMode _unit;
                                        private _light = if (_visionMode != 0) then {_visionMode / 2} else {_lightFactor};
                                        // compute and apply
                                        private _reveal = 4 min (_knowsAbout + (_value * _camoTrait * _camouflage * _rain * _light * DETECT_FACTOR));
                                        _unit reveal [_player, _reveal];
                                        TRACE_8("reveal",_unit,_player,_reveal,_value,_camoTrait,_camouflage,_rain,_light);
                                        #ifdef DEBUG_MODE_FULL
                                            systemChat (_fnc_scriptName + ": " + str [_unit, _player, _reveal, _reveal - _knowsAbout]);
                                        #endif
                                    };
                                };
                            };
                        };
                    };
                } count ALL_PLAYERS;
            };
            true
        };
    };
};
