#include "BAF_MTP.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("CUP_U_B_BAF_DPM_S1_RolledUp")          // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_COMPANY,UNIFORM_SINGLE)     // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("CUP_U_B_BAF_DPM_S2_UnRolled")
#define UNIFORM_RECON       UNIFORM_SINGLE
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("CUP_U_B_BAF_DPM_Tshirt")
#define UNIFORM_HELICOPTER  UNIFORM_COMPANY
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Empty")
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Scout")
#define VEST_RM         ARR_2("CUP_V_BAF_Osprey_Mk2_DPM_Soldier1","CUP_V_BAF_Osprey_Mk2_DPM_Soldier2")
#define VEST_GR         ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Grenadier")
#define VEST_CM         ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Medic")
#define VEST_SL         ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Officer")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Sapper")
#define VEST_DM         VEST_MG

#define VEST_CREW		ARR_1("CUP_V_BAF_Osprey_Mk2_DPM_Crewman")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_oli")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_TacticalPack_oli")
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("B_TacticalPack_oli")

/* ###################### - ATTACHMENTS- ###################### */

#define RCO     "rhsusf_acc_ACOG"
#define CCO     "rhsusf_acc_ACOG"

/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE

// PDW

// CARBINE

// SF CARBINES

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES

// AUTOMATIC RIFLES & MACHINE GUNS

/* ###################### - SIDEARMS - ###################### */

/* ###################### - LAUNCHERS - ###################### */

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("CUP_H_BAF_Helmet_3_DPM")
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("CUP_H_BAF_Helmet_1_DPM")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("CUP_H_BAF_Crew_Helmet_DPM")

// COMMANDERS
#define CAP_OFFICER ARR_1("H_Cap_oli_hs")

/* ###################### - GOGGLES / FACEWEAR - ###################### */

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")

/* ###################### - BINOCULARS - ###################### */

/* ###################### - RADIOS - ###################### */

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
