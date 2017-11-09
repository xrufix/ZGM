/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_rhsafrf.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhsgref_uniform_ttsko_mountain"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("rhsgref_uniform_ttsko_forest")
#define UNIFORM_RECON     ARR_1("rhsgref_uniform_para_ttsko_urban")
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        ARR_1("rhsgref_uniform_olive")
#define UNIFORM_HELICOPTER  ARR_1("rhsgref_uniform_olive")
#define UNIFORM_JET         ARR_1("U_I_pilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_I_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhsgref_6b23_khaki"
#define VEST_OFFICER       "rhsgref_6b23_khaki_nco"
#define VEST_LIGHT      "rhsgref_6b23_ttsko_mountain_rifleman"
#define VEST_RIFLEMAN   VEST_LIGHT
#define VEST_GRENADIER  "rhs_6b23_6sh116_vog_od"
#define VEST_MEDIC      "rhsgref_6b23_ttsko_mountain_medic"
#define VEST_TL         VEST_LIGHT
#define VEST_SL         "rhs_6b23_6sh116_vog_od"
#define VEST_MG         VEST_LIGHT
#define VEST_DM         "rhsgref_6b23_ttsko_mountain_sniper"

#define VEST_CREW		"rhsgref_6b23_khaki"

#define VEST_RECON			"rhs_6b23_6sh116_od"
#define VEST_RECON_TL		"rhs_6b23_6sh116_vog_od"
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		"rhs_6b23_6sh116_vog_od"

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		VEST_RECON



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("rhs_assault_umbts")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("rhs_assault_umbts")
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      BACKPACK_CARRYALL
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_DShkM_Gun_Bag"
#define HMG_TRIPOD	"RHS_DShkM_TripodLow_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "ace_banana"
#define DMR_BIPOD   "ace_banana"
#define SNIPER_OPTIC_NV "ace_banana"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE ARR_1("rhs_weap_m70b1n")

#define RIFLE_CCO WEAPON(RIFLE,"","rhs_acc_2dpZenit","rhs_acc_dtkakm")
#define RIFLE_RCO WEAPON(RIFLE,"rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtkakm")


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL    ARR_1("rhs_weap_m70b3n_pbg40")

#define RIFLE_UGL_CCO WEAPON(RIFLE_UGL,"","","rhs_acc_dtkakm")
#define RIFLE_UGL_RCO WEAPON(RIFLE_UGL,"rhs_acc_pkas","","rhs_acc_dtkakm")

#define MAG_RIFLE           ARR_1("30Rnd_762x39_Mag_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_762x39_Mag_Tracer_F")

// PDW
#define PDW     "rhs_weap_pp2000"
#define MAG_PDW ARR_1("rhs_mag_9x19mm_7n21_20")


// CARBINE
#define CARBINE         WEAPON("rhs_weap_m92","","","rhs_acc_dtk1l")
#define CARBINE_CCO    CARBINE

#define CARBINE_UGL         WEAPON("rhs_weap_akms_gp25","","","rhs_acc_dtkakm")
#define CARBINE_UGL_HOLO    CARBINE_UGL

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON              WEAPON("rhs_weap_m21a","rhs_acc_1p63","rhs_acc_perst1ik","hlc_muzzle_556NATO_KAC")
#define RIFLE_UGL_RECON          WEAPON("rhs_weap_m21a_pbg40","rhs_acc_1p63","","hlc_muzzle_556NATO_KAC")
#define RIFLE_RECON_TAN           RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		WEAPON("rhs_weap_m21s","rhs_acc_1p63","rhs_acc_perst1ik","hlc_muzzle_556NATO_KAC")
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          "rhsgref_30rnd_556x45_m21"
#define MAG_RIFLE_RECON_TRACER   "rhsgref_30rnd_556x45_m21_t"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("rhs_weap_m76","rhs_acc_pso1m2","","rhs_acc_dtk1l")
#define MAG_DMR     ARR_1("rhsgref_10Rnd_792x57_m76")

#define DMR_RECON      WEAPON("rhs_weap_m76","rhs_acc_pso1m2","rhs_acc_pbs1","rhs_acc_dtk1l")
#define DMR_DIVER   DMR_RECON
#define MAG_DMR_RECON  MAG_DMR

#define SR_AP       WEAPON("rhs_weap_svdp","rhs_acc_pso1m21","","")
#define MAGS_SR_AP  ARR_2("rhs_10Rnd_762x54mmR_7N1",10)

#define SR_AM       WEAPON("rhs_weap_M107_d","rhsusf_acc_premier","","")
#define MAGS_SR_AM  ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",4)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE       "rhs_weap_m84"
#define MAG_AUTORIFLE       ARR_1("rhs_100Rnd_762x54mmR")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,3)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        WEAPON("hlc_rifle_rpk_75rnd","rhs_acc_1p63","","hlc_muzzle_762SUP_AK")
#define MAGS_AUTORIFLE_RECON   ARR_4("hlc_75Rnd_762x39_AP_rpk",4,"hlc_75Rnd_762x39_m_rpk",2)

#define MMG                 AUTORIFLE
#define MAGS_MMG            ARR_2(MAG_AUTORIFLE,2)
#define MAGS_MMG_ASST       ARR_2(MAG_AUTORIFLE,3)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("rhsusf_weap_glock17g4","","","")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_17Rnd_9x19_JHP")

#define PISTOL_SF	    WEAPON("rhs_weap_pp2000_folded","","","")
#define MAG_PISTOL_SF 	ARR_1("rhs_mag_9x19mm_7n21_20")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("rhs_weap_rpg7","","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7VR_mag",2)

#define AT_ROCKET	            WEAPON("rhs_weap_rpg7","rhs_acc_pgo7v3","","")
#define MAGS_AT_ROCKET          ARR_3("rhs_rpg7_PG7VR_mag",2,"rhs_rpg7_TBG7V_mag")
#define MAGS_AT_ROCKET_ASST     ARR_4("rhs_rpg7_PG7VR_mag",3,"rhs_rpg7_OG7V_mag",3)

#define AA_MISSILE	            WEAPON("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON("CUP_launch_M47","","","")
#define MAGS_AT_MISSILE         ARR_1("CUP_Dragon_EP1_M")
#define MAGS_AT_MISSILE_ASST    ARR_1("CUP_Dragon_EP1_M")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET          ARR_1("rhsgref_ssh68_ttsko_mountain")
// NON-COMBAT INFANTRY
#define HELMET_BARE     HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF       ARR_1("rhs_6b28_green_bala")
#define HELMET_DIVER    HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("rhs_tsh4","rhs_tsh4_ess")
#define HELMET_HELICOPTER	ARR_2("rhs_zsh7a_mike_green","rhs_zsh7a_mike_green_alt")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("rhs_zsh7a","rhs_zsh7a_alt")

// COMMANDERS
#define CAP_CO      ARR_1("rhs_beret_mp2")
#define CAP_XO      ARR_1("rhs_beret_mp1")
#define CAP_OFFICER ARR_1("rhsgref_fieldcap_ttsko_mountain")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","rhs_scarf")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Lowprofile")
#define GOGGLES_SF		ARR_1("")
#define GOGGLES_SF_FULL GOGGLES_FULL
#define GOGGLES_DIVER	ARR_1("G_I_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("NVGoggles_INDEP")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ace_vector")
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM70")


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
