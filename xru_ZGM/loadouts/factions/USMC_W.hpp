#include "USMC_D.hpp"
// Definiere hier nur, was von USMC Desert abweicht!

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_FROG01_wd"
#define UNIFORM             ARR_1(UNIFORM_SINGLE)
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
/* Wie Desert */

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"

/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_2("B_AssaultPack_rgr","rhsusf_falconii")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT

//	CSW-BACKPACKS
/* Wie Desert */



/* ###################### - ATTACHMENTS- ###################### */
/* Wie Desert */



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
/* Wie Desert */

// CARBINE & PDW
/* Wie Desert */

// SF CARBINES
#define RIFLE_RECON ARR_2( \
    WEAPON("rhs_weap_m4a1_blockII_wd","rhsusf_acc_su230_mrds_c","rhsusf_acc_anpeq15_light","rhsusf_acc_nt4_tan"), \
    WEAPON("rhs_weap_m4a1_blockII_KAC_wd","rhsusf_acc_su230_mrds_c","rhsusf_acc_anpeq15_light","rhsusf_acc_nt4_tan"))
#define RIFLE_UGL_RECON WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_tan")

#define RIFLE_RECON_TAN RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON

/* Diver wie Desert */

#define MAG_RIFLE_RECON          "rhs_mag_30Rnd_556x45_M855A1_PMAG"
#define MAG_RIFLE_RECON_TRACER   "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("w_srifle_ebr_khaki",DMR_BIPOD,"rhsusf_acc_anpeq15side_bk","rhsusf_acc_m8541")
#define DMR_RECON WEAPON("arifle_SPAR_03_khk_F","muzzle_snds_B_khk_F","","rhsusf_acc_su230a_mrds_c")
/* Wie Desert */
#define SR_AP WEAPON("rhs_weap_m40a5_wd",SNIPER_OPTIC,"rhsusf_acc_harris_swivel","")
#define SR_AM WEAPON("rhs_weap_M107_w",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
/* Wie Desert */



/* ###################### - SIDEARMS - ###################### */
/* Wie Desert */


/* ###################### - LAUNCHERS - ###################### */
/* Wie Desert */


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_6(                           	\
    "rhsusf_mich_helmet_marpatwd",              	\
    "rhsusf_mich_helmet_marpatwd_alt",          	\
    "rhsusf_mich_helmet_marpatwd_alt_headset",  	\
    "rhsusf_mich_helmet_marpatwd_headset",      	\
    "rhsusf_mich_helmet_marpatwd_norotos",      	\
    "rhsusf_mich_helmet_marpatwd_norotos_headset"	\
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(              	\
    "rhsusf_mich_bare",                 	\
    "rhsusf_mich_bare_alt",             	\
    "rhsusf_mich_bare_headset",         	\
    "rhsusf_mich_bare_norotos",         	\
    "rhsusf_mich_bare_norotos_alt",     	\
    "rhsusf_mich_bare_norotos_alt_headset"	\
)
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_5(        	\
    "rhsusf_opscore_fg_pelt",   	\
    "rhsusf_opscore_fg_pelt_cam",	\
    "rhsusf_opscore_paint_pelt",	\
    "rhsusf_opscore_ut_pelt",   	\
    "rhsusf_opscore_ut_pelt_cam"	\
)
#define HELMET_DIVER ARR_2(     	\
    "rhsusf_protech_helmet_rhino",	\
    "rhsusf_protech_helmet"	    	\
)
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("rhsusf_cvc_green_helmet","rhsusf_cvc_green_alt_helmet")
#define HELMET_HELICOPTER	ARR_2("rhsusf_hgu56p","rhsusf_hgu56p_visor")
#define HELMET_HELI_CREW	ARR_6("rhsusf_hgu56p_mask","rhsusf_hgu56p_mask_mo","rhsusf_hgu56p_mask_skull","rhsusf_hgu56p_visor_mask","rhsusf_hgu56p_visor_mask_mo","rhsusf_hgu56p_visor_mask_skull")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_OFFICER "rhs_8point_marpatwd"



/* ###################### - GOGGLES / FACEWEAR - ###################### */
/* Wie Desert */

                                                                                                
/* ###################### - NIGHT VISION DEVICES - ###################### */
/* Wie Desert */



/* ###################### - BINOCULARS - ###################### */
/* Wie Desert */



/* ###################### - RADIOS - ###################### */
/* Wie Desert */



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
