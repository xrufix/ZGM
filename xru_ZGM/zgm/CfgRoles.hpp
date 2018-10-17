#include "config_macros.hpp"

class cfgRoles {
    class company {
        displayName = "Company / TF Command";

        class co {
            displayName = "Commanding Officer";
            icon = "\a3\ui_f\data\gui\cfg\ranks\captain_gs.paa";
        };
        class xo {
            displayName = "Executive Officer";
            icon = "\a3\ui_f\data\gui\cfg\ranks\lieutenant_gs.paa";
        };
        class mio {
            displayName = "Mission Intelligence Officer";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\call_ca.paa";
        };
        class colo {
            displayName = "Chief of Logistics";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\supplydrop_ca.paa";
        };
        class fo {
            displayName = "Forward Observer";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\artillery_ca.paa";
        };
    };
    class platoon {
        displayName = "Infantry Platoon Lead";

        class pl {
            displayName = "Platoon Leader";
            icon = "\a3\ui_f\data\gui\cfg\ranks\lieutenant_gs.paa";
        };
        class psgt {
            displayName = "Platoon Sergeant";
            icon = "\a3\ui_f\data\gui\cfg\ranks\sergeant_gs.paa";
        };
        class uav {
            displayName = "UAV/UGV Operator";
            icon = "\a3\drones_f\air_f_gamma\uav_02\data\ui\map_uav_02_ca.paa";
        };
        class jtac {
            displayName = "Joint Terminal Attack Controller";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\cas_ca.paa";
        };
        class medic {
            displayName = "Platoon Medic";
            icon = "\a3\characters_f\data\ui\icon_medic_ca.paa";
        };
    };

    class squad {
        displayName = "Rifle Squad";

        class sl {
            displayName = "Squad Leader";
            icon = "\a3\ui_f\data\gui\cfg\ranks\sergeant_gs.paa";
        };
        class ftl {
            displayName = "Fireteam Leader";
            icon = "\a3\ui_f\data\gui\cfg\ranks\corporal_gs.paa";
        };
        class ar {
            displayName = "Automatic Rifleman";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class gl {
            displayName = "Grenadier";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\gl_ca.paa";
        };
        class gl2 {
            displayName = "Grenadier (Special)";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\gl_ca.paa";
        };
        class light {
            displayName = "Rifleman (light)";
            icon = "\a3\ui_f\data\gui\cfg\ranks\private_gs.paa";
        };
        class aar {
            displayName = "Rifleman (Asst. Automatic Rifleman)";
            icon = "\a3\ui_f\data\gui\cfg\ranks\private_gs.paa";
        };
        class lat {
            displayName = "Rifleman Light Anti-Tank";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\at_ca.paa";
        };
        class cm {
            displayName = "Combat First Responder";
            icon = "\a3\characters_f\data\ui\icon_medic_ca.paa";
        };
        class dm {
            displayName = "Squad Designated Marksman";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\srifle_ca.paa";
        };
        class eng {
            displayName = "Combat Engineer";
            icon ="\a3\ui_f\data\igui\cfg\cursors\iconrepairvehicle_ca.paa";
        };
    };

    class weapons {
        displayName = "Weapons Squad / Fire Support";

        class mg {
            displayName = "Medium Machine Gunner / GPMG";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class amg {
            displayName = "Asst. Medium Machine Gunner";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class hmg {
            displayName = "Heavy Machine Gunner";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class ahmg {
            displayName = "Asst. Heavy Machine Gunner";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class gmg {
            displayName = "Grenade Machine Gunner";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class agmg {
            displayName = "Assistant Grenade Machine Gunner";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\mg_ca.paa";
        };
        class at {
            displayName = "Anti-Tank Rocket Specialist";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\at_ca.paa";
        };
        class aat {
            displayName = "Anti-Tank Rocket Assistant";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\at_ca.paa";
        };
        class atgm {
            displayName = "Anti-Tank Missile Specialist";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\at_ca.paa";
        };
        class aatgm {
            displayName = "Anti-Tank Missile Assistant";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\at_ca.paa";
        };
        class aa {
            displayName = "Anti-Air Missile Specialist";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\aa_ca.paa";
        };
        class aaa {
            displayName = "Anti-Air Missile Assistant";
            icon = "\a3\ui_f\data\igui\cfg\weaponicons\aa_ca.paa";
        };
        class mort {
            displayName = "Mortar Gunner";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\mortar_ca.paa";
        };
        class amort {
            displayName = "Mortar Assistant";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\mortar_ca.paa";
        };
        class acmort {
            displayName = "Mortar Ammo Bearer";
            icon = "\a3\ui_f\data\gui\cfg\communicationmenu\mortar_ca.paa";
        };
    };

    class recon {
        displayName = "Recon Team";

        class tl {
            displayName = "Team Leader";
        };
        class rm {
            displayName = "Rifleman";
        };
        class ar {
            displayName = "Automatic Rifleman";
        };
        class gl {
            displayName = "Grenadier";
        };
        class lat {
            displayName = "Light Anti-Tank";
        };
        class cm {
            displayName = "Medic";
        };
        class dm {
            displayName = "Marksman";
        };
        class exp {
            displayName = "Explosive Specialist";
        };
    };

    class diver {
        displayName = "Combat Divers";

        class tl {
            displayName = "Team Leader";
        };
        class rm {
            displayName = "Combat Diver";
        };
        class exp {
            displayName = "Explosive Specialist";
        };
        class cm {
            displayName = "Medic";
        };
        class dm {
            displayName = "Marksman";
        };
        class jtac {
            displayName = "Joint Terminal Attack Controller";
        };
    };

    class sniper {
        displayName = "Sniper";

        class spot {
            displayName = "Spotter";
        };
        class ap {
            displayName = "Sniper, Anti-Personel";
        };
        class am {
            displayName = "Sniper, Anti-Materiel";
        };
        class exp {
            displayName = "Explosive Specialist";
        };
    };

    class crew {
        displayName = "Vehicle Crews";

        class common {
            displayName = "Tank / IFV / APC Crew";
        };
        class cmd {
            displayName = "Tank / IFV / APC Commander";
        };
        class jet {
            displayName = "Jet Pilot";
        };
        class helipilot {
            displayName = "Helicopter Pilot / Copilot";
        };
        class heli {
            displayName = "Helicopter Crew / Doorgunner";
        };
    };

    class logistics {
        displayName = "Logistics";

        class common {
            displayName = "Logistician";
        };
    };

    class medevac {
        displayName = "Medical Staff (Red Crystal)";

        class tl {
            displayName = "Team Leader (Doctor)";
        };
        class doc {
            displayName = "Paramedic";
        };
        class heli {
            displayName = "Helicopter Pilot";
        };
        class drv {
            displayName = "Driver / Assistant";
        };
    };

};
