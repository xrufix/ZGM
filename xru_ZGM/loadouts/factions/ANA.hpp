/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "UK3CB_ANA_B_U_CombatUniform_01_SPEC4CE"     // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE, "UK3CB_ANA_B_U_CombatUniform_Shortsleeve_01_SPEC4CE")               // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("UK3CB_ANA_B_U_Officer_SPEC4CE")
#define UNIFORM_RECON       ARR_2("UK3CB_ANA_B_U_CombatUniform_01_WDL","UK3CB_ANA_B_U_CombatUniform_Shortsleeve_01_WDL")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("UK3CB_ANA_B_U_H_Pilot_DES")
#define UNIFORM_JET         ARR_1("UK3CB_ANA_B_U_J_Pilot_Nato")
#define UNIFORM_SNIPER      ARR_2("U_I_FullGhillie_sard","U_I_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "UK3CB_ANA_B_V_Vest_TAN_01"
#define VEST_OFFICER    "UK3CB_ANA_B_V_CREW_Vest_TAN"
#define VEST_LIGHT      "UK3CB_ANA_B_V_RFL_Vest_TAN_01"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         VEST_LIGHT
#define VEST_CM         VEST_RM
#define VEST_TL         "UK3CB_ANA_B_V_SL_Vest_TAN_01"
#define VEST_SL         VEST_TL
#define VEST_MG         "UK3CB_ANA_B_V_MG_Vest_TAN_01"
#define VEST_DM         "UK3CB_ANA_B_V_MK_Vest_TAN_01"

#define VEST_CREW		"UK3CB_ANA_B_V_CREW_Vest_TAN"

#define VEST_RECON		"UK3CB_ANA_B_V_RFL_Vest_WDL_01"
#define VEST_RECON_TL	"UK3CB_ANA_B_V_SL_Vest_WDL_01"
#define VEST_RECON_MG	"UK3CB_ANA_B_V_MG_Vest_WDL_01"
#define VEST_RECON_GR	VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		VEST_RM

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("UK3CB_ANA_B_B_RIF")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      BACKPACK_CARRYALL
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"rhs_M252_Gun_Bag"
#define MORTAR_POD	"rhs_M252_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "ace_banana"
#define DMR_BIPOD   "ace_banana"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_CCO       "UK3CB_M16A2"
#define RIFLE_RCO       RIFLE_CCO


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_CCO   "UK3CB_M16A2_UGL"
#define RIFLE_UGL_RCO   RIFLE_UGL_CCO

#define MAG_RIFLE           ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_556x45_Stanag_Tracer_Yellow")

// PDW
#define PDW         "hlc_smg_mp5a3"
#define MAG_PDW     ARR_1("hlc_30Rnd_9x19_B_MP5")


// CARBINE
#define CARBINE     RIFLE_CCO
#define CARBINE_CCO CARBINE

#define CARBINE_UGL         RIFLE_UGL_CCO
#define CARBINE_UGL_CCO     CARBINE_UGL

#define MAG_CARBINE         "30Rnd_556x45_Stanag"
#define MAG_CARBINE_TRACER  "30Rnd_556x45_Stanag_Tracer_Yellow"


// SF CARBINES
#define RIFLE_RECON             WEAPON("rhs_weap_m4_carryhandle","rhsusf_acc_acog2","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15","")
#define RIFLE_UGL_RECON         WEAPON("rhs_weap_m4_m203","rhsusf_acc_acog2","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15side_bk","")
#define RIFLE_RECON_TAN         RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		    RIFLE_RECON
#define RIFLE_UGL_DIVER 	    RIFLE_UGL_RECON

#define MAG_RIFLE_RECON         "30Rnd_556x45_Stanag"
#define MAG_RIFLE_RECON_TRACER  "30Rnd_556x45_Stanag_Tracer_Yellow"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON_OLD("srifle_DMR_06_olive_F","optic_khs_blk","bipod_03_f_blk","")
#define MAG_DMR     ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON       WEAPON_OLD("hlc_rifle_M14","hlc_optic_artel_m14","","hlc_muzzle_gunfighter_comp")
#define DMR_DIVER       DMR_RECON
#define MAG_DMR_RECON   ARR_1("20Rnd_762x51_Mag")

#define SR_AP       WEAPON_OLD("rhs_weap_m24sws_d","rhsusf_acc_m8541_low_d","","rhsusf_acc_m24_silencer_d")
#define MAGS_SR_AP  ARR_4("rhsusf_5Rnd_762x51_m118_special_Mag",8,"rhsusf_5Rnd_762x51_m993_Mag",8)

#define SR_AM       WEAPON_OLD("rhs_weap_M107_w","rhsusf_acc_premier","","")
#define MAGS_SR_AM  ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",4)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("rhs_weap_m249","","","")
#define MAG_AUTORIFLE       ARR_1("rhsusf_200rnd_556x45_M855_mixed_box")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,4)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        AUTORIFLE
#define MAGS_AUTORIFLE_RECON   MAGS_AUTORIFLE

#define MMG                 WEAPON_OLD("rhs_weap_m240B","rhsusf_acc_elcan_ard","","")
#define MAGS_MMG            ARR_2("rhsusf_100Rnd_762x51",2)
#define MAGS_MMG_ASST       ARR_2("rhsusf_100Rnd_762x51",2)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("rhsusf_weap_m9","","","")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_15Rnd_9x19_JHP")

#define PISTOL_SF	    WEAPON_OLD("rhsusf_weap_m9","","","")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_15Rnd_9x19_JHP")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7V_mag",3)

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v3","","")
#define MAGS_AT_ROCKET          ARR_3("rhs_rpg7_PG7VR_mag",2,"rhs_rpg7_TBG7V_mag")
#define MAGS_AT_ROCKET_ASST     ARR_4("rhs_rpg7_PG7VR_mag",3,"rhs_rpg7_OG7V_mag",3)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON_OLD("CUP_launch_M47","","","")
#define MAGS_AT_MISSILE         ARR_1("CUP_Dragon_EP1_M")
#define MAGS_AT_MISSILE_ASST    ARR_1("CUP_Dragon_EP1_M")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2("UK3CB_ANA_B_H_6b27m_SPEC4CE","UK3CB_ANA_B_H_6b27m_ESS_SPEC4CE")
// NON-COMBAT INFANTRY
#define HELMET_BARE "rhs_6b27m_green"
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_2("UK3CB_ANA_B_H_MICH_BARE_DES","UK3CB_ANA_B_H_MICH_BARE_DES_Headset")
#define HELMET_DIVER ARR_1("")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("UK3CB_H_Crew_Cap","UK3CB_H_Crew_Cap_Ess")
#define HELMET_HELICOPTER	ARR_2("rhs_zsh7a_mike_green","rhs_zsh7a_mike_green_alt")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("rhs_zsh7a","rhs_zsh7a_alt")

// COMMANDERS
#define CAP_CO      ARR_1("UK3CB_ANA_B_H_Beret_MAR")
#define CAP_XO      ARR_1("UK3CB_ANA_B_H_OFF_Beret_GRN")
#define CAP_OFFICER ARR_1("UK3CB_ANA_B_H_Patrolcap_spec4ce")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("rhs_ess_black")
#define GOGGLES_SF		ARR_8("rhsusf_shemagh_grn","rhsusf_shemagh_tan","rhsusf_shemagh_white","rhsusf_shemagh_od","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_4("rhsusf_shemagh_gogg_grn","rhsusf_shemagh_gogg_tan","rhsusf_shemagh_gogg_od","rhsusf_shemagh_gogg_white")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("CUP_NVG_PVS7")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ace_vector")
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")
#define RADIO_SR ""



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON "UK3CB_ANA_Insignia_Army_02"
#define INSIGNIA_SF "UK3CB_ANA_Insignia_Spec"
#define INSIGNIA_TNK "UK3CB_ANA_Insignia_Army_04"
#define INSIGNIA_HELI "UK3CB_ANA_Insignia_Airforce"
#define INSIGNIA_JET "UK3CB_ANA_Insignia_Airforce"
#define INSIGNIA_MEV "UK3CB_ANA_Insignia_Army_01"
#define INSIGNIA_SUPPORT "UK3CB_ANA_Insignia_Army_03"
