/* ###################### - Side and faction specific includes - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("tfa_bel_wdl")          // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"tfa_bel_wdl_rs")     // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("rhs_uniform_g3_mc")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_i_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("rhsusf_mbav")
#define VEST_OFFICER    ARR_1("rhsusf_mbav_light")
#define VEST_LIGHT      ARR_1("rhsusf_mbav_light")
#define VEST_RM         ARR_1("rhsusf_mbav_rifleman")
#define VEST_GR         ARR_1("rhsusf_mbav_grenadier")
#define VEST_CM         ARR_1("rhsusf_mbav_medic")
#define VEST_SL         VEST_GR
#define VEST_TL         VEST_RM
#define VEST_MG         ARR_1("rhsusf_mbav_mg")
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_LIGHT

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
#define BACKPACK_RADIO      ARR_1("B_TacticalPack_rgr")
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

#define RCO     "rhsusf_acc_eotech_552_d"
#define CCO     "rhsusf_acc_T1_low"

#define SNIPER_OPTIC    "rhsusf_acc_LEUPOLDMK4"
#define SNIPER_OPTIC_NV "rhsusf_acc_ACOG_anpvs27"

#define DMR_BIPOD       "bipod_03_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("CUP_arifle_Mk16_STD_FG_woodland")
#define RIFLE_UGL       ARR_1("CUP_arifle_Mk16_STD_EGLM_woodland")
#define RIFLE_RCO       WEAPON(RIFLE,FLASHLIGHT,RCO,"")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,FLASHLIGHT,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,FLASHLIGHT,CCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,FLASHLIGHT,CCO,"")

#define MAG_RIFLE		 ARR_1("30Rnd_556x45_Stanag_red")
#define MAG_RIFLE_TRACER ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

// PDW
#define PDW     ARR_1("CUP_arifle_Mk16_CQC_black")
#define MAG_PDW	MAG_RIFLE

// CARBINE

#define CARBINE     "CUP_arifle_Mk16_CQC_woodland"
#define CARBINE_UGL	"CUP_arifle_Mk16_CQC_EGLM_woodland"

#define CARBINE_CCO        WEAPON(CARBINE,FLASHLIGHT,CCO,"")
#define CARBINE_UGL_CCO    WEAPON(CARBINE_UGL,FLASHLIGHT,CCO,"")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         ARR_2( \
    WEAPON("CUP_arifle_Mk16_CQC_FG_woodland","rhsusf_acc_g33_T1",LASERPOINTER,"CUP_muzzle_snds_SCAR_L"), \
    WEAPON("CUP_arifle_Mk16_CQC_SFG_woodland","rhsusf_acc_g33_xps3",LASERPOINTER,"CUP_muzzle_snds_SCAR_L") \
)
#define RIFLE_UGL_RECON         ARR_2( \
    WEAPON("CUP_arifle_Mk16_CQC_EGLM_woodland","rhsusf_acc_g33_T1",LASERPOINTER,"CUP_muzzle_snds_SCAR_L"), \
    WEAPON("CUP_arifle_Mk16_CQC_EGLM_woodland","rhsusf_acc_g33_xps3",LASERPOINTER,"CUP_muzzle_snds_SCAR_L") \
)
#define RIFLE_RECON_TAN     WEAPON("arifle_Mk20_plain_F","rhsusf_acc_g33_T1",LASERPOINTER,"muzzle_snds_m_snd_F")
#define RIFLE_UGL_RECON_TAN WEAPON("arifle_Mk20_GL_plain_F","rhsusf_acc_g33_T1",LASERPOINTER,"muzzle_snds_m_snd_F")
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   ARR_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON("CUP_arifle_Mk16_SV_woodland","bipod_01_F_blk","rhsusf_acc_ACOG_wd",LASERPOINTER)
#define MAG_DMR       MAG_RIFLE

#define DMR_RECON     WEAPON("CUP_arifle_Mk17_STD_FG_woodland","bipod_01_F_blk","rhsusf_acc_ACOG_MDO","CUP_muzzle_snds_SCAR_H")
#define DMR_DIVER     DMR_RECON
#define MAG_DMR_RECON "CUP_20Rnd_762x51_B_SCAR"

#define SR_AP         WEAPON("hlc_rifle_awMagnum_OD_ghillie","",SNIPER_OPTIC,"")
#define MAGS_SR_AP    ARR_4("hlc_5rnd_300WM_mk248_AWM",5,"hlc_5rnd_300WM_AP_AWM",5)

#define SR_AM         WEAPON("rhs_weap_M107_w","rhsusf_acc_premier","","")
#define MAGS_SR_AM    ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            WEAPON("hlc_lmg_minimipara_long","","","")
#define MAGS_AUTORIFLE       ARR_3("200Rnd_556x45_Box_Red_F",4,"200Rnd_556x45_Box_Tracer_Red_F")
#define MAGS_AUTORIFLE_ASST  ARR_2("200Rnd_556x45_Box_Red_F",2)

#define AUTORIFLE_RECON      WEAPON("hlc_lmg_mk46mod1","ACE_muzzle_mzls_B",LASERPOINTER,"rhsusf_acc_eotech_xps3")
#define MAGS_AUTORIFLE_RECON ARR_2("hlc_200rnd_556x45_Mdim_SAW",5)

#define MMG           WEAPON("hlc_lmg_mk48","bipod_01_F_blk","","")
#define MAGS_MMG      ARR_2("hlc_100Rnd_762x51_M_M60E4",2)
#define MAGS_MMG_ASST ARR_2("hlc_100Rnd_762x51_M_M60E4",4)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("hgun_Pistol_heavy_01_F","","","")
#define PISTOL_SF	WEAPON("hgun_Pistol_heavy_01_F","muzzle_snds_acp","","")

#define MAG_PISTOL 		ARR_1("11Rnd_45ACP_Mag")
#define MAG_PISTOL_SF 	ARR_1("11Rnd_45ACP_Mag")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("rhs_weap_m72a7","","","")
#define MAGS_AT_LIGHT   "rhs_m72a7_mag"

#define AT_ROCKET	            WEAPON("BWA3_RGW90","","","")
#define MAGS_AT_ROCKET          ARR_1("BWA3_RGW90_HH")
#define MAGS_AT_ROCKET_ASST     MAGS_AT_ROCKET

#define AA_MISSILE	            WEAPON("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON("launch_I_Titan_short_F","acc_OmniLight","","")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("TFAX_H_HelmetIA_bel")
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
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
#define NVG_SF  ARR_1("rhsusf_ANPVS_14")

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_01_khk_f")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("Belgium")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
