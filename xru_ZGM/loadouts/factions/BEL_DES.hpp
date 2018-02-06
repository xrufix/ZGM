#include "BEL_WDL.hpp"

/* ###################### - Side and faction specific includes - ###################### */

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("tfa_bel_des")          // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"tfa_bel_des_rs")     // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("rhs_uniform_g3_mc")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_i_FullGhillie_ard")



/* ###################### - VESTS - ###################### */


/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_cbr")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_RADIO      ARR_1("B_TacticalPack_oli")


//	CSW-BACKPACKS


/* ###################### - ATTACHMENTS- ###################### */
#define RCO "rhsusf_acc_eotech_552"

/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("CUP_arifle_Mk16_STD_FG")
#define RIFLE_UGL       ARR_1("CUP_arifle_Mk16_STD_EGLM")


// PDW


// CARBINE
#define CARBINE     "CUP_arifle_Mk16_CQC"
#define CARBINE_UGL	"CUP_arifle_Mk16_CQC_EGLM"

// SF CARBINES
#define RIFLE_RECON         ARR_2( \
    WEAPON("CUP_arifle_Mk16_CQC_FG","rhsusf_acc_g33_T1",LASERPOINTER,"CUP_muzzle_snds_SCAR_L"), \
    WEAPON("CUP_arifle_Mk16_CQC_SFG","rhsusf_acc_g33_xps3_tan",LASERPOINTER,"CUP_muzzle_snds_SCAR_L") \
)
#define RIFLE_UGL_RECON         ARR_2( \
    WEAPON("CUP_arifle_Mk16_CQC_EGLM","rhsusf_acc_g33_T1",LASERPOINTER,"CUP_muzzle_snds_SCAR_L"), \
    WEAPON("CUP_arifle_Mk16_CQC_EGLM","rhsusf_acc_g33_xps3",LASERPOINTER,"CUP_muzzle_snds_SCAR_L") \
)


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON("CUP_arifle_Mk16_SV","bipod_01_F_blk","rhsusf_acc_ACOG_d",LASERPOINTER)

#define DMR_RECON     WEAPON("CUP_arifle_Mk17_STD_FG","bipod_01_F_blk","rhsusf_acc_ACOG_MDO","CUP_muzzle_snds_SCAR_H")

#define SR_AP         WEAPON("hlc_rifle_awMagnum_FDE_ghillie","",SNIPER_OPTIC,"")

#define SR_AM         WEAPON("rhs_weap_M107_d","rhsusf_acc_premier","","")

// AUTOMATIC RIFLES & MACHINE GUNS

/* ###################### - SIDEARMS - ###################### */

/* ###################### - LAUNCHERS - ###################### */

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("TFAX_H_HelmetIA_bel2")
// NON-COMBAT INFANTRY

// SPECIAL FORCES INFANTRY

// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("rhsusf_cvc_alt_helmet")


// COMMANDERS

/* ###################### - GOGGLES / FACEWEAR - ###################### */

/* ###################### - NIGHT VISION DEVICES - ###################### */

/* ###################### - BINOCULARS - ###################### */
#define DESIGNATOR	ARR_1("Laserdesignator")

/* ###################### - RADIOS - ###################### */


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.

