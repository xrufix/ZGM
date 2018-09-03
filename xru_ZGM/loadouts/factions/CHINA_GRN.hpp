#include "IRAN_GRN.hpp"

/* ###################### - UNIFORMS - ###################### */
// Wie IRAN_GRN



/* ###################### - VESTS - ###################### */
// Wie IRAN_GRN



/* ###################### - BACKPACKS - ###################### */
// Wie IRAN_GRN

//	CSW-BACKPACKS
// Wie IRAN_GRN



/* ###################### - ATTACHMENTS- ###################### */
// Wie IRAN_GRN
#define DMR_OPTIC   "optic_dms_ghex_f"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "arifle_CTAR_blk_f"
#define RIFLE_RCO       WEAPON_OLD(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON_OLD(RIFLE,LASERPOINTER,CCO,"")

#define RIFLE_UGL       "arifle_CTAR_gl_blk_f"
#define RIFLE_UGL_RCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_UGL_CCO   WEAPON_OLD(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE           ARR_1("30Rnd_580x42_Mag_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_580x42_Mag_Tracer_F")

// PDW
#define PDW                 WEAPON_OLD("smg_02_f",CCO,"","")
#define MAG_PDW	            ARR_1("30Rnd_9x21_Mag")


// CARBINE
#define CARBINE             RIFLE
#define CARBINE_CCO        RIFLE_CCO

#define CARBINE_UGL	        RIFLE_UGL
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON              WEAPON_OLD("arifle_CTAR_ghex_F",RCO_TN,LASERPOINTER,"muzzle_snds_58_ghex_F")
#define RIFLE_UGL_RECON          WEAPON_OLD("arifle_CTAR_gl_ghex_F",RCO_TN,LASERPOINTER,"muzzle_snds_58_ghex_F")
#define RIFLE_RECON_TAN           RIFLE_RECON
#define RIFLE_UGL_RECON_TAN		RIFLE_UGL_RECON
#define RIFLE_DIVER 		WEAPON_OLD(CARBINE,RCO,LASERPOINTER,"muzzle_snds_58_blk_F")
#define RIFLE_UGL_DIVER 	WEAPON_OLD(CARBINE_UGL,RCO,LASERPOINTER,"muzzle_snds_58_blk_F")

#define MAG_RIFLE_RECON          MAG_CARBINE
#define MAG_RIFLE_RECON_TRACER   MAG_CARBINE


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON_OLD("srifle_DMR_07_blk_F","optic_dms",LASERPOINTER,"")
#define MAG_DMR     ARR_1("20Rnd_650x39_Cased_Mag_F")

#define DMR_RECON     WEAPON("arifle_ARX_ghex_F",DMR_OPTIC,LASERPOINTER,"muzzle_snds_65_TI_ghex_F","bipod_02_f_blk")
#define DMR_DIVER     WEAPON("arifle_ARX_blk_F",DMR_OPTIC,LASERPOINTER,"muzzle_snds_65_TI_blk_F","bipod_02_f_blk")
#define MAG_DMR_RECON ARR_3("10Rnd_50BW_Mag_F",3,"30Rnd_65x39_caseless_green")

#define SR_AP       WEAPON_OLD("srifle_DMR_07_ghex_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AP  ARR_6("20Rnd_650x39_Cased_Mag_F",4,"ACE_20Rnd_65x47_Scenar_mag",3,"ACE_20Rnd_65_Creedmor_mag",3)

#define SR_AM       WEAPON_OLD("srifle_GM6_ghex_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",4,"5Rnd_127x108_APDS_Mag",4,"ACE_5Rnd_127x99_AMAX_Mag",2)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON_OLD("arifle_CTARS_blk_F","optic_Holosight_blk_F",LASERPOINTER,"")
#define MAG_AUTORIFLE       ARR_1("100Rnd_580x42_Mag_F")
#define MAGS_AUTORIFLE      ARR_4(MAG_AUTORIFLE,5,"100Rnd_580x42_Mag_Tracer_F",2)
#define MAGS_AUTORIFLE_ASST ARR_3(MAG_AUTORIFLE,3,"100Rnd_580x42_Mag_Tracer_F")

#define AUTORIFLE_RECON        WEAPON_OLD("arifle_CTARS_ghex_F",LASERPOINTER,RCO_TN,"muzzle_snds_58_ghex_F")
#define MAGS_AUTORIFLE_RECON   MAGS_AUTORIFLE

#define MMG                 WEAPON_OLD("MMG_01_tan_F",RCO,LASERPOINTER,DMR_BIPOD)
#define MAGS_MMG            ARR_2("150Rnd_93x64_Mag",2)
#define MAGS_MMG_ASST       MAGS_MMG


/* ###################### - SIDEARMS - ###################### */
// Wie IRAN_GRN


/* ###################### - LAUNCHERS - ###################### */
// Wie IRAN_GRN



/* ###################### - HEADGEAR - ###################### */
// Wie IRAN_GRN



/* ###################### - GOGGLES / FACEWEAR - ###################### */
// Wie IRAN_GRN



/* ###################### - NIGHT VISION DEVICES - ###################### */
// Wie IRAN_GRN



/* ###################### - BINOCULARS - ###################### */
// Wie IRAN_GRN



/* ###################### - RADIOS - ###################### */
// Wie IRAN_GRN