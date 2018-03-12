#define COMPONENT addons

#ifndef EASYTRACK_MODE
    #define EASYTRACK_MODE 2
#endif
#ifndef ACRE_UNIQUE
    #define ACRE_UNIQUE 0
#endif
#ifndef ACE_MICRODAGR_MAPFILL
    #define ACE_MICRODAGR_MAPFILL 1
#endif
#ifndef ACE_INTERACTION_TEAMMANAGEMENT
    #define ACE_INTERACTION_TEAMMANAGEMENT 0
#endif

class GVAR(easytrack) {
    title = "xru_addons: [Easytrack] Allow BFT/RFT";
    values[] = {0,1,2};
    texts[] = {
        "Disabled",
        "BFT",
        "BFT & RFT"
    };
    default = EASYTRACK_MODE;
    function = QFUNC(easytrack);
    isGlobal = 1;
};
class GVAR(acre) {
    title = "xru_addons: [ACRE2] Unique channels per side";
    values[] = {0,1};
    texts[] = {
        "No",
        "Yes"
    };
    default = ACRE_UNIQUE;
    function = QFUNC(acre);
    isGlobal = 1;
};
class GVAR(ace_microdagr) {
    title = "xru_addons: [ACE] MicroDagr";
    values[] = {2,1,0};
    texts[] = {
        "$STR_ACE_MicroDAGR_MapFill_Full",
        "$STR_ACE_MicroDAGR_MapFill_OnlyRoads",
        "$STR_ACE_MicroDAGR_MapFill_None"
    };
    default = ACE_MICRODAGR_MAPFILL;
    function = QFUNC(ace_microdagr);
    isGlobal = 1;
};