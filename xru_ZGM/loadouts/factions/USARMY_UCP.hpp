#include "USARMY_OCP.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_cu_ucp"
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_lsh")
#define	UNIFORM_RECON      "rhs_uniform_acu_ucp"


/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_iotv_ucp")
#define VEST_LIGHT      ARR_1("rhsusf_iotv_ucp_Repair")
#define VEST_RM         ARR_1("rhsusf_iotv_ucp_Rifleman")
#define VEST_GR         ARR_1("rhsusf_iotv_ucp_Grenadier")
#define VEST_CM         ARR_1("rhsusf_iotv_ucp_Medic")
#define VEST_SL         ARR_1("rhsusf_iotv_ucp_Squadleader")
#define VEST_TL         ARR_1("rhsusf_iotv_ucp_Teamleader")
#define VEST_MG         ARR_1("rhsusf_iotv_ucp_SAW")
#define VEST_DM         VEST_RM

#define VEST_CREW		ARR_1("rhsusf_iotv_ucp_Repair")

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_TL
#define VEST_RECON_MG		VEST_MG
#define VEST_RECON_GR		VEST_GR



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("rhsusf_assault_eagleaiii_ucp")
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
#define RIFLE_RECON ARR_4(	                                                                        \
    WEAPON_OLD("rhs_weap_m4a1_blockII_wd","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"),   	\
    WEAPON_OLD("rhs_weap_m4a1_blockII_KAC_wd","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"),        	\
    WEAPON_OLD("rhs_weap_m4a1_blockII","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"),	\
    WEAPON_OLD("rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"))
#define RIFLE_UGL_RECON ARR_2(	                                                                            \
    WEAPON_OLD("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_tan"),	    \
    WEAPON_OLD("rhs_weap_m4a1_blockII_M203","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_tan"))

#define RIFLE_RECON_TAN ARR_2( \
    WEAPON_OLD("rhs_weap_m4a1_blockII_wd","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"), \
    WEAPON_OLD("rhs_weap_m4a1_blockII_KAC_wd","rhsusf_acc_SpecterDR_OD","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_tan"))
#define RIFLE_UGL_RECON_TAN \
    WEAPON_OLD("rhs_weap_m4a1_blockII_M203_wd","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15side_bk","rhsusf_acc_nt4_tan")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define SR_AP       WEAPON_OLD("rhs_weap_xm2010_wd","rhsusf_acc_LEUPOLDMK4_2","","")
#define SR_AM       WEAPON_OLD("rhs_weap_M107_w",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS

#define MAG_AUTORIFLE       ARR_1("rhsusf_200Rnd_556x45_mixed_soft_pouch")


/* ###################### - SIDEARMS - ###################### */
/* Wie OCP */



/* ###################### - LAUNCHERS - ###################### */
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
#define HELMET_SF ARR_5(        	\
    "rhsusf_opscore_fg_pelt",   	\
    "rhsusf_opscore_fg_pelt_cam",	\
    "rhsusf_opscore_paint_pelt",	\
    "rhsusf_opscore_ut_pelt",   	\
    "rhsusf_opscore_ut_pelt_cam"	\
)
// VEHICLE CREWS
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