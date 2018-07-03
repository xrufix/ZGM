#include "config_macros.hpp"
#include "..\default_loadouts.hpp"

#define FACTION_PARAM(var1,var2) \
class DOUBLES(faction,var1) { \
    title = CSTRING(PARAMS,var1); \
    values[] = { \
        100, \
        113, \
        115, \
        125, \
        150, \
        175, \
        200, \
        225, \
        250, \
        275, \
        300, \
        310, \
        315, \
        325, \
        350, \
        375, \
        400, \
        425, \
        475, \
        500, \
        525, \
        540, \
        550, \
        575, \
        600, \
        625, \
        650, \
        675, \
        700, \
        725, \
        750, \
        775, \
        800 \
    }; \
    texts[] = { \
/* 100 */   CSTRING(FACTIONS,AAF), \
/* 113 */   CSTRING(FACTIONS,BAF_DPM), \
/* 115 */   CSTRING(FACTIONS,BAF_MTP), \
/* 125 */   CSTRING(FACTIONS,BEL_DES), \
/* 150 */   CSTRING(FACTIONS,BEL_WDL), \
/* 175 */   CSTRING(FACTIONS,BHEER), \
/* 200 */   CSTRING(FACTIONS,BW_FLECK), \
/* 225 */   CSTRING(FACTIONS,BW_TROP), \
/* 250 */   CSTRING(FACTIONS,CDF), \
/* 275 */   CSTRING(FACTIONS,CHINA), \
/* 300 */   CSTRING(FACTIONS,CHINA_GRN), \
/* 310 */   CSTRING(FACTIONS,CTRG_DES), \
/* 315 */   CSTRING(FACTIONS,CTRG_WDL), \
/* 325 */   CSTRING(FACTIONS,FIA), \
/* 350 */   CSTRING(FACTIONS,IDF), \
/* 375 */   CSTRING(FACTIONS,IRAN), \
/* 400 */   CSTRING(FACTIONS,IRAN_GRN), \
/* 425 */   CSTRING(FACTIONS,IRAN_URB), \
/* 475 */   CSTRING(FACTIONS,NATO_MTP), \
/* 500 */   CSTRING(FACTIONS,NATO_TRPC), \
/* 525 */   CSTRING(FACTIONS,NATO_WDL), \
/* 540 */   CSTRING(FACTIONS,RU_35), \
/* 550 */   CSTRING(FACTIONS,RU_DES), \
/* 575 */   CSTRING(FACTIONS,RU_EMR), \
/* 600 */   CSTRING(FACTIONS,RU_FLORA), \
/* 625 */   CSTRING(FACTIONS,RU_MOUNT), \
/* 650 */   CSTRING(FACTIONS,SYND), \
/* 675 */   CSTRING(FACTIONS,TAKI_INS), \
/* 700 */   CSTRING(FACTIONS,TAKISTAN), \
/* 725 */   CSTRING(FACTIONS,USARMY_OCP), \
/* 750 */   CSTRING(FACTIONS,USARMY_UCP), \
/* 775 */   CSTRING(FACTIONS,USMC_D), \
/* 800 */   CSTRING(FACTIONS,USMC_W) \
    }; \
    default = var2; \
    function = QEFUNC(loadouts,GLUE(faction,var1)); \
    isGlobal = 1; \
};


FACTION_PARAM(BLUFOR,DEFAULT_B)
FACTION_PARAM(INDEP,DEFAULT_I)
FACTION_PARAM(OPFOR,DEFAULT_O)

class GuerFriendly
{
    title = "$STR_DISP_INTEL_EDIT_GUERILLA";
    values[] = {-1,1,0,2};
    texts[] = {
        "$STR_DISP_INTEL_NONE_FRIENDLY",
        "$STR_DISP_INTEL_WEST_FRIENDLY",
        "$STR_DISP_INTEL_EAST_FRIENDLY",
        "$STR_DISP_INTEL_BOTH_FRIENDLY"
    };
    default = -1;
    function = "BIS_fnc_paramGuerFriendly";
};
class Daytime {
    title = CSTRING(PARAMS,DAYTIME);
    values[] = {0,1,2,3,4};
    texts[] = {
        CSTRING(PARAMS_DAYTIME,RANDOM),
        CSTRING(PARAMS_DAYTIME,MORNING),
        CSTRING(PARAMS_DAYTIME,NOON),
        CSTRING(PARAMS_DAYTIME,EVENING),
        CSTRING(PARAMS_DAYTIME,NIGHT)
    };
    default = 0;
    function = QEFUNC(server,daytime);
    isGlobal = 0;
};
class Weather {
    title = "$STR_A3_rscattributeovercast_title";
    values[] = {0,25,50,75,100};
    texts[] = {
        "$STR_A3_rscattributeovercast_value000_tooltip",
        "$STR_A3_rscattributeovercast_value025_tooltip",
        "$STR_A3_rscattributeovercast_value050_tooltip",
        "$STR_A3_rscattributeovercast_value075_tooltip",
        "$STR_A3_rscattributeovercast_value100_tooltip"
    };
    default = 25;
    function = "BIS_fnc_paramWeather";
    isGlobal = 0;
};
