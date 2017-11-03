class COMMON : CommonDefault {
    side = QUOTE(SIDE);
    sideShort = QUOTE(SIDE_SHORT);
#ifdef FACTION
    faction = QUOTE(FACTION);
#endif

    uniform[] = {UNIFORM};
    vest[] = {VEST_EMPTY};
    backpack[] = {BACKPACK_ASSAULT};

    primary[] = {RIFLE_CCO};
    secondary[] = {PISTOL};
    launcher[] = {""};

    magazines[] = {MAGS_COMMON};
    items[] = {
        "ACE_EarPlugs",
        "ACE_microDAGR",
        "ACE_fieldDressing",10,
        "ACE_morphine",
        "ACE_tourniquet"
    };

    headgear[] = {HELMET};
    goggles[] = {GOGGLES};
    nvgs[] = {NVG};
    binoculars[] = {""};

    map[] = {""};
    gps[] = {""};
    compass[] = {"ItemCompass"};
    watch[] = {"ItemWatch"};

    lrRadios[] = {""};
    insignia[] = {INSIGNIA_COMMON};

    preLoadout = TRAITS(0,0,false,false);
};

/* ###################### - Company Command - ###################### */
class LOADOUT(company,common) : COMMON {
    uniform[] = {UNIFORM_COMPANY};
    vest[] = {VEST_OFFICER};
    backpack[] = {BACKPACK_RADIO};
    primary[] = {PDW};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_PDW,3
    };
    items[] += {"ACE_MapTools"};

    headgear[] = {CAP_OFFICER};
    goggles[] = {GOGGLES_OFFICER};
    nvgs[] = {""};
    binoculars[] = {RANGEFINDER};

    map[] = {"ItemMap"};
    gps[] = {EASYTRACK_PDA};

    lrRadios[] = {RADIO_PACK};
};
//CO
class LOADOUT(company,co) : LOADOUT(company,common) {
    displayName = DN_CO_CO;
    headgear[] = {CAP_CO};
};
//XO
class LOADOUT(company,xo) : LOADOUT(company,common) {
    gps[] = {EASYTRACK_TABLET};
    headgear[] = {CAP_XO};
};
//MIO
class LOADOUT(company,mio) : LOADOUT(company,common) {
    gps[] = {EASYTRACK_TABLET};
};
//CoLo
class LOADOUT(company,colo) : LOADOUT(company,common) {
    items[] += {"CL_Logitracker"};
};
//FO
class LOADOUT(company,fo) : LOADOUT(company,common) {
    items[] += {"ACE_RangeTable_82mm"};
};

/* ###################### - Platoon Lead - ###################### */
//PL Basis
class LOADOUT(platoon,common): COMMON {
    vest[] = {VEST_LIGHT};
    backpack[] = {BACKPACK_RADIO};
    primary[] = {CARBINE_CCO};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,5,
        MAG_CARBINE_TRACER,2,
        GRENADES_BASIC
    };
    items[] += {"ACE_MapTools"};
    headgear[] = {HELMET_BARE};
    gps[] = {EASYTRACK_PDA};
    map[] = {"ItemMap"};
    binoculars[] = {RANGEFINDER};
    goggles[] = {GOGGLES_OFFICER};
    lrRadios[] = {RADIO_HAND};
};
//PL
class LOADOUT(platoon,pl) : LOADOUT(platoon,common) {
    lrRadios[] += {RADIO_PACK};
};
//PSgt
class LOADOUT(platoon,psgt) : LOADOUT(platoon,common) {
    gps[] = {EASYTRACK_TABLET};
    lrRadios[] += {RADIO_PACK};
};
//UAV Operator
class LOADOUT(platoon,uav) : LOADOUT(platoon,common) {
    items[] += {"ACE_UAVBattery",TERMINAL};
};
//JTAC
class LOADOUT(platoon,jtac) : LOADOUT(platoon,common) {
    vest[] = {VEST_GRENADIER};
    backpack[] = {BACKPACK_KITBAG};
    primary[] = {CARBINE_UGL_HOLO};
    binoculars[] = {DESIGNATOR};
    lrRadios[] += {RADIO_PACK};
    magazines[] += {
        "Laserbatteries",
        UGL_SMK,2,
        UGLS_COL2,
        UGLS_FLR
    };
};
//Platoon-Medic
class LOADOUT(platoon,medic) : LOADOUT(platoon,common) {
    vest[] = {VEST_MEDIC};
    backpack[] = {BACKPACK_KITBAG};
    items[] += {
        "ACE_personalAidKit",2,
        "ACE_salineIV_500",10,
        "ACE_surgicalKit",
        "W_Defibrillator",
        "ACE_elasticBandage",50,
        "ACE_quikclot",30,
        "ACE_tourniquet",6,
        "ACE_morphine",15,
        "ACE_epinephrine",30
    };
    preLoadout = TRAITS(2,0,false,false);
};

/* ###################### - Rifle Squad - ###################### */
//Squadleader
class LOADOUT(squad,sl) : COMMON {
    vest[] = {VEST_SL};
    gps[] = {EASYTRACK_PDA};
    binoculars[] = {RANGEFINDER};
    primary[] = {RIFLE_UGL_CCO};
    magazines[] += {
        #ifdef HUNTIR
            "ACE_HuntIR_M203",4,
        #endif
        UGL_HE,10,
        UGL_SMK,2,
        UGLS_COL1,
        UGLS_FLR
    };
    items[] += {
        "ACE_IR_Strobe_Item"
        #ifdef HUNTIR
            ,"ACE_HuntIR_monitor"
        #endif
    };
    lrRadios[] = {RADIO_HAND};
    map[] = {"ItemMap"};
};
//Fireteam Leader (kein Granatwerfer!)
class LOADOUT(squad,ftl) : COMMON {
    vest[] = {VEST_TL};
    binoculars[] = {BINOCULAR};
    items[] += {"ACE_IR_Strobe_Item"};
};
//Automatic Rifleman
class LOADOUT(squad,ar) : COMMON {
    vest[] = {VEST_MG};
    primary[] = {AUTORIFLE};
    magazines[] = {
        MAGS_AUTORIFLE,
        MAG_PISTOL,3,
        GRENADES_MINI
    };
    goggles[] = {GOGGLES_FULL};
};
//Grenadier
class LOADOUT(squad,gl) : COMMON {
    vest[] = {VEST_GRENADIER};
    primary[] = {RIFLE_UGL_CCO};
    magazines[] += {UGLS_GREN};
};
//Grenadier M32
class LOADOUT(squad,gl2) : COMMON {
    vest[] = {VEST_GRENADIER};
    primary[] = {"rhs_weap_m32"};
    magazines[] = {
        MAG_PISTOL,5,
        "rhsusf_mag_6Rnd_M433_HEDP",5,
        "rhsusf_mag_6Rnd_M714_white",1,
        "rhsusf_mag_6Rnd_M576_Buckshot",2,
        GRENADES_RGO
    };
};
//Rifleman (Light)
class LOADOUT(squad,light) : COMMON {
    primary[] = {RIFLE_RCO};
    vest[] = {VEST_RIFLEMAN};
};
//Rifleman (Ass. Autorifleman)
class LOADOUT(squad,aar) : COMMON {
    backpack[] = {BACKPACK_KITBAG};
    primary[] = {RIFLE_RCO};
    vest[] = {VEST_RIFLEMAN};
    magazines[] = {
        "ACE_SpareBarrel",
        MAGS_AUTORIFLE_ASST,
        MAGS_COMMON
    };
};
//Rifleman AT
class LOADOUT(squad,lat) : COMMON {
    vest[] = {VEST_RIFLEMAN};
    backpack[] = {BACKPACK_AT_LIGHT};
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//Combat Medic
class LOADOUT(squad,cm) : COMMON {
    vest[] = {VEST_MEDIC};
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",4,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV_500",2,
        "ACE_surgicalKit"
    };
    preLoadout = TRAITS(1,0,false,false);
};
//Squad Designated Marksman
class LOADOUT(squad,dm) : COMMON {
    vest[] = {VEST_DM};
    primary[] = {DMR};
    items[] += {"ACE_RangeCard"};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_DMR,10,
        GRENADES_RGO
    };
};
//Combat Engineer
class LOADOUT(squad,eng) : COMMON {
    vest[] = {VEST_RIFLEMAN};
    items[] += {"ToolKit"};
    preLoadout = TRAITS(0,1,false,false);
};


/* ###################### - Weapon Squad - ###################### */
//Common
class LOADOUT(weapons,common): COMMON {
    backpack[] = {""};
    vest[] = {VEST_RIFLEMAN};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_RIFLE,5,
        MAG_RIFLE_TRACER,2,
        GRENADES_RGO
    };
};
class LOADOUT(assistant,common): LOADOUT(weapons,common) {
    backpack[] = {BACKPACK_KITBAG};
    binoculars[] = {BINOCULAR};
};
//MMG
class LOADOUT(weapons,mg) : LOADOUT(weapons,common) {
    vest[] = {VEST_MG};
    primary[] = {MMG};
    magazines[] = {
        MAG_PISTOL,3,
        MAGS_MMG,
        GRENADES_BASIC
    };
    goggles[] = {GOGGLES_FULL};
};
//MMG Assistant
class LOADOUT(weapons,amg) : LOADOUT(assistant,common) {
    magazines[] += {MAGS_MMG_ASST,"ACE_SpareBarrel"};
};
//HMG
class LOADOUT(weapons,hmg) : LOADOUT(weapons,common) {
    backpack[] = {HMG_GUN};
};
//HMG Assistant
class LOADOUT(weapons,ahmg) : LOADOUT(assistant,common) {
    backpack[] = {HMG_TRIPOD};
};
//GMG
class LOADOUT(weapons,gmg) : LOADOUT(weapons,common) {
    backpack[] = {GMG_GUN};
};
//GMG Assistant
class LOADOUT(weapons,agmg) : LOADOUT(assistant,common) {
    backpack[] = {GMG_TRIPOD};
};
//MS AT
class LOADOUT(weapons,at) : LOADOUT(weapons,common) {
    backpack[] = {BACKPACK_AT_LIGHT};
    launcher[] = {AT_ROCKET};
};
//AMS AT
class LOADOUT(weapons,aat) : LOADOUT(assistant,common) {
    backpack[] = {BACKPACK_CARRYALL};
    magazines[] += {MAGS_AT_ROCKET_ASST};
};
//MS AT
class LOADOUT(weapons,atgm) : LOADOUT(weapons,common) {
    launcher[] = {AT_MISSILE};
    magazines[] += {MAGS_AT_MISSILE};
};
//AMS AT
class LOADOUT(weapons,aatgm) : LOADOUT(assistant,common) {
    backpack[] = {BACKPACK_CARRYALL};
    magazines[] += {MAGS_AT_MISSILE_ASST};
};
//MS AA
class LOADOUT(weapons,aa) : LOADOUT(weapons,common) {
    launcher[] = {AA_MISSILE};
    magazines[] += {MAGS_AA_MISSILE};
};
//AMS AA
class LOADOUT(weapons,aaa) : LOADOUT(assistant,common) {
    magazines[] += {MAGS_AA_MISSILE_ASST};
};
//M252 Gunner
class LOADOUT(weapons,mort) : LOADOUT(weapons,common) {
    backpack[] = {MORTAR_GUN};
    items[] += {"ACE_RangeTable_82mm"};
};
//M252 Assistant
class LOADOUT(weapons,amort) : LOADOUT(assistant,common) {
    backpack[] = {MORTAR_POD};
    items[] += {"ACE_RangeTable_82mm"};
};

class LOADOUT(weapons,acmort) : LOADOUT(assistant,common) {
    items[] += {"ACE_1Rnd_82mm_Mo_HE",5};
    //"ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum"
};

/* ###################### - Reconnaissance - ###################### */
//Common Recon
class LOADOUT(recon,common): COMMON {
    uniform[] = {UNIFORM_RECON};
    vest[] = {VEST_RECON};
    backpack[] = {BACKPACK_RECON};
    secondary[] = {PISTOL_SF};
    primary[] = {RIFLE_RECON};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_RIFLE_RECON,9,
        MAG_RIFLE_RECON_TRACER,2,
        GRENADES_RGO
    };
    items[] += {
        "ACE_IR_Strobe_Item",
        "ACE_CableTie",2
    };
    goggles[] = {GOGGLES_SF};
    headgear[] = {HELMET_SF};
    nvgs[] = {NVG_SF};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_SF};
    preLoadout = TRAITS(1,1,false,false);
};
//Operator
class LOADOUT(recon,rm) : LOADOUT(recon,common) {
    items[] += {
        "ACE_wirecutter"
    };
};
//Teamlead
class LOADOUT(recon,tl) : LOADOUT(recon,common) {
    vest[] = {VEST_RECON_TL};
    primary[] = {RIFLE_UGL_RECON};
    magazines[] += {
        UGL_HE,10,
        UGL_SMK,2,
        UGLS_COL1,
        GRENADE_IR,
        #ifdef HUNTIR
            "ACE_HuntIR_M203",5
        #endif
    };
    items[] += {
        "ACE_IR_Strobe_Item"
        #ifdef HUNTIR
            ,"ACE_HuntIR_monitor"
        #endif
    };
    binoculars[] = {RANGEFINDER};
    gps[] = {EASYTRACK_PDA};
    lrRadios[] = {RADIO_HAND};
};
//AR
class LOADOUT(recon,ar) : LOADOUT(recon,common) {
    vest[] = {VEST_RECON_MG};
    primary[] = {AUTORIFLE_RECON};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_AUTORIFLE_RECON,
        GRENADES_RGO
    };
    items[] += {LASERPOINTER};
    goggles[] = {GOGGLES_SF_FULL};
};
//Grenadier
class LOADOUT(recon,gl) : LOADOUT(recon,common) {
    vest[] = {VEST_RECON_GR};
    primary[] = {RIFLE_UGL_RECON};
    magazines[] += {UGLS_GREN};
};
//LAT
class LOADOUT(recon,lat) : LOADOUT(recon,common) {
    launcher[] = {AT_LIGHT};
    magazines[] += {MAGS_AT_LIGHT};
};
//CM
class LOADOUT(recon,cm) : LOADOUT(recon,common) {
    items[] += {
        "ACE_fieldDressing",10,
        "ACE_elasticBandage",30,
        "ACE_quikclot",20,
        "ACE_tourniquet",3,
        "ACE_morphine",6,
        "ACE_epinephrine",12,
        "ACE_salineIV_500",3,
        "ACE_surgicalKit"
    };
    preLoadout = TRAITS(2,0,false,false);
};
//Marksman
class LOADOUT(recon,dm) : LOADOUT(recon,common) {
    primary[] = {DMR_RECON};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_DMR_RECON,10,
        GRENADES_RGO
    };
    items[] += {DMR_BIPOD};
};
//Explosive Specialist
class LOADOUT(recon,exp) : LOADOUT(recon,common) {
    backpack[] = {BACKPACK_KITBAG};
    secondary[] = {"ACE_VMM3"};
    magazines[] += {
        "DemoCharge_Remote_Mag",4,
        "SatchelCharge_Remote_Mag",
        "SLAMDirectionalMine_Wire_Mag",2
    };
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    preLoadout = TRAITS(0,1,true,false);
};

/* ###################### - Diver - ###################### */
class LOADOUT(diver,common) : LOADOUT(recon,common) {
    uniform[] = {UNIFORM_DIVER};
    vest[] = {VEST_BREATHER};
    backpack[] = {BACKPACK_DIVER};
    primary[] = {RIFLE_DIVER};
    secondary[] = {PISTOL_SF};
    gps[] = {EASYTRACK_PDA};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_RIFLE_RECON,10,
        GRENADES_BASIC,
        "ACE_M84",4
    };
    items[] += {
        VEST_DIVER,
        UNIFORM_SINGLE
    };
    goggles[] = {GOGGLES_DIVER};
    headgear[] = {HELMET_DIVER};
    nvgs[] = {"NVGoggles_OPFOR"};
};
//Assault Diver
class LOADOUT(diver,rm) : LOADOUT(diver,common) {};
//Diver Team Lead
class LOADOUT(diver,tl) : LOADOUT(diver,common) {
    binoculars[] = {RANGEFINDER};
    lrRadios[] = {RADIO_HAND};
    map[] = {"ItemMap"};
    magazines[] += {"MiniGrenade",2};
    items[] += {"ACE_MapTools"};
};
//Diver Explosive Specialist
class LOADOUT(diver,exp) : LOADOUT(diver,common) {
    magazines[] += {"DemoCharge_Remote_Mag",4};
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    preLoadout = TRAITS(0,1,true,false);
};
// Diver Medic
class LOADOUT(diver,cm) : LOADOUT(diver,common) {
    items[] += {
        "W_Defibrillator",
        "ACE_fieldDressing",5,
        "ACE_elasticBandage",15,
        "ACE_quikclot",15,
        "ACE_tourniquet",3,
        "ACE_morphine",10,
        "ACE_epinephrine",10,
        "ACE_salineIV",4,
        "ACE_surgicalKit"
    };
    binoculars[] = {"ACE_MX2A"};
    preLoadout = TRAITS(2,0,false,false);
};
// Marksman
class LOADOUT(diver,dm) : LOADOUT(diver,common) {
    primary[] = {DMR_DIVER};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAG_DMR_RECON,10,
        GRENADES_RGO,
        "ACE_M84",4
    };
    items[] += {DMR_BIPOD};
};
// Diver TL/JTAC
class LOADOUT(diver,jtac) : LOADOUT(diver,tl) {
    primary[] = {RIFLE_UGL_DIVER};
    binoculars[] = {DESIGNATOR};
    magazines[] += {
        "Laserbatteries",
        UGLS_COL2
    };
};

/* ###################### - Sniper - ###################### */
//Spotter
class LOADOUT(sniper,common) : LOADOUT(recon,common) {
    uniform[] = {UNIFORM_SNIPER};
    map[] = {"ItemMap"};
    items[] += {
        SNIPER_OPTIC_NV,
        "ACE_Rangecard"
    };
};
class LOADOUT(sniper,spot) : LOADOUT(recon,common) {
    uniform[] = {UNIFORM_SNIPER};
    primary[] = {RIFLE_UGL_RECON_TAN};
    gps[] = {EASYTRACK_PDA};
    binoculars[] = {RANGEFINDER};
    magazines[] = {
        MAG_PISTOL_SF,3,
        GRENADE_IR,
        GRENADES_RGO,
        MAG_RIFLE_RECON,8,
        MAG_RIFLE_RECON_TRACER,2,
        UGL_HE,10,
        UGL_SMK,4
        #ifdef HUNTIR
            ,"ACE_HuntIR_M203",4
        #endif
    };
    items[] += {
        "ACE_SpottingScope",
        "ACE_Tripod",
        "ACE_ATragMX",
        "ACE_IR_Strobe_Item",
        "ACE_Rangecard",
        "ACE_Kestrel4500"
        #ifdef HUNTIR
            ,"ACE_HuntIR_monitor"
        #endif
    };
    lrRadios[] = {RADIO_HAND};
};
//Sniper Anti-Personel
class LOADOUT(sniper,ap): LOADOUT(sniper,common) {
    primary[] = {SR_AP};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AP,
        GRENADES_BASIC
    };
};
//Sniper Anti-Materiel
class LOADOUT(sniper,am) : LOADOUT(sniper,common) {
    primary[] = {SR_AM};
    magazines[] = {
        MAG_PISTOL_SF,3,
        MAGS_SR_AM,
        GRENADES_BASIC
    };
};
//Explosives
class LOADOUT(sniper,exp) : LOADOUT(recon,common) {
    uniform[] = {UNIFORM_SNIPER};
    primary[] = {RIFLE_RECON_TAN};
    magazines[] += {
        "APERSTripMine_Wire_mag",2,
        "ClaymoreDirectionalMine_Remote_mag",2
    };
    items[] += {
        "ACE_Clacker",
        "ACE_SpraypaintRed",
        "ACE_SpraypaintGreen",
        "ACE_DefusalKit",
        "ACE_DeadManSwitch"
    };
    preLoadout = TRAITS(1,0,true,false);
};

/* ###################### - Tank - ###################### */
//Crewman (Driver, Gunner)
class LOADOUT(crew,common) : COMMON {
    uniform[] = {UNIFORM_CREW};
    backpack[] = {""};
    vest[] = {VEST_CREW};
    primary[] = {CARBINE};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,6,
        GRENADES_BASIC
    };
    headgear[] = {HELMET_CREW};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_TNK};
    lrRadios[] = {RADIO_HAND};
    preLoadout = TRAITS(0,1,false,false);
};
//Tank Commander
class LOADOUT(crew,cmd) : LOADOUT(crew,common) {
    backpack[] = {BACKPACK_RADIO};
    lrRadios[] += {RADIO_PACK};
    gps[] = {EASYTRACK_PDA};
    binoculars[] = {BINOCULAR};
};

/* ###################### - Aircraft - ###################### */
//Jetpilot
class LOADOUT(crew,jet) : COMMON {
    uniform[] = {UNIFORM_JET};
    vest[] = {""};
    backpack[] = {""};
    primary[] = {""};
    magazines[] = {
        MAG_PISTOL,3,
        GRENADES_BASIC
    };
    headgear[] = {HELMET_JET};
    map[] = {"itemMap"};
    gps[] = {EASYTRACK_PDA};
    nvgs[] = {""};
    watch[] = {"ACE_Altimeter"};
    goggles[] = {GOGGLES_PILOT};
    insignia[] = {INSIGNIA_JET};
};
//HeliCrew
class LOADOUT(crew,heli) : LOADOUT(crew,common) {
    uniform[] = {UNIFORM_HELICOPTER};
    headgear[] = {HELMET_HELI_CREW};
    map[] = {""};
    insignia[] = {INSIGNIA_HELI};
};
//HeliPilot
class LOADOUT(crew,helipilot) : LOADOUT(crew,heli) {
    backpack[] = {BACKPACK_ASSAULT};
    map[] = {"itemMap"};
    gps[] = {EASYTRACK_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
    nvgs[] = {NVG_SF};
};

/* ###################### - Logistik - ###################### */
//Logistiker
class LOADOUT(logistics,common) : COMMON {
    vest[] = {VEST_LIGHT};
    backpack[] = {BACKPACK_KITBAG};
    primary[] = {CARBINE};
    magazines[] = {
        MAG_PISTOL,3,
        MAG_CARBINE,6,
        GRENADES_BASIC
    };
    headgear[] = {HELMET_BARE};
    items[] += {"CL_Logitracker","ToolKit"};
    lrRadios[] = {RADIO_PACK,RADIO_HAND};
    gps[] = {EASYTRACK_PDA};
    map[] = {"ItemMap"};
    insignia[] = {INSIGNIA_SUPPORT};
    preLoadout = TRAITS(0,2,false,false);
};

/* ###################### - MEDEVAC - ###################### */
//Common MEDEVAC
class LOADOUT(medevac,common): COMMON {
    primary[] = {""};
    secondary[] = {PISTOL};
    magazines[] = {GRENADES_BASIC};
    items[] += {"CL_Logitracker"};
    headgear[] = {HELMET_BARE};
    goggles[] = {GOGGLES_OFFICER};
    insignia[] = {INSIGNIA_MEV};
    preLoadout = TRAITS(0,0,false,true);
};

//Doctor
class LOADOUT(medevac,doc) : LOADOUT(medevac,common) {
    backpack[] = {BACKPACK_KITBAG};
    items[] += {
        "ACE_personalAidKit",4,
        "ACE_salineIV_500",10,
        "ACE_surgicalKit",
        "W_Defibrillator",
        "ACE_elasticBandage",40,
        "ACE_quikclot",40,
        "ACE_tourniquet",6,
        "ACE_morphine",15,
        "ACE_epinephrine",30
    };
    preLoadout = TRAITS(2,0,false,true);
};
//Doctor TL
class LOADOUT(medevac,tl) : LOADOUT(medevac,doc) {
    gps[] = {EASYTRACK_PDA};
    lrRadios[] = {RADIO_HAND};
};
//MEDEVAC Pilot
class LOADOUT(medevac,heli) : LOADOUT(medevac,common) {
    uniform[] = {UNIFORM_HELICOPTER};
    map[] = {"itemMap"};
    gps[] = {EASYTRACK_PDA};
    goggles[] = {GOGGLES_PILOT};
    lrRadios[] = {RADIO_PACK};
    headgear[] = {HELMET_HELICOPTER};
    nvgs[] = {NVG_SF};
};
//MEDEVAC Driver
class LOADOUT(medevac,drv) : LOADOUT(medevac,common) {
    items[] += {"ACE_Banana"};
};

#ifdef HUNTIR
    #undef HUNTIR
#endif