/* ###################### - Side and faction specific includes - ###################### */
#include "components\indep.hpp"
#include "components\ugl_vanilla.hpp"

#define EASYTRACK
// #define HUNTIR

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      ARR_1("U_I_CombatUniform")        // Für Inventar
#define UNIFORM             ARR_2(UNIFORM_SINGLE,"U_I_CombatUniform_shortsleeve")      // Für Zufallsauswahl
#define UNIFORM_COMPANY     ARR_1("U_I_OfficerUniform")  
#define UNIFORM_RECON       ARR_1("xru_u_coveralls_urbancamo")
#define UNIFORM_DIVER       ARR_1("U_i_Wetsuit")
#define UNIFORM_CREW        ARR_1("U_Tank_green_F")
#define UNIFORM_HELICOPTER  ARR_1("u_i_helipilotcoveralls")
#define UNIFORM_JET         ARR_1("U_i_PilotCoveralls")
#define UNIFORM_SNIPER      ARR_3("U_i_FullGhillie_lsh","U_i_FullGhillie_ard","U_i_FullGhillie_sard")



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      ARR_1("V_EOD_olive_F")
#define VEST_OFFICER    ARR_1("V_Rangemaster_belt")
#define VEST_LIGHT      ARR_1("V_PlateCarrierIA1_dgtl")
#define VEST_RM         ARR_1("V_PlateCarrierIA2_dgtl")
#define VEST_GR         ARR_1("V_PlateCarrierIAGL_dgtl")
#define VEST_CM         VEST_LIGHT
#define VEST_SL         VEST_RM
#define VEST_TL         VEST_GR
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_LIGHT

#define VEST_CREW		ARR_1("V_TacVest_khk")

#define VEST_RECON			ARR_1("V_TacVest_khk") 
#define VEST_RECON_TL		ARR_1("V_PlateCarrier2_blk") 
#define VEST_RECON_MG		ARR_1("V_PlateCarrier1_blk") 
#define VEST_RECON_GR		VEST_RECON_TL

#define VEST_BREATHER	ARR_1("V_RebreatherIA")
#define VEST_DIVER		ARR_1("V_TacVestIR_blk")



/* ###################### - BACKPACKS - ###################### */
#define BACKPACK_ASSAULT    ARR_1("B_AssaultPack_dgtl")
#define BACKPACK_KITBAG     ARR_1("xru_Kitbag_digi")
#define BACKPACK_CARRYALL   ARR_1("B_Carryall_oli")
#define BACKPACK_RADIO      ARR_1("B_Fieldpack_oli")
#define BACKPACK_AT_LIGHT 	BACKPACK_ASSAULT
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

#define RCO     "optic_mrco"
#define CCO     "optic_aco"

#define SNIPER_OPTIC    "optic_LRPS"
#define SNIPER_OPTIC_NV "optic_NVS"

#define DMR_BIPOD       "bipod_03_F_blk"



/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE           ARR_1("arifle_Mk20_F")
#define RIFLE_UGL       ARR_1("arifle_Mk20_GL_F")
#define RIFLE_RCO       WEAPON(RIFLE,LASERPOINTER,RCO,"")
#define RIFLE_UGL_RCO   WEAPON(RIFLE_UGL,LASERPOINTER,RCO,"")
#define RIFLE_CCO       WEAPON(RIFLE,LASERPOINTER,CCO,"")
#define RIFLE_UGL_CCO   WEAPON(RIFLE_UGL,LASERPOINTER,CCO,"")

#define MAG_RIFLE			ARR_1("30Rnd_556x45_Stanag")
#define MAG_RIFLE_TRACER	ARR_1("30Rnd_556x45_Stanag_Tracer_yellow")

// PDW
#define PDW             WEAPON("hgun_PDW2000_F","","","")
#define MAG_PDW	        ARR_1("30Rnd_9x21_Mag")

// CARBINES
#define CARBINE     ARR_1("arifle_Mk20C_F")
#define CARBINE_UGL	ARR_1("arifle_Mk20_GL_F")

#define CARBINE_CCO        WEAPON(CARBINE,CCO,"","")
#define CARBINE_UGL_CCO    WEAPON(CARBINE_UGL,CCO,"","")

#define MAG_CARBINE         MAG_RIFLE
#define MAG_CARBINE_TRACER  MAG_RIFLE_TRACER

// SF CARBINES
#define RIFLE_RECON             ARR_2( \
    WEAPON("w_arifle_mk20_black",LASERPOINTER,RCO,"rhsusf_acc_nt4_black"), \
    WEAPON("w_arifle_mk20_grey",LASERPOINTER,RCO,"rhsusf_acc_rotex5_grey"))
#define RIFLE_UGL_RECON         ARR_2( \
    WEAPON("w_arifle_mk20_gl_black",LASERPOINTER,CCO,"rhsusf_acc_nt4_black"), \
    WEAPON("w_arifle_mk20_gl_grey",LASERPOINTER,CCO,"rhsusf_acc_rotex5_grey"))
#define RIFLE_RECON_TAN         WEAPON("arifle_Mk20_plain_F",LASERPOINTER,RCO,"muzzle_snds_m_snds_F")
#define RIFLE_UGL_RECON_TAN     WEAPON("arifle_Mk20_gl_plain_F",LASERPOINTER,CCO,"muzzle_snds_m_snds_F")
#define RIFLE_DIVER 		    WEAPON("w_arifle_trg20_black",LASERPOINTER,RCO,"rhsusf_acc_nt4_black")
#define RIFLE_UGL_DIVER 	    WEAPON("w_arifle_trg21_gl_black",LASERPOINTER,CCO,"rhsusf_acc_nt4_black")

#define MAG_RIFLE_RECON          MAG_RIFLE
#define MAG_RIFLE_RECON_TRACER   MAG_RIFLE_TRACER

// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON("srifle_DMR_03_khaki_F",LASERPOINTER,"optic_KHS_blk",DMR_BIPOD)
#define DMR_RECON   WEAPON("srifle_DMR_03_woodland_F",LASERPOINTER,"optic_KHS_blk","muzzle_snds_B_khk_F")
#define DMR_DIVER   WEAPON("srifle_DMR_03_F",LASERPOINTER,"optic_KHS_blk","muzzle_snds_b")

#define MAG_DMR     ARR_1("20Rnd_762x51_Mag")
#define MAG_DMR_RECON  MAG_DMR
#define MAGS_SR_AP  ARR_4("10Rnd_338_Mag",8,"ACE_10Rnd_338_API526_Mag",4)
#define MAGS_SR_AM  ARR_4("7Rnd_408_Mag",7,"ACE_7Rnd_408_305gr_Mag",3)

#define SR_AP       WEAPON("srifle_DMR_02_camo_F",SNIPER_OPTIC,DMR_BIPOD,"ACE_muzzle_mzls_338")
#define SR_AM       WEAPON("srifle_lrr_tna_f",SNIPER_OPTIC,"","")

// AUTOMATIC RIFLES & MACHINE GUNS
#define AUTORIFLE   WEAPON("LMG_Mk200_F",LASERPOINTER,"optic_holosight",DMR_BIPOD)
#define AUTORIFLE_RECON    WEAPON("LMG_Mk200_F",DMR_BIPOD,"optic_holosight","muzzle_snds_h_mg")
#define MMG             WEAPON("MMG_01_tan_F",LASERPOINTER,"optic_Holosight",DMR_BIPOD)

#define MAGS_AUTORIFLE      ARR_4("200Rnd_65x39_cased_Box",3,"200Rnd_65x39_cased_Box_Tracer",2)
#define MAGS_AUTORIFLE_ASST ARR_3("200Rnd_65x39_cased_Box",2,"200Rnd_65x39_cased_Box_Tracer")
#define MAGS_MMG            ARR_2("xru_150Rnd_93x64_Mag_Mixed_Yellow",2)
#define MAGS_MMG_ASST       ARR_2("xru_150Rnd_93x64_Mag_Mixed_Yellow",4)
#define MAGS_AUTORIFLE_RECON   ARR_4("200Rnd_65x39_cased_Box",3,"ACE_200Rnd_65x39_cased_Box_Tracer_Dim",2)

/* ###################### - SIDEARMS - ###################### */
#define PISTOL		WEAPON("hgun_ACPC2_F","","","")
#define PISTOL_SF	WEAPON("hgun_ACPC2_F","muzzle_snds_acp","","")

#define MAG_PISTOL 		ARR_1("9Rnd_45ACP_Mag")
#define MAG_PISTOL_SF 	ARR_1("9Rnd_45ACP_Mag")

/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	    WEAPON("launch_nlaw_f","","","")
#define AT_ROCKET	    ARR_2(WEAPON("launch_MRAWS_green_rail_F","acc_pointer_ir","",""),WEAPON("launch_MRAWS_olive_rail_F","acc_pointer_ir","",""))
#define AA_MISSILE	    WEAPON("launch_i_Titan_F","","","")
#define AT_MISSILE      WEAPON("launch_i_Titan_short_F","","","")

#define MAGS_AT_LIGHT           MAG_PISTOL
#define MAGS_AT_ROCKET          ARR_3("MRAWS_HEAT_F",3,"MRAWS_HE_F")
#define MAGS_AT_ROCKET_ASST     ARR_3("MRAWS_HEAT_F",2,"MRAWS_HE_F")
#define MAGS_AT_MISSILE         ARR_1("Titan_AT")
#define MAGS_AT_MISSILE_ASST    ARR_3("Titan_AT",2,"Titan_AP")
#define MAGS_AA_MISSILE         ARR_1("Titan_AA")
#define MAGS_AA_MISSILE_ASST    ARR_2("Titan_AA",2)

/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("H_HelmetIA")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("H_PASGT_basic_olive_F")
// SPECIAL FORCES INFANTRY
#define HELMET_SF ARR_8("H_Booniehat_khk_hs","H_MilCap_blue","H_HeadSet_black_F","h_cap_blk","H_MilCap_gry","H_Watchcap_blk","H_Bandanna_gry","H_WirelessEarpiece_F")
#define HELMET_DIVER HELMET_SF
// VEHICLE CREWS
#define HELMET_CREW 		ARR_1("H_HelmetCrew_i")
#define HELMET_HELICOPTER	ARR_1("H_PilotHelmetHeli_i")
#define HELMET_HELI_CREW	ARR_1("H_CrewHelmetHeli_i")
#define HELMET_JET			ARR_1("H_PilotHelmetFighter_i")

// COMMANDERS
#define CAP_CO      ARR_1("H_Beret_blk")
#define CAP_XO      ARR_1("H_Beret_blk")
#define CAP_OFFICER ARR_1("h_milcap_dgtl")



/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_1("")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_2("G_Combat","G_Balaclava_combat")
#define GOGGLES_SF		ARR_8("","G_Balaclava_blk","G_Balaclava_lowprofile","g_bandanna_shades","g_bandanna_blk","G_Squares","G_Tactical_Clear","G_Tactical_black")
#define GOGGLES_SF_FULL GOGGLES_SF
#define GOGGLES_DIVER	ARR_1("G_i_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")



/* ###################### - NIGHT VISION DEVICES - ###################### */
#define NVG	    ARR_1("NVGoggles_INDEP")
#define NVG_SF  ARR_1("NVGoggles_OPFOR")



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
