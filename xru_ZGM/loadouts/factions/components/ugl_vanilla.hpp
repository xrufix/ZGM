// HE Grenade
#define UGL_HE ARR_1("1Rnd_HE_Grenade_shell") // Must be defined
// Optional Grenades for UGLS_GREN:


// Smoke White
#define UGL_SMK ARR_1("1Rnd_Smoke_Grenade_shell")
// Colored Smoke (one/two of each kind)
#define UGLS_COL1 ARR_5( \
    "1Rnd_SmokeBlue_Grenade_shell", \
    "1Rnd_SmokePurple_Grenade_shell", \
    "1Rnd_SmokeYellow_Grenade_shell", \
    "1Rnd_SmokeGreen_Grenade_shell", \
    "1Rnd_SmokeRed_Grenade_shell")
#define UGLS_COL2 ARR_5( \
    ARR_2("1Rnd_SmokeBlue_Grenade_shell",2), \
    ARR_2("1Rnd_SmokePurple_Grenade_shell",2), \
    ARR_2("1Rnd_SmokeYellow_Grenade_shell",2), \
    ARR_2("1Rnd_SmokeGreen_Grenade_shell",2), \
    ARR_2("1Rnd_SmokeRed_Grenade_shell",2))
// Colored Flares (two of each kind)
#define UGLS_FLR ARR_3( \
    ARR_2("UGL_FlareGreen_F",2), \
    ARR_2("UGL_FlareRed_F",2), \
    ARR_2("UGL_FlareYellow_F",2))

// UGLS Grenadiers
#define UGLS_GREN ARR_2( \
    ARR_2(UGL_HE,24), \
    ARR_2(UGL_SMK,8))
