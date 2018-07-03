/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
#define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_cu_ocp"
#define UNIFORM             ARR_1(UNIFORM_SINGLE)
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("rhs_uniform_g3_mc")
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_B_HeliPilotCoveralls")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls") 
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_iotv_ocp")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_1("rhsusf_iotv_ocp_Repair")
#define VEST_RM         ARR_1("rhsusf_iotv_ocp_Rifleman")
#define VEST_GR         ARR_1("rhsusf_iotv_ocp_Grenadier")
#define VEST_CM         ARR_1("rhsusf_iotv_ocp_Medic")
#define VEST_SL         ARR_1("rhsusf_iotv_ocp_Squadleader")
#define VEST_TL         ARR_1("rhsusf_iotv_ocp_Teamleader")
#define VEST_MG         ARR_1("rhsusf_iotv_ocp_SAW")
#define VEST_DM         VEST_RM

#define VEST_CREW		ARR_1("rhsusf_iotv_ocp_Repair")

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_TL
#define VEST_RECON_MG		VEST_MG
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("VSM_LBT1961_Black")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("rhsusf_assault_eagleaiii_ocp")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		ARR_1("RHS_M2_Gun_Bag")
#define HMG_TRIPOD	ARR_1("RHS_M2_MiniTripod_Bag")
#define GMG_GUN		ARR_1("RHS_Mk19_Gun_Bag")
#define GMG_TRIPOD	ARR_1("RHS_Mk19_Tripod_Bag")
#define MORTAR_GUN	ARR_1("rhs_M252_Gun_Bag")
#define MORTAR_POD	ARR_1("rhs_M252_Bipod_Bag")



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER ARR_1("rhsusf_acc_anpeq15side_bk")
#define LASERPOINTER_TN ARR_1("rhsusf_acc_anpeq15side")

#define RCO_1 ARR_1("rhsusf_acc_ACOG")
#define RCO_2 ARR_1("rhsusf_acc_ACOG2")
#define RCO_3 ARR_1("rhsusf_acc_ACOG3")

#define HOLOSIGHT   ARR_1("rhsusf_acc_eotech_552")
#define CCO         ARR_1("rhsusf_acc_compm4")

#define SNIPER_OPTIC    ARR_1("rhsusf_acc_premier")
#define SNIPER_OPTIC_NV ARR_1("rhsusf_acc_premier_anpvs27")

#define DMR_BIPOD ARR_1("rhsusf_acc_harris_bipod")



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1     "rhs_weap_m4a1_carryhandle"
#define RIFLE_2     "rhs_weap_m4a1_carryhandle_pmag"
#define RIFLE_UGL   "rhs_weap_m4a1_carryhandle_m203"
#define RIFLE_RCO ARR_6(                      \
    WEAPON(RIFLE_1,LASERPOINTER,RCO_1,""), \
    WEAPON(RIFLE_1,LASERPOINTER,RCO_2,""), \
    WEAPON(RIFLE_1,LASERPOINTER,RCO_3,""), \
    WEAPON(RIFLE_2,LASERPOINTER,RCO_1,""), \
    WEAPON(RIFLE_2,LASERPOINTER,RCO_2,""), \
    WEAPON(RIFLE_2,LASERPOINTER,RCO_3,""))
#define RIFLE_UGL_RCO ARR_3(                       \
    WEAPON(RIFLE_UGL,LASERPOINTER,RCO_1,""),    \
    WEAPON(RIFLE_UGL,LASERPOINTER,RCO_2,""),    \
    WEAPON(RIFLE_UGL,LASERPOINTER,RCO_3,""))
#define RIFLE_CCO ARR_2(                    \
    WEAPON(RIFLE_1,LASERPOINTER,CCO,""), \
    WEAPON(RIFLE_2,LASERPOINTER,CCO,""))
#define RIFLE_UGL_CCO ARR_1(                  \
    WEAPON(RIFLE_UGL,LASERPOINTER,CCO,""))
#define MAG_RIFLE			"rhs_mag_30Rnd_556x45_M855_Stanag"
#define MAG_RIFLE_TRACER	"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"

// PDW
#define PDW     WEAPON("SMG_05_F","","","")
#define MAG_PDW ARR_1("30Rnd_9x21_Mag_SMG_02")

//CARBINE
#define CARBINE_1 "rhs_weap_m4_carryhandle"
#define CARBINE_2 "rhs_weap_m4_carryhandle_mstock"
#define CARBINE_3 "rhs_weap_m4_carryhandle_pmag"
#define CARBINE_4 "rhs_weap_m4_mstock"
#define CARBINE_UGL	"rhs_weap_m4_m203"

#define CARBINE ARR_4(CARBINE_1,CARBINE_2,CARBINE_3,CARBINE_4)
#define CARBINE_CCO ARR_4(            	\
    WEAPON(CARBINE_1,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_2,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_3,HOLOSIGHT,"",""),	\
    WEAPON(CARBINE_4,HOLOSIGHT,"",""))
#define CARBINE_UGL_CCO WEAPON(CARBINE_UGL,HOLOSIGHT,"","")
#define MAG_CARBINE         ARR_1(MAG_RIFLE)
#define MAG_CARBINE_TRACER  ARR_1(MAG_RIFLE_TRACER)

// SF CARBINES
#define RIFLE_RECON ARR_4(	                                                                        \
    WEAPON("rhs_weap_m4a1_blockII_d","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"),   	\
    WEAPON("rhs_weap_m4a1_blockII_KAC_d","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"),        	\
    WEAPON("rhs_weap_m4a1_blockII","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"),	\
    WEAPON("rhs_weap_m4a1_blockII_KAC","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"))
#define RIFLE_UGL_RECON ARR_2(	                                                                            \
    WEAPON("rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_g33_xps3_tan","rhsusf_acc_anpeq15side","muzzle_snds_m_snd_F"),	    \
    WEAPON("rhs_weap_m4a1_blockII_M203","rhsusf_acc_g33_xps3_tan","rhsusf_acc_anpeq15side","muzzle_snds_m_snd_F"))
#define RIFLE_RECON_TAN ARR_2( \
    WEAPON("rhs_weap_m4a1_blockII_d","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"), \
    WEAPON("rhs_weap_m4a1_blockII_KAC_d","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15","muzzle_snds_m_snd_F"))
#define RIFLE_UGL_RECON_TAN		WEAPON("rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_SpecterDR_D","rhsusf_acc_anpeq15side","muzzle_snds_m_snd_F")

#define RIFLE_DIVER 		    WEAPON("rhs_weap_mk18_KAC_bk","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_black")
#define RIFLE_UGL_DIVER 	    WEAPON("rhs_weap_m4a1_blockII_M203_bk","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq15_bk","rhsusf_acc_nt4_black")

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON("rhs_weap_m14ebrri","optic_AMS","rhsusf_acc_anpeq15side_bk","rhsusf_acc_harris_bipod")
#define MAG_DMR ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")

#define DMR_RECON ARR_3(                                                                     	\
    WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER,"optic_AMS"),         	\
    WEAPON("arifle_SPAR_03_khk_F","muzzle_snds_B_khk_F",LASERPOINTER_TN,"optic_AMS_khk"),	\
    WEAPON("arifle_SPAR_03_snd_F","muzzle_snds_B_snd_F",LASERPOINTER_TN,"optic_AMS_snd"))
#define MAG_DMR_RECON   ARR_1("ACE_20Rnd_762x51_M118LR_Mag")

#define DMR_DIVER   WEAPON("arifle_SPAR_03_blk_F","muzzle_snds_B",LASERPOINTER,"rhsusf_acc_SpecterDR_A")

#define SR_AP       WEAPON("rhs_weap_xm2010_d_leu","rhsusf_acc_LEUPOLDMK4_2_d","","")
#define MAGS_SR_AP  ARR_2("rhsusf_5Rnd_300winmag_xm2010",20)

#define SR_AM       WEAPON("rhs_weap_M107_d",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_4("rhsusf_mag_10Rnd_STD_50BMG_M33",3,"rhsusf_mag_10Rnd_STD_50BMG_mk211",1)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_1 "rhs_weap_m249_pip_S"
#define AUTORIFLE_2 "rhs_weap_m249_pip_S_vfg"
#define AUTORIFLE ARR_6(                    	\
    WEAPON(AUTORIFLE_1,LASERPOINTER,RCO_1,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER,RCO_2,""),	\
    WEAPON(AUTORIFLE_1,LASERPOINTER,RCO_3,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER,RCO_1,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER,RCO_2,""),	\
    WEAPON(AUTORIFLE_2,LASERPOINTER,RCO_3,""))
#define MAG_AUTORIFLE       ARR_1("rhs_200rnd_556x45_M_SAW")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,3)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,3)

#define AUTORIFLE_RECON    WEAPON("hlc_lmg_mk46","rhsusf_acc_ARDEC_M240","rhsusf_acc_anpeq15side_bk",HOLOSIGHT)
#define MAGS_AUTORIFLE_RECON   ARR_2(MAG_AUTORIFLE,5)

#define MMG             WEAPON("rhs_weap_m240B","rhsusf_acc_ACOG_MDO",LASERPOINTER,"")
#define MAGS_MMG            ARR_2("rhsusf_100Rnd_762x51",3)
#define MAGS_MMG_ASST       ARR_2("rhsusf_100Rnd_762x51",5)



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_m9","","","")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_15Rnd_9x19_JHP")

#define PISTOL_SF	WEAPON("rhsusf_weap_glock17g4","","","")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_17Rnd_9x19_JHP")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("rhs_weap_M136_hedp","","","")
#define MAGS_AT_LIGHT           "rhs_m136_hedp_mag"

#define AT_ROCKET	            WEAPON("rhs_weap_maaws","rhs_optic_maaws","","")
#define MAGS_AT_ROCKET          ARR_1("rhs_mag_maaws_HEAT")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_maaws_HEAT","rhs_mag_maaws_HEDP","rhs_mag_maaws_HE")

#define AT_MISSILE              WEAPON("rhs_weap_fgm148","","","")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_1("rhs_fgm148_magazine_AT")

#define AA_MISSILE	            WEAPON("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "rhsusf_ach_helmet_headset_ocp", \
    "rhsusf_ach_helmet_ocp_norotos"  \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6(          \
    "rhsusf_ach_bare_tan",          \
    "rhsusf_ach_bare_tan_headset",  \
    "rhsusf_ach_bare_semi",         \
    "rhsusf_ach_bare_semi_headset", \
    "rhsusf_ach_bare_des",          \
    "rhsusf_ach_bare_des_headset"   \
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
#define HELMET_HELICOPTER	ARR_2("rhsusf_hgu56p_green","rhsusf_hgu56p_visor_green")
#define HELMET_HELI_CREW	ARR_4("rhsusf_hgu56p_mask_green","rhsusf_hgu56p_mask_green_mo","rhsusf_hgu56p_visor_mask_green","rhsusf_hgu56p_visor_mask_green_mo")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_02")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("rhsusf_patrolcap_ocp")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_4("rhs_googles_clear","rhs_googles_black","rhs_googles_orange","rhs_googles_yellow")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator");
#define GOGGLES_FULL    ARR_6("rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw","rhsusf_oakley_goggles_blk")
#define GOGGLES_SF		ARR_8("rhsusf_shemagh_grn","rhsusf_shemagh_tan","rhsusf_shemagh_white","rhsusf_shemagh_od","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_4("rhsusf_shemagh_gogg_grn","rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_shemagh_gogg_white")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG		ARR_1("rhsusf_ANPVS_14")
#define NVG_SF	ARR_1("rhsusf_ANPVS_15")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
