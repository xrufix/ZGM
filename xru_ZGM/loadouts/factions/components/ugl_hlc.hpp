// HE Grenade
#define UGL_HE ARR_1("hlc_VOG25_AK") // Must be defined
// Optional Grenades for UGLS_GREN:


// Smoke White
#define UGL_SMK ARR_1("hlc_GRD_White")
// Colored Smoke (one/two of each kind)
#define UGLS_COL1 ARR_5( \
    "hlc_GRD_blue", \
    "hlc_GRD_purple", \
    "hlc_GRD_yellow", \
    "hlc_GRD_green", \
    "hlc_GRD_Red")
#define UGLS_COL2 ARR_5( \
    ARR_2("hlc_GRD_blue",2), \
    ARR_2("hlc_GRD_purple",2), \
    ARR_2("hlc_GRD_yellow",2), \
    ARR_2("hlc_GRD_green",2), \
    ARR_2("hlc_GRD_Red",2))
// Colored Flares (two of each kind)
#define UGLS_FLR ""
// #define UGLS_FLR ARR_3( \
//     ARR_2("CUP_FlareGreen_GP25_M",2), \
//     ARR_2("CUP_FlareRed_GP25_M",2), \
//     ARR_2("CUP_FlareYellow_GP25_M",2))

// UGLS Grenadiers
#define UGLS_GREN ARR_2( \
    ARR_2(UGL_HE,24), \
    ARR_2(UGL_SMK,8))
