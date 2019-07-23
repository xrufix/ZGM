/* ###################### - UGL-Magazines - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("U_I_E_Uniform_01_tanktop_F")        // Für Inventar
#define UNIFORM             ARR_3(UNIFORM_SINGLE,"U_I_E_Uniform_01_F","U_I_E_Uniform_01_shortsleeve_F")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("U_I_E_Uniform_01_officer_F")
#define UNIFORM_RECON       ARR_1("U_I_E_Uniform_01_sweater_F")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        UNIFORM
#define UNIFORM_HELICOPTER  ARR_1("U_I_E_Uniform_01_coveralls_F")
#define UNIFORM_JET         ARR_1("U_I_pilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_I_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_2("V_CarrierRigKBT_01_EAF_F","V_CarrierRigKBT_01_Olive_F")
#define VEST_OFFICER    ARR_1("V_BandollierB_oli")
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RM         ARR_2("V_CarrierRigKBT_01_light_EAF_F","V_CarrierRigKBT_01_light_Olive_F")
#define VEST_GR         ARR_2("V_CarrierRigKBT_01_heavy_EAF_F","V_CarrierRigKBT_01_heavy_Olive_F")
#define VEST_CM         VEST_RM
#define VEST_SL         VEST_GR
#define VEST_TL         VEST_GR
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		VEST_EMPTY

#define VEST_RECON			ARR_2("V_CarrierRigKBT_01_light_EAF_F","V_CarrierRigKBT_01_light_Olive_F")
#define VEST_RECON_TL		VEST_RECON
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		VEST_RECON

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVest_oli")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"

/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_eaf_F")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_sgg")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_eaf_F")
#define BACKPACK_RADIO      BACKPACK_KITBAG //ARR_1("B_RadioBag_01_eaf_F")
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
#define BACKPACK_DIVER      ARR_1("xru_Carryall_blk")
#define BACKPACK_RECON      BACKPACK_ASSAULT

//	CSW-BACKPACKS
#define HMG_GUN		"I_E_HMG_01_Weapon_F"
#define HMG_TRIPOD	"I_E_HMG_01_support_F"
#define GMG_GUN		"I_E_GMG_01_Weapon_F"
#define GMG_TRIPOD	"I_E_HMG_01_support_F"
#define MORTAR_GUN	"I_E_Mortar_01_Weapon_F"
#define MORTAR_POD	"I_E_Mortar_01_support_F"



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "acc_pointer_ir"

#define SNIPER_OPTIC "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           "arifle_MSBS65_camo_F"
#define RIFLE_UGL       "arifle_MSBS65_GL_camo_F"
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,"optic_ico_01_camo_f","","")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,"optic_ico_01_camo_f","","")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,"optic_ico_01_camo_f","","")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,"optic_ico_01_camo_f","","")

#define MAG_RIFLE			ARR_1("30Rnd_65x39_caseless_msbs_mag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_65x39_caseless_msbs_mag_Tracer")

// CARBINE & PDW
#define PDW             WEAPON("SMG_03C_TR_black","optic_aco","","","")
#define MAG_PDW	        ARR_1("50Rnd_570x28_SMG_03")


#define CARBINE   			"arifle_MSBS65_black_F"
#define CARBINE_UGL			"arifle_MSBS65_GL_black_F"
#define CARBINE_CCO      	WEAPON(CARBINE,LASERPOINTER,"optic_ico_01_black_f","","")
#define CARBINE_UGL_CCO  	WEAPON(CARBINE_UGL,LASERPOINTER,"optic_ico_01_black_f","","")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON ARR_3(\
    WEAPON("arifle_MSBS65_F",LASERPOINTER,"optic_ico_01_f","muzzle_snds_h",""),\
    WEAPON("arifle_MSBS65_camo_F",LASERPOINTER,"optic_ico_01_camo_f","muzzle_snds_h",""),\
	WEAPON("arifle_MSBS65_sand_F",LASERPOINTER,"optic_ico_01_sand_f","muzzle_snds_h_snd_f","")\
)
#define RIFLE_UGL_RECON ARR_3(\
    WEAPON("arifle_MSBS65_GL_F",LASERPOINTER,"optic_ico_01_f","muzzle_snds_h",""),\
    WEAPON("arifle_MSBS65_GL_camo_F",LASERPOINTER,"optic_ico_01_camo_f","muzzle_snds_h",""),\
	WEAPON("arifle_MSBS65_GL_sand_F",LASERPOINTER,"optic_ico_01_sand_f","muzzle_snds_h_snd_f","")\
)
#define RIFLE_RECON_TAN ARR_2(\
    WEAPON("arifle_MSBS65_camo_F",LASERPOINTER,"optic_ico_01_camo_f","muzzle_snds_h",""),\
    WEAPON("arifle_MSBS65_sand_F",LASERPOINTER,"optic_ico_01_sand_f","muzzle_snds_h_snd_f","")\
)
#define RIFLE_UGL_RECON_TAN ARR_2(\
    WEAPON("arifle_MSBS65_GL_camo_F",LASERPOINTER,"optic_ico_01_camo_f","muzzle_snds_h",""),\
    WEAPON("arifle_MSBS65_GL_sand_F",LASERPOINTER,"optic_ico_01_sand_f","muzzle_snds_h_snd_f","")\
)
#define RIFLE_DIVER 		WEAPON("arifle_MSBS65_black_F",LASERPOINTER,"optic_ico_01_black_f","muzzle_snds_h","")
#define RIFLE_UGL_DIVER 	WEAPON("arifle_MSBS65_GL_black_F",LASERPOINTER,"optic_ico_01_black_f","muzzle_snds_h","")

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_DMR_03_khaki_F","bipod_01_f_khk",LASERPOINTER,"optic_ams_khk","")
#define MAG_DMR     ARR_1("20Rnd_762x51_Mag")

#define DMR_RECON       WEAPON("srifle_DMR_03_khaki_F","bipod_01_f_khk",LASERPOINTER,"optic_ams_khk","muzzle_snds_b_khk_f")
#define DMR_DIVER       WEAPON("srifle_DMR_03_F","bipod_01_f_blk",LASERPOINTER,"optic_ams","muzzle_snds_b_f")
#define MAG_DMR_RECON   MAG_DMR

#define SR_AP       WEAPON("srifle_DMR_02_F",SNIPER_OPTIC,"bipod_01_f_blk","ACE_muzzle_mzls_338","")
#define MAGS_SR_AP  ARR_4("10Rnd_338_Mag",10,"ACE_10Rnd_338_API526_Mag",5)

#define SR_AM       WEAPON("srifle_lrr_camo_f",SNIPER_OPTIC,"","","")
#define MAGS_SR_AM  ARR_4("7Rnd_408_Mag",7,"ACE_7Rnd_408_305gr_Mag",3)

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("LMG_Mk200_black_F",LASERPOINTER,"optic_hamr","bipod_01_f_blk","")
#define MAGS_AUTORIFLE      ARR_4("200Rnd_65x39_cased_Box",3,"200Rnd_65x39_cased_Box_Tracer",2)
#define MAGS_AUTORIFLE_ASST ARR_4("200Rnd_65x39_cased_Box",2,"200Rnd_65x39_cased_Box_Tracer",1)

#define AUTORIFLE_RECON         WEAPON("LMG_Mk200_black_F",LASERPOINTER,"optic_hamr","bipod_01_f_blk","muzzle_snds_h_mg_blk_f")
#define MAGS_AUTORIFLE_RECON    ARR_4("200Rnd_65x39_cased_Box",3,"ACE_200Rnd_65x39_cased_Box_Tracer_Dim",2)

#define MMG ARR_2(\
    WEAPON("MMG_02_black_F",LASERPOINTER,"optic_hamr","bipod_01_f_blk",""),\
    WEAPON("MMG_02_sand_F",LASERPOINTER,"optic_hamr","bipod_01_F_snd","")\
)
#define MAGS_MMG            ARR_2("130Rnd_338_Mag",3)
#define MAGS_MMG_ASST       ARR_2("130Rnd_338_Mag",3)


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("hgun_Pistol_heavy_01_green_F","","","","")
#define MAG_PISTOL 		ARR_1("11Rnd_45ACP_Mag")

#define PISTOL_SF	WEAPON("hgun_Pistol_heavy_01_green_F","muzzle_snds_acp","optic_mrd_black","","")
#define MAG_PISTOL_SF 	ARR_1("11Rnd_45ACP_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("launch_MRAWS_green_rail_F","LASERPOINTER","","","")
#define MAGS_AT_LIGHT   ARR_2("MRAWS_HEAT_F",2)

#define AT_ROCKET	    WEAPON("launch_MRAWS_green_F",LASERPOINTER,"","","")
#define MAGS_AT_ROCKET          ARR_1("MRAWS_HEAT_F")
#define MAGS_AT_ROCKET_ASST     ARR_4("MRAWS_HEAT_F",4,"MRAWS_HE_F",2)

#define AA_MISSILE	    WEAPON("launch_I_Titan_eaf_F","","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

#define AT_MISSILE     	WEAPON("launch_I_Titan_short_F","","","","")
#define MAGS_AT_MISSILE       ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST  ARR_3("Titan_AT",2,"Titan_AP")

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_2( \
    "H_HelmetHBK_headset_F", \
    "H_HelmetHBK_ear_F" \
)

// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1( \
    "H_HelmetHBK_F" \
)

// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1( \
    "H_HelmetHBK_chops_F" \
)

#define HELMET_DIVER ARR_1("H_HelmetHBK_F")

// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_HelmetCrew_I_E")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_I_E")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_I_E")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_I_E")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_EAF_01_F")
#define CAP_XO      ARR_1("H_Booniehat_eaf")
#define CAP_OFFICER ARR_1("H_MilCap_eaf")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Combat")
#define GOGGLES_SF		ARR_4("G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_beast")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_combat")
#define GOGGLES_DIVER	ARR_1("G_B_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_INDEP")
#define NVG_SF	NVG

/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator")

/* ###################### - RADIOS - ###################### */
#define RADIO_HAND	ARR_1("ACRE_PRC148")
#define RADIO_PACK 	ARR_1("ACRE_PRC117F")
#define RADIO_SR "ACRE_PRC343"

/* ###################### - INSIGNIA - ###################### */
#define INSIGNIA_COMMON ARR_1("")
#define INSIGNIA_SF INSIGNIA_COMMON
#define INSIGNIA_TNK INSIGNIA_COMMON
#define INSIGNIA_HELI INSIGNIA_COMMON
#define INSIGNIA_JET INSIGNIA_COMMON
#define INSIGNIA_MEV INSIGNIA_COMMON
#define INSIGNIA_SUPPORT INSIGNIA_COMMON
