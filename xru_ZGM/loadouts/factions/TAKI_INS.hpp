/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_rhsafrf.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "UK3CB_TKC_C_U_01"        // Für Inventar
#define UNIFORM             ARR_4( \
    ARR_4("UK3CB_TKC_C_U_01","UK3CB_TKC_C_U_02","UK3CB_TKC_C_U_03","UK3CB_TKC_C_U_06"), \
    ARR_5("UK3CB_TKM_O_U_01","UK3CB_TKM_O_U_03","UK3CB_TKM_O_U_04","UK3CB_TKM_O_U_05","UK3CB_TKM_O_U_06"), \
    ARR_5("UK3CB_TKM_B_U_01","UK3CB_TKM_B_U_03","UK3CB_TKM_B_U_04","UK3CB_TKM_B_U_05","UK3CB_TKM_B_U_06"), \
    ARR_5("UK3CB_TKM_I_U_01","UK3CB_TKM_I_U_03","UK3CB_TKM_I_U_04","UK3CB_TKM_I_U_05","UK3CB_TKM_I_U_06") )
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         UNIFORM
#define UNIFORM_SNIPER      UNIFORM


/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ""
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RM         ""
#define VEST_GR         VEST_RM
#define VEST_CM         VEST_RM
#define VEST_SL         VEST_RM
#define VEST_TL         VEST_RM
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_RM
#define VEST_RECON_MG		VEST_RM
#define VEST_RECON_GR		VEST_RM

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "V_Plain_crystal_F"


/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4("B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli")
#define BACKPACK_KITBAG     ARR_2("rhsgref_ttsko_alicepack","rhsgref_hidf_alicepack")
#define BACKPACK_CARRYALL   ARR_2("rhsgref_ttsko_alicepack","rhsgref_hidf_alicepack")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_DShkM_Gun_Bag"
#define HMG_TRIPOD	"RHS_DShkM_TripodLow_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"


/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER    "ace_banana"
#define DMR_BIPOD       "ace_banana"
#define SNIPER_OPTIC_NV "ace_banana"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_CCO           ARR_3("rhs_weap_ak103","rhs_weap_akms","rhs_weap_akm")
#define RIFLE_RCO           RIFLE_CCO
// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_CCO       ARR_3("rhs_weap_ak103_gp25","rhs_weap_akms_gp25","rhs_weap_akm_gp25")
#define RIFLE_UGL_RCO       RIFLE_UGL_CCO

#define MAG_RIFLE           ARR_1("30Rnd_762x39_Mag_Green_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_762x39_Mag_Tracer_Green_F")

// CARBINE
#define CARBINE             ARR_3("rhs_weap_ak74","rhs_weap_aks74","rhs_weap_aks74_2")
#define CARBINE_CCO         CARBINE

#define CARBINE_UGL         ARR_2("rhs_weap_aks74_gp25","rhs_weap_ak74_gp25")
#define CARBINE_UGL_CCO    CARBINE_UGL

#define MAG_CARBINE         ARR_1("30Rnd_545x39_Mag_F")
#define MAG_CARBINE_TRACER  ARR_1("30Rnd_545x39_Mag_Tracer_F")

// PDW
#define PDW ARR_2("rhs_weap_aks74u","rhs_weap_aks74un")
#define MAG_PDW ARR_1("30Rnd_545x39_Mag_F")

// SF CARBINES
#define RIFLE_RECON ARR_5( \
    WEAPON_OLD("rhs_weap_ak105","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_2mag","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_camo","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74_2","rhs_acc_dtk","rhs_acc_2dpZenit",""))
#define RIFLE_UGL_RECON ARR_3( \
    WEAPON_OLD("rhs_weap_ak74_gp25","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_gp25","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk","rhs_acc_2dpZenit",""))
#define RIFLE_RECON_TAN ARR_3( \
    WEAPON_OLD("rhs_weap_ak74_3","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_camo","rhs_acc_dtk","rhs_acc_2dpZenit",""), \
    WEAPON_OLD("rhs_weap_ak74m_desert","rhs_acc_dtk","rhs_acc_2dpZenit",""))

#define RIFLE_UGL_RECON_TAN	RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_CARBINE
#define MAG_RIFLE_RECON_TRACER   MAG_CARBINE_TRACER


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON_OLD("hlc_rifle_FAL5000","hlc_optic_suit","","")
#define MAG_DMR ARR_1("hlc_20Rnd_762x51_B_fal")

#define DMR_RECON DMR
#define DMR_DIVER DMR
#define MAG_DMR_RECON MAG_DMR

#define SR_AP       WEAPON_OLD("rhs_weap_svdp","rhs_acc_pso1m21","","")
#define MAGS_SR_AP  ARR_2("rhs_10Rnd_762x54mmR_7N1",10)

#define SR_AM       SR_AP
#define MAGS_SR_AM  MAGS_SR_AP


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE               WEAPON_OLD("rhs_weap_pkm","","","")

#define MAG_AUTORIFLE           ARR_1("rhs_100Rnd_762x54mmR")
#define MAGS_AUTORIFLE          ARR_2(MAG_AUTORIFLE,4)
#define MAGS_AUTORIFLE_ASST     ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        AUTORIFLE
#define MAGS_AUTORIFLE_RECON   MAGS_AUTORIFLE

#define MMG                     AUTORIFLE
#define MAGS_MMG                ARR_2(MAG_AUTORIFLE,3)
#define MAGS_MMG_ASST           MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("rhs_weap_makarov_pm","","","")
#define MAG_PISTOL 		ARR_1("rhs_mag_9x18_8_57N181S")

#define PISTOL_SF	    WEAPON_OLD("rhs_weap_tt33","","","")
#define MAG_PISTOL_SF 	ARR_1("rhs_mag_762x25_8")


/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_rpg7","","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7V_mag",3)

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v","","")
#define MAGS_AT_ROCKET          ARR_2("rhs_rpg7_PG7V_mag",1)
#define MAGS_AT_ROCKET_ASST     ARR_2("rhs_rpg7_PG7V_mag",4)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              AT_ROCKET
#define MAGS_AT_MISSILE         MAGS_AT_ROCKET
#define MAGS_AT_MISSILE_ASST    MAGS_AT_ROCKET_ASST



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_5( \
    ARR_3("H_Shemag_olive","H_ShemagOpen_tan","H_ShemagOpen_khk"), \
    ARR_6("UK3CB_H_Mil_Turban_Wrap","UK3CB_TKM_I_H_Turban_02_1","UK3CB_TKM_I_H_Turban_01_1","UK3CB_TKM_I_H_Turban_05_1","UK3CB_TKM_I_H_Turban_04_1","UK3CB_TKM_I_H_Turban_03_1"), \
    ARR_6("UK3CB_TKM_B_H_Turban_02_1","UK3CB_TKM_B_H_Turban_01_1","UK3CB_TKM_B_H_Turban_05_1","UK3CB_TKM_B_H_Turban_04_1","UK3CB_TKM_B_H_Turban_03_1","UK3CB_TKM_O_H_Turban_02_1"), \
    ARR_6("UK3CB_TKM_O_H_Turban_01_1","UK3CB_TKM_O_H_Turban_05_1","UK3CB_TKM_O_H_Turban_04_1","UK3CB_TKM_O_H_Turban_03_1","UK3CB_TKC_H_Turban_05_1","UK3CB_TKC_H_Turban_04_1"), \
    ARR_4("UK3CB_TKC_H_Turban_03_1","UK3CB_TKC_H_Turban_06_1","UK3CB_TKC_H_Turban_02_1","UK3CB_TKC_H_Turban_01_1"))
// NON-COMBAT INFANTRY
#define HELMET_BARE     HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF       HELMET
#define HELMET_DIVER    HELMET
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("rhs_tsh4","rhs_tsh4_ess")
#define HELMET_HELICOPTER	HELMET_CREW
#define HELMET_HELI_CREW	HELMET_CREW
#define HELMET_JET			HELMET_CREW

// COMMANDERS
#define CAP_CO      ARR_1("")
#define CAP_XO      ARR_1("")
#define CAP_OFFICER HELMET



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ""
#define GOGGLES_OFFICER ""
#define GOGGLES_FULL    ""
#define GOGGLES_SF		""
#define GOGGLES_SF_FULL ""
#define GOGGLES_DIVER	""
#define GOGGLES_PILOT	""



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
