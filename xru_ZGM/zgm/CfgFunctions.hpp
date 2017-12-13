class zgm_main {
    class functions {
        file = "zgm\main";
        class getSide {};
        class isCurator {};
        class isNearSpawn {};
    };
};

class zgm_server {
    class functions {
        file = "zgm\server";
        class daytime {};
        class groupEH {};
        class postInit {
            postInit = 1;
        };
        class reassign {};
    };
};

class zgm_player {
    class functions {
        file = "zgm\player";
        class postInit {
            postInit = 1;
        };
        class postInitZeus {};
    };
};

class zgm_loadouts {
    class functions {
        file = "zgm\loadouts";
        class factionBLUFOR {};
        class factionINDEP {};
        class factionOPFOR {};
        class getFaction {};
        class selectLoadout {};
    };
};

class zgm_loadoutScreen {
    class functions {
        file = "zgm\loadoutScreen";
        class applySelected {};
        class onLoad {};
        class resetDefault {};
    };
};