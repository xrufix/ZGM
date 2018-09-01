/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_rhsafrf.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_flora"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("rhs_uniform_gorka_r_y")
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM_COMPANY
#define UNIFORM_HELICOPTER  ARR_1("rhs_uniform_df15_tan")
#define UNIFORM_JET         ARR_1("rhs_uniform_df15")
#define UNIFORM_SNIPER      ARR_3("U_I_FullGhillie_sard","U_I_FullGhillie_ard","U_I_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhs_6b23"
#define VEST_OFFICER    "rhs_6b23_crewofficer"
#define VEST_LIGHT      "rhs_6b23_6sh92"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         "rhs_6b23_6sh92_vog"
#define VEST_CM         "rhs_6b23_medic"
#define VEST_TL         "rhs_6b23_6sh92_headset_mapcase"
#define VEST_SL         "rhs_6b23_6sh92_vog_headset"
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		"rhs_6b23_crew"

#define VEST_RECON			VEST_TL
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		VEST_SL

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		VEST_RECON

#define VEST_PROTECTED  "V_Plain_crystal_F"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("rhs_assault_umbts")
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
#define DMR_BIPOD   "ace_banana"
#define SNIPER_OPTIC_NV "ace_banana"

/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1 ARR_1("rhs_weap_ak74m")
#define RIFLE_2 ARR_1("rhs_weap_ak74m_2mag")
#define RIFLE_3 ARR_1("rhs_weap_ak74m_2mag_camo")
#define RIFLE_4 ARR_1("rhs_weap_ak74m_fullplum")

#define RIFLE_CCO ARR_4( \
    WEAPON(RIFLE_1,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_2,"","","rhs_acc_dtk3"), \
    WEAPON(RIFLE_3,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_4,"","","rhs_acc_dtk3"))
#define RIFLE_RCO ARR_4( \
    WEAPON(RIFLE_1,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_2,"","","rhs_acc_dtk3"), \
    WEAPON(RIFLE_3,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_4,"","","rhs_acc_dtk3"))


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_1     ARR_1("rhs_weap_ak74m_gp25")
#define RIFLE_UGL_2     ARR_1("rhs_weap_ak74m_fullplum_gp25")

#define RIFLE_UGL_CCO ARR_2( \
    WEAPON(RIFLE_UGL_1,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_UGL_2,"","","rhs_acc_dtk3"))
#define RIFLE_UGL_RCO ARR_2( \
    WEAPON(RIFLE_UGL_1,"","","rhs_acc_dtk2"), \
    WEAPON(RIFLE_UGL_2,"","","rhs_acc_dtk3"))

#define MAG_RIFLE           ARR_1("rhs_30Rnd_545x39_7N10_plum_AK")
#define MAG_RIFLE_TRACER    ARR_1("rhs_30Rnd_545x39_AK_plum_green")

// PDW
#define PDW "rhs_weap_aks74u"
#define MAG_PDW ARR_1("rhs_30Rnd_545x39_7N6M_AK")


// CARBINE
#define CARBINE_1   "rhs_weap_aks74"
#define CARBINE_2   "rhs_weap_aks74_2"
#define CARBINE ARR_2( \
    WEAPON(CARBINE_1,"","","rhs_acc_dtk3"), \
    WEAPON(CARBINE_2,"","","rhs_acc_dtk2"))
#define CARBINE_CCO CARBINE

#define CARBINE_UGL        WEAPON("rhs_weap_aks74_gp25","","","rhs_acc_dtk3")
#define CARBINE_UGL_CCO    CARBINE_UGL

#define MAG_CARBINE         "rhs_30Rnd_545x39_7N6M_AK"
#define MAG_CARBINE_TRACER  "rhs_30Rnd_545x39_AK_green"


// SF CARBINES
#define RIFLE_RECON              WEAPON("rhs_weap_ak103","rhs_acc_pkas","rhs_acc_2dpzenit","rhs_acc_dtk4long")
#define RIFLE_UGL_RECON          WEAPON("rhs_weap_ak103_gp25","rhs_acc_pkas","","rhs_acc_dtk4long")
#define RIFLE_RECON_TAN          RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		 RIFLE_UGL_RECON
#define RIFLE_DIVER 		     WEAPON("rhs_weap_ak103","rhs_acc_pkas","rhs_acc_2dpzenit","rhs_acc_dtk")
#define RIFLE_UGL_DIVER 	     WEAPON("rhs_weap_ak103_gp25","rhs_acc_pkas","","rhs_acc_dtk")

#define MAG_RIFLE_RECON          "rhs_30Rnd_762x39mm_polymer"
#define MAG_RIFLE_RECON_TRACER   "rhs_30Rnd_762x39mm_polymer_tracer"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("rhs_weap_ak74m_fullplum","rhs_acc_1p78","","rhs_acc_dtk1983")
#define MAG_DMR     MAG_RIFLE

#define DMR_RECON      WEAPON("rhs_weap_svds","rhs_acc_pso1m2","","rhs_acc_tgpv")
#define DMR_DIVER      WEAPON("rhs_weap_svds","rhs_acc_pso1m2","","")
#define MAG_DMR_RECON  ARR_1("rhs_10Rnd_762x54mmR_7N1")

#define SR_AP       WEAPON("rhs_weap_svdp_wd","rhs_acc_pso1m2","","")
#define MAGS_SR_AP  ARR_2("rhs_10Rnd_762x54mmR_7N1",10)

#define SR_AM       WEAPON("CUP_srifle_ksvk","CUP_optic_PSO_3","","")
#define MAGS_SR_AM  ARR_2("CUP_5Rnd_127x108_KSVK_M",10)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("hlc_rifle_rpk74n_45rnd","","","rhs_acc_dtk3")
#define MAG_AUTORIFLE       ARR_1("hlc_45Rnd_545x39_m_rpk")
#define MAGS_AUTORIFLE      ARR_4(MAG_AUTORIFLE,5,"hlc_45Rnd_545x39_t_rpk",5)
#define MAGS_AUTORIFLE_ASST ARR_4(MAG_AUTORIFLE,2,"hlc_45Rnd_545x39_t_rpk",2)

#define AUTORIFLE_RECON        WEAPON("rhs_weap_ak103","","","rhs_acc_pbs1")
#define MAGS_AUTORIFLE_RECON   ARR_2("rhs_75Rnd_762x39mm",6)

#define MMG                 "rhs_weap_pkm"
#define MAGS_MMG            ARR_2("rhs_100Rnd_762x54mmR_7N13",2)
#define MAGS_MMG_ASST       ARR_2("rhs_100Rnd_762x54mmR_7N13",3)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("rhs_weap_makarov_pm","","","")
#define MAG_PISTOL 		ARR_1("rhs_mag_9x18_8_57N181S")

#define PISTOL_SF	    WEAPON("rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","")
#define MAG_PISTOL_SF 	ARR_1("rhs_mag_9x18_8_57N181S")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("rhs_weap_rpg7","rhs_acc_pgo7v","","")
#define MAGS_AT_LIGHT           ARR_2("rhs_rpg7_PG7V_mag",3)

#define AT_ROCKET	            WEAPON("rhs_weap_rpg7","rhs_acc_pgo7v2","","")
#define MAGS_AT_ROCKET          ARR_3("rhs_rpg7_PG7V_mag",2,"rhs_rpg7_OG7V_mag")
#define MAGS_AT_ROCKET_ASST     ARR_4("rhs_rpg7_PG7V_mag",3,"rhs_rpg7_OG7V_mag",3)

#define AA_MISSILE	            WEAPON("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON("CUP_launch_Metis","","","")
#define MAGS_AT_MISSILE         ARR_1("CUP_AT13_M")
#define MAGS_AT_MISSILE_ASST    ARR_1("CUP_AT13_M")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("rhs_ssh68")
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("rhs_6b7_1m_olive")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_2("rhs_tsh4","rhs_tsh4_ess")
#define HELMET_HELICOPTER	ARR_2("rhs_zsh7a_mike_green","rhs_zsh7a_mike_green_alt")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("rhs_zsh7a","rhs_zsh7a_alt")

// COMMANDERS
#define CAP_CO      ARR_1("rhs_beret_mp2")
#define CAP_XO      ARR_1("rhs_beret_mp1")
#define CAP_OFFICER ARR_1("rhs_fieldcap")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","rhs_scarf")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    GOGGLES
#define GOGGLES_SF		ARR_1("G_Balaclava_oli")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_lowprofile")
#define GOGGLES_DIVER	ARR_1("G_I_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("rhs_1PN138")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("rhs_pdu4")
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_SEM52SL")
#define RADIO_PACK 	ARR_1("ACRE_SEM70")



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
