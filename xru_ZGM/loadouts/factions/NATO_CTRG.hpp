/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("U_B_CTRG_1")        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"U_B_CTRG_3")      // Für Zufallsauswahl
#define UNIFORM_COMMAND     UNIFORM_SINGLE
#define UNIFORM_SPECIAL     ARR_2("U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_3_F")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("U_B_CTRG_Soldier_urb_2_F")
#define UNIFORM_HELICOPTER  ARR_1("U_B_CTRG_Soldier_urb_1_F")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrierL_CTRG")
#define VEST_BELT       ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RIFLEMAN   VEST_LIGHT
#define VEST_GRENADIER  ARR_1("V_PlateCarrierH_CTRG")
#define VEST_MEDIC      VEST_LIGHT
#define VEST_SL         VEST_GRENADIER
#define VEST_TL         VEST_GRENADIER
#define VEST_MG         VEST_GRENADIER
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		ARR_1("V_Chestrig_blk")

#define VEST_SF			ARR_1("V_PlateCarrier2_rgr_noflag_F") 
#define VEST_SF_TL		ARR_1("V_PlateCarrierIAGL_oli") 
#define VEST_SF_MG		ARR_1("V_PlateCarrier1_rgr_noflag_F") 
#define VEST_SF_GR		VEST_SF_TL

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_rgr")
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
#define LASERPOINTER "acc_pointer_ir"

#define RCO     "optic_ERCO_blk_f"
#define RCO_TN  "optic_ERCO_khk_F"
#define CCO     "optic_Holosight_blk_F"   
#define CCO_TN  "optic_Holosight_khk_F"

#define SNIPER_OPTIC    "optic_LRPS_tna_f"
#define SNIPER_OPTIC_NV "optic_NVS"

#define DMR_BIPOD       "bipod_01_F_khk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("arifle_SPAR_01_blk_F")
#define RIFLE_UGL       ARR_1("arifle_SPAR_01_gl_blk_F")
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

// CARBINE & PDW
#define PDW         WEAPON("smg_05_f",CCO,"","")
#define CARBINE     ARR_1("arifle_MXC_Black_F")
#define CARBINE_UGL	ARR_1("arifle_MX_GL_Black_F")

#define CARBINE_HOLO        WEAPON(CARBINE,CCO,"","")
#define CARBINE_UGL_HOLO    WEAPON(CARBINE_UGL,CCO,"","")

// SF CARBINES
#define SF_CARBINE              WEAPON("arifle_SPAR_01_khk_F",LASERPOINTER,RCO_TN,"muzzle_snds_M_khk_f")
#define SF_CARBINE_UGL          WEAPON("arifle_SPAR_01_gl_khk_F",LASERPOINTER,CCO_TN,"muzzle_snds_M_khk_f")
#define SF_CARBINE_TN           SF_CARBINE
#define SF_CARBINE_UGL_TN       SF_CARBINE_UGL
#define SF_CARBINE_DIVER 		WEAPON("arifle_SPAR_01_blk_F",LASERPOINTER,RCO,"muzzle_snds_M")
#define SF_CARBINE_DIVER_UGL 	WEAPON("arifle_SPAR_01_gl_blk_F",LASERPOINTER,CCO,"muzzle_snds_M")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_DMR_03_khaki_F",LASERPOINTER,"optic_AMS_khk",DMR_BIPOD)
#define DMR_SF      WEAPON("arifle_SPAR_03_khk_F",LASERPOINTER,"optic_AMS_khk","muzzle_snds_b_khk_f")
#define DMR_DIVER   WEAPON("arifle_SPAR_03_blk_F",LASERPOINTER,"optic_ams","muzzle_snds_b")

#define SR_AP       WEAPON("srifle_DMR_02_camo_F",SNIPER_OPTIC,DMR_BIPOD,"ACE_muzzle_mzls_338")
#define SR_AM       WEAPON("srifle_lrr_tna_f",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE_RCO   WEAPON("LMG_03_F",LASERPOINTER,CCO,"")
#define AUTORIFLE_SF    WEAPON("arifle_SPAR_02_khk_F",LASERPOINTER,RCO_TN,"muzzle_snds_M_khk_f")
#define MMG             WEAPON("MMG_02_black_F",LASERPOINTER,CCO,"bipod_01_F_blk")



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("hgun_p07_khk_f","","","")
#define PISTOL_SF	WEAPON("hgun_Pistol_heavy_01_F","muzzle_snds_acp","optic_MRD","")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("launch_nlaw_f","","","")
#define AT_ROCKET	    WEAPON("launch_nlaw_f","","","")
#define AA_MISSILE	    WEAPON("launch_b_Titan_F","","","")
#define AT_MISSILE      WEAPON("launch_i_Titan_short_F","","","")



/* ###################### - MAGAZINES - ###################### */
//  RIFLE & CARBINE
#define MAG_RIFLE			ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_556x45_Stanag_Tracer_Red")

#define MAG_CARBINE         ARR_1("30Rnd_65x39_caseless_mag")
#define MAG_CARBINE_TRACER  ARR_1("30Rnd_65x39_caseless_mag_Tracer")

//  SF CARBINE

#define MAG_CARBINE_SF          MAG_RIFLE
#define MAG_CARBINE_SF_TRACER   MAG_RIFLE_TRACER

//  AR & MG
#define MAGS_AUTORIFLE      ARR_3("200Rnd_556x45_Box_Red_F",2,"200Rnd_556x45_Box_Tracer_Red_F")
#define MAGS_AUTORIFLE_ASST MAGS_AUTORIFLE
#define MAGS_MMG            ARR_2("130Rnd_338_Mag",3)
#define MAGS_MMG_ASST       ARR_2("130Rnd_338_Mag",5)
#define MAGS_AUTORIFLE_SF   ARR_2("150Rnd_556x45_Drum_Mag_F",7)

//  DMR & SR
#define MAG_DMR     ARR_1("20Rnd_762x51_Mag")
#define MAG_DMR_SF  MAG_DMR
#define MAGS_SR_AP  ARR_4("10Rnd_338_Mag",10,"ACE_10Rnd_338_API526_Mag",5)
#define MAGS_SR_AM  ARR_4("7Rnd_408_Mag",7,"ACE_7Rnd_408_305gr_Mag",3)

//  PDW & SIDEARMS
#define MAG_PDW	        ARR_1("30Rnd_9x21_Mag")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")
#define MAG_PISTOL_SF 	ARR_1("11Rnd_45ACP_Mag")

//  ROCKETS & MISSILES
#define MAGS_AT_LIGHT           MAG_PISTOL
#define MAGS_AT_ROCKET          MAGS_AT_LIGHT   // Nicht nutzen
#define MAGS_AT_ROCKET_ASST     MAGS_AT_LIGHT   // Nicht nutzen
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

//  GRENADES




/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_6( \
    "H_HelmetSpecB", \
    "H_HelmetSpecB_paint1", \
    "H_HelmetSpecB_paint2", \
    "H_HelmetSpecB_blk", \
    "H_HelmetSpecB_sand", \
    "H_HelmetSpecB_snakeskin" \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_6( \
    "H_HelmetB", \
    "H_HelmetB_black", \
    "H_HelmetB_desert", \
    "H_HelmetB_grass", \
    "H_HelmetB_sand", \
    "H_HelmetB_snakeskin" \
)
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetB_TI_tna_F")
#define HELMET_DIVER ARR_1("H_HelmetB_light_black")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("xru_H_HelmetCrew_Blk")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_B")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_B")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_B")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("H_Cap_khaki_specops_UK")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("G_Tactical_Clear","G_Tactical_Black")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_2("G_Combat","G_Balaclava_combat")
#define GOGGLES_SF		ARR_2("G_Balaclava_TI_tna_F","G_Balaclava_TI_blk_F")
#define GOGGLES_SF_FULL ARR_2("G_Balaclava_TI_G_tna_F","G_Balaclava_TI_G_blk_F")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_OPFOR")
#define NVG_SF  ARR_2("NVGogglesB_grn_F","NVGogglesB_blk_F")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC152")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")



/* ###################### - INSIGNIA - ###################### */
// Kann in CfgLoadouts.hpp überschrieben werden.
#ifndef INSIGNIA_COMMON
    #define INSIGNIA_COMMON ARR_1("")
#endif
#ifndef INSIGNIA_SF
    #define INSIGNIA_SF INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_TNK
    #define INSIGNIA_TNK INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_HELI
    #define INSIGNIA_HELI INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_JET
    #define INSIGNIA_JET INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_MEV
    #define INSIGNIA_MEV INSIGNIA_COMMON
#endif
#ifndef INSIGNIA_SUPPORT
    #define INSIGNIA_SUPPORT INSIGNIA_COMMON
#endif