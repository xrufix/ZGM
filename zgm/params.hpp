#include "script_macros_cfg.hpp"

class params {
    class faction_BLUFOR {
        title = CSTRING(PARAMS,BLUFOR);
        values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
        texts[] = {
            CSTRING(FACTIONS,AAF),
            CSTRING(FACTIONS,CHINA),
            CSTRING(FACTIONS,CHINA_GRN),
            CSTRING(FACTIONS,IDF),
            CSTRING(FACTIONS,IRAN),
            CSTRING(FACTIONS,IRAN_GRN),
            CSTRING(FACTIONS,IRAN_URB),
            CSTRING(FACTIONS,NATO_CTRG),
            CSTRING(FACTIONS,NATO_MTP),
            CSTRING(FACTIONS,NATO_TRPC),
            CSTRING(FACTIONS,NATO_WDL),
            CSTRING(FACTIONS,USARMY_OCP),
            CSTRING(FACTIONS,USARMY_UCP),
            CSTRING(FACTIONS,USMC_D),
            CSTRING(FACTIONS,USMC_W)
        };
        default = 8;
        function = QEFUNC(loadouts,factionBlufor);
        isGlobal = 1;
    };
    class faction_INDEP {
        title = CSTRING(PARAMS,INDEP);
        values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
        texts[] = {
            CSTRING(FACTIONS,AAF),
            CSTRING(FACTIONS,CHINA),
            CSTRING(FACTIONS,CHINA_GRN),
            CSTRING(FACTIONS,IDF),
            CSTRING(FACTIONS,IRAN),
            CSTRING(FACTIONS,IRAN_GRN),
            CSTRING(FACTIONS,IRAN_URB),
            CSTRING(FACTIONS,NATO_CTRG),
            CSTRING(FACTIONS,NATO_MTP),
            CSTRING(FACTIONS,NATO_TRPC),
            CSTRING(FACTIONS,NATO_WDL),
            CSTRING(FACTIONS,USARMY_OCP),
            CSTRING(FACTIONS,USARMY_UCP),
            CSTRING(FACTIONS,USMC_D),
            CSTRING(FACTIONS,USMC_W)
        };
        default = 0;
        function = QEFUNC(loadouts,factionIndep);
        isGlobal = 1;
    };
    class faction_OPFOR {
        title = CSTRING(PARAMS,OPFOR);
        values[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
        texts[] = {
            CSTRING(FACTIONS,AAF),
            CSTRING(FACTIONS,CHINA),
            CSTRING(FACTIONS,CHINA_GRN),
            CSTRING(FACTIONS,IDF),
            CSTRING(FACTIONS,IRAN),
            CSTRING(FACTIONS,IRAN_GRN),
            CSTRING(FACTIONS,IRAN_URB),
            CSTRING(FACTIONS,NATO_CTRG),
            CSTRING(FACTIONS,NATO_MTP),
            CSTRING(FACTIONS,NATO_TRPC),
            CSTRING(FACTIONS,NATO_WDL),
            CSTRING(FACTIONS,USARMY_OCP),
            CSTRING(FACTIONS,USARMY_UCP),
            CSTRING(FACTIONS,USMC_D),
            CSTRING(FACTIONS,USMC_W)
        };
        default = 1;
        function = QEFUNC(loadouts,factionOpfor);
        isGlobal = 1;
    };
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
    class AISkill {
        title = CSTRING(PARAMS,AISKILL);
		values[] = {2,4,6,8,10};
		texts[] = {
            CSTRING(PARAMS_AISKILL,LOWEST),
            CSTRING(PARAMS_AISKILL,LOW),
            CSTRING(PARAMS_AISKILL,DEFAULT),
            CSTRING(PARAMS_AISKILL,HIGH),
            CSTRING(PARAMS_AISKILL,HIGHEST)
        };
        default = 6;
        function = QEFUNC(server,AISkill);
        isGlobal = 0;
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
};