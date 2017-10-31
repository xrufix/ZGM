#include "USARMY_OCP.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_acu_ucp"
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_iotv_ucp")
#define VEST_LIGHT      ARR_1("rhsusf_iotv_ucp_Repair")
#define VEST_RIFLEMAN   ARR_1("rhsusf_iotv_ucp_Rifleman")
#define VEST_GRENADIER  ARR_1("rhsusf_iotv_ucp_Grenadier")
#define VEST_MEDIC      ARR_1("rhsusf_iotv_ucp_Medic")
#define VEST_SL         ARR_1("rhsusf_iotv_ucp_Squadleader")
#define VEST_TL         ARR_1("rhsusf_iotv_ucp_Teamleader")
#define VEST_MG         ARR_1("rhsusf_iotv_ucp_SAW")
#define VEST_DM         VEST_RIFLEMAN

#define VEST_CREW		ARR_1("rhsusf_iotv_ucp_Repair")

#define VEST_SF			VEST_RIFLEMAN
#define VEST_SF_TL		VEST_TL
#define VEST_SF_MG		VEST_MG
#define VEST_SF_GR		VEST_GRENADIER



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4("B_AssaultPack_cbr","B_AssaultPack_khk","rhsusf_falconii_coy","rhsusf_assault_eagleaiii_ucp")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_2("B_Carryall_cbr","B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT

//	CSW-BACKPACKS
/* Wie OCP */


/* ###################### - ATTACHMENTS- ###################### */
/* Wie OCP */



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
/* Wie OCP */

// CARBINE & PDW
/* Wie OCP */

// SF CARBINES
#define SF_CARBINE ARR_4(	                                                                        \
    WEAPON("rhs_weap_mk18_bk","rhsusf_acc_nt4_black",LASERPOINTER,"rhsusf_acc_SpecterDR"),   	\
    WEAPON("rhs_weap_mk18","rhsusf_acc_nt4_tan",LASERPOINTER,"rhsusf_acc_SpecterDR"),        	\
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")   	\
)
#define SF_CARBINE_UGL ARR_3(	                                                                            \
    WEAPON("rhs_weap_m4a1_blockII_M203","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR"),	    \
    WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_nt4_black",LASERPOINTER,"rhsusf_acc_SpecterDR"),	\
    WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")	\
)
#define SF_CARBINE_TN ARR_2(	                                                                    \
    WEAPON("rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD"),	\
    WEAPON("rhs_weap_mk18_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")	    \
)
#define SF_CARBINE_UGL_TN		WEAPON("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_nt4_tan",LASERPOINTER_TN,"rhsusf_acc_SpecterDR_OD")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON("rhs_weap_m14ebrri",DMR_BIPOD,LASERPOINTER,"optic_AMS")
#define SR_AP       WEAPON("rhs_weap_xm2010_wd","rhsusf_acc_LEUPOLDMK4_2","","")
#define SR_AM       WEAPON("rhs_weap_M107_w",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
/* Wie OCP */



/* ###################### - SIDEARMS - ###################### */
/* Wie OCP */



/* ###################### - LAUNCHERS - ###################### */
/* Wie OCP */



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
/* Wie OCP */

//  AR & MG
/* Wie OCP */

//  DMR & SR
#define MAG_DMR     ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")

//  PDW & SIDEARMS
/* Wie OCP */

//  ROCKETS & MISSILES
/* Wie OCP */

//  GRENADES
/* Wie OCP */


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                           \
    "rhsusf_ach_helmet_headset_ucp",            \
    "rhsusf_ach_helmet_ucp_norotos"          	\
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(          \
    "rhsusf_ach_bare",          \
    "rhsusf_ach_bare_headset",  \
    "rhsusf_ach_bare_semi",         \
    "rhsusf_ach_bare_semi_headset", \
    "rhsusf_ach_bare_wood",         \
    "rhsusf_ach_bare_wood_headset" \
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
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("rhsusf_cvc_green_helmet")
#define HELMET_HELICOPTER	ARR_2("rhsusf_hgu56p_black","rhsusf_hgu56p_visor_black")
#define HELMET_HELI_CREW	ARR_5("rhsusf_hgu56p_mask_black","rhsusf_hgu56p_mask_black_skull","rhsusf_hgu56p_visor_mask_black","rhsusf_hgu56p_visor_mask_Empire_black","rhsusf_hgu56p_visor_mask_black_skull")


// COMMANDERS
#define CAP_OFFICER ARR_1("rhsusf_patrolcap_ucp")


/* ###################### - GOGGLES / FACEWEAR - ###################### */
/* Wie OCP */


/* ###################### - NIGHT VISION DEVICES - ###################### */
/* Wie OCP */


/* ###################### - BINOCULARS - ###################### */
/* Wie OCP */


/* ###################### - RADIOS - ###################### */
/* Wie OCP */


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
/* Wie OCP */