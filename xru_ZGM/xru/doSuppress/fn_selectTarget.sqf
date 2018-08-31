#include "script_component.hpp"

private _return = if ((_this isEqualType objNull) && {typeOf _this == "EmptyDetector"}) then {
    TRACE_1("Trigger detected", list _this);
    selectRandom (list _this);
} else {
    selectRandom _this;
};

_return