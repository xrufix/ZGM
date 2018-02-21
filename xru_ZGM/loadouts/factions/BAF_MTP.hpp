/* ###################### - Side and faction specific includes - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("rhs_uniform_g3_mc")          // Für Inventar
#define UNIFORM             UNIFORM_SINGLE     // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_sard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("CUP_V_BAF_Osprey_Mk2_DDPM_Empty")
#define VEST_OFFICER    VEST_LIGHT
#define VEST_LIGHT      ARR_1("CUP_V_BAF_Osprey_Mk4_MTP_Rifleman")
#define VEST_RM         VEST_LIGHT
#define VEST_GR         ARR_1("CUP_V_BAF_Osprey_Mk4_MTP_Grenadier")
#define VEST_CM         VEST_LIGHT
#define VEST_SL         ARR_1("CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner")
#define VEST_DM         VEST_RM

#define VEST_CREW		ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Crewman")

#define VEST_RECON		VEST_RM
#define VEST_RECON_TL	VEST_TL
#define VEST_RECON_MG	VEST_MG
#define VEST_RECON_GR	VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		VEST_RECON



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_mcamo")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_mcamo")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_mcamo")
#define BACKPACK_RADIO      ARR_1("B_TacticalPack_mcamo")
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("B_TacticalPack_mcamo")

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"NDS_B_M224_Mortar"
#define MORTAR_POD	"NDS_M224_B_Ammo"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "cup_acc_llm"
#define FLASHLIGHT   "cup_acc_llm"

#define RCO     "rhsusf_acc_ACOG_RMR"
#define CCO     "rhsusf_acc_ACOG"

#define SNIPER_OPTIC    "rhsusf_acc_M8541"
#define SNIPER_OPTIC_NV "rhsusf_acc_ACOG_anpvs27"

#define DMR_BIPOD       "bipod_03_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1         ARR_1("CUP_arifle_L85A2_NG")
#define RIFLE_2         ARR_1("CUP_arifle_L85A2_G")
#define RIFLE_UGL       ARR_1("CUP_arifle_L85A2_GL")

#define RIFLE_RCO       ARR_2( \
    WEAPON(RIFLE_1,LASERPOINTER,RCO,""), \
    WEAPON(RIFLE_2,LASERPOINTER,RCO,"") \
)
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       ARR_2( \
    WEAPON(RIFLE_1,LASERPOINTER,CCO,""), \
    WEAPON(RIFLE_2,LASERPOINTER,CCO,"") \
)
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE		 ARR_1("30Rnd_556x45_Stanag_red")
#define MAG_RIFLE_TRACER ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

// PDW
#define PDW     ARR_1("hlc_smg_mp5a3")
#define MAG_PDW	ARR_1("hlc_30Rnd_9x19_GD_MP5")

// CARBINE

#define CARBINE     "CUP_arifle_L85A2"
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE_CCO        CARBINE
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         ARR_2( \
    WEAPON(RIFLE_1,RCO,LASERPOINTER,"CUP_muzzle_snds_L85"), \
    WEAPON(RIFLE_2,RCO,LASERPOINTER,"CUP_muzzle_snds_L85") \
)
#define RIFLE_UGL_RECON     WEAPON(RIFLE_UGL,RCO,LASERPOINTER,"CUP_muzzle_snds_L85")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   ARR_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON("CUP_srifle_L129A1","bipod_01_F_blk","rhsusf_acc_ACOG_MDO",LASERPOINTER)
#define MAG_DMR       ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON     WEAPON("CUP_srifle_L129A1_hg","muzzle_snds_B_snd_F","rhsusf_acc_ACOG_MDO",LASERPOINTER)
#define DMR_DIVER     DMR_RECON
#define MAG_DMR_RECON MAG_DMR

#define SR_AP         WEAPON("hlc_rifle_awMagnum_OD_ghillie","",SNIPER_OPTIC,"")
#define MAGS_SR_AP    ARR_4("hlc_5rnd_300WM_mk248_AWM",5,"hlc_5rnd_300WM_AP_AWM",5)

#define SR_AM         WEAPON("rhs_weap_m82a1","rhsusf_acc_premier","","")
#define MAGS_SR_AM    ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            WEAPON("hlc_lmg_minimipara_long_railed","",CCO,"")
#define MAGS_AUTORIFLE       ARR_3("200Rnd_556x45_Box_Red_F",4,"200Rnd_556x45_Box_Tracer_Red_F")
#define MAGS_AUTORIFLE_ASST  ARR_2("200Rnd_556x45_Box_Red_F",2)

#define AUTORIFLE_RECON      WEAPON("CUP_arifle_L86A2","CUP_muzzle_snds_L85",RCO,"")
#define MAGS_AUTORIFLE_RECON ARR_4(MAG_RIFLE,10,MAG_RIFLE_RECON_TRACER,5)

#define MMG           WEAPON("rhs_weap_m240B_CAP","","","")
#define MAGS_MMG      ARR_2("rhsusf_50Rnd_762x51",6)
#define MAGS_MMG_ASST ARR_2("rhsusf_50Rnd_762x51",8)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_glock17g4","","","")
#define PISTOL_SF	WEAPON("rhsusf_weap_glock17g4","hlc_muzzle_TiRant9S","acc_flashlight_pistol","")

#define MAG_PISTOL 		ARR_1("rhsusf_mag_17Rnd_9x19_JHP")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_17Rnd_9x19_JHP")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("launch_nlaw_f","","","")
#define MAGS_AT_LIGHT   MAG_RIFLE

#define AT_ROCKET	            WEAPON("launch_nlaw_f","","","")
#define MAGS_AT_ROCKET          MAG_RIFLE
#define MAGS_AT_ROCKET_ASST     MAG_RIFLE

#define AT_MISSILE              WEAPON("rhs_weap_fgm148","","","")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_1("rhs_fgm148_magazine_AT")

#define AA_MISSILE	            WEAPON("launch_b_titan_f","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("CUP_H_BAF_Helmet_1_MTP")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("CUP_H_BAF_Helmet_3_MTP")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("rhsusf_opscore_mc_cover_pelt","rhsusf_opscore_mc_cover_pelt_nsw","rhsusf_opscore_mc_cover_pelt_cam")
#define HELMET_DIVER ARR_2("rhsusf_opscore_mc_pelt","rhsusf_opscore_mc_pelt_nsw")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("CUP_H_BAF_Crew_Helmet_MTP")
#define HELMET_HELICOPTER	ARR_1("rhsusf_hgu56p")
#define HELMET_HELI_CREW	ARR_1("rhsusf_hgu56p_mask")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("H_MilCap_mcamo")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_4("rhs_googles_black","rhs_googles_yellow","rhs_googles_orange","rhs_googles_clear")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_3("rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw")
#define GOGGLES_SF		ARR_7(GOGGLES_SF_FULL,"rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan")
#define GOGGLES_SF_FULL ARR_6("rhsusf_shemagh_gogg_grn","rhsusf_shemagh2_gogg_grn","rhsusf_shemagh_gogg_od","rhsusf_shemagh2_gogg_od","rhsusf_shemagh_gogg_tan","rhsusf_shemagh2_gogg_tan")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("rhsusf_ANPVS_14")
#define NVG_SF  ARR_1("rhsusf_ANPVS_14")

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("uksub")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
