#include "USMC_D.hpp"
// Definiere hier nur, was von USMC Desert abweicht!

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_FROG01_wd"
#define UNIFORM             ARR_1(UNIFORM_SINGLE)
#define UNIFORM_COMMAND     UNIFORM
#define UNIFORM_SPECIAL     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
/* Wie Desert */

#define VEST_SF				VEST_RIFLEMAN
#define VEST_SF_TL			VEST_TL
#define VEST_SF_MG			VEST_MG
#define VEST_SF_GR			VEST_GRENADIER

#define VEST_BREATHER		ARR_1("V_RebreatherB")
#define VEST_DIVER			"VSM_LBT1961_Black"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_3("B_AssaultPack_rgr","B_AssaultPack_khk","rhsusf_falconii")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
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
#define SF_CARBINE ARR_4(	                                                                        \
    WEAPON("rhs_weap_mk18_bk","rhsusf_acc_nt4_black",LASERPOINTER,"rhsusf_acc_SpecterDR"),   	\
    WEAPON("rhs_weap_mk18","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR"),        	\
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR_OD")   	\
)
#define SF_CARBINE_UGL ARR_3(	                                                                            \
    WEAPON("rhs_weap_m4a1_blockII_M203","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR"),	    \
    WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER,"rhsusf_acc_SpecterDR"),	\
    WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR_OD")	\
)
#define SF_CARBINE_TN ARR_2(	                                                                    \
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")	    \
)
#define SF_CARBINE_UGL_TN		WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")
/* Wie Desert */

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
/* Wie Desert */
#define SR_AP WEAPON("rhs_weap_m40a5_wd",SNIPER_OPTIC,"rhsusf_acc_harris_swivel","")
#define SR_AM WEAPON("rhs_weap_M107_w",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
/* Wie Desert */



/* ###################### - SIDEARMS - ###################### */
/* Wie Desert */



/* ###################### - LAUNCHERS - ###################### */
/* Wie Desert */



/* ###################### - MAGAZINES - ###################### */
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
#define HELMET_SF ARR_6(        	\
    "rhsusf_opscore_aor2_pelt", 	\
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
#define HELMET_CREW 		ARR_1("rhsusf_cvc_green_helmet")
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
