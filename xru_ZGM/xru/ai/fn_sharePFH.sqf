#include "script_component.hpp"

GVAR(groups) = GVAR(groups) select {
    private _group = _x;
    private _units = units _group;
    private _leader = leader _group;

    if (isNull _group) then {false} else {
        if !(local _group) then {false} else {
            if !({alive _x} count _units >= 1) then {false} else {
                {   private _player = _x;
                    if !(_player getVariable ["ACE_isUnconscious",false]) then {
                        if (side _player != side _group) then {
                            private _knowsAbout = _group knowsAbout _player;
                            if (_knowsAbout > 0) then {
                                {   private _target = _x;
                                    if (side _group == side _target) then {
                                        if ((_leader distance (leader _target)) <= REVEAL_DISTANCE) then {
                                            _target reveal [_player, _knowsAbout];
                                            #ifdef DEBUG_MODE_FULL
                                                systemChat (_fnc_scriptName + ": " + str [_target, _player, _knowsAbout]);
                                            #endif
                                        };
                                    };
                                    true
                                } count GVAR(groups);
                            };
                        };
                    };
                    true
                } count ALL_PLAYERS;
                true
            };
        };
    };
};
