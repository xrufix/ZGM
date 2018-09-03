#include "BW_FLECK.hpp"
/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("pbw_uniform3k_tropen")
#define UNIFORM             ARR_7("pbw_uniform1_tropen","pbw_uniform1h_tropen","pbw_uniform2_tropen","pbw_uniform3_tropen","pbw_uniform3k_tropen","pbw_uniform4_tropen","pbw_uniform4k_tropen")
#define UNIFORM_COMPANY     ARR_1("pbw_uniform1_tropen")
#define UNIFORM_RECON     UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("bwa3_uniform_helipilot")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls") 
#define UNIFORM_SNIPER      ARR_2("U_B_FullGhillie_sard","U_B_FullGhillie_ard")

/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("BWA3_Vest_tropen")
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      ARR_1("BWA3_Vest_Rifleman_tropen")
#define VEST_RM         VEST_LIGHT
#define VEST_GR         ARR_1("BWA3_Vest_Grenadier_tropen")
#define VEST_CM         ARR_1("BWA3_Vest_Medic_tropen")
#define VEST_SL         ARR_1("BWA3_Vest_Leader_tropen")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("BWA3_Vest_MachineGunner_Tropen")
#define VEST_DM         ARR_1("BWA3_Vest_Marksman_tropen")

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			ARR_3("VSM_FAPC_Operator_OGA","VSM_RAV_operator_OGA","VSM_CarrierRig_Operator_OGA")
#define VEST_RECON_TL		VEST_RECON
#define VEST_RECON_MG		ARR_2("VSM_RAV_MG_OGA","VSM_FAPC_MG_OGA")
#define VEST_RECON_GR		VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("VSM_FAPC_Operator_OGA")

#define VEST_PROTECTED  "W_V_EOD_coyote_ICRC"

/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("BWA3_AssaultPack_tropen")
#define BACKPACK_KITBAG     ARR_1("BWA3_Kitbag_tropen")
#define BACKPACK_CARRYALL   ARR_1("BWA3_PatrolPack_tropen")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("BWA3_FieldPack_tropen")

/* ###################### - ATTACHMENTS- ###################### */



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE

// PDW

// CARBINE

// SF CARBINES

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR_RECON   WEAPON("arifle_SPAR_03_snd_F","rhsusf_acc_LEUPOLDMK4_2","bipod_01_f_snd","hlc_muzzle_300blk_KAC","bwa3_acc_varioray_irlaser")

#define SR_AP       WEAPON_OLD("hlc_rifle_awMagnum_fde_ghillie","rhsusf_acc_LEUPOLDMK4_2","","")

#define SR_AM       WEAPON_OLD("rhs_weap_M107_d","rhsusf_acc_LEUPOLDMK4_2","","")


// AUTOMATIC RIFLES & MACHINE GUNS

/* ###################### - SIDEARMS - ###################### */

/* ###################### - LAUNCHERS - ###################### */
#define AT_MISSILE              WEAPON_OLD("launch_b_Titan_short_F","","","")

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2("PBW_Helm1_tropen","PBW_Helm1_tropen_h")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_2("PBW_Helm4_tropen","PBW_Helm4_tropen_h")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("BWA3_OpsCore_tropen_Camera","BWA3_OpsCore_tropen_Patch","BWA3_OpsCore_tropen")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("BWA3_CrewmanKSK_tropen_Headset")

// COMMANDERS

/* ###################### - GOGGLES / FACEWEAR - ###################### */

/* ###################### - NIGHT VISION DEVICES - ###################### */

/* ###################### - BINOCULARS - ###################### */
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */

/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
