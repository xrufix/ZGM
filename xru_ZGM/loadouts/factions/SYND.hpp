/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_rhsafrf.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_I_C_Soldier_Para_1_F"        // Für Inventar
#define UNIFORM             ARR_5("U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_3_F","U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_5_F")
#define UNIFORM_COMPANY     ARR_1("U_I_C_Soldier_Camo_F")
#define UNIFORM_RECON     ARR_5("U_I_C_Soldier_Para_1_F","U_I_C_Soldier_Para_2_F","U_I_C_Soldier_Para_3_F","U_I_C_Soldier_Para_4_F","U_I_C_Soldier_Para_5_F")
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        ARR_1("xru_u_coveralls_bandit")
#define UNIFORM_HELICOPTER  ARR_3("U_C_Man_casual_2_F","U_C_Man_casual_1_F","U_C_Man_casual_3_F")
#define UNIFORM_JET         UNIFORM_HELICOPTER
#define UNIFORM_SNIPER      UNIFORM_RECON


/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_3("V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_LegStrapBag_olive_F")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_8("V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_Pocketed_black_F","V_Pocketed_coyote_F","V_Pocketed_olive_F")
#define VEST_RM         ARR_5("V_Chestrig_khk","V_Chestrig_rgr","V_Chestrig_blk","V_Chestrig_oli","xru_V_Chestrig_cbr")
#define VEST_GR         ARR_3("V_TacChestrig_grn_F","V_TacChestrig_oli_F","V_TacChestrig_cbr_F")
#define VEST_CM         VEST_RM
#define VEST_SL         ARR_6("V_I_G_resistanceLeader_F","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_blk","V_TacVest_camo")
#define VEST_TL         VEST_SL
#define VEST_MG         VEST_GR
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_GR
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "V_Plain_crystal_F"


/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_5("B_AssaultPack_rgr","B_AssaultPack_khk","B_FieldPack_oli","B_FieldPack_khk","B_AssaultPack_tna_f")
#define BACKPACK_KITBAG     ARR_4("B_Kitbag_rgr","B_TacticalPack_blk","B_TacticalPack_rgr","B_TacticalPack_oli")
#define BACKPACK_CARRYALL   ARR_2("B_Carryall_khk","B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      BACKPACK_CARRYALL
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"I_HMG_01_weapon_F"
#define HMG_TRIPOD	"I_HMG_01_support_F"
#define GMG_GUN		"I_GMG_01_weapon_F"
#define GMG_TRIPOD	"I_HMG_01_support_F"
#define MORTAR_GUN	"I_Mortar_01_weapon_F"
#define MORTAR_POD	"I_Mortar_01_support_F"


/* ###################### - ATTACHMENTS- ###################### */
#define SNIPER_OPTIC    "rhsusf_acc_M8541"
#define SNIPER_OPTIC_NV "ACE_Banana"
#define DMR_BIPOD       "bipod_03_F_oli"
#define LASERPOINTER    "ace_banana"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1 ARR_1("rhs_weap_ak103")
#define RIFLE_2 ARR_1("rhs_weap_akmn")
#define RIFLE_3 ARR_1("rhs_weap_akms")
#define RIFLE_4 ARR_1("rhs_weap_akm")

#define RIFLE_CCO ARR_4( \
    WEAPON(RIFLE_1,"rhs_acc_dtk","",""), \
    WEAPON(RIFLE_2,"rhs_acc_dtkakm","",""), \
    WEAPON(RIFLE_3,"rhs_acc_dtkakm","",""), \
    WEAPON(RIFLE_4,"rhs_acc_dtkakm","",""))
#define RIFLE_RCO ARR_4( \
    WEAPON(RIFLE_1,"rhs_acc_2dpZenit","rhs_acc_dtk",""), \
    WEAPON(RIFLE_2,"rhs_acc_dtkakm","",""), \
    WEAPON(RIFLE_3,"rhs_acc_2dpZenit","rhs_acc_dtkakm",""), \
    WEAPON(RIFLE_4,"rhs_acc_2dpZenit","rhs_acc_dtkakm",""))


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_1     ARR_1("rhs_weap_ak103_gp25")
#define RIFLE_UGL_2     ARR_1("rhs_weap_akmn_gp25")
#define RIFLE_UGL_3     ARR_1("rhs_weap_akms_gp25")
#define RIFLE_UGL_4     ARR_1("rhs_weap_akm_gp25")

#define RIFLE_UGL_CCO ARR_4( \
    WEAPON(RIFLE_UGL_1,"rhs_acc_dtk","",""), \
    WEAPON(RIFLE_UGL_2,"","",""), \
    WEAPON(RIFLE_UGL_3,"rhs_acc_dtk","",""), \
    WEAPON(RIFLE_UGL_4,"rhs_acc_dtk","",""))
#define RIFLE_UGL_RCO ARR_4( \
    WEAPON(RIFLE_UGL_1,"rhs_acc_ekp8_02","rhs_acc_dtk","rhs_acc_2dpZenit"), \
    WEAPON(RIFLE_UGL_2,"rhs_acc_1p63","",""), \
    WEAPON(RIFLE_UGL_3,"rhs_acc_ekp1","rhs_acc_dtk","rhs_acc_2dpZenit"), \
    WEAPON(RIFLE_UGL_4,"rhs_acc_pkas","rhs_acc_dtk","rhs_acc_2dpZenit"))

#define MAG_RIFLE           ARR_1("30Rnd_762x39_Mag_Green_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_762x39_Mag_Tracer_Green_F")


// CARBINE
#define CARBINE_1   "rhs_weap_aks74"
#define CARBINE_2   "rhs_weap_aks74_2"
#define CARBINE ARR_2( \
    WEAPON(CARBINE_1,"rhs_acc_dtk","",""), \
    WEAPON(CARBINE_2,"rhs_acc_dtk","",""))
#define CARBINE_CCO CARBINE

#define CARBINE_UGL         WEAPON("rhs_weap_aks74_gp25","rhs_acc_dtk","","")
#define CARBINE_UGL_CCO    CARBINE_UGL

#define MAG_CARBINE         ARR_1("30Rnd_545x39_Mag_F")
#define MAG_CARBINE_TRACER  ARR_1("30Rnd_545x39_Mag_Tracer_F")


// PDW
#define PDW ARR_2( \
    WEAPON("rhs_weap_aks74u","rhs_acc_pgs64_74u","",""), \
    WEAPON("rhs_weap_aks74un","rhs_acc_pgs64_74un","",""))
#define MAG_PDW ARR_1("30Rnd_545x39_Mag_F")


// SF CARBINES
#define RIFLE_RECON ARR_5( \
    WEAPON("rhs_weap_ak105","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_1p63"), \
    WEAPON("rhs_weap_ak74","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON("rhs_weap_ak74m_2mag","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp1"), \
    WEAPON("rhs_weap_ak74m_camo","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp8_02"), \
    WEAPON("rhs_weap_ak74_2","rhs_acc_dtk","rhs_acc_2dpZenit",""))

#define RIFLE_UGL_RECON ARR_3( \
    WEAPON("rhs_weap_ak74_gp25","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON("rhs_weap_ak74m_gp25","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp1"), \
    WEAPON("rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp8_02"))

#define RIFLE_RECON_TAN ARR_3( \
    WEAPON("rhs_weap_ak74_3","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON("rhs_weap_ak74m_camo","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp1"), \
    WEAPON("rhs_weap_ak74m_desert","rhs_acc_dtk","rhs_acc_2dpZenit","rhs_acc_ekp8_02"))
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_CARBINE
#define MAG_RIFLE_RECON_TRACER   MAG_CARBINE_TRACER


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("rhs_weap_ak103","rhs_acc_dtk","rhs_acc_pso1m2","")
#define MAG_DMR MAG_RIFLE

#define DMR_RECON ARR_3( \
    WEAPON("hlc_rifle_M14dmr_Rail","optic_KHS_old","",""), \
    WEAPON("hlc_rifle_M21_Rail","optic_KHS_old","",""), \
    WEAPON("srifle_DMR_03_khaki_F","optic_KHS_old","","bipod_01_F_khk"))
#define DMR_DIVER   DMR_RECON
#define MAG_DMR_RECON  ARR_1("20Rnd_762x51_Mag")

#define SR_AP       WEAPON("rhs_weap_m24sws_ghillie","rhsusf_acc_LEUPOLDMK4_2_d","rhsusf_acc_harris_swivel","")
#define MAGS_SR_AP  ARR_2("rhsusf_5Rnd_762x51_m118_special_Mag",16)

#define SR_AM       WEAPON("rhs_weap_M107_w",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",5)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("rhs_weap_pkm","","","")

#define MAG_AUTORIFLE       ARR_1("rhs_100Rnd_762x54mmR")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,4)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        WEAPON("hlc_rifle_RPK12_60rnd","rhs_acc_ekp8_18","","")
#define MAGS_AUTORIFLE_RECON   ARR_2("hlc_60Rnd_545x39_t_rpk",8)

#define MMG                 WEAPON("rhs_weap_pkp","","","")
#define MAGS_MMG            ARR_2(MAG_AUTORIFLE,3)
#define MAGS_MMG_ASST       MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("rhsusf_weap_m1911a1","","","")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_7x45acp_MHP")

#define PISTOL_SF	    WEAPON("rhs_weap_tt33","","","")
#define MAG_PISTOL_SF 	ARR_1("rhs_mag_762x25_8")


/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("rhs_weap_rpg7","","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7V_mag",3)

#define AT_ROCKET	            WEAPON("rhs_weap_rpg7","rhs_acc_pgo7v3","","")
#define MAGS_AT_ROCKET          ARR_2("rhs_rpg7_PG7V_mag",1)
#define MAGS_AT_ROCKET_ASST     ARR_2("rhs_rpg7_PG7V_mag",4)

#define AA_MISSILE	            WEAPON("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON("launch_i_Titan_short_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_7( \
    ARR_8("H_Bandanna_camo","H_Bandanna_cbr","H_Bandanna_gry","H_Bandanna_khk","H_Bandanna_khk_hs","H_Bandanna_mcamo","H_Bandanna_sand","H_Bandanna_sgg"), \
    ARR_5("H_Watchcap_blk","H_Watchcap_camo","H_Watchcap_khk","H_Watchcap_cbr","H_Watchcap_sgg"), \
    ARR_4("H_Booniehat_khk","H_Booniehat_khk_hs","H_Booniehat_oli","H_Booniehat_tan"), \
    ARR_5("xru_H_MilCap_check1","xru_H_MilCap_check2","xru_H_MilCap_check3","H_MilCap_gry","H_Cap_Headphones"), \
    ARR_4("H_ShemagOpen_tan","H_ShemagOpen_khk","H_Shemag_olive_hs","H_Shemag_olive"), \
    ARR_6("H_Cap_tan","H_Cap_oli_hs","H_cap_oli","H_Cap_blk_ION","H_Cap_grn","H_Cap_blk_cmmg"), \
    ARR_3("H_Headbandage_clean_f","H_Headbandage_stained_f","H_Headbandage_bloody_f") \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE     ARR_1(HELMET)
// SPECIAL FORCES INFANTRY
#define HELMET_SF       ARR_1(HELMET)
#define HELMET_DIVER    ARR_1("")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_7("H_HeadSet_black_F","H_HeadSet_orange_F","H_HeadSet_red_F","H_HeadSet_white_F","H_HeadSet_yellow_F","H_Cap_Headphones","H_Cap_Marshal")
#define HELMET_HELICOPTER	HELMET_CREW
#define HELMET_HELI_CREW	HELMET_CREW
#define HELMET_JET			HELMET_CREW

// COMMANDERS
#define CAP_CO      ARR_1("H_Hat_Safari_olive_F")
#define CAP_XO      ARR_1("H_Hat_Safari_sand_F")
#define CAP_OFFICER HELMET



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_6(GOGGLES_FULL,"g_bandanna_beast","g_bandanna_blk","g_bandanna_khk","g_bandanna_oli","g_bandanna_tan")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_4("g_bandanna_aviator","g_bandanna_sport","g_shades_red","g_shades_black")
#define GOGGLES_SF		GOGGLES
#define GOGGLES_SF_FULL GOGGLES_FULL
#define GOGGLES_DIVER	ARR_1("G_i_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("Binocular")
#define DESIGNATOR	ARR_1("Binocular")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM52SL")
#define RADIO_SR ""



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
