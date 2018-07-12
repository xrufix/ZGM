/* ###################### - Side and faction specific includes - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

// #define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "ace_banana"          // Für Inventar
#define UNIFORM             ARR_1("rhsgref_uniform_woodland")                             // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("rhsgref_uniform_olive")
#define UNIFORM_RECON       ARR_2("xru_u_b_combatuniform_wdl","xru_u_b_combatuniform_wdl_vest")
#define UNIFORM_DIVER       ARR_1("xru_u_b_combatuniform_wdl_survivor")
#define UNIFORM_CREW        ARR_1("rhsgref_uniform_olive")
#define UNIFORM_HELICOPTER  ARR_1("rhsgref_uniform_olive")
#define UNIFORM_JET         ARR_1("U_I_pilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_T_FullGhillie_tna_F")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "V_BandollierB_oli"
#define VEST_OFFICER    "rhs_vest_pistol_holster"
#define VEST_LIGHT      "rhsgref_alice_webbing"
#define VEST_RM         "rhsgref_TacVest_ERDL"
#define VEST_GR         VEST_RM
#define VEST_CM         VEST_LIGHT
#define VEST_SL         VEST_RM
#define VEST_TL         VEST_LIGHT
#define VEST_MG         VEST_LIGHT
#define VEST_DM         VEST_RM

#define VEST_CREW		ARR_1("V_LegStrapBag_olive_F")

#define VEST_RECON		ARR_1("VSM_FAPC_Operator_M81") 
#define VEST_RECON_TL	ARR_1("VSM_RAV_operator_M81") 
#define VEST_RECON_MG	ARR_1("VSM_FAPC_MG_M81") 
#define VEST_RECON_GR	VEST_RECON_TL

#define VEST_BREATHER	ARR_1("V_RebreatherIA")
#define VEST_DIVER		VEST_RECON

#define VEST_PROTECTED  "V_Plain_crystal_F"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_TacticalPack_rgr")
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      ARR_1("B_TacticalPack_rgr")

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_M2_Gun_Bag"
#define HMG_TRIPOD	"RHS_M2_MiniTripod_Bag"
#define GMG_GUN		"RHS_Mk19_Gun_Bag"
#define GMG_TRIPOD	"RHS_Mk19_Tripod_Bag"
#define MORTAR_GUN	"NDS_B_M224_mortar"
#define MORTAR_POD	"NDS_M224_B_Ammo"



/* ###################### - ATTACHMENTS- ###################### */
// #define SNIPER_OPTIC_NV ""

#define DMR_BIPOD       "bipod_03_f_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("CUP_arifle_M16A2")
#define RIFLE_UGL       ARR_1("CUP_arifle_M16A2_GL")
#define RIFLE_RCO       RIFLE
#define RIFLE_UGL_RCO   RIFLE_UGL
#define RIFLE_CCO       RIFLE
#define RIFLE_UGL_CCO   RIFLE_UGL

#define MAG_RIFLE		 ARR_1("30Rnd_556x45_Stanag_red")
#define MAG_RIFLE_TRACER ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

// PDW
#define PDW     "hlc_smg_mp5a2"
#define MAG_PDW	"hlc_30Rnd_9x19_GD_MP5"

// CARBINE

#define CARBINE     "hlc_rifle_Colt727"
#define CARBINE_UGL	"hlc_rifle_Colt727_GL"

#define CARBINE_CCO        CARBINE
#define CARBINE_UGL_CCO    CARBINE_UGL

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON         WEAPON("rhs_weap_m4_carryhandle","rhsusf_acc_compm4","acc_flashlight","hlc_muzzle_snds_aug")
#define RIFLE_UGL_RECON     WEAPON("rhs_weap_m4_m203S","rhsusf_acc_compm4","acc_flashlight","hlc_muzzle_snds_aug")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          "rhs_mag_30Rnd_556x45_M855_Stanag"
#define MAG_RIFLE_RECON_TRACER   ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR           WEAPON("hlc_rifle_M14dmr","","hlc_optic_artel_m14","")
#define MAG_DMR       ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON     WEAPON("rhs_weap_sr25_wd","","rhsusf_acc_leupoldmk4_2","rhsusf_acc_sr25s_wd")
#define DMR_DIVER     WEAPON("rhs_weap_sr25","","rhsusf_acc_leupoldmk4_2","rhsusf_acc_sr25s")
#define MAG_DMR_RECON ARR_1("rhsusf_20Rnd_762x51_m118_special_Mag")

#define SR_AP         WEAPON("rhs_weap_m24sws",SNIPER_OPTIC,DMR_BIPOD,"")
#define MAGS_SR_AP    ARR_2("rhsusf_5Rnd_762x51_m118_special_Mag",8)

#define SR_AM         WEAPON("rhs_weap_M107_w","rhsusf_acc_premier","","")
#define MAGS_SR_AM    ARR_2("rhsusf_mag_10Rnd_STD_50BMG_M33",6)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE            WEAPON("LMG_03_F","","","")
#define MAGS_AUTORIFLE       ARR_2("200Rnd_556x45_Box_Red_F",5)
#define MAGS_AUTORIFLE_ASST  ARR_2("200Rnd_556x45_Box_Red_F",2)

#define AUTORIFLE_RECON      AUTORIFLE
#define MAGS_AUTORIFLE_RECON MAGS_AUTORIFLE

#define MMG           WEAPON("rhs_weap_m240B","","","")
#define MAGS_MMG      ARR_2("rhsusf_100Rnd_762x51",2)
#define MAGS_MMG_ASST ARR_2("rhsusf_100Rnd_762x51",4)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("rhsusf_weap_m1911a1","","","")
#define PISTOL_SF	WEAPON("rhsusf_weap_m9","","","")

#define MAG_PISTOL 		ARR_1("rhsusf_mag_7x45acp_MHP")
#define MAG_PISTOL_SF 	ARR_1("rhsusf_mag_15Rnd_9x19_JHP")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("rhs_weap_m72a7","","","")
#define MAGS_AT_LIGHT   "rhs_m72a7_mag"

#define AT_ROCKET	            WEAPON("rhs_weap_maaws","rhs_optic_maaws","","")
#define MAGS_AT_ROCKET          ARR_1("rhs_mag_maaws_HEAT")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_maaws_HEAT",2,"rhs_mag_maaws_HE")

#define AA_MISSILE	            WEAPON("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)

#define AT_MISSILE              WEAPON("CUP_launch_M47","","","")
#define MAGS_AT_MISSILE         ARR_1("CUP_Dragon_EP1_M")
#define MAGS_AT_MISSILE_ASST    MAGS_AT_MISSILE

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2("rhsgref_helmet_M1_painted","rhsgref_helmet_M1_painted_alt01")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_2("rhsgref_helmet_M1_bare","rhsgref_helmet_M1_bare_alt01")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_3("rhs_Booniehat_m81","rhsusf_ach_helmet_M81","CUP_H_FR_Bandana_Headset")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("rhsusf_cvc_green_alt_helmet")
#define HELMET_HELICOPTER	ARR_1("CUP_H_PMC_EP_Headset")
#define HELMET_HELI_CREW	ARR_1("CUP_H_PMC_EP_Headset")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("usm_bdu_8point_wdl")
#define CAP_OFFICER ARR_1("usm_bdu_cap_wdl")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ""
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ""
#define GOGGLES_SF		ARR_1("rhs_googles_orange")
#define GOGGLES_SF_FULL GOGGLES_SF
#define GOGGLES_DIVER	ARR_1("G_I_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("")
#define NVG_SF  ARR_1("CUP_NVG_PVS14")

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	BINOCULAR
#define DESIGNATOR	ARR_1("Laserdesignator_01_khk_F")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
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
