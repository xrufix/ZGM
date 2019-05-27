/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_hlc.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "UK3CB_CHC_C_U_ACTIVIST_01"        // Für Inventar
#define UNIFORM             ARR_7("rhsgref_uniform_reed","rhsgref_uniform_woodland_olive","rhsgref_uniform_og107_erdl","rhsgref_uniform_altis_lizard_olive","UK3CB_CHC_C_U_COACH_01","UK3CB_CHC_C_U_WOOD_01","UK3CB_CHC_C_U_ACTIVIST_01")
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         UNIFORM
#define UNIFORM_SNIPER      UNIFORM


/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "UK3CB_V_Pouch"
#define VEST_OFFICER    "UK3CB_TKA_O_V_6b23_ml_crewofficer_Oli"
#define VEST_LIGHT      ARR_5("rhs_vydra_3m","UK3CB_TKA_I_V_vydra_3m_Tan","V_TacChestrig_cbr_F","V_TacChestrig_grn_F","V_TacChestrig_oli_F")
#define VEST_RM         ARR_5("UK3CB_TKP_I_V_6Sh92_Khk","UK3CB_TKP_I_V_6Sh92_Blk","UK3CB_TKA_I_V_6Sh92_Khk","rhs_6sh92","UK3CB_TKP_I_V_6Sh92_Tan")
#define VEST_GR         ARR_5("rhs_6sh92_vog","UK3CB_TKA_I_V_6Sh92_vog_Khk","UK3CB_TKA_I_V_6Sh92_vog_Grey","UK3CB_TKA_I_V_6Sh92_vog_Oli","rhs_6sh92_vsr_vog")
#define VEST_CM         VEST_RM
#define VEST_SL         ARR_5("rhs_6sh92_radio","UK3CB_TKP_I_V_6Sh92_Radio_Khk","UK3CB_TKA_I_V_6Sh92_Radio_Grey","UK3CB_TKA_I_V_6Sh92_Radio_Des","UK3CB_TKP_I_V_6Sh92_Radio_Tan")
#define VEST_TL         VEST_SL
#define VEST_MG         VEST_LIGHT
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		"UK3CB_TKA_O_V_6b23_ml_crew_Oli"

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_RM
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "V_Plain_crystal_F"


/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4("B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_2("rhsgref_ttsko_alicepack","rhsgref_hidf_alicepack")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("rhs_rpg_empty")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_DShkM_Gun_Bag"
#define HMG_TRIPOD	"RHS_DShkM_TripodLow_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"


/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER    "ace_banana"
#define DMR_BIPOD       "ace_banana"
#define SNIPER_OPTIC_NV "ace_banana"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_CCO           ARR_4("hlc_rifle_ak74","hlc_rifle_ak74_dirty","hlc_rifle_ak74_dirty2","hlc_rifle_aek971worn")
#define RIFLE_RCO           RIFLE_CCO
// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_CCO       ARR_2("hlc_rifle_aks74_GL","hlc_rifle_ak74m_gl")
#define RIFLE_UGL_RCO       RIFLE_UGL_CCO

#define MAG_RIFLE           ARR_1("30Rnd_545x39_Mag_Green_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_545x39_Mag_Tracer_Green_F")

// CARBINE
#define CARBINE             "hlc_rifle_aks74"
#define CARBINE_CCO         CARBINE

#define CARBINE_UGL         "hlc_rifle_aks74_GL"
#define CARBINE_UGL_CCO     CARBINE_UGL

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// PDW
#define PDW ARR_1("rhs_weap_pp2000")
#define MAG_PDW ARR_1("rhs_mag_9x19mm_7n21_20")

// SF CARBINES
#define RIFLE_RECON     "hlc_rifle_akm"
#define RIFLE_UGL_RECON "hlc_rifle_akmgl"
#define RIFLE_RECON_TAN "hlc_rifle_akm_MTK"

#define RIFLE_UGL_RECON_TAN	RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          "30Rnd_762x39_Mag_Green_F"
#define MAG_RIFLE_RECON_TRACER   "30Rnd_762x39_Mag_Tracer_Green_F"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON_OLD("CUP_srifle_CZ550","","","")
#define MAG_DMR ARR_1("CUP_5x_22_LR_17_HMR_M")

#define DMR_RECON       WEAPON_OLD("rhs_weap_svdp_wd","rhs_acc_pso1m21","","")
#define DMR_DIVER       DMR_RECON
#define MAG_DMR_RECON   "rhs_10Rnd_762x54mmR_7N1"

#define SR_AP       DMR
#define MAGS_SR_AP  ARR_2(MAG_DMR,10)

#define SR_AM       DMR_RECON
#define MAGS_SR_AM  ARR_2(MAG_DMR_RECON,10)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE               WEAPON_OLD("hlc_rifle_rpk","","","")

#define MAG_AUTORIFLE           ARR_1("hlc_75Rnd_762x39_m_rpk")
#define MAGS_AUTORIFLE          ARR_2(MAG_AUTORIFLE,4)
#define MAGS_AUTORIFLE_ASST     ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON         AUTORIFLE
#define MAGS_AUTORIFLE_RECON    MAGS_AUTORIFLE

#define MMG                     "rhs_weap_pkm"
#define MAGS_MMG                ARR_2("rhs_100Rnd_762x54mmR",3)
#define MAGS_MMG_ASST           MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("rhs_weap_makarov_pm","","","")
#define MAG_PISTOL 		ARR_1("rhs_mag_9x18_8_57N181S")

#define PISTOL_SF	    WEAPON_OLD("rhs_weap_tt33","","","")
#define MAG_PISTOL_SF 	ARR_1("rhs_mag_762x25_8")


/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_rpg7","","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7V_mag",3)

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v","","")
#define MAGS_AT_ROCKET          ARR_2("rhs_rpg7_PG7V_mag",1)
#define MAGS_AT_ROCKET_ASST     ARR_2("rhs_rpg7_PG7V_mag",4)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              "launch_O_Vorona_brown_F"
#define MAGS_AT_MISSILE         "Vorona_HEAT"
#define MAGS_AT_MISSILE_ASST    "Vorona_HEAT"



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_9("rhs_beanie_green","UK3CB_H_Beanie_01","rhs_beanie","UK3CB_H_Profiteer_Cap_01","UK3CB_TKA_I_H_Patrolcap_OLI","UK3CB_H_Ushanka_Cap_01","UK3CB_H_Ushanka_Cap_01","UK3CB_H_Villager_Cap_01","H_HeadBandage_stained_F")
// NON-COMBAT INFANTRY
#define HELMET_BARE     HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF       HELMET
#define HELMET_DIVER    HELMET
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("rhs_tsh4","rhs_tsh4_ess")
#define HELMET_HELICOPTER	ARR_2("rhs_zsh7a_mike_alt","rhs_zsh7a_mike")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("rhs_zsh7a","rhs_zsh7a_alt")

// COMMANDERS
#define CAP_CO      ARR_1("UK3CB_H_Civ_Beret")
#define CAP_XO      ARR_1("UK3CB_H_Civ_Beret")
#define CAP_OFFICER HELMET



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_6("","G_Balaclava_blk","G_Balaclava_oli","UK3CB_G_Face_Wrap_01","rhs_scarf","")
#define GOGGLES_OFFICER GOGGLES
#define GOGGLES_FULL    GOGGLES
#define GOGGLES_SF		GOGGLES
#define GOGGLES_SF_FULL GOGGLES
#define GOGGLES_DIVER	GOGGLES
#define GOGGLES_PILOT	GOGGLES



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("Binocular")
#define DESIGNATOR	ARR_1("Binocular")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM52SL")
#define RADIO_SR ""



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
