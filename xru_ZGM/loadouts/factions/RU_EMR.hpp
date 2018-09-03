#include "RU_FLORA.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_vdv_emr"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON       UNIFORM



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhs_6b23_digi"
#define VEST_OFFICER    "rhs_6b23_digi_crewofficer"
#define VEST_LIGHT      "rhs_6b23_digi_6sh92_spetsnaz2"
#define VEST_RM         ARR_2("rhs_6b23_6sh116","rhs_6b23_digi_6sh92")
#define VEST_GR         ARR_2("rhs_6b23_6sh116_vog","rhs_6b23_digi_6sh92_vog")
#define VEST_CM         "rhs_6b23_digi_medic"
#define VEST_TL         ARR_2("rhs_6b23_digi_6sh92_headset","rhs_6b23_digi_6sh92_radio")
#define VEST_SL         ARR_2("rhs_6b23_digi_6sh92_vog_headset","rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz")
#define VEST_MG         VEST_RM
#define VEST_DM         VEST_RM

#define VEST_CREW		"rhs_6b23_crew"

#define VEST_RECON			VEST_TL
#define VEST_RECON_TL		VEST_SL
#define VEST_RECON_MG		VEST_RECON
#define VEST_RECON_GR		VEST_SL

#define VEST_BREATHER	ARR_1("V_RebreatherIR")
#define VEST_DIVER		VEST_RECON



/* ###################### - ATTACHMENTS- ###################### */
#define LASERPOINTER "rhs_acc_perst1ik_ris"
#define SNIPER_OPTIC_NV "ace_banana"


/* ###################### - PRIMARY WEAPONS - ###################### */
// STANDARD ISSUE ASSAULT RIFLE
#define RIFLE_CCO ARR_4( \
    WEAPON_OLD(RIFLE_1,"rhs_acc_1p63","rhs_acc_2dpZenit","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_2,"rhs_acc_1p63","rhs_acc_2dpZenit","rhs_acc_dtk3"), \
    WEAPON_OLD(RIFLE_3,"rhs_acc_1p63","rhs_acc_2dpZenit","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_4,"rhs_acc_1p63","rhs_acc_2dpZenit","rhs_acc_dtk3"))
#define RIFLE_RCO ARR_4( \
    WEAPON_OLD(RIFLE_1,"rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_2,"rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk3"), \
    WEAPON_OLD(RIFLE_3,"rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_4,"rhs_acc_pkas","rhs_acc_2dpZenit","rhs_acc_dtk3"))


// GRENADIER ASSAULT RIFLE

#define RIFLE_UGL_CCO ARR_2( \
    WEAPON_OLD(RIFLE_UGL_1,"rhs_acc_1p63","","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_UGL_2,"rhs_acc_1p63","","rhs_acc_dtk3"))
#define RIFLE_UGL_RCO ARR_2( \
    WEAPON_OLD(RIFLE_UGL_1,"rhs_acc_pkas","","rhs_acc_dtk2"), \
    WEAPON_OLD(RIFLE_UGL_2,"rhs_acc_pkas","","rhs_acc_dtk3"))

// CARBINE


// SF CARBINES
#define RIFLE_RECON              WEAPON_OLD("hlc_rifle_ak12","rhs_acc_1p87","rhs_acc_perst3","rhs_acc_tgpa")
#define RIFLE_UGL_RECON          WEAPON_OLD("hlc_rifle_ak12GL","rhs_acc_rakurspm","rhs_acc_perst3","rhs_acc_tgpa")
#define RIFLE_RECON_TAN          WEAPON_OLD("rhs_weap_ak74m_camo","rhs_acc_pkas","rhs_acc_perst3","rhs_acc_tgpa")
#define RIFLE_UGL_RECON_TAN		 RIFLE_UGL_RECON
#define RIFLE_DIVER 		     RIFLE_RECON
#define RIFLE_UGL_DIVER 	     RIFLE_UGL_RECON

#define MAG_RIFLE_RECON          "rhs_30Rnd_545x39_7N22_AK"
#define MAG_RIFLE_RECON_TRACER   "rhs_30Rnd_545x39_AK_green"


// DESIGNATED MARKSMAN RIFLES & SNIPER RIFLES
#define DMR         WEAPON_OLD("rhs_weap_ak103","rhs_acc_1p78","","rhs_acc_dtk")
#define MAG_DMR     "rhs_30Rnd_762x39mm_polymer"

#define DMR_RECON      WEAPON_OLD("rhs_weap_vss_grip","rhs_acc_pso1m21","rhs_acc_perst1ik_ris","")
#define DMR_DIVER      DMR_RECON
#define MAG_DMR_RECON  ARR_1("rhs_20rnd_9x39mm_SP5")

#define SR_AP       WEAPON_OLD("rhs_weap_t5000","rhs_acc_dh520x56","bipod_02_F_blk","")
#define MAGS_SR_AP  ARR_2("rhs_5Rnd_338lapua_t5000",20)

#define SR_AM       WEAPON_OLD("CUP_srifle_ksvk","CUP_optic_PSO_3","","")
#define MAGS_SR_AM  ARR_2("CUP_5Rnd_127x108_KSVK_M",10)


// AUTOMATIC RIFLES & MACHINE GUNS

#define AUTORIFLE_RECON        WEAPON_OLD("hlc_rifle_RPK12_60rnd","rhs_acc_1p87","rhs_acc_perst1ik_ris","rhs_acc_dtk4short")
#define MAGS_AUTORIFLE_RECON   ARR_2("hlc_60Rnd_545x39_t_rpk",8)

#define MMG                 "rhs_weap_pkp"


/* ###################### - SIDEARMS - ###################### */
#define PISTOL		    WEAPON_OLD("hgun_Rook40_F","","","")
#define MAG_PISTOL 		ARR_1("16Rnd_9x21_Mag")

#define PISTOL_SF	    WEAPON_OLD("hgun_Rook40_F","muzzle_snds_l","","")
#define MAG_PISTOL_SF 	ARR_1("16Rnd_9x21_Mag")



/* ###################### - LAUNCHERS - ###################### */
#define AT_LIGHT	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v2","","")
#define MAGS_AT_LIGHT           ARR_4("rhs_rpg7_PG7VR_mag",2,"rhs_rpg7_OG7V_mag",1)

#define AT_ROCKET	            WEAPON_OLD("rhs_weap_rpg7","rhs_acc_pgo7v3","","")
#define MAGS_AT_ROCKET          ARR_3("rhs_rpg7_PG7VR_mag",2,"rhs_rpg7_TBG7V_mag")
#define MAGS_AT_ROCKET_ASST     ARR_4("rhs_rpg7_PG7VR_mag",3,"rhs_rpg7_OG7V_mag",3)

#define AA_MISSILE	            WEAPON_OLD("rhs_weap_igla","","","")
#define MAGS_AA_MISSILE         ARR_1("rhs_mag_9k38_rocket")
#define MAGS_AA_MISSILE_ASST    ARR_2("rhs_mag_9k38_rocket",2)

#define AT_MISSILE              WEAPON_OLD("CUP_launch_Metis","","","")
#define MAGS_AT_MISSILE         ARR_1("CUP_AT13_M")
#define MAGS_AT_MISSILE_ASST    ARR_1("CUP_AT13_M")

/* ###################### - HEADGEAR - ###################### */
#define HELMET ARR_1("rhs_6b28")
#define HELMET_BARE "rhs_6b28_green"
#define HELMET_SF "rhs_6b47"
// COMMANDERS
#define CAP_OFFICER ARR_2("rhs_fieldcap_digi2","rhs_fieldcap_digi")

/* ###################### - RADIOS - ###################### */
#define RADIO_SR "ACRE_SEM52SL"

/* ###################### - GOGGLES / FACEWEAR - ###################### */
#define GOGGLES         ARR_2("","rhs_scarf")
#define GOGGLES_OFFICER ARR_3("","G_Spectacles","G_Aviator")
#define GOGGLES_FULL    ARR_1("G_Lowprofile")
#define GOGGLES_SF		ARR_1("G_Balaclava_oli")
#define GOGGLES_SF_FULL ARR_1("G_Balaclava_lowprofile")
#define GOGGLES_DIVER	ARR_1("G_I_Diving")
#define GOGGLES_PILOT	ARR_1("G_Aviator")