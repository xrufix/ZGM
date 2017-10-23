class RscZGMButton {
    type = 1;
    style = 2;
    shadow = 0;
    font = "RobotoCondensed";
    sizeEx = 0.05;
    colorText[] = {1, 0.84, 0, 1};
    colorDisabled[] = {0.25, 0.25, 0.25, 1};
    colorBackground[] = {0, 0, 0, 1};
    colorBackgroundActive[] = {0.1, 0.1, 0.1, 1};
    colorBackgroundDisabled[] = {0, 0, 0, 0};
    colorFocused[] = {0, 0, 0, 1};
    colorShadow[] = {0, 0, 0, 0};
    offsetX = 0;
    offsetY = 0;
    offsetPressedX = 0;
    offsetPressedY = 0;
    colorBorder[] = {0, 0, 0, 0};
    borderSize = 0;
    soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1};
    soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1};
    soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
    soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1};
	text = "";
	h = 0.09;
};
class RscZGMListbox {
    type = 5;
    style = 16;
    font = "RobotoCondensed";
    sizeEx = 0.037;
    rowHeight = 0.037;
    shadow = 0;
    colorShadow[] = {0, 0, 0, 0};
    colorText[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 1};
    colorScrollbar[] = {1, 1, 1, 1};
    colorSelect[] = {1, 1, 1, 1};
    colorSelect2[] = {1, 1, 1, 1};
    colorSelectBackground[] = {0.2,0.2,0.2,0.5};
    colorSelectBackground2[] = {0.4,0.4,0.4,0.5};
    period = 1;
    colorBackground[] = {0, 0, 0, 0.5};
    maxHistoryDelay = 1;
    colorPicture[] = {1, 1, 1, 1};
    colorPictureSelected[] = {1, 1, 1, 1};
    colorPictureDisabled[] = {1, 1, 1, 1};
    colorPictureRight[] = {0, 0, 0, 0};
    colorPictureRightSelected[] = {0, 0, 0, 0};
    colorPictureRightDisabled[] = {0, 0, 0, 0};
    colorTextRight[] = {0, 0, 0, 0};
    colorSelectRight[] = {0, 0, 0, 0};
    colorSelect2Right[] = {0, 0, 0, 0};
    tooltipColorText[] = {0, 0, 0, 0};
    tooltipColorBox[] = {0, 0, 0, 0};
    tooltipColorShade[] = {0, 0, 0, 0};
    soundSelect[] = {"", 0, 1};
    class ListScrollBar {
		color[] = {1, 1, 1, 0.6};
		colorActive[] = {1, 1, 1, 1};
		colorDisabled[] = {1, 1, 1, 0.3};
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		shadow = 0;
		scrollSpeed = 0.04;
		width = 0;
		height = 0;
		autoScrollEnabled = 0;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;
    };
};
class RscZGMTree : RscZGMListbox {
	type = 12;
	style = 0;
    expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
    hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
    x = 0;
    y = 0;
    w = 0.1;
    h = 0.2;
    colorBorder[] = {0, 0, 0, 0};
    colorArrow[] = {1, 1, 1, 1};
    colorMarked[] = {0, 0, 0, 0};
    colorMarkedText[] = {1, 1, 1, 1};
    colorMarkedSelected[] = {1, 0.84, 0, 1};
    colorSelect[] = {0.2,0.2,0.2,0.5};
    colorSelectText[] = {1, 1, 1, 1};
    borderSize = 0;
    expandOnDoubleclick = 1;
    multiselectEnabled = 0;
    maxHistoryDelay = 1;
    class ScrollBar : ListScrollBar {};
};

	
class RscZGMSlots {
    idd = -1;
    movingEnable = false;
    enablesimulation = true;
    controlsBackground[] = {
		Background,
        Side,
        Faction,
        Role
    };
    controls[] = {
        Apply,
        Reset,
        Cancel
	};

	onLoad = "_this call zgm_loadoutScreen_fnc_onLoad;";

	class Background {
		idc = -1;
		type = 0;
		style = 0;
		sizeEx = 0.05;
		text = "";
		font = "RobotoCondensed";
		x = 0.2375 * safezoneW + safezoneX;
		y = 0.15 * safezoneH + safezoneY;
		w = 0.525 * safezoneW;
		h = 0.7 * safezoneH;
		colorText[] = {0,0,0,0};
		colorBackground[] = {0,0,0,0.8};
	};
	class Apply: RscZGMButton {
		idc = -1;
		onButtonClick = "_this call zgm_loadoutScreen_fnc_applySelected;";	
		text = "Apply selected"; //--- ToDo: Localize;
		x = 0.644375 * safezoneW + safezoneX;
		y = 0.766 * safezoneH + safezoneY;
		w = 0.105 * safezoneW;
		h = 0.056 * safezoneH;
	};
	class Reset: RscZGMButton {
		idc = -1;
		onButtonClick = "_this call zgm_loadoutScreen_fnc_resetDefault;";
		text = "Apply default"; //--- ToDo: Localize;
		x = 0.644375 * safezoneW + safezoneX;
		y = 0.682 * safezoneH + safezoneY;
		w = 0.105 * safezoneW;
		h = 0.056 * safezoneH;
	};
	class Cancel: RscZGMButton {
		idc = 2;
		text = "Cancel"; //--- ToDo: Localize;
		x = 0.644375 * safezoneW + safezoneX;
		y = 0.598 * safezoneH + safezoneY;
		w = 0.105 * safezoneW;
		h = 0.056 * safezoneH;
	};
	class Side: RscZGMListbox {
		idc = 11;
		text = "Side"; //--- ToDo: Localize;
		x = 0.250625 * safezoneW + safezoneX;
		y = 0.234 * safezoneH + safezoneY;
		w = 0.124687 * safezoneW;
		h = 0.084 * safezoneH;
	};
	class Faction: RscZGMListbox {
		idc = 12;
		text = "Faction"; //--- ToDo: Localize;
		x = 0.250625 * safezoneW + safezoneX;
		y = 0.346 * safezoneH + safezoneY;
		w = 0.124687 * safezoneW;
		h = 0.476 * safezoneH;
	};
	class Role: RscZGMTree {
		idc = 13;
		x = 0.388437 * safezoneW + safezoneX;
		y = 0.234 * safezoneH + safezoneY;
		w = 0.21 * safezoneW;
		h = 0.588 * safezoneH;
	};
};