class xru_aps_hud {
    idd = -1;
    onLoad = "with uiNameSpace do {xru_aps_hud = _this select 0 };";
    movingEnable = 0;
    enableSimulation = 1;
    duration = 60;
    fadeIn = "false";
    fadeOut = "false";
    class controls {
        class ControlGroup: RscControlsGroup {
            idc = 20;
            
            x = "3.8 * (((safezoneW / safezoneH) min 1.2) / 40) + (profilenamespace getvariable ['IGUI_GRID_WEAPON_X',((safezoneX + safezoneW) - (10 * (((safezoneW / safezoneH) min 1.2) / 40)) - 4.3 * (((safezoneW / safezoneH) min 1.2) / 40))])";
            y = "2.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (profilenamespace getVariable ['IGUI_GRID_WEAPON_Y', (safezoneY + 0.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))]) + ((((safezoneW / safezoneH) min 1.2) / 1.2) / 10)";
            w = "10 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";

            class controls {
                class title: RscText {
                    text = "APS:";
                    idc = 21;
                    colorText[] = {1, 1, 1, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    x = "(2.6) * (((safezoneW / safezoneH) min 1.2) / 40)";
                    y = "0";
                    w = "(1.5) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    h = "(1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
                class showAmmo: RscText {
                    idc = 22;
                    colorText[] = {1, 1, 1, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    x = "(3.6) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    y = "0";
                    w = "(2.5) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    h = "(1) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                    sizeEx = "0.8 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
                class isRunningIcon: RscPicture {
                    style = "0x30 + 0x800";
                    idc = 23;
                    colorText[] = {1, 0, 0, 1};
                    colorBackground[] = {0, 0, 0, 0};
                    text = "\a3\Ui_F\Data\gui\cfg\communicationmenu\defend_ca.paa";
                    x = "0";
                    y = "0";
                    w = "(2.6) * (((safezoneW / safezoneH) min 1.2) / 40)";
                    h = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                };
            };
        };
    };
};