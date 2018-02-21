// HE Grenade
#define UGL_HE      ARR_1("rhs_VOG25") // Must be defined
// Optional Grenades for UGLS_GREN:
#define UGL_BOUNCE  ARR_1("rhs_VOG25P")
#define UGL_TB      ARR_1("rhs_VG40TB")
#define UGL_GDM     ARR_1("rhs_GDM40")
// Smoke White
#define UGL_SMK     ARR_1("rhs_GRD40_White")
// Colored Smoke (one/two of each kind)
#define UGLS_COL1 ARR_5( \
    "rhs_GRD40_Green", \
    "rhs_GRD40_Red", \
    "rhs_VG40MD_Green", \
    "rhs_VG40MD_Red", \
    "rhs_VG40MD_White")
#define UGLS_COL2 ARR_5( \
    ARR_2("rhs_GRD40_Green",2), \
    ARR_2("rhs_GRD40_Red",2), \
    ARR_2("rhs_VG40MD_Green",2), \
    ARR_2("rhs_VG40MD_Red",2), \
    ARR_2("rhs_VG40MD_White",2))
// Colored Flares (two of each kind)
#define UGLS_FLR ARR_3( \
    ARR_2("rhs_VG40OP_white",2), \
    ARR_2("rhs_VG40OP_green",2), \
    ARR_2("rhs_VG40OP_red",2))

// UGLS Grenadiers
#define UGLS_GREN ARR_5( \
    ARR_2(UGL_HE,16), \
    ARR_2(UGL_BOUNCE,6), \
    ARR_2(UGL_TB,4), \
    ARR_2(UGL_SMK,6), \
    ARR_2(UGL_GDM,2))
