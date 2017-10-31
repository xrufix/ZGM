#include "IRAN.hpp"

/* ###################### - DISPLAY NAMES - ###################### */
// Wie IRAN


/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "U_O_CombatUniform_oucamo"
#define UNIFORM_COMMAND     ARR_1("U_O_OfficerUniform_ocamo")
#define UNIFORM_SPECIAL     UNIFORM_SINGLE



/* ###################### - VESTS - ###################### */
#define VEST_LIGHT      "v_chestrig_blk"
#define VEST_RIFLEMAN   VEST_LIGHT
#define VEST_GRENADIER  "v_harnessogl_gry"
#define VEST_MEDIC      VEST_LIGHT
#define VEST_SL         "v_harnesso_gry"

#define VEST_CREW		"V_LegStrapBag_black_F"

#define VEST_SF			VEST_MEDIC
#define VEST_SF_TL		VEST_RIFLEMAN
#define VEST_SF_MG		VEST_MEDIC
#define VEST_SF_GR		VEST_GRENADIER

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		ARR_1("ACE_Banana")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_oucamo")
#define BACKPACK_KITBAG     ARR_1("B_ViperLightHarness_blk_F")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oucamo")
#define BACKPACK_DIVER      ARR_1("b_viperharness_blk_f")
#define BACKPACK_RECON      ARR_1("b_viperharness_blk_f")

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
#define SF_CARBINE              WEAPON("arifle_ARX_blk_F",RCO,LASERPOINTER,"muzzle_snds_65_TI_blk_F")
#define SF_CARBINE_TN           WEAPON("arifle_ARX_hex_F",RCO_TN,LASERPOINTER,"muzzle_snds_65_TI_hex_F")

#define MAG_CARBINE_SF          ARR_3("10Rnd_50BW_Mag_F",2,"30Rnd_65x39_caseless_green")
#define MAG_CARBINE_SF_TRACER   ARR_1("30Rnd_65x39_caseless_green")


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR_SF      DMR_DIVER


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_SF        WEAPON("arifle_CTARS_blk_F",LASERPOINTER,RCO,"muzzle_snds_58_blk_F")

#define MMG                 WEAPON("MMG_01_tan_F",RCO_TN,LASERPOINTER,DMR_BIPOD)


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
#define HELMET_SF HELMET_BARE
#define HELMET_DIVER HELMET_BARE
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("xru_H_HelmetCrew_blk")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")


/* ###################### - GOGGLES / FACEWEAR - ###################### */
// Wie IRAN



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("O_NVGoggles_urb_f")
#define NVG_SF	NVG



/* ###################### - BINOCULARS - ###################### */
// Wie IRAN



/* ###################### - RADIOS - ###################### */
// Wie IRAN