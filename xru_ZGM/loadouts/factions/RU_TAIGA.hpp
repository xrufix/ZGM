/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_O_R_Gorka_01_camo_F"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("U_O_R_Gorka_01_F")
#define UNIFORM_DIVER       ARR_1("xru_u_o_wetsuit_grn")
#define UNIFORM_CREW        ARR_1("U_O_R_Gorka_01_black_F")
#define UNIFORM_HELICOPTER  ARR_1("U_O_PilotCoveralls")
#define UNIFORM_JET         UNIFORM_HELICOPTER
#define UNIFORM_SNIPER      ARR_3("U_O_FullGhillie_sard","U_O_FullGhillie_ard","U_O_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "w_v_harnesso_black"
#define VEST_OFFICER    VEST_EMPTY
#define VEST_LIGHT      "V_SmershVest_01_F"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         "w_v_harnessogl_black"
#define VEST_CM         "V_TacVestIR_blk"
#define VEST_SL         "V_SmershVest_01_radio_F"
#define VEST_TL         VEST_RM
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		ARR_1("ACE_Banana")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_taiga_F")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_RadioBag_01_black_F")
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("b_viperharness_blk_f")
#define BACKPACK_RECON      ARR_1("B_FieldPack_green_F")

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_Kord_Gun_Bag"
#define HMG_TRIPOD	"RHS_Kord_Tripod_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */

#define LASERPOINTER "rhs_acc_perst3"
#define RCO     "optic_arco_ak_lush_f"
#define CCO     RCO

/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "arifle_AK12_lush_F"
#define RIFLE_RCO       WEAPON_OLD(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,LASERPOINTER,CCO,"")

#define RIFLE_UGL       "arifle_AK12_GL_lush_F"
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE           ARR_1("30rnd_762x39_AK12_Lush_Mag_F")
#define MAG_RIFLE_TRACER    ARR_1("30rnd_762x39_AK12_Lush_Mag_Tracer_F")

// PDW
#define PDW                 WEAPON_OLD("arifle_AK12U_F","optic_holosight_blk_f","","")
#define MAG_PDW	            "30Rnd_762x39_AK12_Mag_F"


// CARBINE
#define CARBINE             "arifle_AK12_F"
#define CARBINE_CCO         WEAPON_OLD(CARBINE,"optic_arco_ak_blk_f","","")

#define CARBINE_UGL	        "arifle_AK12_GL_F"
#define CARBINE_UGL_CCO     WEAPON_OLD(CARBINE_UGL,"optic_arco_ak_blk_f","","")

#define MAG_CARBINE         "30Rnd_762x39_AK12_Mag_F"
#define MAG_CARBINE_TRACER  "30Rnd_762x39_AK12_Mag_Tracer_F"


// SF CARBINES
#define RIFLE_RECON         WEAPON_OLD(RIFLE,RCO,LASERPOINTER,"muzzle_snds_b_lush_f")
#define RIFLE_UGL_RECON     WEAPON_OLD(RIFLE_UGL,RCO,LASERPOINTER,"muzzle_snds_b_lush_f")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON_OLD("w_dmr_01_black","optic_khs_blk",LASERPOINTER,"bipod_02_f_blk")
#define MAG_DMR     ARR_1("10Rnd_762x54_Mag")

#define DMR_RECON       WEAPON("srifle_DMR_04_Tan_F","optic_nightstalker",LASERPOINTER,"","bipod_02_f_tan")
#define DMR_DIVER       WEAPON("srifle_DMR_04_F","optic_nightstalker",LASERPOINTER,"","bipod_02_f_blk")
#define MAG_DMR_RECON   ARR_1("10Rnd_127x54_Mag")

#define SR_AP       WEAPON_OLD("srifle_DMR_05_tan_f",SNIPER_OPTIC,LASERPOINTER,DMR_BIPOD)
#define MAGS_SR_AP  ARR_2("10Rnd_93x64_DMR_05_Mag",10)

#define SR_AM       WEAPON_OLD("srifle_GM6_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",4,"5Rnd_127x108_APDS_Mag",4,"ACE_5Rnd_127x99_AMAX_Mag",2)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("arifle_RPK12_lush_F",RCO,LASERPOINTER,"")
#define MAGS_AUTORIFLE      ARR_4("75rnd_762x39_AK12_Lush_Mag_F",6,"75rnd_762x39_AK12_Lush_Mag_Tracer_F",3)
#define MAGS_AUTORIFLE_ASST ARR_4("75rnd_762x39_AK12_Lush_Mag_F",3,"75rnd_762x39_AK12_Lush_Mag_Tracer_F",1)

#define AUTORIFLE_RECON         WEAPON_OLD("arifle_RPK12_lush_F",RCO,LASERPOINTER,"muzzle_snds_b_lush_f")
#define MAGS_AUTORIFLE_RECON    MAGS_AUTORIFLE

#define MMG                 WEAPON_OLD("rhs_weap_pkp","rhs_acc_nita","","")
#define MAGS_MMG            ARR_2("rhs_100Rnd_762x54mmR_7N13",2)
#define MAGS_MMG_ASST       ARR_3(MAGS_MMG,"rhs_100Rnd_762x54mmR_green",2)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("hgun_Rook40_F","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	    WEAPON_OLD("hgun_Rook40_F","muzzle_snds_l","","")
#define MAG_PISTOL_SF 	ARR_1("16Rnd_9x21_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("xru_rpg32_green","","","")
#define MAGS_AT_LIGHT           ARR_3("RPG32_F",2,"RPG32_HE_F")

#define AT_ROCKET	            AT_LIGHT
#define MAGS_AT_ROCKET          MAGS_AT_LIGHT
#define MAGS_AT_ROCKET_ASST     ARR_4("RPG32_F",2,"RPG32_HE_F",2)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON_OLD("launch_O_Vorona_green_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Vorona_HEAT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Vorona_HEAT",2,"Vorona_HE")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET  "H_HelmetAggressor_cover_taiga_F"
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetAggressor_F")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetAggressor_cover_F")
#define HELMET_DIVER ARR_1("H_HelmetAggressor_F")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_Tank_black_F")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_O")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_O")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_O")

// COMMANDERS
#define CAP_CO      ARR_1("rhs_beret_vdv1")
#define CAP_XO      ARR_1("rhs_beret_vdv1")
#define CAP_OFFICER ARR_1("H_MilCap_taiga")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("G_Balaclava_blk","")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_2("G_Lowprofile","G_Balaclava_lowprofile")
#define GOGGLES_SF		"G_AirPurifyingRespirator_02_olive_F"
#define GOGGLES_SF_FULL GOGGLES_SF
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	""



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("O_NVGoggles_grn_F")
#define NVG_SF	ARR_1("O_NVGoggles_grn_F")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("rhssaf_zrak_rd7j")
#define RANGEFINDER	ARR_1("rhs_pdu4")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")
#define RADIO_SR "ACRE_PRC343"


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("Spetsnaz223rdDetachment")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
