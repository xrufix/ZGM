#define COMPONENT suppress

#ifndef SUPRESS_BLINKING
    #define SUPRESS_BLINKING 100
#endif
#ifndef SUPRESS_TUNNELVISION
    #define SUPRESS_TUNNELVISION 100
#endif
#ifndef SUPRESS_CAMSHAKE
    #define SUPRESS_CAMSHAKE 100
#endif
#ifndef SUPRESS_WEAPONSWAY
    #define SUPRESS_WEAPONSWAY 100
#endif
#ifndef SUPRESS_CLIMBRATE
    #define SUPRESS_CLIMBRATE 100
#endif
#ifndef SUPRESS_SINKRATE
    #define SUPRESS_SINKRATE 100
#endif

class GVAR(Blinking) {
    title = "xru_suppress: Blinzeln bei Beschuss";
    values[] = {0,25,50,100,150,200,300};
    texts[] = {
        "Deaktivieren",
        "25%",
        "50%",
        "100% (Standard)",
        "150%",
        "200%",
        "300%"
    };
    default = SUPRESS_BLINKING;
    function = QFUNC(setBlinking);
    isGlobal = 1;
};
class GVAR(Tunnelvision) {
    title = "xru_suppress: Unterdrückungseffekt (Tunnelblick)";
    values[] = {0,25,50,100,150,200,300};
    texts[] = {
        "Deaktivieren",
        "25%",
        "50%",
        "100% (Standard)",
        "150%",
        "200%",
        "300%"
    };
    default = SUPRESS_TUNNELVISION;
    function = QFUNC(setTunnelvision);
    isGlobal = 1;
};
class GVAR(CamShake) {
    title = "xru_suppress: Camshake";
    values[] = {0,25,50,100,150,200,300};
    texts[] = {
        "Deaktivieren",
        "25%",
        "50%",
        "100% (Standard)",
        "150%",
        "200%",
        "300%"
    };
    default = SUPRESS_CAMSHAKE;
    function = QFUNC(setCamshake);
    isGlobal = 1;
};
class GVAR(weaponSway) {
    title = "xru_suppress: Zielgenauigkeit senken";
    values[] = {0,50,75,100,125,150,175,200};
    texts[] = {
        "Deaktivieren",
        "50%",
        "75%",
        "100% (Standard)",
        "125%",
        "150%",
        "175%",
        "200%"
    };
    default = SUPRESS_WEAPONSWAY;
    function = QFUNC(setCamshake);
    isGlobal = 1;
};
class GVAR(climbRate) {
    title = "xru_suppress: Unterdrückungsrate (sollte nicht kleiner als Erholung sein)";
    values[] = {25,50,100,150,200,300};
    texts[] = {
        "25% (Langsam)",
        "50%",
        "100% (Standard)",
        "150%",
        "200%",
        "300% (Schnell)"
    };
    default = SUPRESS_CLIMBRATE;
    function = QFUNC(setClimbRate);
    isGlobal = 1;
};
class GVAR(sinkRate) {
    title = "xru_suppress: Erholungsrate von Unterdrückung";
    values[] = {25,50,75,100,125,150,200,300};
    texts[] = {
        "25% (Langsam)",
        "50%",
        "75%",
        "100% (Standard)",
        "125%",
        "150%",
        "200%",
        "300% (Schnell)"
    };
    default = SUPRESS_SINKRATE;
    function = QFUNC(setSinkRate);
    isGlobal = 1;
};