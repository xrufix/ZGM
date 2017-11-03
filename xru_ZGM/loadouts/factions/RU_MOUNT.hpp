#include "RU_FLORA.hpp"

/* ###################### - UNIFORMS - ###################### */
#define	UNIFORM_SINGLE      "rhs_uniform_vdv_mflora"        // Für Inventar
#define UNIFORM             ARR_1(UNIFORM_SINGLE)      // Für Zufallsauswahl
#define UNIFORM_COMPANY     UNIFORM



/* ###################### - VESTS - ###################### */
#define VEST_EMPTY      "rhs_6b23_ML"
#define VEST_OFFICER       "rhs_6b23_ml_crewofficer"
#define VEST_LIGHT      "rhs_6b23_ml_6sh92"
#define VEST_RIFLEMAN   VEST_LIGHT
#define VEST_GRENADIER  "rhs_6b23_ml_6sh92_vog"
#define VEST_MEDIC      "rhs_6b23_ml_medic"
#define VEST_TL         "rhs_6b23_ml_6sh92_headset_mapcase"
#define VEST_SL         "rhs_6b23_ml_6sh92_vog_headset"
#define VEST_MG         VEST_RIFLEMAN
#define VEST_DM         VEST_RIFLEMAN

#define VEST_CREW		"rhs_6b23_ml_crew"



/* [...] */



/* ###################### - HEADGEAR - ###################### */
// GENERAL INFANTRY
#define HELMET ARR_1("rhs_6b27m_ml")
// NON-COMBAT INFANTRY
#define HELMET_BARE ARR_1("rhs_6b27m_green")
// COMMANDERS
#define CAP_OFFICER ARR_1("rhs_fieldcap_ml")