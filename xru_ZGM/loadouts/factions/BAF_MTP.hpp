/* ###################### - Side and faction specific includes - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve")          // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE, "UK3CB_BAF_U_CombatUniform_MTP")     // Für Zufallsauswahl
#define UNIFORM_COMPANY     "UK3CB_BAF_U_RolledUniform_MTP"
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        "UK3CB_BAF_U_JumperUniform_MTP"
#define UNIFORM_HELICOPTER  ARR_3("UK3CB_BAF_U_HeliPilotCoveralls_Army","UK3CB_BAF_U_HeliPilotCoveralls_RAF","UK3CB_BAF_U_HeliPilotCoveralls_RN")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_sard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("UK3CB_BAF_V_Osprey")
#define VEST_OFFICER    ARR_1("UK3CB_BAF_V_Osprey_Holster")
#define VEST_LIGHT      VEST_RM
#define VEST_RM         ARR_6("UK3CB_BAF_V_Osprey_Rifleman_A","UK3CB_BAF_V_Osprey_Rifleman_B","UK3CB_BAF_V_Osprey_Rifleman_C","UK3CB_BAF_V_Osprey_Rifleman_D","UK3CB_BAF_V_Osprey_Rifleman_E","UK3CB_BAF_V_Osprey_Rifleman_F")
#define VEST_GR         ARR_2("UK3CB_BAF_V_Osprey_Grenadier_A","UK3CB_BAF_V_Osprey_Grenadier_B")
#define VEST_CM         ARR_4("UK3CB_BAF_V_Osprey_Medic_A","UK3CB_BAF_V_Osprey_Medic_B","UK3CB_BAF_V_Osprey_Medic_C","UK3CB_BAF_V_Osprey_Medic_D")
#define VEST_SL         ARR_4("UK3CB_BAF_V_Osprey_SL_A","UK3CB_BAF_V_Osprey_SL_B","UK3CB_BAF_V_Osprey_SL_C","UK3CB_BAF_V_Osprey_SL_D")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_2("UK3CB_BAF_V_Osprey_MG_A","UK3CB_BAF_V_Osprey_MG_B")
#define VEST_DM         ARR_1("UK3CB_BAF_V_Osprey_Marksman_A")

#define VEST_CREW		ARR_1("UK3CB_BAF_V_Pilot_A")

#define VEST_RECON		VEST_RM
#define VEST_RECON_TL	VEST_SL
#define VEST_RECON_MG	VEST_MG
#define VEST_RECON_GR	VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		VEST_RECON

#define VEST_PROTECTED  ARR_1("W_V_EOD_white_ICRC")


/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A")
#define BACKPACK_KITBAG     ARR_1("UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B")
#define BACKPACK_CARRYALL   ARR_2("UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C","UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D")
#define BACKPACK_RADIO      ARR_2("UK3CB_BAF_B_Bergen_MTP_Radio_L_A","UK3CB_BAF_B_Bergen_MTP_Radio_L_B")
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
#define LASERPOINTER "UK3CB_BAF_LLM_IR_Tan"
#define FLASHLIGHT   "UK3CB_BAF_LLM_Flashlight_Tan"

#define RCO     "UK3CB_BAF_TA31F"
#define CCO     RCO

#define SNIPER_OPTIC    "RKSL_optic_PMII_525_wdl"
#define SNIPER_OPTIC_NV "UK3CB_BAF_MaxiKite"

#define DMR_BIPOD       "UK3CB_underbarrel_acc_fgrip_bipod"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("UK3CB_BAF_L85A2_RIS_Tan")
#define RIFLE_UGL       ARR_1("UK3CB_BAF_L85A2_UGL")

#define RIFLE_RCO       WEAPON_OLD(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE		 ARR_1("UK3CB_BAF_556_30Rnd")
#define MAG_RIFLE_TRACER ARR_1("UK3CB_BAF_556_30Rnd_T")

// PDW
#define PDW     ARR_1("hlc_smg_mp5a3")
#define MAG_PDW	ARR_1("hlc_30Rnd_9x19_GD_MP5")

// CARBINE

#define CARBINE     "UK3CB_BAF_L22A2"
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE_CCO        WEAPON_OLD(CARBINE,LASERPOINTER,CCO,"")
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         WEAPON_OLD("UK3CB_BAF_L85A2_RIS_AFG","RKSL_optic_LDS",LASERPOINTER,"UK3CB_BAF_Silencer_L85")
#define RIFLE_UGL_RECON     WEAPON_OLD(RIFLE_UGL,"RKSL_optic_LDS",LASERPOINTER,"UK3CB_BAF_Silencer_L85")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON_OLD("UK3CB_BAF_L129A1_FGrip_Bipod",DMR_BIPOD,"UK3CB_BAF_TA648",LASERPOINTER)
#define MAG_DMR       ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON     WEAPON("UK3CB_BAF_L129A1_FGrip_Bipod","UK3CB_BAF_Silencer_L115A3","UK3CB_BAF_TA648",LASERPOINTER,DMR_BIPOD)
#define DMR_DIVER     DMR_RECON
#define MAG_DMR_RECON MAG_DMR

#define SR_AP         WEAPON_OLD("UK3CB_BAF_L115A3_DE_Ghillie","",SNIPER_OPTIC,"")
#define MAGS_SR_AP    ARR_2("UK3CB_BAF_338_5Rnd",10)

#define SR_AM         WEAPON_OLD("rhs_weap_m82a1","rhsusf_acc_premier","","")
#define MAGS_SR_AM    ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            WEAPON_OLD("UK3CB_BAF_L110A2RIS","",RCO,"UK3CB_BAF_LLM_IR_Black")
#define MAGS_AUTORIFLE       ARR_3("UK3CB_BAF_556_200Rnd",2,"UK3CB_BAF_556_200Rnd_T")
#define MAGS_AUTORIFLE_ASST  ARR_2("UK3CB_BAF_556_200Rnd",2)

#define AUTORIFLE_RECON      WEAPON_OLD("UK3CB_BAF_L86A3","UK3CB_BAF_Silencer_L85",LASERPOINTER,"RKSL_optic_LDS")
#define MAGS_AUTORIFLE_RECON ARR_4(MAG_RIFLE_RECON,10,MAG_RIFLE_RECON_TRACER,5)

#define MMG           WEAPON_OLD("UK3CB_BAF_L110_762","UK3CB_BAF_TA648","","")
#define MAGS_MMG      ARR_3("UK3CB_BAF_762_100Rnd",2,"UK3CB_BAF_762_100Rnd_T")
#define MAGS_MMG_ASST ARR_2("UK3CB_BAF_762_100Rnd",2)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON_OLD("UK3CB_BAF_L131A1","","","")
#define PISTOL_SF	WEAPON_OLD("UK3CB_BAF_L131A1","hlc_muzzle_TiRant9S","UK3CB_BAF_Flashlight_L131A1","")

#define MAG_PISTOL 		ARR_1("UK3CB_BAF_9_17Rnd")
#define MAG_PISTOL_SF 	ARR_1("UK3CB_BAF_9_17Rnd")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON_OLD("UK3CB_BAF_AT4_CS_AT_Launcher","","","")
#define MAGS_AT_LIGHT   "UK3CB_BAF_AT4_CS_AT_Mag"

#define AT_ROCKET	            WEAPON_OLD("launch_NLAW_F","","","")
#define MAGS_AT_ROCKET          MAG_RIFLE
#define MAGS_AT_ROCKET_ASST     MAG_RIFLE

#define AT_MISSILE              WEAPON_OLD("UK3CB_BAF_Javelin_Launcher","","","")
#define MAGS_AT_MISSILE         ARR_1("UK3CB_BAF_Javelin_Mag")
#define MAGS_AT_MISSILE_ASST    ARR_1("UK3CB_BAF_Javelin_Mag")

#define AA_MISSILE	            WEAPON_OLD("launch_b_titan_f","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_3( \
    ARR_6("UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D","UK3CB_BAF_H_Mk7_Camo_E","UK3CB_BAF_H_Mk7_Camo_F"), \
    ARR_4("UK3CB_BAF_H_Mk7_Net_A","UK3CB_BAF_H_Mk7_Net_B","UK3CB_BAF_H_Mk7_Net_C","UK3CB_BAF_H_Mk7_Net_D"), \
    ARR_3("UK3CB_BAF_H_Mk7_Scrim_A","UK3CB_BAF_H_Mk7_Scrim_B","UK3CB_BAF_H_Mk7_Scrim_C") \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_4("UK3CB_BAF_H_Mk7_Camo_A","UK3CB_BAF_H_Mk7_Camo_B","UK3CB_BAF_H_Mk7_Camo_C","UK3CB_BAF_H_Mk7_Camo_D")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("rhsusf_opscore_mc_cover_pelt","rhsusf_opscore_mc_cover_pelt_nsw","rhsusf_opscore_mc_cover_pelt_cam")
#define HELMET_DIVER ARR_2("rhsusf_opscore_mc_pelt","rhsusf_opscore_mc_pelt_nsw")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("UK3CB_BAF_H_CrewHelmet_A")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_O")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_O")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("UK3CB_BAF_H_Beret_RM_Officer")
#define CAP_XO      ARR_1("UK3CB_BAF_H_Beret_RM_Officer_PRR")
#define CAP_OFFICER ARR_1("UK3CB_BAF_H_Beret_RM_Bootneck_PRR")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_5("UK3CB_BAF_G_Tactical_Black","UK3CB_BAF_G_Tactical_Clear","UK3CB_BAF_G_Tactical_Grey","UK3CB_BAF_G_Tactical_Orange","UK3CB_BAF_G_Tactical_Yellow")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_3("rhsusf_oakley_goggles_blk","rhsusf_oakley_goggles_clr","rhsusf_oakley_goggles_ylw")
#define GOGGLES_SF		ARR_7(GOGGLES_SF_FULL,"rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan")
#define GOGGLES_SF_FULL ARR_6("rhsusf_shemagh_gogg_grn","rhsusf_shemagh2_gogg_grn","rhsusf_shemagh_gogg_od","rhsusf_shemagh2_gogg_od","rhsusf_shemagh_gogg_tan","rhsusf_shemagh2_gogg_tan")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("UK3CB_BAF_HMNVS")
#define NVG_SF  ARR_1("NVGoggles_OPFOR")

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("UK3CB_BAF_Soflam_Laserdesignator")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")
#define RADIO_SR "ACRE_PRC343"

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("UK3CB_BAF_Insignia_RMDagger_1")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
