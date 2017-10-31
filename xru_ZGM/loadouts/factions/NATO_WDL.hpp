#include "NATO_MTP.hpp"


/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "xru_u_b_combatuniform_wdl"        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"xru_u_b_combatuniform_wdl_vest")      // Für Zufallsauswahl

#define UNIFORM_CREW        ARR_1("xru_u_b_combatuniform_sage_tshirt")

#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrier1_rgr")
#define VEST_RIFLEMAN   ARR_1("V_PlateCarrier2_rgr")
#define VEST_SL         ARR_1("V_PlateCarrierGL_rgr")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
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
#define SNIPER_OPTIC "optic_LRPS_tna_f"
#define DMR_BIPOD "bipod_01_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("arifle_MX_Black_F")
#define RIFLE_UGL       ARR_1("arifle_MX_GL_Black_F")
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

// CARBINE & PDW
#define PDW         ARR_4("smg_01_f",CCO,"acc_flashlight_smg_01","")
#define CARBINE     "arifle_MXC_Black_F"
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE_HOLO        WEAPON(CARBINE,CCO,"","")
#define CARBINE_UGL_HOLO    WEAPON(CARBINE_UGL,CCO,"","")

// SF CARBINES
#define SF_CARBINE ARR_2(\
    WEAPON("arifle_SPAR_01_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define SF_CARBINE_UGL ARR_2(\
    WEAPON("arifle_SPAR_01_gl_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define SF_CARBINE_TN       WEAPON("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")
#define SF_CARBINE_UGL_TN   WEAPON("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("arifle_MXM_Black_F",DMR_BIPOD,LASERPOINTER,"optic_SOS")

#define DMR_SF ARR_2(\
    WEAPON("arifle_SPAR_03_blk_F",LASERPOINTER,"optic_ams","muzzle_snds_b"),\
    WEAPON("arifle_SPAR_03_khk_F",LASERPOINTER,"optic_ams_khk","muzzle_snds_b_khk_f")\
)

#define SR_AP WEAPON("srifle_DMR_02_camo_F",SNIPER_OPTIC,DMR_BIPOD,"ACE_muzzle_mzls_338")
#define SR_AM WEAPON("srifle_lrr_tna_f",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_RCO   WEAPON("arifle_MX_SW_Black_F",LASERPOINTER,RCO,DMR_BIPOD)
#define AUTORIFLE_SF    ARR_2(\
    WEAPON("arifle_SPAR_02_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON("arifle_SPAR_02_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define MMG WEAPON("MMG_02_black_F",LASERPOINTER,RCO,DMR_BIPOD)



/* ###################### - SIDEARMS - ###################### */
/* Wie MTP */



/* ###################### - LAUNCHERS - ###################### */
#define AA_MISSILE	    WEAPON("launch_B_Titan_tna_F","","","")
#define AT_MISSILE      WEAPON("launch_B_Titan_short_tna_F","","","")



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
/* Wie MTP */

//  SF CARBINE
/* Wie MTP */

//  AR & MG
/* Wie MTP */

//  DMR & SR
/* Wie MTP */

//  PDW & SIDEARMS
/* Wie MTP */

//  ROCKETS & MISSILES
/* Wie MTP */

//  GRENADES
/* Wie MTP */



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
#ifndef INSIGNIA_COMMON
    #define INSIGNIA_COMMON ARR_1("")
#endif
#ifndef INSIGNIA_SF
    #define INSIGNIA_SF INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_TNK
    #define INSIGNIA_TNK INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_HELI
    #define INSIGNIA_HELI INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_JET
    #define INSIGNIA_JET INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_MEV
    #define INSIGNIA_MEV INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_SUPPORT
    #define INSIGNIA_SUPPORT INSIGNIA_COMMON
#endif