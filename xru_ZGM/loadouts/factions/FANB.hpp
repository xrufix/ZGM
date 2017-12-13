/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_rhsafrf.hpp"


/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_g3_rgr"
#define UNIFORM             ARR_1(UNIFORM_SINGLE)
#define UNIFORM_COMPANY     ARR_1("rhsgref_uniform_og107")
#define UNIFORM_RECON       UNIFORM
#define UNIFORM_DIVER       ARR_1("U_I_Wetsuit")
#define UNIFORM_CREW        UNIFORM_COMPANY
#define UNIFORM_HELICOPTER  ARR_1("xru_u_coveralls_black")
#define UNIFORM_JET         UNIFORM_HELICOPTER
#define UNIFORM_SNIPER      ARR_1("U_I_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("")
#define VEST_OFFICER    ARR_1("")
#define VEST_LIGHT      ARR_1("")
#define VEST_RIFLEMAN   ARR_1("V_PlateCarrier1_rgr_noflag_F")
#define VEST_GRENADIER  ARR_1("")
#define VEST_MEDIC      ARR_1("")
#define VEST_SL         ARR_1("")
#define VEST_TL         VEST_SL
#define VEST_MG         ARR_1("")
#define VEST_DM         ARR_1("")

#define VEST_CREW		ARR_1("")

#define VEST_RECON			ARR_1("")
#define VEST_RECON_TL		ARR_1("")
#define VEST_RECON_MG		ARR_1("")
#define VEST_RECON_GR		ARR_1("")

#define VEST_BREATHER	""
#define VEST_DIVER		""



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_3("B_AssaultPack_cbr","B_AssaultPack_sgg","rhsusf_falconii_coy")
#define BACKPACK_KITBAG     ARR_2("B_Kitbag_rgr","B_Kitbag_cbr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_cbr")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		ARR_1("RHS_M2_Gun_Bag")
#define HMG_TRIPOD	ARR_1("RHS_M2_MiniTripod_Bag")
#define GMG_GUN		ARR_1("RHS_Mk19_Gun_Bag")
#define GMG_TRIPOD	ARR_1("RHS_Mk19_Tripod_Bag")
#define MORTAR_GUN	ARR_1("rhs_M252_Gun_Bag")
#define MORTAR_POD	ARR_1("rhs_M252_Bipod_Bag")



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "ace_banana"

#define SNIPER_OPTIC "ace_banana"
#define SNIPER_OPTIC_NV "ace_banana"

#define DMR_BIPOD "ace_banana"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_RCO       WEAPON("rhs_weap_ak103","rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk")
#define RIFLE_UGL_RCO   WEAPON("rhs_weap_ak103","rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk")
#define RIFLE_CCO       WEAPON("rhs_weap_ak103","","rhs_acc_2dpZenit","rhs_acc_dtk")
#define RIFLE_UGL_CCO   WEAPON("rhs_weap_ak103","","rhs_acc_2dpZenit","rhs_acc_dtk")

#define MAG_RIFLE			"30Rnd_762x39_Mag_F"
#define MAG_RIFLE_TRACER	"30Rnd_762x39_Mag_Tracer_F"

// PDW
#define PDW     WEAPON("hlc_smg_mp5a3","","","")
#define MAG_PDW	"hlc_30Rnd_9x19_B_MP5"

// CARBINE
#define CARBINE         "rhs_weap_akms_folded"
#define CARBINE_UGL	    "rhs_weap_akms_gp25"
#define CARBINE_CCO     CARBINE
#define CARBINE_UGL_CCO CARBINE_UGL

#define MAG_CARBINE     MAG_RIFLE
#define MAG_CARBINE_TRACER MAG_RIFLE_TRACER

// RECON RIFLES
#define RIFLE_RECON             RIFLE_RCO
#define RIFLE_UGL_RECON         RIFLE_UGL_RCO
#define RIFLE_RECON_TAN         RIFLE_RECON
#define RIFLE_UGL_RECON_TAN	    RIFLE_UGL_RECON
#define RIFLE_DIVER 		    RIFLE_RECON
#define RIFLE_UGL_DIVER 	    RIFLE_UGL_RECON
#define MAG_RIFLE_RECON         MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER  MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR     WEAPON("hlc_rifle_FAL5000","hlc_optic_suit","","")
#define MAG_DMR "hlc_20Rnd_762x51_B_fal"

#define DMR_RECON WEAPON("hlc_rifle_m14dmr","hlc_optic_artel_m14","","")
#define DMR_DIVER DMR_RECON
#define MAG_DMR_RECON "20Rnd_762x51_Mag"

#define SR_AP       WEAPON("rhs_weap_svdp","rhs_acc_pso1m2","","")
#define MAGS_SR_AP  ARR_2("rhs_10Rnd_762x54mmR_7N1",10)

#define SR_AM       SR_AP
#define MAGS_SR_AM  MAGS_SR_AP

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           "hlc_lmg_minimi"
#define MAG_AUTORIFLE       "200Rnd_556x45_Box_F"
#define MAGS_AUTORIFLE      ARR_4(MAG_AUTORIFLE,3,"200Rnd_556x45_Box_Tracer_F",1)
#define MAGS_AUTORIFLE_ASST ARR_4(MAG_AUTORIFLE,1,"200Rnd_556x45_Box_Tracer_F",1)

#define AUTORIFLE_RECON     AUTORIFLE
#define MAGS_AUTORIFLE_RECON MAGS_AUTORIFLE

#define MMG             WEAPON("rhs_weap_m240G","","","")
#define MAGS_MMG        ARR_2("rhsusf_100Rnd_762x51",3)
#define MAGS_MMG_ASST   ARR_2("rhsusf_100Rnd_762x51",5)



/* ###################### - SIDEARMS - ###################### */
#define PISTOL			WEAPON("rhsusf_weap_glock17g4","","","")
#define MAG_PISTOL 		"rhsusf_mag_17Rnd_9x19_JHP"

#define PISTOL_SF		WEAPON("rhsusf_weap_glock17g4","","","")
#define MAG_PISTOL_SF 	"rhsusf_mag_17Rnd_9x19_JHP"



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("rhs_weap_M136_hedp","","","")
#define MAGS_AT_LIGHT           "rhs_m136_hedp_mag"

#define AT_ROCKET	            WEAPON("rhs_weap_smaw_green","rhs_weap_optic_smaw","acc_pointer_IR","")
#define MAGS_AT_ROCKET          ARR_2("rhs_mag_smaw_HEAA","rhs_mag_smaw_SR")
#define MAGS_AT_ROCKET_ASST     ARR_3("rhs_mag_smaw_HEDP","rhs_mag_smaw_HEAA","rhs_mag_smaw_SR")

#define AT_MISSILE              WEAPON("rhs_weap_fgm148","","","")
#define MAGS_AT_MISSILE         ARR_1("rhs_fgm148_magazine_AT")
#define MAGS_AT_MISSILE_ASST    ARR_1("rhs_fgm148_magazine_AT")

#define AA_MISSILE	            WEAPON("rhs_weap_fim92","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_fim92_mag")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_fim92_mag",2)



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("rhsgref_helmet_pasgt_olive")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_PASGT_basic_olive_F")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_2("H_Booniehat_oli","H_Bandanna_sgg")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_HelmetCrew_I")
#define HELMET_HELICOPTER	ARR_2("rhs_zsh7a_mike_green_alt","rhs_zsh7a_mike_green")
#define HELMET_HELI_CREW	HELMET_HELICOPTER
#define HELMET_JET			ARR_2("rhs_zsh7a_mike_alt")

// COMMANDERS
#define CAP_CO "H_Beret_blk"
#define CAP_XO "H_Beret_blk"
#define CAP_OFFICER "H_Cap_oli_hs"



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator");
#define GOGGLES_FULL    ARR_1("rhs_googles_orange")
#define GOGGLES_SF		ARR_1("G_Bandanna_blk","G_Bandanna_oli","G_Bandanna_tan")
#define GOGGLES_SF_FULL ARR_1("G_Bandanna_sport")
#define GOGGLES_DIVER	ARR_1("G_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG				ARR_1("")
#define NVG_SF			ARR_1("NVGoggles_OPFOR")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	"ACRE_PRC148"
#define RADIO_PACK 	"ACRE_PRC117F"



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
