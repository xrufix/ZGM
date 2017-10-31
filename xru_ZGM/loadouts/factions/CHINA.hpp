#include "IRAN.hpp"

/* ###################### - DISPLAY NAMES - ###################### */
// Wie IRAN


/* ###################### - UNIFORMS - ###################### */
// Wie IRAN



/* ###################### - VESTS - ###################### */
// Wie IRAN



/* ###################### - BACKPACKS - ###################### */
// Wie IRAN

//	CSW-BACKPACKS
// Wie IRAN



/* ###################### - ATTACHMENTS- ###################### */
#define RCO     "optic_arco_blk_f"
#define RCO_TN  "optic_arco"

#define CCO     "optic_aco"

#define DMR_OPTIC   "optic_dms"
#define DMR_BIPOD   "bipod_02_f_blk"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "arifle_CTAR_blk_f"
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")

#define RIFLE_UGL       "arifle_CTAR_gl_blk_f"
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE           ARR_1("30Rnd_580x42_Mag_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_580x42_Mag_Tracer_F")

// PDW
#define PDW                 WEAPON("smg_02_f",CCO,"","")
#define MAG_PDW	            ARR_1("30Rnd_9x21_Mag")


// CARBINE
#define CARBINE             RIFLE
#define CARBINE_HOLO        RIFLE_CCO

#define CARBINE_UGL	        RIFLE_UGL
#define CARBINE_UGL_HOLO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define SF_CARBINE              WEAPON("arifle_CTAR_hex_F",RCO_TN,LASERPOINTER,"muzzle_snds_58_hex_F")
#define SF_CARBINE_UGL          WEAPON("arifle_CTAR_gl_hex_F",RCO_TN,LASERPOINTER,"muzzle_snds_58_hex_F")
#define SF_CARBINE_TN           SF_CARBINE
#define SF_CARBINE_UGL_TN		SF_CARBINE_UGL
#define SF_CARBINE_DIVER 		WEAPON(CARBINE,RCO,LASERPOINTER,"muzzle_snds_58_blk_F")
#define SF_CARBINE_DIVER_UGL 	WEAPON(CARBINE_UGL,RCO,LASERPOINTER,"muzzle_snds_58_blk_F")

#define MAG_CARBINE_SF          MAG_CARBINE
#define MAG_CARBINE_SF_TRACER   MAG_CARBINE


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_DMR_07_blk_F",DMR_OPTIC,LASERPOINTER,"")
#define MAG_DMR     ARR_1("20Rnd_650x39_Cased_Mag_F")

#define DMR_SF      WEAPON("arifle_ARX_hex_F",DMR_OPTIC,LASERPOINTER,"muzzle_snds_65_TI_hex_F")
#define DMR_DIVER   WEAPON("arifle_ARX_blk_F",DMR_OPTIC,LASERPOINTER,"muzzle_snds_65_TI_blk_F")
#define MAG_DMR_SF  ARR_3("10Rnd_50BW_Mag_F",3,"30Rnd_65x39_caseless_green")

#define SR_AP       WEAPON("srifle_DMR_07_hex_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AP  ARR_6("20Rnd_650x39_Cased_Mag_F",4,"ACE_20Rnd_65x47_Scenar_mag",3,"ACE_20Rnd_65_Creedmor_mag",3)

#define SR_AM       WEAPON("srifle_GM6_camo_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",4,"5Rnd_127x108_APDS_Mag",4,"ACE_5Rnd_127x99_AMAX_Mag",2)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           "arifle_CTARS_blk_F"
#define AUTORIFLE_RCO       WEAPON(AUTORIFLE,"optic_Holosight_blk_F",LASERPOINTER,"")
#define MAG_AUTORIFLE       ARR_1("100Rnd_580x42_Mag_F")
#define MAGS_AUTORIFLE      ARR_4(MAG_AUTORIFLE,5,"100Rnd_580x42_Mag_Tracer_F",2)
#define MAGS_AUTORIFLE_ASST ARR_3(MAG_AUTORIFLE,2,"100Rnd_580x42_Mag_Tracer_F")

#define AUTORIFLE_SF        WEAPON("arifle_CTARS_hex_F",LASERPOINTER,RCO_TN,"muzzle_snds_58_hex_F")
#define MAGS_AUTORIFLE_SF   MAGS_AUTORIFLE

#define MMG                 WEAPON("MMG_01_hex_F",RCO_TN,LASERPOINTER,DMR_BIPOD)
#define MAGS_MMG            ARR_2("150Rnd_93x64_Mag",2)
#define MAGS_MMG_ASST       MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
// Wie IRAN


/* ###################### - LAUNCHERS - ###################### */
// Wie IRAN



/* ###################### - HEADGEAR - ###################### */
// Wie IRAN



/* ###################### - GOGGLES / FACEWEAR - ###################### */
// Wie IRAN



/* ###################### - NIGHT VISION DEVICES - ###################### */
// Wie IRAN



/* ###################### - BINOCULARS - ###################### */
// Wie IRAN



/* ###################### - RADIOS - ###################### */
// Wie IRAN
