#include "IRAN.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_O_CombatUniform_oucamo"
#define UNIFORM_COMPANY     "U_O_OfficerUniform_ocamo"
#define UNIFORM_RECON       "w_u_viper_urban"



/* ###################### - VESTS - ###################### */
#define VEST_LIGHT      "v_chestrig_blk"
#define VEST_RM         VEST_LIGHT
#define VEST_GR         "v_harnessogl_gry"
#define VEST_CM         "w_v_tacvestir_urban"
#define VEST_SL         "v_harnesso_gry"

#define VEST_CREW		"V_LegStrapBag_black_F"

#define VEST_RECON			VEST_CM
#define VEST_RECON_TL		VEST_RM
#define VEST_RECON_MG		VEST_CM
#define VEST_RECON_GR		VEST_GR

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		ARR_1("ACE_Banana")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_oucamo")
#define BACKPACK_KITBAG     ARR_1("w_b_viperlightharness_urban")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oucamo")
#define BACKPACK_DIVER      ARR_1("b_viperharness_blk_f")
#define BACKPACK_RECON      ARR_1("w_b_viperharness_urban")

//	CSW-BACKPACKS
// Wie IRAN



/* ###################### - ATTACHMENTS- ###################### */
#define RCO     "optic_arco_blk_f"
#define RCO_TN  "optic_arco"

#define DMR_OPTIC   "optic_khs_blk"




/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
// Wie IRAN

// PDW
// Wie IRAN


// CARBINE
// Wie IRAN


// SF CARBINES
#define RIFLE_RECON              WEAPON_OLD("arifle_ARX_blk_F",RCO,LASERPOINTER,"muzzle_snds_65_TI_blk_F")
#define RIFLE_RECON_TAN           WEAPON_OLD("arifle_ARX_hex_F",RCO_TN,LASERPOINTER,"muzzle_snds_65_TI_hex_F")

#define MAG_RIFLE_RECON          ARR_3("10Rnd_50BW_Mag_F",2,"30Rnd_65x39_caseless_green")
#define MAG_RIFLE_RECON_TRACER   ARR_1("30Rnd_65x39_caseless_green")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR_RECON      DMR_DIVER


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_RECON        WEAPON_OLD("arifle_CTARS_blk_F",LASERPOINTER,RCO,"muzzle_snds_58_blk_F")

#define MMG                 WEAPON_OLD("MMG_01_tan_F",RCO_TN,LASERPOINTER,DMR_BIPOD)


/* ###################### - SIDEARMS - ###################### */
// Wie IRAN


/* ###################### - LAUNCHERS - ###################### */
// Wie IRAN



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "H_HelmetO_oucamo",  \
    "H_HelmetLeaderO_oucamo"         \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetSpecO_blk")
// SPECIAL FORCES INFANTRY
#define HELMET_SF "w_h_helmeto_vipersp_urban"
#define HELMET_DIVER HELMET_BARE
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("xru_H_HelmetCrew_blk")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")


/* ###################### - GOGGLES / FACEWEAR - ###################### */
// Wie IRAN



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("O_NVGoggles_urb_f")
#define NVG_SF	""



/* ###################### - BINOCULARS - ###################### */
// Wie IRAN



/* ###################### - RADIOS - ###################### */
// Wie IRAN