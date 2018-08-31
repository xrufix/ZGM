#include "script_component.hpp"

GVAR(bullets) = [];
GVAR(lastShotAt) = 0;
GVAR(suppression) = 0;
GVAR(lastReduce) = 0;

if (isNil QGVAR(Blinking)) 		then { GVAR(Blinking) = 1 };
if (isNil QGVAR(Camshake))	 	then { GVAR(Camshake) = 1 };
if (isNil QGVAR(Tunnelvision)) 	then { GVAR(Tunnelvision) = 1 };
if (isNil QGVAR(weaponSway)) 	then { GVAR(weaponSway) = 1 };
if (isNil QGVAR(climbRate)) 	then { GVAR(climbRate) = 1 };
if (isNil QGVAR(sinkRate)) 		then { GVAR(sinkRate) = .1 };