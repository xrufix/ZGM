class CommonDefault;

#include "common\macros.hpp"
#include "common\traits.hpp"


#define COMMON Common##SIDE##FACTION
#define LOADOUT(var1,var2) QUADRUPLES(SIDE_SHORT,FACTION,var1,var2)

#define SIDE Blufor
#define SIDE_SHORT b
#define GRENADES_BASIC  ARR_4("ACE_Chemlight_Orange","ACE_Chemlight_White","SmokeShellOrange","SmokeShellPurple")
class CommonBlufor : CommonDefault {};
#include "factions.hpp"


#define SIDE Indep
#define SIDE_SHORT i
#define GRENADES_BASIC  ARR_4("Chemlight_blue","Chemlight_yellow","SmokeShellBlue","SmokeShellYellow")
class CommonIndependant : CommonDefault {};
#include "factions.hpp"

#define SIDE Opfor
#define SIDE_SHORT o
#define GRENADES_BASIC  ARR_4("Chemlight_red","Chemlight_green","SmokeShellRed","SmokeShellGreen")
class CommonOpfor : CommonDefault {};
#include "factions.hpp"

class CommonCivilian : CommonDefault {};
