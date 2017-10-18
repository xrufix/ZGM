// Wo kann man PAKs verwenden
class ace_medical_useLocation_PAK {
    typeName = "SCALAR";
    value = 4;
    values[] = {"Anywhere", "Medical Vehicle", "Medical Facility", "Medical Vehicle and Facility", "Disabled"};
    force = 1;
};
// Gibt es zwei Arten von Medic (d.h. ein Arzt kann mehr als ein Combat Medic)
class ace_medical_medicSetting {
    value = 2;
    typeName = "SCALAR";
    values[] = {"Disabled", "Normal", "Advanced"};
    force = 1;
};
// Schaden den der Spieler aushält
class ace_medical_playerDamageThreshold {
    typeName = "SCALAR";
    value = 1;
    force = 1;
};
// Kann man durch einen Schuss sterben/in den Revive State kommen
class ace_medical_preventInstaDeath {
    typeName = "BOOL";
    value = 0;
    force = 1;
};
// Hat man dauerhaften Schaden (wackelnde Arme, gebrochene Beine)
class ace_medical_healHitPointAfterAdvBandage {
    typeName = "BOOL";
    value = 0;
    force = 1;
};
// Wird die KI auf jemanden schießen der gerade in Ohnmacht gefallen ist
class ace_medical_delayUnconCaptive {
    typeName = "SCALAR";
    value = 10;
    force = 1;
};
