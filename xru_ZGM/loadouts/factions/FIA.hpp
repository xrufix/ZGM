/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_BG_Guerilla1_1"        // Für Inventar
#define UNIFORM             ARR_3(UNIFORM_SINGLE,ARR_6("U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerilla2_3","U_BG_Guerilla3_1","U_BG_leader","U_C_HunterBody_grn"),ARR_6("U_I_G_resistanceLeader_F","U_I_G_Story_Protagonist_F","xru_u_b_combatuniform_wdl_tshirt","xru_u_guerilla1_1","xru_u_guerilla1_2","U_BG_Guerilla1_2_F"))      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         UNIFORM
#define UNIFORM_SNIPER      UNIFORM



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_3("V_LegStrapBag_black_F","V_LegStrapBag_coyote_F","V_LegStrapBag_olive_F")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_5("V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli")
#define VEST_RM         ARR_5("V_Chestrig_khk","V_Chestrig_rgr","V_Chestrig_blk","V_Chestrig_oli","xru_V_Chestrig_cbr")
#define VEST_GR         ARR_3("V_TacChestrig_grn_F","V_TacChestrig_oli_F","V_TacChestrig_cbr_F")
#define VEST_CM         ARR_1("V_TacVestIR_blk")
#define VEST_SL         ARR_6("V_I_G_resistanceLeader_F","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_blk","V_TacVest_camo")
#define VEST_TL         VEST_SL
#define VEST_MG         VEST_GR
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			VEST_RM
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_GR
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "V_Plain_crystal_F"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_2( \
    ARR_7("B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_dgtl","B_AssaultPack_khk","B_AssaultPack_rgr","B_AssaultPack_sgg","B_AssaultPackG"), \
    ARR_4("B_FieldPack_blk","B_FieldPack_cbr","B_FieldPack_khk","B_FieldPack_oli"))
#define BACKPACK_KITBAG     ARR_5("B_Kitbag_cbr","B_Kitbag_rgr","B_Kitbag_sgg","xru_Kitbag_blk","xru_Kitbag_digi")
#define BACKPACK_CARRYALL   ARR_4("xru_Carryall_blk","B_Carryall_cbr","B_Carryall_khk","B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"I_HMG_01_weapon_F"
#define HMG_TRIPOD	"I_HMG_01_support_F"
#define GMG_GUN		"I_GMG_01_weapon_F"
#define GMG_TRIPOD	"I_HMG_01_support_F"
#define MORTAR_GUN	"I_Mortar_01_weapon_F"
#define MORTAR_POD	"I_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define LIGHT   "acc_flashlight"
#define RCO     "optic_mrco"

#define SNIPER_OPTIC    "optic_khs_old"
#define SNIPER_OPTIC_NV "ACE_Banana"

#define DMR_BIPOD       "bipod_03_F_oli"

#define LASERPOINTER "ace_banana"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1 ARR_1("arifle_TRG21_F")
#define RIFLE_2 ARR_1("w_arifle_trg21_black")
#define RIFLE_3 ARR_1("arifle_Mk20_plain_F")
#define RIFLE_4 ARR_1("w_arifle_mk20_grey")

#define RIFLE_CCO ARR_4( \
    WEAPON(RIFLE_1,"","",LIGHT), \
    WEAPON(RIFLE_2,"","",""), \
    WEAPON(RIFLE_3,"","",LIGHT), \
    WEAPON(RIFLE_4,"","",""))
#define RIFLE_RCO ARR_4( \
    WEAPON(RIFLE_1,"optic_aco","",""), \
    WEAPON(RIFLE_2,"optic_aco_grn","",LIGHT), \
    WEAPON(RIFLE_3,"optic_aco_smg","",""), \
    WEAPON(RIFLE_4,"optic_aco_grn_smg","",LIGHT))


// GRENADIER ASSAULT RIFLE
#define RIFLE_UGL_1     ARR_1("arifle_TRG21_GL_F")
#define RIFLE_UGL_2     ARR_1("arifle_Mk20_GL_plain_F")
#define RIFLE_UGL_3     ARR_1("w_arifle_mk20_gl_black")
#define RIFLE_UGL_3     ARR_1("w_arifle_trg21_gl_black")

#define RIFLE_UGL_CCO ARR_4( \
    WEAPON(RIFLE_UGL_1,"","",LIGHT), \
    WEAPON(RIFLE_UGL_2,"","",""), \
    WEAPON(RIFLE_UGL_3,"","",LIGHT), \
    WEAPON(RIFLE_UGL_4,"","",""))
#define RIFLE_UGL_RCO ARR_4( \
    WEAPON(RIFLE_UGL_1,"optic_aco","",""), \
    WEAPON(RIFLE_UGL_2,"optic_aco_grn","",LIGHT), \
    WEAPON(RIFLE_UGL_3,"optic_aco_smg","",""), \
    WEAPON(RIFLE_UGL_4,"optic_aco_grn_smg","",LIGHT))

#define MAG_RIFLE           ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_556x45_Stanag_Tracer_yellow")


// CARBINE
#define CARBINE_1   "w_arifle_trg20_black"
#define CARBINE_2   "arifle_Mk20C_plain_F"

#define CARBINE ARR_2( \
    WEAPON(CARBINE_1,"","",""), \
    WEAPON(CARBINE_2,"","",""))
#define CARBINE_CCO CARBINE

#define CARBINE_UGL	        RIFLE_UGL
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// PDW
#define PDW ARR_2( \
    WEAPON("hgun_pdw2000_f","","",""), \
    WEAPON("smg_02_f","optic_aco_grn_smg","",""))
#define MAG_PDW ARR_1("30Rnd_9x21_Mag")


// SF CARBINES
#define RIFLE_RECON ARR_6( \
    WEAPON(RIFLE_1,RCO,"",LIGHT), \
    WEAPON(RIFLE_2,RCO,"",LIGHT), \
    WEAPON(RIFLE_3,RCO,"",LIGHT), \
    WEAPON(RIFLE_4,RCO,"",LIGHT), \
    WEAPON(CARBINE_1,RCO,"",LIGHT), \
    WEAPON(CARBINE_2,RCO,"",LIGHT))

#define RIFLE_UGL_RECON ARR_4( \
    WEAPON(RIFLE_UGL_1,"optic_aco","",LIGHT), \
    WEAPON(RIFLE_UGL_2,"optic_aco_grn","",LIGHT), \
    WEAPON(RIFLE_UGL_3,"optic_aco_smg","",LIGHT), \
    WEAPON(RIFLE_UGL_4,"optic_aco_grn_smg","",LIGHT))

#define RIFLE_RECON_TAN           RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_CARBINE
#define MAG_RIFLE_RECON_TRACER   ARR_1("ACE_30Rnd_556x45_Stanag_Tracer_Dim")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR ARR_3( \
    WEAPON("srifle_DMR_06_olive_F",RCO,"",DMR_BIPOD), \
    WEAPON("srifle_DMR_03_F",RCO,"",DMR_BIPOD), \
    WEAPON("srifle_DMR_03_khaki_F",RCO,"",DMR_BIPOD))
#define MAG_DMR ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON ARR_4( \
    WEAPON("srifle_DMR_06_camo_F",SNIPER_OPTIC,"",""), \
    WEAPON("srifle_ebr_f",SNIPER_OPTIC,"",""), \
    WEAPON("srifle_DMR_03_multicam_F",SNIPER_OPTIC,"",""), \
    WEAPON("srifle_DMR_03_woodland_F",SNIPER_OPTIC,"",""))
#define DMR_DIVER   DMR_RECON
#define MAG_DMR_RECON  MAG_DMR

#define SR_AP       DMR_RECON
#define MAGS_SR_AP  ARR_6("20Rnd_762x51_Mag",5,"ACE_20Rnd_762x51_M118LR_Mag",3,"ACE_20Rnd_762x51_M993_AP_Mag",3)

#define SR_AM       WEAPON("srifle_DMR_05_tan_f",SNIPER_OPTIC,"",DMR_BIPOD)
#define MAGS_SR_AM  ARR_2("10Rnd_93x64_DMR_05_Mag",10)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE ARR_2( \
    WEAPON("LMG_Mk200_F",LIGHT,"",""), \
    WEAPON("LMG_Mk200_F",DMR_BIPOD,"",""))

#define MAG_AUTORIFLE       ARR_1("200Rnd_65x39_cased_Box")
#define MAGS_AUTORIFLE      ARR_3(MAG_AUTORIFLE,3,"200Rnd_65x39_cased_Box_Tracer")
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,3)

#define AUTORIFLE_RECON        WEAPON("LMG_03_F",LIGHT,DMR_BIPOD,"")
#define MAGS_AUTORIFLE_RECON   ARR_2("200Rnd_556x45_Box_Red_F",4)

#define MMG                 WEAPON("LMG_Zafir_F","","","")
#define MAGS_MMG            ARR_3("150Rnd_762x54_Box",2,"150Rnd_762x54_Box_Tracer")
#define MAGS_MMG_ASST       MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("hgun_Rook40_F","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	    WEAPON("hgun_ACPC2_F","muzzle_snds_acp","","")
#define MAG_PISTOL_SF 	ARR_1("9Rnd_45ACP_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            ARR_2(WEAPON("xru_rpg32_camo","","",""),WEAPON("xru_rpg32_green","","",""))
#define MAGS_AT_ROCKET          ARR_3("RPG32_F",2,"RPG32_HE_F")

#define AT_ROCKET	            ARR_2(WEAPON("launch_MRAWS_green_rail_F","acc_pointer_ir","",""),WEAPON("launch_MRAWS_olive_rail_F","acc_pointer_ir","",""))
#define MAGS_AT_ROCKET          ARR_3("MRAWS_HEAT_F",3,"MRAWS_HE_F")
#define MAGS_AT_ROCKET_ASST     ARR_3("MRAWS_HEAT_F",2,"MRAWS_HE_F")

#define AA_MISSILE	            WEAPON("launch_i_Titan_F","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

#define AT_MISSILE              WEAPON("launch_i_Titan_short_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_7( \
    ARR_8("H_Bandanna_camo","H_Bandanna_cbr","H_Bandanna_gry","H_Bandanna_khk","H_Bandanna_khk_hs","H_Bandanna_mcamo","H_Bandanna_sand","H_Bandanna_sgg"), \
    ARR_5("H_Watchcap_blk","H_Watchcap_camo","H_Watchcap_khk","H_Watchcap_cbr","H_Watchcap_sgg"), \
    ARR_5("H_Booniehat_dgtl","H_Booniehat_khk","H_Booniehat_khk_hs","H_Booniehat_oli","H_Booniehat_tan"), \
    ARR_6("xru_H_MilCap_check1","xru_H_MilCap_check2","xru_H_MilCap_check3","H_MilCap_dgtl","H_MilCap_gry","H_Cap_Headphones"), \
    ARR_4("H_ShemagOpen_tan","H_ShemagOpen_khk","H_Shemag_olive_hs","H_Shemag_olive"), \
    ARR_7("H_Cap_blk_Raven","H_Cap_tan","H_Cap_oli_hs","H_cap_oli","H_Cap_blk_ION","H_Cap_grn","H_Cap_blk_cmmg"), \
    ARR_3("H_Headbandage_clean_f","H_Headbandage_stained_f","H_Headbandage_bloody_f") \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE     ARR_1(HELMET)
// SPECIAL FORCES INFANTRY
#define HELMET_SF       ARR_1(HELMET)
#define HELMET_DIVER    ARR_1("")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_7("H_HeadSet_black_F","H_HeadSet_orange_F","H_HeadSet_red_F","H_HeadSet_white_F","H_HeadSet_yellow_F","H_Cap_Headphones","H_Cap_Marshal")
#define HELMET_HELICOPTER	HELMET_CREW
#define HELMET_HELI_CREW	HELMET_CREW
#define HELMET_JET			HELMET_CREW

// COMMANDERS
#define CAP_CO      ARR_1("H_Hat_Safari_olive_F")
#define CAP_XO      ARR_1("H_Hat_Safari_sand_F")
#define CAP_OFFICER HELMET



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_6(GOGGLES_FULL,"g_bandanna_beast","g_bandanna_blk","g_bandanna_khk","g_bandanna_oli","g_bandanna_tan")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_4("g_bandanna_aviator","g_bandanna_sport","g_shades_red","g_shades_black")
#define GOGGLES_SF		GOGGLES
#define GOGGLES_SF_FULL GOGGLES_FULL
#define GOGGLES_DIVER	ARR_1("G_i_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_1("")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("Binocular")
#define DESIGNATOR	ARR_1("Binocular")



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
