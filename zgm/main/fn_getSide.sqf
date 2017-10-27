#include "script_component.hpp"

params ["_unit"];

if (_unit call FUNC(isCurator)) then {
	"b"
} else {
	tolower typeOf _unit select [0,1];
};
