/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "UK3CB_TKA_O_U_CombatUniform_01_ADPM"     // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)               // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("UK3CB_TKA_O_U_Officer_ADPM")
#define UNIFORM_RECON       ARR_1("UK3CB_TKA_I_U_CombatUniform_01_TKA_Brush")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("UK3CB_TKA_I_U_CrewUniform_01_KHK")
#define UNIFORM_HELICOPTER  ARR_1("UK3CB_TKA_B_U_H_Pilot_DES")
#define UNIFORM_JET         ARR_1("UK3CB_TKA_O_U_J_Pilot_Digi")
#define UNIFORM_SNIPER      ARR_2("U_I_FullGhillie_sard","U_I_FullGhillie_ard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhs_6sh46"
#define VEST_OFFICER    "UK3CB_TKA_O_V_6b23_ml_crewofficer_Oli"
#define VEST_LIGHT      "UK3CB_TKA_I_V_6Sh92_Des"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         "UK3CB_TKA_I_V_6Sh92_vog_Des"
#define VEST_CM         VEST_RM
#define VEST_TL         "UK3CB_TKA_I_V_6Sh92_Radio_Des"
#define VEST_SL         VEST_TL
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_LIGHT

#define VEST_RECON		"UK3CB_TKA_O_V_6b23_ml_Oli_TKA_Brush"
#define VEST_RECON_TL	"UK3CB_TKA_O_V_6b23_ML_6sh92_radio_Oli_TKA_Brush"
#define VEST_RECON_MG	VEST_RECON
#define VEST_RECON_GR	"UK3CB_TKA_O_V_6b23_ml_6sh92_vog_Oli_TKA_Brush"

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		VEST_RM

#define VEST_PROTECTED  "UK3CB_TKA_O_V_6b23_medic_Oli"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_cbr")
#define BACKPACK_KITBAG     ARR_1("rhssaf_kitbag_smb")
#define BACKPACK_CARRYALL   ARR_1("rhssaf_alice_smb")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      BACKPACK_CARRYALL
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_DShkM_Gun_Bag"
#define HMG_TRIPOD	"RHS_DShkM_TripodLow_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "ace_banana"
#define DMR_BIPOD   "ace_banana"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_CCO       "rhs_weap_ak74m"
#define RIFLE_RCO       RIFLE_CCO


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_CCO   "rhs_weap_ak74m_gp25"
#define RIFLE_UGL_RCO   RIFLE_UGL_CCO

#define MAG_RIFLE           ARR_1("rhs_30Rnd_545x39_7N10_AK")
#define MAG_RIFLE_TRACER    ARR_1("rhs_30Rnd_545x39_AK_plum_green")

// PDW
#define PDW         "rhs_weap_pp2000"
#define MAG_PDW     ARR_1("rhs_mag_9x19mm_7n21_20")


// CARBINE
#define CARBINE     "rhs_weap_aks74n"
#define CARBINE_CCO CARBINE

#define CARBINE_UGL         "rhs_weap_aks74n_gp25"
#define CARBINE_UGL_CCO     CARBINE_UGL

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON             WEAPON("rhs_weap_ak104","rhs_acc_ekp8_02","rhs_acc_perst1ik","rhs_acc_dtk4long","")
#define RIFLE_UGL_RECON         WEAPON("rhs_weap_ak103_gp25","rhs_acc_ekp8_02","","rhs_acc_dtk4long","")
#define RIFLE_RECON_TAN         RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		    RIFLE_RECON
#define RIFLE_UGL_DIVER 	    RIFLE_UGL_RECON

#define MAG_RIFLE_RECON         "rhs_30Rnd_762x39mm_polymer"
#define MAG_RIFLE_RECON_TRACER  "rhs_30Rnd_762x39mm_polymer_tracer"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("hlc_rifle_g3a3","hlc_optic_accupoint_g3","","","")
#define MAG_DMR     ARR_1("hlc_20rnd_762x51_b_G3")

#define DMR_RECON       WEAPON("rhs_weap_ak103","rhs_acc_pso1m21_ak","","rhs_acc_dtk4long","")
#define DMR_DIVER       DMR_RECON
#define MAG_DMR_RECON   ARR_1("rhs_10Rnd_762x39mm")

#define SR_AP       WEAPON_OLD("rhs_weap_svdp","rhs_acc_pso1m2","","")
#define MAGS_SR_AP  ARR_2("rhs_10Rnd_762x54mmR_7N1",20)

#define SR_AM       WEAPON_OLD("srifle_GM6_F","optic_KHS_old","","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",5,"5Rnd_127x108_APDS_Mag",5,"ACE_5Rnd_127x99_API_Mag",5)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("hlc_rifle_rpk","","","")
#define MAG_AUTORIFLE       ARR_1("hlc_75Rnd_762x39_m_rpk")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,4)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        WEAPON_OLD("hlc_rifle_rpk","","","")
#define MAGS_AUTORIFLE_RECON   ARR_4("hlc_75Rnd_762x39_b_rpk",4,"hlc_75Rnd_762x39_m_rpk",3)

#define MMG                 WEAPON_OLD("rhs_weap_pkp","","","")
#define MAGS_MMG            ARR_2("rhs_100Rnd_762x54mmR_7N13",2)
#define MAGS_MMG_ASST       ARR_2("rhs_100Rnd_762x54mmR_7N13",2)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("rhsusf_weap_m1911a1","","","")
#define MAG_PISTOL 		ARR_1("rhsusf_mag_7x45acp_MHP")

#define PISTOL_SF	    WEAPON_OLD("hgun_Rook40_F","muzzle_snds_L","","")
#define MAG_PISTOL_SF 	ARR_1("16Rnd_9x21_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_rpg26","","","")
#define MAGS_AT_LIGHT           ARR_1("rhs_rpg26_mag")

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v3","","")
#define MAGS_AT_ROCKET          ARR_3("rhs_rpg7_PG7VR_mag",2,"rhs_rpg7_TBG7V_mag")
#define MAGS_AT_ROCKET_ASST     ARR_4("rhs_rpg7_PG7VR_mag",3,"rhs_rpg7_OG7V_mag",3)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON_OLD("launch_O_Vorona_brown_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Vorona_HEAT")
#define MAGS_AT_MISSILE_ASST    ARR_1("Vorona_HEAT")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("UK3CB_TKA_O_H_6b27m_ADPM")
// NON-COMBAT INFANTRY
#define HELMET_BARE "UK3CB_TKA_O_H_6b27m_Tan"
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("H_Shemag_olive","H_ShemagOpen_tan","H_ShemagOpen_khk")
#define HELMET_DIVER ARR_1("")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("UK3CB_H_Crew_Cap","UK3CB_H_Crew_Cap_Ess")
#define HELMET_HELICOPTER	ARR_2("UK3CB_TKA_O_H_zsh7a_mike_Des","UK3CB_TKA_O_H_zsh7a_mike_Des_alt")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("UK3CB_TKA_O_H_zsh7a_Des_alt","UK3CB_TKA_O_H_zsh7a_Des")

// COMMANDERS
#define CAP_CO      ARR_1("UK3CB_TKA_B_H_Beret")
#define CAP_XO      ARR_1("UK3CB_TKA_B_H_Beret")
#define CAP_OFFICER ARR_1("UK3CB_TKA_O_H_Patrolcap_OFF_ADPM")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","rhs_scarf")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Lowprofile")
#define GOGGLES_SF		ARR_1("")
#define GOGGLES_SF_FULL GOGGLES_FULL
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("NVGoggles_OPFOR")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ace_vector")
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM70")
#define RADIO_SR ""



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("UK3CB_TKA_B_Insignia_Armed_Forces_01")
#define INSIGNIA_SF ARR_1("UK3CB_TKA_O_Insignia_Recon")
#define INSIGNIA_TNK ARR_1("UK3CB_TKA_B_Insignia_Crew")
#define INSIGNIA_HELI ARR_1("UK3CB_TKA_B_Insignia_Pilot")
#define INSIGNIA_JET ARR_1("UK3CB_TKA_O_Insignia_Airforce")
#define INSIGNIA_MEV ARR_1("UK3CB_TKA_B_Insignia_Armed_Forces_02")
#define INSIGNIA_SUPPORT ARR_1("UK3CB_TKA_O_Insignia_Army")
