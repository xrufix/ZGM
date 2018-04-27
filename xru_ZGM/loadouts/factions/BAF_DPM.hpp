#include "BAF_MTP.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve")          // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE, UNIFORM_COMPANY)     // Für Zufallsauswahl
#define UNIFORM_COMPANY     "UK3CB_BAF_U_CombatUniform_DPMW"
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        "UK3CB_BAF_U_JumperUniform_DPMW"
#define UNIFORM_HELICOPTER  ARR_3("UK3CB_BAF_U_HeliPilotCoveralls_Army","UK3CB_BAF_U_HeliPilotCoveralls_RAF","UK3CB_BAF_U_HeliPilotCoveralls_RN")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("UK3CB_BAF_V_Osprey_DPMW1")
#define VEST_OFFICER    VEST_LIGHT
#define VEST_LIGHT      ARR_1("UK3CB_BAF_V_Osprey_DPMW2")
#define VEST_RM         ARR_4("UK3CB_BAF_V_Osprey_DPMW4","UK3CB_BAF_V_Osprey_DPMW5","UK3CB_BAF_V_Osprey_DPMW6","UK3CB_BAF_V_Osprey_DPMW7")
#define VEST_GR         "UK3CB_BAF_V_Osprey_DPMW3"
#define VEST_CM         "UK3CB_BAF_V_Osprey_DPMW9"
#define VEST_SL         VEST_GR
#define VEST_TL         VEST_RM
#define VEST_MG         "UK3CB_BAF_V_Osprey_DPMW8"
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_LIGHT

#define VEST_RECON		VEST_RM
#define VEST_RECON_TL	VEST_SL
#define VEST_RECON_MG	VEST_MG
#define VEST_RECON_GR	VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		VEST_RECON



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
#define BACKPACK_KITBAG     ARR_1("UK3CB_BAF_B_Bergen_DPMW_Rifleman_A")
#define BACKPACK_CARRYALL   ARR_1("UK3CB_BAF_B_Bergen_DPMW_Rifleman_B")
#define BACKPACK_RADIO      ARR_1("UK3CB_BAF_B_Bergen_DPMW_SL_A")
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
#define RCO     "UK3CB_BAF_SUSAT"
#define CCO     "UK3CB_BAF_SUSAT"

#define SNIPER_OPTIC    "RKSL_optic_PMII_525_wdl"
#define SNIPER_OPTIC_NV "UK3CB_BAF_MaxiKite"

#define DMR_BIPOD       "ace_banana"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("UK3CB_BAF_L85A2")
#define RIFLE_UGL       ARR_1("UK3CB_BAF_L85A2_UGL")

#define RIFLE_RCO       WEAPON(RIFLE,RCO,"","")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,RCO,"","")
#define RIFLE_CCO       WEAPON(RIFLE,RCO,"","")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,RCO,"","")

#define MAG_RIFLE		 ARR_1("UK3CB_BAF_556_30Rnd")
#define MAG_RIFLE_TRACER ARR_1("UK3CB_BAF_556_30Rnd_T")

// PDW
#define PDW     ARR_1("hlc_smg_mp5a3")
#define MAG_PDW	ARR_1("hlc_30Rnd_9x19_GD_MP5")

// CARBINE

#define CARBINE     RIFLE
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE_CCO        WEAPON(CARBINE,RCO,"","")
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         WEAPON(RIFLE,RCO,"","UK3CB_BAF_Silencer_L85")
#define RIFLE_UGL_RECON     WEAPON(RIFLE_UGL,RCO,"","UK3CB_BAF_Silencer_L85")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON("UK3CB_BAF_L86A2",RCO,"","")
#define MAG_DMR       MAG_RIFLE

#define DMR_RECON     WEAPON("UK3CB_BAF_L86A2",RCO,"UK3CB_BAF_Silencer_L85","")
#define DMR_DIVER     DMR_RECON
#define MAG_DMR_RECON MAG_RIFLE

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            DMR
#define MAGS_AUTORIFLE       ARR_4(MAG_RIFLE,12,MAG_RIFLE_TRACER,4)
#define MAGS_AUTORIFLE_ASST  ARR_4(MAG_RIFLE,6,MAG_RIFLE_TRACER,3)

#define AUTORIFLE_RECON      DMR_RECON
#define MAGS_AUTORIFLE_RECON MAGS_AUTORIFLE

#define MMG           WEAPON("UK3CB_BAF_L7A2",RCO,"","")
#define MAGS_MMG      ARR_2("UK3CB_BAF_762_100Rnd",2)
#define MAGS_MMG_ASST ARR_2("UK3CB_BAF_762_100Rnd",2)

/* ###################### - SIDEARMS - ###################### */


/* ###################### - LAUNCHERS - ###################### */


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_3("UK3CB_BAF_H_Mk6_DPMW_A","UK3CB_BAF_H_Mk6_DPMW_B","UK3CB_BAF_H_Mk6_DPMW_C")
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_2("UK3CB_BAF_H_Boonie_DPMW","UK3CB_BAF_H_Boonie_DPMW_PRR")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("UK3CB_BAF_H_CrewHelmet_DPMW_A")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_O")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_O")
#define HELMET_JET			HELMET_HELICOPTER

// COMMANDERS
#define CAP_CO      ARR_1("UK3CB_BAF_H_Beret_RM_Officer")
#define CAP_XO      ARR_1("UK3CB_BAF_H_Beret_RM_Officer_PRR")
#define CAP_OFFICER ARR_1("UK3CB_BAF_H_Beret_RM_Bootneck_PRR")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")

#define GOGGLES_FULL    ARR_1("rhs_ess_black")
#define GOGGLES_SF		ARR_6("rhsusf_shemagh_grn","rhsusf_shemagh2_grn","rhsusf_shemagh_od","rhsusf_shemagh2_od","rhsusf_shemagh_tan","rhsusf_shemagh2_tan")
#define GOGGLES_SF_FULL GOGGLES_SF


/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF  ARR_1("CUP_NVG_HMNVS")

/* ###################### - BINOCULARS - ###################### */

/* ###################### - RADIOS - ###################### */


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.

