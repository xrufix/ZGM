#include "RU_FLORA.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_vdv_emr"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM
#define UNIFORM_RECON     ARR_1("rhs_uniform_gorka_r_g")



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


/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("rhs_6b7_1m_emr")
// COMMANDERS
#define CAP_OFFICER ARR_2("rhs_fieldcap_digi2","rhs_fieldcap_digi")