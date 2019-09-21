/* ###################### - Side and faction specific includes - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("rhs_uniform_g3_mc")          // Für Inventar
#define UNIFORM             ARR_1("rhsgref_uniform_olive")     // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("rhs_uniform_g3_mc")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("rhsgref_uniform_olive")
#define UNIFORM_HELICOPTER  ARR_1("rhsgref_uniform_olive")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_i_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_TacVest_oli")
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RM         VEST_EMPTY
#define VEST_GR         VEST_EMPTY
#define VEST_CM         VEST_EMPTY
#define VEST_SL         "VSM_FAPC_Operator_OGA_OD"
#define VEST_TL         VEST_SL
#define VEST_MG         VEST_EMPTY
#define VEST_DM         VEST_EMPTY

#define VEST_CREW		ARR_1("V_LegStrapBag_black_F")

#define VEST_RECON		ARR_1("VSM_RAV_operator_Multicam")
#define VEST_RECON_TL	ARR_1("VSM_LBT6094_operator_Multicam")
#define VEST_RECON_MG	ARR_1("VSM_RAV_MG_Multicam")
#define VEST_RECON_GR	VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		VEST_RECON

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_RadioBag_01_black_F")
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("B_TacticalPack_mcamo")

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"i_Mortar_01_weapon_F"
#define MORTAR_POD	"i_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "acc_pointer_ir"
#define FLASHLIGHT   "acc_flashlight"

#define RCO     "optic_mrco"
#define CCO     "optic_Holosight_blk_F"

#define SNIPER_OPTIC    "rhsusf_acc_LEUPOLDMK4"
#define SNIPER_OPTIC_NV "rhsusf_acc_ACOG_anpvs27"

#define DMR_BIPOD       "bipod_03_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("hlc_rifle_auga3")
#define RIFLE_UGL       ARR_1("hlc_rifle_auga3_GL")
#define RIFLE_RCO       WEAPON_OLD(RIFLE,FLASHLIGHT,RCO,"")
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,FLASHLIGHT,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,FLASHLIGHT,CCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,FLASHLIGHT,CCO,"")

#define MAG_RIFLE		 ARR_1("hlc_30Rnd_556x45_B_AUG")
#define MAG_RIFLE_TRACER ARR_1("hlc_30Rnd_556x45_T_AUG")

// PDW
#define PDW     ARR_1("hlc_rifle_auga2carb")
#define MAG_PDW	MAG_RIFLE

// CARBINE

#define CARBINE     WEAPON_OLD("hlc_rifle_auga2carb",FLASHLIGHT,RCO,"")
#define CARBINE_UGL	RIFLE_UGL_CCO

#define CARBINE_CCO        CARBINE
#define CARBINE_UGL_CCO    CARBINE_UGL

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         WEAPON_OLD("hlc_rifle_auga3_b","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")
#define RIFLE_UGL_RECON     WEAPON_OLD("hlc_rifle_auga3_GL_B","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")
#define RIFLE_RECON_TAN     WEAPON_OLD("hlc_rifle_auga3","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")
#define RIFLE_UGL_RECON_TAN WEAPON_OLD("hlc_rifle_auga3_GL","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")
#define RIFLE_DIVER 		WEAPON_OLD("hlc_rifle_auga3_bl","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")
#define RIFLE_UGL_DIVER 	WEAPON_OLD("hlc_rifle_auga3_GL_BL","rhsusf_acc_g33_xps3","acc_pointer_IR","hlc_muzzle_snds_AUG")

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   ARR_1("hlc_30Rnd_556x45_TDIM_AUG")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON_OLD("hlc_rifle_auga2lsw_b","","optic_dms","")
#define MAG_DMR       ARR_1("hlc_30Rnd_556x45_SOST_AUG")

#define DMR_RECON     WEAPON("srifle_DMR_03_multicam_F",LASERPOINTER,"optic_dms","muzzle_snds_B_khk_F","bipod_01_f_mtp")
#define DMR_DIVER     WEAPON("srifle_DMR_03_F",LASERPOINTER,"optic_dms","muzzle_snds_b",DMR_BIPOD)
#define MAG_DMR_RECON ARR_1("20Rnd_762x51_Mag")

#define SR_AP         WEAPON_OLD("rhs_weap_m24sws",SNIPER_OPTIC,DMR_BIPOD,"")
#define MAGS_SR_AP    ARR_2("rhsusf_5Rnd_762x51_m118_special_Mag",8)

#define SR_AM         WEAPON_OLD("rhs_weap_M107_w","rhsusf_acc_premier","","")
#define MAGS_SR_AM    ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            WEAPON_OLD("hlc_lmg_MG3","","","")
#define MAGS_AUTORIFLE       ARR_4("hlc_50Rnd_762x51_B_MG3",8,"hlc_50Rnd_762x51_T_MG3",4)
#define MAGS_AUTORIFLE_ASST  ARR_4("hlc_50Rnd_762x51_B_MG3",4,"hlc_50Rnd_762x51_T_MG3",2)

#define AUTORIFLE_RECON      WEAPON_OLD("hlc_rifle_auga2lsw_b","rhsusf_acc_eotech_xps3","","hlc_muzzle_snds_AUG")
#define MAGS_AUTORIFLE_RECON ARR_4("hlc_40Rnd_556x45_B_AUG",10,"hlc_40Rnd_556x45_TDIM_AUG",5)

#define MMG           AUTORIFLE
#define MAGS_MMG      ARR_2("hlc_100Rnd_762x51_M_MG3",2)
#define MAGS_MMG_ASST ARR_2("hlc_100Rnd_762x51_M_MG3",4)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON_OLD("rhsusf_weap_glock17g4","","","")
#define PISTOL_SF	WEAPON_OLD("rhsusf_weap_glock17g4","rhsusf_acc_omega9k","acc_flashlight_pistol","")

#define MAG_PISTOL 		ARR_1("rhsusf_mag_17Rnd_9x19_FMJ")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_17Rnd_9x19_FMJ")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON_OLD("rhs_weap_m72a7","","","")
#define MAGS_AT_LIGHT   "rhs_m72a7_mag"

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_maaws","rhs_optic_maaws","","")
#define MAGS_AT_ROCKET          ARR_1("rhs_mag_maaws_HEAT")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_maaws_HEAT",2,"rhs_mag_maaws_HE")

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON_OLD("launch_nlaw_f","","","")
#define MAGS_AT_MISSILE         ARR_1("ace_chemlight_white")
#define MAGS_AT_MISSILE_ASST    MAGS_AT_MISSILE

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("rhsgref_helmet_pasgt_olive")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_PASGT_basic_olive_F")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("rhsusf_opscore_mc_cover_pelt","rhsusf_opscore_mc_cover_pelt_nsw","rhsusf_opscore_mc_cover_pelt_cam")
#define HELMET_DIVER ARR_2("rhsusf_opscore_mc_pelt","rhsusf_opscore_mc_pelt_nsw")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("rhsusf_cvc_green_alt_helmet")
#define HELMET_HELICOPTER	ARR_1("rhsusf_hgu56p")
#define HELMET_HELI_CREW	ARR_1("rhsusf_hgu56p_mask")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("h_cap_blk")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Combat")
#define GOGGLES_SF		ARR_8("","G_Balaclava_blk","G_Balaclava_lowprofile","g_bandanna_shades","g_bandanna_blk","G_Squares","G_Tactical_Clear","G_Tactical_black")
#define GOGGLES_SF_FULL GOGGLES_SF
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF  ARR_1("UK3CB_BAF_HMNVS")

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_01_khk_f")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM70")
#define RADIO_SR "ACRE_SEM52SL"

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON "AUTFlagW"
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
