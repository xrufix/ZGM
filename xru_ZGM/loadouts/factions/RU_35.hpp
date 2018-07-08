/* ###################### - UGL-Magazines - ###################### */
#include "components\opfor.hpp"
#include "components\ugl_rhsafrf.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "xru_u_o_CombatUniform_raven"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       ARR_1("w_u_viper_aaf")
#define UNIFORM_DIVER       ARR_1("xru_u_o_wetsuit_grn")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  UNIFORM
#define UNIFORM_JET         ARR_1("U_I_pilotCoveralls")
#define UNIFORM_SNIPER      ARR_3("U_O_FullGhillie_sard","U_O_FullGhillie_ard","U_O_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      VEST_LIGHT
#define VEST_OFFICER    VEST_LIGHT
#define VEST_LIGHT      "V_TacChestrig_oli_F"
#define VEST_RM         "w_v_harnesso_black"
#define VEST_GR         "w_v_harnessogl_black"
#define VEST_CM         "V_TacVestIR_blk"
#define VEST_SL         VEST_RM
#define VEST_TL         VEST_RM
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		"V_LegStrapBag_black_F"

#define VEST_RECON			"V_Chestrig_oli"
#define VEST_RECON_TL		VEST_RECON
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		ARR_1("ACE_Banana")

#define VEST_PROTECTED  "V_Plain_crystal_F"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_FieldPack_oli")
#define BACKPACK_KITBAG     ARR_1("xru_Kitbag_digi")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      BACKPACK_ASSAULT
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("b_viperharness_blk_f")
#define BACKPACK_RECON      ARR_1("w_b_viperharness_aaf")

//	CSW-BACKPACKS
#define HMG_GUN		"RHS_Kord_Gun_Bag"
#define HMG_TRIPOD	"RHS_Kord_Tripod_Bag"
#define GMG_GUN		"RHS_AGS30_Gun_Bag"
#define GMG_TRIPOD	"RHS_AGS30_Tripod_Bag"
#define MORTAR_GUN	"RHS_Podnos_Gun_Bag"
#define MORTAR_POD	"RHS_Podnos_Bipod_Bag"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "rhs_acc_perst3"

#define RCO     "rhs_acc_rakurspm"

#define CCO     "rhs_acc_1p87"

#define DMR_OPTIC   "optic_khs_blk"
#define DMR_BIPOD   "bipod_02_f_blk"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "hlc_rifle_ak12"
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")

#define RIFLE_UGL       "hlc_rifle_ak12GL"
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE           ARR_1("30Rnd_545x39_Mag_Green_F")
#define MAG_RIFLE_TRACER    ARR_1("30Rnd_545x39_Mag_Tracer_Green_F")

// PDW
#define PDW                 WEAPON("hlc_rifle_aku12","rhs_acc_ekp8_18","","")
#define MAG_PDW	            MAG_RIFLE


// CARBINE
#define CARBINE             "hlc_rifle_ak12"
#define CARBINE_CCO         WEAPON(CARBINE,CCO,"","")

#define CARBINE_UGL	        "hlc_rifle_ak12GL"
#define CARBINE_UGL_CCO     WEAPON(CARBINE_UGL,CCO,"","")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// SF CARBINES
#define RIFLE_RECON         WEAPON(RIFLE,CCO,LASERPOINTER,"rhs_acc_tgpa")
#define RIFLE_UGL_RECON     WEAPON(RIFLE_UGL,CCO,LASERPOINTER,"rhs_acc_tgpa")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		RIFLE_RECON
#define RIFLE_UGL_DIVER 	RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_DMR_05_blk_F",DMR_OPTIC,LASERPOINTER,DMR_BIPOD)
#define MAG_DMR     ARR_1("10Rnd_93x64_DMR_05_Mag")

#define DMR_RECON       WEAPON("srifle_DMR_04_F","optic_nightstalker",LASERPOINTER,"")
#define DMR_DIVER       WEAPON("srifle_DMR_04_F","optic_nightstalker",LASERPOINTER,"")
#define MAG_DMR_RECON   ARR_1("10Rnd_127x54_Mag")

#define SR_AP       WEAPON("srifle_DMR_05_tan_f",SNIPER_OPTIC,LASERPOINTER,DMR_BIPOD)
#define MAGS_SR_AP  ARR_2("10Rnd_93x64_DMR_05_Mag",10)

#define SR_AM       WEAPON("srifle_GM6_F",SNIPER_OPTIC,"","")
#define MAGS_SR_AM  ARR_6("5Rnd_127x108_Mag",4,"5Rnd_127x108_APDS_Mag",4,"ACE_5Rnd_127x99_AMAX_Mag",2)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("hlc_rifle_RPK12_60rnd",CCO,LASERPOINTER,"")
#define MAG_AUTORIFLE       ARR_1("hlc_60Rnd_545x39_t_rpk")
#define MAGS_AUTORIFLE      ARR_2(MAG_AUTORIFLE,13)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_AUTORIFLE,9)

#define AUTORIFLE_RECON        WEAPON("hlc_rifle_RPK12_60rnd",CCO,LASERPOINTER,"rhs_acc_tgpa")
#define MAGS_AUTORIFLE_RECON   ARR_2(MAG_AUTORIFLE,9)

#define MMG                 WEAPON("rhs_weap_pkp","rhs_acc_nita","","")
#define MAGS_MMG            ARR_2("rhs_100Rnd_762x54mmR_7N13",2)
#define MAGS_MMG_ASST       ARR_3(MAGS_MMG,"rhs_100Rnd_762x54mmR_green",2)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("hgun_Rook40_F","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	    WEAPON("hgun_Rook40_F","hlc_muzzle_tirant9s","","")
#define MAG_PISTOL_SF 	ARR_1("16Rnd_9x21_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("w_launch_rpg32_aaf","","","")
#define MAGS_AT_LIGHT           ARR_3("RPG32_F",2,"RPG32_HE_F")

#define AT_ROCKET	            AT_LIGHT
#define MAGS_AT_ROCKET          MAGS_AT_LIGHT
#define MAGS_AT_ROCKET_ASST     ARR_4("RPG32_F",2,"RPG32_HE_F",2)

#define AA_MISSILE	            WEAPON("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON("launch_O_Vorona_green_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Vorona_HEAT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Vorona_HEAT",2,"Vorona_HE")



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2(                \
    "w_h_helmeto_aaf",  \
    "w_h_helmetleadero_aaf"         \
)
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("w_h_helmetspeco_aaf")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("w_h_helmeto_vipersp_aaf")
#define HELMET_DIVER ARR_1("w_h_helmetspeco_aaf")
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_Tank_black_F")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_I")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_I")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_I")

// COMMANDERS
#define CAP_CO      ARR_1("rhs_beret_vdv1")
#define CAP_XO      ARR_1("rhs_beret_vdv1")
#define CAP_OFFICER ARR_2("H_Cap_blk_Raven","H_MilCap_dgtl")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ""
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_2("G_Balaclava_oli","G_Balaclava_blk")
#define GOGGLES_SF		GOGGLES_FULL
#define GOGGLES_SF_FULL GOGGLES_FULL
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	""



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("rhs_1PN138")
#define NVG_SF	ARR_1("")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("rhssaf_zrak_rd7j")
#define RANGEFINDER	ARR_1("rhs_pdu4")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



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
