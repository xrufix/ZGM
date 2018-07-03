#define COMPONENT suppress

#ifndef SUPPRESS_BLINKING
    #define SUPPRESS_BLINKING 100
#endif
#ifndef SUPPRESS_TUNNELVISION
    #define SUPPRESS_TUNNELVISION 100
#endif
#ifndef SUPPRESS_CAMSHAKE
    #define SUPPRESS_CAMSHAKE 100
#endif
#ifndef SUPPRESS_WEAPONSWAY
    #define SUPPRESS_WEAPONSWAY 100
#endif
#ifndef SUPPRESS_CLIMBRATE
    #define SUPPRESS_CLIMBRATE 100
#endif
#ifndef SUPPRESS_SINKRATE
    #define SUPPRESS_SINKRATE 100
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
    default = SUPPRESS_BLINKING;
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
    default = SUPPRESS_TUNNELVISION;
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
    default = SUPPRESS_CAMSHAKE;
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
    default = SUPPRESS_WEAPONSWAY;
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
    default = SUPPRESS_CLIMBRATE;
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
    default = SUPPRESS_SINKRATE;
    function = QFUNC(setSinkRate);
    isGlobal = 1;
};