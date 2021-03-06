#include "NATO_MTP.hpp"


/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "xru_u_b_combatuniform_wdl"        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"xru_u_b_combatuniform_wdl_vest")      // Für Zufallsauswahl

#define UNIFORM_CREW        ARR_1("xru_u_b_combatuniform_sage_tshirt")

#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrier1_rgr")
#define VEST_RM         ARR_1("V_PlateCarrier2_rgr")
#define VEST_SL         ARR_1("V_PlateCarrierGL_rgr")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_RadioBag_01_wdl_F")
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"i_HMG_01_weapon_F"
#define HMG_TRIPOD	"i_HMG_01_support_F"
#define GMG_GUN		"i_GMG_01_weapon_F"
#define GMG_TRIPOD	"i_HMG_01_support_F"
#define MORTAR_GUN	"i_Mortar_01_weapon_F"
#define MORTAR_POD	"i_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define CCO "optic_Holosight_blk_F"
#define RCO "optic_MRCO"

#define SNIPER_OPTIC "optic_LRPS_tna_f"
#define DMR_BIPOD "bipod_01_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("rhs_weap_hk416d145")
#define RIFLE_UGL       ARR_1("rhs_weap_hk416d145_m320")
#define RIFLE_RCO       WEAPON_OLD(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE			"rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define MAG_RIFLE_TRACER	"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red"

// PDW
#define PDW         ARR_4("smg_01_f",CCO,"acc_flashlight_smg_01","")

// Carbine
#define CARBINE     "rhs_weap_hk416d10"
#define CARBINE_UGL	"rhs_weap_hk416d10_m320"

#define CARBINE_CCO        WEAPON_OLD(CARBINE,CCO,"","")
#define CARBINE_UGL_CCO    WEAPON_OLD(CARBINE_UGL,CCO,"","")

// SF CARBINES
#define RIFLE_RECON ARR_2(\
    WEAPON_OLD("rhs_weap_hk416d145_wd",LASERPOINTER,RCO,"rhsusf_acc_nt4_tan"),\
    WEAPON_OLD("rhs_weap_hk416d145_wd_2",LASERPOINTER,RCO,"rhsusf_acc_nt4_tan")\
)
#define RIFLE_UGL_RECON       WEAPON_OLD("rhs_weap_hk416d145_m320",LASERPOINTER,CCO,"rhsusf_acc_nt4_black")
#define RIFLE_RECON_TAN       RIFLE_RECON
#define RIFLE_UGL_RECON_TAN   RIFLE_UGL_RECON

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON_OLD("w_srifle_ebr_khaki","bipod_01_f_khk",LASERPOINTER,"optic_sos_khk_f")

#define DMR_RECON WEAPON("w_srifle_ebr_khaki","muzzle_snds_B",LASERPOINTER,"optic_sos_khk_f","bipod_01_f_khk")
#define DMR_DIVER WEAPON("w_srifle_ebr_black",LASERPOINTER,"optic_sos","muzzle_snds_b","bipod_01_f_blk")

#define SR_AP WEAPON_OLD("srifle_DMR_02_camo_F",SNIPER_OPTIC,DMR_BIPOD,"ACE_muzzle_mzls_338")
#define SR_AM WEAPON_OLD("srifle_lrr_tna_f",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("LMG_03_F",LASERPOINTER,CCO,"")
#define MAGS_AUTORIFLE      ARR_3("200Rnd_556x45_Box_Red_F",4,"200Rnd_556x45_Box_Tracer_Red_F")
#define MAGS_AUTORIFLE_ASST ARR_2("200Rnd_556x45_Box_Red_F",2)

#define AUTORIFLE_RECON RIFLE_RECON
#define MMG WEAPON_OLD("MMG_02_black_F",LASERPOINTER,RCO,DMR_BIPOD)



/* ###################### - SIDEARMS - ###################### */
/* Wie MTP */



/* ###################### - LAUNCHERS - ###################### */
#define AA_MISSILE	WEAPON_OLD("launch_B_Titan_tna_F","","","")
#define AT_ROCKET   WEAPON_OLD("launch_MRAWS_olive_F",LASERPOINTER,"","")
#define AT_MISSILE  WEAPON_OLD("launch_B_Titan_short_tna_F","","","")


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
/* Wie MTP */
// NON-COMBAT INFANTRY
/* Wie MTP */
// SPECIAL FORCES INFANTRY
/* Wie MTP */
// VEHICLE CREWS
/* Wie MTP */

// COMMANDERS
#define CAP_OFFICER ARR_1("h_cap_usblack")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
/* Wie MTP */



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_INDEP")
#define NVG_SF	NVG



/* ###################### - BINOCULARS - ###################### */
/* Wie MTP */


/* ###################### - RADIOS - ###################### */
/* Wie MTP */



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
