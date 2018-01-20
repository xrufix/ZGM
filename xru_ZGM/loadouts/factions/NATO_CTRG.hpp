/* ###################### - UGL-Magazines - ###################### */
#include "components\blufor.hpp"
#include "components\ugl_vanilla.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("U_B_CTRG_1")        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"U_B_CTRG_3")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM_SINGLE
#define UNIFORM_RECON       ARR_2("U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_3_F")
#define UNIFORM_DIVER       ARR_1("U_B_Wetsuit")
#define UNIFORM_CREW        ARR_1("U_B_CTRG_Soldier_urb_2_F")
#define UNIFORM_HELICOPTER  ARR_1("U_B_CTRG_Soldier_urb_1_F")
#define UNIFORM_JET         ARR_1("U_B_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_1("U_B_FullGhillie_lsh")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrierL_CTRG")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      VEST_EMPTY
#define VEST_RIFLEMAN   VEST_LIGHT
#define VEST_GRENADIER  ARR_1("V_PlateCarrierH_CTRG")
#define VEST_MEDIC      VEST_LIGHT
#define VEST_SL         VEST_GRENADIER
#define VEST_TL         VEST_GRENADIER
#define VEST_MG         VEST_GRENADIER
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		ARR_1("V_Chestrig_blk")

#define VEST_RECON			ARR_1("VSM_FAPC_Operator_OGA_OD") 
#define VEST_RECON_TL		ARR_1("VSM_LBT6094_operator_OGA_OD") 
#define VEST_RECON_MG		ARR_1("VSM_FAPC_MG_OGA_OD") 
#define VEST_RECON_GR		ARR_1("VSM_RAV_operator_OGA_OD")

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
#define LASERPOINTER "acc_pointer_IR"

#define RCO     "optic_ERCO_snd_f"
#define CCO     "optic_Holosight"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"

#define DMR_BIPOD       "bipod_01_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("hlc_rifle_ACR_Carb_tan")
#define RIFLE_UGL       ARR_1("arifle_SPAR_01_GL_snd_F")
#define RIFLE_RCO       WEAPON(RIFLE,RCO,LASERPOINTER,"")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,RCO,LASERPOINTER,"")
#define RIFLE_CCO       WEAPON(RIFLE,RCO,LASERPOINTER,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,RCO,LASERPOINTER,"")

#define MAG_RIFLE			ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_556x45_Stanag_Tracer_Red")


#define CARBINE     ARR_1("hlc_rifle_ACR_SBR_black")
#define CARBINE_UGL	RIFLE_UGL

#define CARBINE_CCO         WEAPON(CARBINE,"optic_Holosight_smg_blk_F","","")
#define CARBINE_UGL_CCO    RIFLE_UGL_CCO

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER


// PDW
#define PDW             WEAPON("smg_05_f","optic_Holosight_blk_F","","")
#define MAG_PDW	        ARR_1("30Rnd_9x21_Mag_SMG_02")

// SF CARBINES
#define RIFLE_RECON         WEAPON("hlc_rifle_ACR_Carb_green","optic_ERCO_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")
#define RIFLE_UGL_RECON     WEAPON("arifle_SPAR_01_gl_khk_F","optic_Holosight_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")
#define RIFLE_RECON_TAN     RIFLE_RECON
#define RIFLE_UGL_RECON_TAN RIFLE_UGL_RECON
#define RIFLE_DIVER 		WEAPON("hlc_rifle_ACR_SBR_black","optic_Holosight_blk_F",LASERPOINTER,"muzzle_snds_M")
#define RIFLE_UGL_DIVER 	WEAPON("arifle_SPAR_01_gl_blk_F","optic_Holosight_blk_F",LASERPOINTER,"muzzle_snds_M")

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("hlc_rifle_ACR68_full_tan","optic_SOS",LASERPOINTER,DMR_BIPOD)
#define DMR_RECON   WEAPON("hlc_rifle_ACR68_full_green","optic_SOS_khk_F",LASERPOINTER,"muzzle_snds_B_khk_F")
#define DMR_DIVER   WEAPON("hlc_rifle_ACR68_full_black","optic_SOS",LASERPOINTER,"muzzle_snds_b")

#define MAG_DMR         ARR_1("hlc_30rnd_68x43_FMJ")
#define MAG_DMR_RECON   MAG_DMR

#define SR_AP       WEAPON("srifle_DMR_02_camo_F",SNIPER_OPTIC,"bipod_01_F_snd","")
#define MAGS_SR_AP  ARR_4("10Rnd_338_Mag",10,"ACE_10Rnd_338_API526_Mag",5)

#define SR_AM       WEAPON("srifle_lrr_tna_f","optic_LRPS_tna_F","","")
#define MAGS_SR_AM  ARR_4("7Rnd_408_Mag",7,"ACE_7Rnd_408_305gr_Mag",3)


// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("hlc_rifle_ACR_mid_tan_x15",CCO,LASERPOINTER,DMR_BIPOD)
#define MAGS_AUTORIFLE      ARR_2("hlc_50rnd_556x45_EPR",11)
#define MAGS_AUTORIFLE_ASST ARR_2(MAG_RIFLE,10)

#define AUTORIFLE_RECON       WEAPON("hlc_rifle_ACR_mid_green_x15","optic_ERCO_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")
#define MAGS_AUTORIFLE_RECON  ARR_4("hlc_50rnd_556x45_EPR",8,MAG_RIFLE,8)

#define MMG             WEAPON("MMG_02_black_F","optic_Holosight_blk_F",LASERPOINTER,"bipod_01_F_blk")
#define MAGS_MMG        ARR_2("130Rnd_338_Mag",3)
#define MAGS_MMG_ASST   ARR_2("130Rnd_338_Mag",5)



/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON("hlc_pistol_P226R_Combat","hlc_acc_TLR1","","")
#define MAG_PISTOL 		ARR_1("hlc_15Rnd_9x19_B_P226")

#define PISTOL_SF	    WEAPON("hlc_pistol_P229R_Elite","HLC_Optic228_Docter_CADEX","hlc_muzzle_Evo9","hlc_acc_TLR1")
#define MAG_PISTOL_SF 	ARR_1("hlc_15Rnd_9x19_SD_P226")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("launch_nlaw_f","","","")
#define MAGS_AT_LIGHT           MAG_PISTOL

#define AT_ROCKET	            WEAPON("launch_nlaw_f","","","")
#define MAGS_AT_ROCKET          MAGS_AT_LIGHT
#define MAGS_AT_ROCKET_ASST     MAGS_AT_LIGHT

#define AT_MISSILE              WEAPON("launch_i_Titan_short_F","","","")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")

#define AA_MISSILE	            WEAPON("launch_b_Titan_F","","","")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)


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
#define NVG	    ARR_1("NVGoggles")
#define NVG_SF  ARR_1("NVGogglesB_grn_F")



/* ###################### - BINOCULARS - ###################### */
#define BINOCULAR	ARR_1("Binocular")
#define RANGEFINDER	ARR_1("ACE_Vector")
#define DESIGNATOR	ARR_1("Laserdesignator_03")



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
