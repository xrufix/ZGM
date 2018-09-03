/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_Competitor"        // Für Inventar
#define UNIFORM             ARR_8(UNIFORM_SINGLE,"U_I_G_resistanceLeader_F","U_BG_Guerilla2_2","U_BG_Guerilla2_1","U_BG_Guerilla2_3","U_I_G_Story_Protagonist_F","U_C_Poor_1","U_C_Mechanic_01_F")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         UNIFORM
#define UNIFORM_SNIPER      UNIFORM



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhsusf_mbav"
#define VEST_OFFICER    VEST_LIGHT
#define VEST_LIGHT      "rhsusf_mbav_light"
#define VEST_RM         "rhsusf_mbav_rifleman"
#define VEST_GR         "rhsusf_mbav_grenadier"
#define VEST_CM         "rhsusf_mbav_medic"
#define VEST_SL         "rhsusf_mbav_rifleman"
#define VEST_TL         "rhsusf_mbav_rifleman"
#define VEST_MG         "rhsusf_mbav_mg"
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		VEST_LIGHT

#define VEST_RECON			ARR_4("VSM_FAPC_Operator_OGA_OD","VSM_CarrierRig_Operator_OGA_OD","VSM_MBSS_PACA","VSM_LBT1961_GRN")
#define VEST_RECON_TL		VEST_RECON
#define VEST_RECON_MG		ARR_4("VSM_RAV_MG_OGA_OD","VSM_LBT6094_MG_OGA_OD","VSM_CarrierRig_Gunner_OGA_OD","VSM_FAPC_MG_OGA_OD")
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_PlateCarrier1_blk")

#define VEST_PROTECTED  "W_V_EOD_blue_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_4("B_AssaultPack_blk","B_AssaultPack_cbr","B_AssaultPack_rgr","B_AssaultPack_khk")
#define BACKPACK_KITBAG     ARR_5("B_Kitbag_cbr","B_Kitbag_rgr","B_Kitbag_sgg","rhssaf_kitbag_smb","xru_Kitbag_blk")
#define BACKPACK_CARRYALL   ARR_4("B_Carryall_cbr","B_Carryall_khk","B_Carryall_oli","xru_Carryall_blk")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	""
#define BACKPACK_DIVER      BACKPACK_CARRYALL
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"NDS_B_M224_mortar"
#define MORTAR_POD	"NDS_M224_B_Ammo"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "acc_pointer_ir"

#define DMR_OPTIC   "optic_khs_hex"
#define DMR_BIPOD   "bipod_02_f_blk"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_1         "rhs_weap_m4a1_blockII"
#define RIFLE_2         "rhs_weap_m4a1_blockII_bk"
#define RIFLE_3         "rhs_weap_m4a1_blockII_KAC"
#define RIFLE_4         "rhs_weap_m4a1_blockII_KAC_bk"
#define RIFLE_CCO ARR_4( \
    WEAPON_OLD(RIFLE_1,"rhsusf_acc_compm4","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_2,"rhsusf_acc_eotech_552","","rhsusf_acc_wmx_bk"), \
    WEAPON_OLD(RIFLE_3,"rhsusf_acc_compm4","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_4,"rhsusf_acc_eotech_552","","rhsusf_acc_wmx_bk"))
#define RIFLE_RCO ARR_4( \
    WEAPON_OLD(RIFLE_1,"ace_optic_hamr_2d","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_2,"rhsusf_acc_specterdr_cx","","rhsusf_acc_wmx_bk"), \
    WEAPON_OLD(RIFLE_3,"ace_optic_hamr_2d","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_4,"rhsusf_acc_specterdr_cx","","rhsusf_acc_wmx_bk"))

#define RIFLE_UGL_1     "rhs_weap_m4a1_m320"
#define RIFLE_UGL_2     "rhs_weap_m4a1_blockII_M203_bk"
#define RIFLE_UGL_3     "rhs_weap_hk416d145_m320"

#define RIFLE_UGL_CCO ARR_3( \
    WEAPON_OLD(RIFLE_UGL_1,"rhsusf_acc_compm4","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_UGL_2,"rhsusf_acc_eotech_552","","rhsusf_acc_wmx_bk"), \
    WEAPON_OLD(RIFLE_UGL_3,"rhsusf_acc_t1_high","","rhsusf_acc_m952v"))
#define RIFLE_UGL_RCO ARR_3( \
    WEAPON_OLD(RIFLE_UGL_1,"rhsusf_acc_g33_xps3","","acc_flashlight"), \
    WEAPON_OLD(RIFLE_UGL_2,"rhsusf_acc_g33_xps3","","rhsusf_acc_wmx_bk"), \
    WEAPON_OLD(RIFLE_UGL_3,"rhsusf_acc_g33_t1","","rhsusf_acc_m952v"))

#define MAG_RIFLE           ARR_1("rhs_mag_30Rnd_556x45_M855_Stanag")
#define MAG_RIFLE_TRACER    ARR_1("rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red")

// PDW
#define PDW                 "SMG_03C_black"
#define MAG_PDW	            ARR_1("50Rnd_570x28_SMG_03")


// CARBINE
#define CARBINE             ARR_4(RIFLE_1,RIFLE_2,RIFLE_3,RIFLE_4)
#define CARBINE_CCO         RIFLE_CCO

#define CARBINE_UGL	        ARR_3(RIFLE_UGL_1,RIFLE_UGL_2,RIFLE_UGL_3)
#define CARBINE_UGL_CCO     RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON         WEAPON_OLD("rhs_weap_g36kv","ace_optic_hamr_2d","rhsusf_acc_anpeq16a","")
#define RIFLE_UGL_RECON     WEAPON_OLD("rhs_weap_g36kv_ag36","rhsusf_acc_g33_xps3","rhsusf_acc_anpeq16a","")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		WEAPON_OLD("rhs_weap_g36c","ace_optic_hamr_2d","rhsusf_acc_anpeq16a","")
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          ARR_1("rhssaf_30rnd_556x45_EPR_G36")
#define MAG_RIFLE_RECON_TRACER   ARR_1("rhssaf_30rnd_556x45_MDIM_G36")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON_OLD("rhs_weap_sr25_ec","optic_dms","","rhsusf_acc_harris_bipod")
#define MAG_DMR     ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")

#define DMR_RECON       WEAPON_OLD("CUP_arifle_Mk20","optic_ams_snd","","rhsusf_acc_harris_bipod")
#define DMR_DIVER       WEAPON_OLD("CUP_arifle_Mk17_STD_black","optic_ams","","rhsusf_acc_harris_bipod")
#define MAG_DMR_RECON   ARR_1("CUP_20Rnd_762x51_B_SCAR")

#define SR_AP       WEAPON_OLD("CUP_arifle_Mk20","rhsusf_acc_premier","cup_muzzle_snds_scar_h","rhsusf_acc_harris_bipod")
#define MAGS_SR_AP  ARR_2("CUP_20Rnd_762x51_B_SCAR",7)

#define SR_AM       WEAPON_OLD("rhs_weap_m82a1","rhsusf_acc_premier","","")
#define MAGS_SR_AM  ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",5)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("hlc_rifle_G36V_CMAG","rhsusf_acc_eotech_xps3","rhsusf_acc_wmx_bk","rhs_acc_harris_swivel")
#define MAGS_AUTORIFLE      ARR_4("hlc_100rnd_556x45_EPR_G36",4,"hlc_100rnd_556x45_M_G36",2)
#define MAGS_AUTORIFLE_ASST ARR_3("hlc_100rnd_556x45_EPR_G36",2,"hlc_100rnd_556x45_M_G36")

#define AUTORIFLE_RECON        WEAPON_OLD("arifle_SPAR_02_blk_F","rhsusf_acc_eotech_xps3","rhsusf_acc_anpeq15_bk","rhs_acc_harris_swivel")
#define MAGS_AUTORIFLE_RECON   ARR_4("150Rnd_556x45_Drum_Mag_F",4,"150Rnd_556x45_Drum_Mag_Tracer_F",2)

#define MMG                 WEAPON_OLD("hlc_lmg_MG3KWS_b","rhsusf_acc_acog_mdo","","")
#define MAGS_MMG            ARR_2("hlc_100Rnd_762x51_B_MG3",2)
#define MAGS_MMG_ASST       ARR_2("hlc_100Rnd_762x51_B_MG3",4)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("hlc_pistol_P226R_Elite","hlc_acc_tlr1","","")
#define MAG_PISTOL 		ARR_1("hlc_15Rnd_9x19_JHP_P226")

#define PISTOL_SF	    WEAPON_OLD("hlc_pistol_P229R_40Elite","hlc_acc_dbalpl_fl","hlc_muzzle_evo40","")
#define MAG_PISTOL_SF 	ARR_1("hlc_10Rnd_40sw_JHP_P229")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_M136_hedp","","","")
#define MAGS_AT_LIGHT           "rhs_m136_hedp_mag"

#define AT_ROCKET	            "rhs_weap_maaws"
#define MAGS_AT_ROCKET          ARR_1("rhs_mag_maaws_HEAT")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_maaws_HE","rhs_mag_maaws_HEDP","rhs_mag_maaws_HEAT")

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON_OLD("rhs_weap_fgm148","","","")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_1("rhs_fgm148_magazine_AT")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_8("","VSM_BackwardsHat_Peltor_ION","H_Cap_blk_ION","H_Cap_oli_hs","H_MilCap_gry","H_Cap_headphones","H_PASGT_basic_black_F","H_Booniehat_khk_hs")
// NON-COMBAT INFANTRY
#define HELMET_BARE HELMET
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_8("rhsusf_opscore_ut_pelt","rhsusf_opscore_paint_pelt","rhsusf_opscore_fg_pelt","rhsusf_opscore_bk_pelt","rhsusf_opscore_ut","rhsusf_opscore_fg","rhsusf_opscore_paint","rhsusf_opscore_bk")
#define HELMET_DIVER HELMET
// VEHICLE CREWS
#define HELMET_CREW 		ARR_3("H_Cap_headphones","H_Cap_marshal","H_EarProtectors_black_F")
#define HELMET_HELICOPTER	HELMET_CREW
#define HELMET_HELI_CREW	HELMET_CREW
#define HELMET_JET			HELMET_CREW

// COMMANDERS
#define CAP_CO      ARR_1("")
#define CAP_XO      ARR_1("H_WirelessEarpiece_F")
#define CAP_OFFICER HELMET



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_7("G_Shades_Black","G_Shades_Red","G_Squares_Tinted","rhs_googles_black","rhs_googles_orange","immersion_pops_pop0","")
#define GOGGLES_OFFICER GOGGLES
#define GOGGLES_FULL    GOGGLES
#define GOGGLES_SF		GOGGLES
#define GOGGLES_SF_FULL GOGGLES
#define GOGGLES_DIVER	ARR_1("G_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF	ARR_3("NVGoggles_OPFOR","NVGoggles","NVGoggles_INDEP")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Yardage450")
#define DESIGNATOR	ARR_1("Laserdesignator")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC152")
#define RADIO_SR "ACRE_PRC343"


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
