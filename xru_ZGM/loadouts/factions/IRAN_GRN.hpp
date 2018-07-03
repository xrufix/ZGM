#include "IRAN.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_O_T_Soldier_F"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("U_O_T_Officer_F")
#define UNIFORM_RECON       ARR_1("U_O_V_Soldier_Viper_F")
#define UNIFORM_SNIPER      ARR_1("U_O_T_FullGhillie_tna_F")
#define UNIFORM_DIVER       ARR_1("xru_u_o_wetsuit_grn")



/* ###################### - VESTS - ###################### */
#define VEST_LIGHT      ARR_2("v_chestrig_rgr","v_chestrig_oli")
#define VEST_RM         VEST_LIGHT
#define VEST_GR         ARR_1("v_harnessogl_ghex_f")
#define VEST_CM         ARR_1("w_v_tacvestir_green")
#define VEST_SL         ARR_1("v_harnesso_ghex_f")

#define VEST_CREW		ARR_1("V_LegStrapBag_olive_F")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_3("B_FieldPack_oli","B_FieldPack_khk","B_FieldPack_ghex_f")
#define BACKPACK_KITBAG     ARR_1("B_ViperLightHarness_ghex_F")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_ghex_f")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_RECON      ARR_1("b_viperharness_ghex_f")

//	CSW-BACKPACKS
#define HMG_GUN		"O_HMG_01_weapon_F"
#define HMG_TRIPOD	"O_HMG_01_support_F"
#define GMG_GUN		"O_GMG_01_weapon_F"
#define GMG_TRIPOD	"O_HMG_01_support_F"
#define MORTAR_GUN	"O_Mortar_01_weapon_F"
#define MORTAR_POD	"O_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define RCO_TN  "optic_Arco_ghex_F"

#define CCO     "optic_aco_grn"

#define DMR_OPTIC   "optic_khs_blk"

#define SNIPER_OPTIC    "optic_LRPS_ghex_f"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
// Wie IRAN

// PDW
// Wie IRAN


// CARBINE
// Wie IRAN


// SF CARBINES
#define RIFLE_RECON              WEAPON("arifle_ARX_ghex_F",RCO_TN,LASERPOINTER,"muzzle_snds_65_TI_ghex_F")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR_RECON      DMR_DIVER

#define SR_AP      WEAPON("srifle_DMR_05_blk_F","optic_LRPS",LASERPOINTER,DMR_BIPOD)
#define SR_AM      WEAPON("srifle_GM6_ghex_F",SNIPER_OPTIC,"","")


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_RECON        WEAPON("arifle_CTARS_ghex_F",LASERPOINTER,RCO_TN,"muzzle_snds_58_ghex_F")

#define MMG                 WEAPON("MMG_01_tan_F",RCO,LASERPOINTER,DMR_BIPOD)


/* ###################### - SIDEARMS - ###################### */



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("launch_rpg32_ghex_f","","","")

#define AA_MISSILE	            WEAPON("launch_O_Titan_ghex_F","","","")

#define AT_MISSILE              WEAPON("launch_O_Vorona_green_F","","","")


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "H_HelmetO_ghex_f",  \
    "H_HelmetLeaderO_ghex_f"         \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetSpecO_ghex_f")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetO_ViperSP_ghex_F")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_Tank_black_F")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_milcap_ghex_f")
#define CAP_OFFICER ARR_3("H_milcap_ghex_f","H_Cap_oli_hs","H_Cap_headphones")


/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","G_Balaclava_oli")


/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("O_NVGoggles_ghex_f")



/* ###################### - BINOCULARS - ###################### */
#define DESIGNATOR	ARR_1("Laserdesignator_02_ghex_f")



/* ###################### - RADIOS - ###################### */
// Wie IRAN