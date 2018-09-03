#include "NATO_MTP.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_B_T_Soldier_F"        // Für Inventar
#define UNIFORM             ARR_3(UNIFORM_SINGLE,"U_B_T_Soldier_SL_F","U_B_T_Soldier_AR_F")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM_SINGLE
#define UNIFORM_RECON     UNIFORM

#define UNIFORM_SNIPER      ARR_1("U_B_T_FullGhillie_tna_F")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrier1_tna_f")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_1("V_PlateCarrier1_tna_f")
#define VEST_RM         ARR_1("V_PlateCarrier2_tna_f")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_2("B_AssaultPack_rgr","B_AssaultPack_tna_f")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_rgr")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	ARR_1("")
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"i_HMG_01_weapon_F"
#define HMG_TRIPOD	"i_HMG_01_support_F"
#define GMG_GUN		"i_GMG_01_weapon_F"
#define GMG_TRIPOD	"i_HMG_01_support_F"
#define MORTAR_GUN	"i_Mortar_01_weapon_F"
#define MORTAR_POD	"i_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */

#define RCO "optic_hamr_khk_f"
#define CCO "optic_aco"

#define SNIPER_OPTIC "optic_LRPS_tna_f"
#define DMR_BIPOD "bipod_01_F_khk"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE      ARR_1("arifle_MX_khk_F")
#define RIFLE_UGL  ARR_1("arifle_MX_GL_khk_F")

// CARBINE & PDW
/* Wie MTP */

// SF CARBINES
#define RIFLE_RECON ARR_2(\
    WEAPON_OLD("arifle_SPAR_01_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define RIFLE_UGL_RECON ARR_2(\
    WEAPON_OLD("arifle_SPAR_01_gl_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define RIFLE_RECON_TAN       WEAPON_OLD("arifle_SPAR_01_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")
#define RIFLE_UGL_RECON_TAN   WEAPON_OLD("arifle_SPAR_01_gl_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR WEAPON_OLD("w_srifle_ebr_khaki",DMR_BIPOD,LASERPOINTER,"optic_SOS_khk_F")

#define DMR_RECON ARR_2(\
    WEAPON("arifle_SPAR_03_blk_F",LASERPOINTER,"optic_ams","muzzle_snds_b","bipod_01_f_blk"),\
    WEAPON("arifle_SPAR_03_khk_F",LASERPOINTER,"optic_ams_khk","muzzle_snds_b_khk_f","bipod_01_f_khk"))

#define SR_AP WEAPON_OLD("srifle_DMR_02_camo_F",SNIPER_OPTIC,DMR_BIPOD,"ACE_muzzle_mzls_338")
#define SR_AM WEAPON_OLD("srifle_lrr_tna_f",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE   WEAPON_OLD("arifle_MX_SW_khk_F",LASERPOINTER,RCO,DMR_BIPOD)
#define AUTORIFLE_RECON    ARR_2(\
    WEAPON_OLD("arifle_SPAR_02_blk_F",LASERPOINTER,"optic_ERCO_blk_F","muzzle_snds_M"),\
    WEAPON_OLD("arifle_SPAR_02_khk_F",LASERPOINTER,"optic_ERCO_khk_F","muzzle_snds_M_khk_f")\
)
#define MMG WEAPON_OLD("MMG_02_black_F",LASERPOINTER,"optic_Hamr","bipod_01_F_blk")



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON_OLD("hgun_p07_khk_f","","","")
#define PISTOL_SF	WEAPON_OLD("hgun_Pistol_heavy_01_F","muzzle_snds_acp","optic_MRD","")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT    WEAPON_OLD("launch_nlaw_f","","","")
#define AT_ROCKET   WEAPON_OLD("launch_MRAWS_green_F",LASERPOINTER,"","")
#define AA_MISSILE  WEAPON_OLD("launch_B_Titan_tna_F","","","")
#define AT_MISSILE  WEAPON_OLD("launch_B_Titan_short_tna_F","","","")


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("H_HelmetB_Enh_tna_F")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetB_tna_F")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetB_Light_tna_F")
#define HELMET_DIVER ARR_1("H_HelmetB_light_black")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_HelmetCrew_B")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_B")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_B")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("xru_h_beret_colonel_eagle")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("h_milcap_tna_f")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Combat_Goggles_tna_F")
#define GOGGLES_SF		ARR_4("G_Bandanna_blk","G_Tactical_Clear","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_1("G_Combat_Goggles_tna_F")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_tna_F")
#define NVG_SF	NVG



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_01_khk_F")



/* ###################### - RADIOS - ###################### */


/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
