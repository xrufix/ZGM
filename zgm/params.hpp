class params {
    class faction_BLUFOR {
        title = "BLUFOR Army";
        values[] = {0,1,2,3,4,5,6,7,8};
        texts[] = {
            "NATO MTP (Default)",
            "NATO Tropic",
            "NATO Woodland",
            "CTRG",
            "US Army OCP",
            "US Army UCP",
            "USMC Desert",
            "USMC Woodland",
            "Israeli Defense Forces"
        };
        default = 0;
        function = "zgm_loadouts_fnc_factionBLUFOR";
        isGlobal = 1;
    };
    class faction_INDEP {
        title = "INDEP Army";
        values[] = {0,1,2};
        texts[] = {
            "AAF (Default)",
            "Israeli Defense Forces",
            "CTRG"
        };
        default = 0;
        function = "zgm_loadouts_fnc_factionINDEP";
        isGlobal = 1;
    };
    class faction_OPFOR {
        title = "OPFOR Army";
        values[] = {0,1};
        texts[] = {
            "CSAT",
            "CSAT Pacific"
        };
        default = 0;
        function = "zgm_loadouts_fnc_factionOPFOR";
        isGlobal = 1;
    };
    class GuerFriendly
    {
        title = $STR_DISP_INTEL_EDIT_GUERILLA;
        values[] = {-1,1,0,2};
        texts[] = {
            $STR_DISP_INTEL_NONE_FRIENDLY,
            $STR_DISP_INTEL_WEST_FRIENDLY,
            $STR_DISP_INTEL_EAST_FRIENDLY,
            $STR_DISP_INTEL_BOTH_FRIENDLY
        };
        default = -1;
        function = "BIS_fnc_paramGuerFriendly";
    };
    class AISkill {
        title = "AI Skill";
		values[] = {2,4,6,8,10};
		texts[] = {"Very Low","Low","Default","High","Very High"};
        default = 6;
        function = "zgm_server_fnc_AISkill";
        isGlobal = 0;
    };
	class Daytime {
		title = "Time of Day";
		values[] = {0,1,2,3,4};
		texts[] = {"Random (Default)","Morning","Midday","Evening","Night"};
        default = 0;
        function = "zgm_server_fnc_daytime";
        isGlobal = 0;
    };
    class Weather {
        title = $STR_A3_rscattributeovercast_title;
        values[] = {0,25,50,75,100};
        texts[] = {
            $STR_A3_rscattributeovercast_value000_tooltip,
            $STR_A3_rscattributeovercast_value025_tooltip,
            $STR_A3_rscattributeovercast_value050_tooltip,
            $STR_A3_rscattributeovercast_value075_tooltip,
            $STR_A3_rscattributeovercast_value100_tooltip
        };
        default = 25;
        function = "BIS_fnc_paramWeather";
        isGlobal = 0;
    };
};