#include "CTRG_DES.hpp"

/* ###################### - UGL-Magazines - ###################### */


/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("U_B_CTRG_Tropical_F_No_Flag")        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"U_B_CTRG_Tropical_2_F_No_Flag")      // Für Zufallsauswahl

#define UNIFORM_RECON       ARR_2("U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_3_F")

#define UNIFORM_SNIPER      ARR_1("U_B_T_FullGhillie_tna_F")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_PlateCarrier1_CTRG_Tropical")

#define VEST_GR         ARR_1("V_PlateCarrier2_CTRG_Tropical")

#define VEST_CREW		ARR_1("V_Chestrig_blk")

#define VEST_RECON			ARR_1("VSM_FAPC_Operator_OGA_OD") 
#define VEST_RECON_TL		ARR_1("VSM_LBT6094_operator_OGA_OD") 
#define VEST_RECON_MG		ARR_1("VSM_FAPC_MG_OGA_OD") 
#define VEST_RECON_GR		ARR_1("VSM_RAV_operator_OGA_OD")

#define VEST_BREATHER	ARR_1("V_RebreatherB")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")

#define VEST_PROTECTED  "W_V_EOD_olive_ICRC"



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_CTRG_Tropical")
#define BACKPACK_KITBAG     ARR_1("B_Kitbag_CTRG_Tropical")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_ctrg_tropical")

/* ###################### - ATTACHMENTS- ###################### */
#define RCO     "optic_ERCO_blk_f"
#define CCO     "optic_Holosight_blk_f"

#define SNIPER_OPTIC    "optic_LRPS_tna_f"
#define SNIPER_OPTIC_NV "optic_NVS"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("hlc_rifle_ACR_Carb_black")
#define RIFLE_UGL       ARR_1("arifle_SPAR_01_GL_blk_F")

// SF CARBINES
#define RIFLE_RECON         WEAPON("hlc_rifle_ACR_Carb_green","optic_ERCO_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")
#define RIFLE_UGL_RECON     WEAPON("arifle_SPAR_01_gl_khk_F","optic_Holosight_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("hlc_rifle_ACR68_full_black","optic_SOS",LASERPOINTER,DMR_BIPOD)
#define DMR_RECON   WEAPON("hlc_rifle_ACR68_full_green","optic_SOS_khk_F",LASERPOINTER,"muzzle_snds_B_khk_F")

#define SR_AM       WEAPON("srifle_lrr_tna_f","optic_LRPS_tna_F","","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE           WEAPON("hlc_rifle_ACR_mid_black_x15",CCO,LASERPOINTER,DMR_BIPOD)

#define AUTORIFLE_RECON       WEAPON("hlc_rifle_ACR_mid_green_x15","optic_ERCO_khk_F",LASERPOINTER,"muzzle_snds_M_khk_f")

#define MMG             WEAPON("MMG_02_black_F","optic_Holosight_blk_F",LASERPOINTER,"bipod_01_F_blk")

/* ###################### - SIDEARMS - ###################### */

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON("launch_MRAWS_green_rail_F","","","")

#define AT_ROCKET               WEAPON("launch_MRAWS_green_F","","","")

#define AT_MISSILE              WEAPON("launch_b_Titan_short_F","","","")

#define AA_MISSILE	            WEAPON("launch_B_Titan_short_tna_F","","","")


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("H_HelmetSpecB_CTRG_Trop")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_HelmetB_CTRG_Trop")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_1("H_HelmetB_TI_tna_F")

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES_SF		ARR_1("G_Balaclava_TI_tna_F")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_TI_G_tna_F")

/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_INDEP")
#define NVG_SF  ARR_1("NVGogglesB_grn_F")



/* ###################### - BINOCULARS - ###################### */
#define DESIGNATOR	ARR_1("Laserdesignator_03")



/* ###################### - RADIOS - ###################### */


/* ###################### - INSIGNIA - ###################### */
