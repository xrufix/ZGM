// #define DEBUG_MODE_FULL

#define COMPONENT ai
#include "..\script_component.hpp"

#define DETECT_INTERVAL 1
#define DETECT_TIMETOMAX 30
#define DETECT_FACTOR (DETECT_INTERVAL / DETECT_TIMETOMAX)
#define DETECT_DISTANCE 600

#define REVEAL_DISTANCE 2000
#define REVEAL_INTERVAL 60

#define MAX_FOV (cos 30)
#define CHECK_IN_FOV(unit,target) ((eyepos target vectorDiff eyepos unit) vectorCos (eyeDirection unit)) > MAX_FOV
