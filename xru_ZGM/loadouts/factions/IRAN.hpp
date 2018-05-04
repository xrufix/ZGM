/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
#define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_O_CombatUniform_ocamo"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("U_O_OfficerUniform_ocamo")
#define UNIFORM_RECON       ARR_1("U_O_V_Soldier_Viper_hex_F")
#define UNIFORM_DIVER       ARR_1("U_O_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         ARR_1("U_O_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_3("U_O_FullGhillie_sard","U_O_FullGhillie_ard","U_O_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      VEST_LIGHT
#define VEST_OFFICER       "v_rangemaster_belt"
#define VEST_LIGHT      "v_chestrig_khk"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         "v_harnessogl_brn"
#define VEST_CM         "v_tacchestrig_cbr_f"
#define VEST_SL         "v_harnesso_brn"
#define VEST_TL         VEST_SL
#define VEST_MG         VEST_SL
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		"V_LegStrapBag_coyote_F"

#define VEST_RECON			VEST_CM
#define VEST_RECON_TL		VEST_RM
#define VEST_RECON_MG		VEST_CM
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		ARR_1("ACE_Banana")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4("B_FieldPack_oli","B_FieldPack_khk","B_FieldPack_cbr","B_FieldPack_ocamo")
#define BACKPACK_KITBAG     ARR_1("B_ViperLightHarness_hex_F")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_ocamo")
#define BACKPACK_RADIO      ARR_1("B_AssaultPack_ocamo")
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("b_viperharness_blk_f")
#define BACKPACK_RECON      ARR_1("b_viperharness_hex_f")

//	CSW-BACKPACKS
#define HMG_GUN		"O_HMG_01_weapon_F"
#define HMG_TRIPOD	"O_HMG_01_support_F"
#define GMG_GUN		"O_GMG_01_weapon_F"
#define GMG_TRIPOD	"O_HMG_01_support_F"
#define MORTAR_GUN	"O_Mortar_01_weapon_F"
#define MORTAR_POD	"O_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "acc_pointer_ir"

#define RCO     "optic_arco_blk_f"
#define RCO_TN  "optic_arco"

#define CCO     "optic_aco"

#define DMR_OPTIC   "optic_khs_hex"
#define DMR_BIPOD   "bipod_02_f_blk"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "arifle_katiba_f"
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")

#define RIFLE_UGL       "arifle_katiba_gl_f"
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE           ARR_1("30Rnd_65x39_caseless_green")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_65x39_caseless_green_mag_Tracer")

// PDW
#define PDW                 WEAPON("smg_02_f","","","")
#define MAG_PDW	            ARR_1("30Rnd_9x21_Mag")


// CARBINE
#define CARBINE             "arifle_katiba_c_f"
#define CARBINE_CCO        WEAPON(CARBINE,CCO,"","")

#define CARBINE_UGL	        RIFLE_UGL
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON              WEAPON("arifle_ARX_hex_F",RCO_TN,LASERPOINTER,"muzzle_snds_65_TI_hex_F")
#define RIFLE_UGL_RECON          WEAPON(RIFLE_UGL,RCO,LASERPOINTER,"muzzle_snds_65_TI_blk_F")
#define RIFLE_RECON_TAN           RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		WEAPON("arifle_ARX_blk_F",RCO,LASERPOINTER,"muzzle_snds_65_TI_blk_F")
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          ARR_3("10Rnd_50BW_Mag_F",2,"30Rnd_65x39_caseless_green")
#define MAG_RIFLE_RECON_TRACER   ARR_1("30Rnd_65x39_caseless_green")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_dmr_01_f",DMR_OPTIC,LASERPOINTER,DMR_BIPOD)
#define MAG_DMR     ARR_1("10Rnd_762x54_Mag")

#define DMR_RECON      WEAPON("srifle_DMR_05_hex_F",DMR_OPTIC,LASERPOINTER,"muzzle_snds_93mmg_tan")
#define DMR_DIVER   WEAPON("srifle_DMR_05_blk_F","optic_KHS_blk",LASERPOINTER,"muzzle_snds_93mmg")
#define MAG_DMR_RECON  ARR_1("10Rnd_93x64_DMR_05_Mag")

#define SR_AP      WEAPON("srifle_DMR_05_hex_F",SNIPER_OPTIC,LASERPOINTER,DMR_BIPOD)
#define MAGS_SR_AP  ARR_2("10Rnd_93x64_DMR_05_Mag",10)

#define SR_AM       WEAPON("srifle_GM6_camo_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",4,"5Rnd_127x108_APDS_Mag",4,"ACE_5Rnd_127x99_AMAX_Mag",2)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("LMG_Zafir_F","optic_Holosight_smg_blk_F",LASERPOINTER,"")
#define MAG_AUTORIFLE       ARR_1("150Rnd_762x54_Box")
#define MAGS_AUTORIFLE      ARR_3(MAG_AUTORIFLE,3,"150Rnd_762x54_Box_Tracer")
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,2)

#define AUTORIFLE_RECON        WEAPON("arifle_CTARS_hex_F",LASERPOINTER,RCO_TN,"muzzle_snds_58_hex_F")
#define MAGS_AUTORIFLE_RECON   ARR_3("100Rnd_580x42_Mag_F",5,"100Rnd_580x42_Mag_Tracer_F")

#define MMG                 WEAPON("MMG_01_hex_F",RCO_TN,LASERPOINTER,DMR_BIPOD)
#define MAGS_MMG            ARR_2("150Rnd_93x64_Mag",2)
#define MAGS_MMG_ASST       MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("hgun_Rook40_F","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	    WEAPON("hgun_Pistol_heavy_02_F","optic_Yorris","muzzle_snds_L","")
#define MAG_PISTOL_SF 	ARR_1("6Rnd_45ACP_Cylinder")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("launch_rpg32_f","","","")
#define MAGS_AT_LIGHT           ARR_3("RPG32_F",2,"RPG32_HE_F")

#define AT_ROCKET	            AT_LIGHT
#define MAGS_AT_ROCKET          MAGS_AT_LIGHT
#define MAGS_AT_ROCKET_ASST     ARR_4("RPG32_F",2,"RPG32_HE_F",2)

#define AA_MISSILE	            WEAPON("launch_O_Titan_F","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

#define AT_MISSILE              WEAPON("launch_O_Vorona_brown_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Vorona_HEAT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Vorona_HEAT",2,"Vorona_HE")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "H_HelmetO_ocamo",  \
    "H_HelmetLeaderO_ocamo"         \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetSpecO_ocamo")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetO_ViperSP_hex_F")
#define HELMET_DIVER ARR_1("H_HelmetSpecO_blk")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_Tank_black_F")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_O")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_O")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_O")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_milcap_ocamo")
#define CAP_OFFICER ARR_3("H_milcap_ocamo","H_Cap_brn_SPECOPS","H_Cap_headphones")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","G_Balaclava_blk")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    GOGGLES
#define GOGGLES_SF		""
#define GOGGLES_SF_FULL ""
#define GOGGLES_DIVER	ARR_1("G_O_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("O_NVGoggles_hex_f")
#define NVG_SF	ARR_1("")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_02")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
