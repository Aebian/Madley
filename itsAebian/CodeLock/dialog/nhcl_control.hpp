 /*
	author: Aebian
	description: Codelock for doors [dialog-controls]
	returns: RSC Dialog
	created: 2019-12-31
*/

class NH_KeyDialog
{
	idd = 1234;
	
	class controls
	{
		class baseFrame: IGUIBack
		{
			idc = 1800;

			x = 0.407227 * safezoneW + safezoneX;
			y = 0.323957 * safezoneH + safezoneY;
			w = 0.175238 * safezoneW;
			h = 0.451109 * safezoneH;
			style = 48;
			tileH = 100;
			tileW = 100;
			colorText[] = {0, 0, 1, 0.3};
			text = "\a3\structures_f_heli\items\electronics\data\tablet_screen_co.paa";

		};
		class buttonOne: RscButton
		{
			idc = 1600;

			text = "1"; 
			x = 0.417535 * safezoneW + safezoneX;
			y = 0.400976 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonTwo: RscButton
		{
			idc = 1601;

			text = "2"; 
			x = 0.47423 * safezoneW + safezoneX;
			y = 0.400976 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonThree: RscButton
		{
			idc = 1602;

			text = "3"; 
			x = 0.530924 * safezoneW + safezoneX;
			y = 0.400976 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonFour: RscButton
		{
			idc = 1603;

			text = "4"; 
			x = 0.417535 * safezoneW + safezoneX;
			y = 0.477995 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonFive: RscButton
		{
			idc = 1604;

			text = "5"; 
			x = 0.47423 * safezoneW + safezoneX;
			y = 0.477995 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonSix: RscButton
		{
			idc = 1605;

			text = "6"; 
			x = 0.530924 * safezoneW + safezoneX;
			y = 0.477995 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonSeven: RscButton
		{
			idc = 1606;

			text = "7"; 
			x = 0.417535 * safezoneW + safezoneX;
			y = 0.555013 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonEight: RscButton
		{
			idc = 1607;

			text = "8"; 
			x = 0.47423 * safezoneW + safezoneX;
			y = 0.555013 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonNine: RscButton
		{
			idc = 1608;

			text = "9"; 
			x = 0.530924 * safezoneW + safezoneX;
			y = 0.555013 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonZero: RscButton
		{
			idc = 1609;

			text = "0"; 
			x = 0.47423 * safezoneW + safezoneX;
			y = 0.632032 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
		};
		class buttonEnter: RscButton
		{
			idc = 1610;

			text = "Enter"; 
			x = 0.417535 * safezoneW + safezoneX;
			y = 0.632032 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
			colorText[] = {-1,1,-1,1};
		};
		class buttonLock: RscButton
		{
			idc = 1611;

			text = "Lock"; 
			x = 0.417535 * safezoneW + safezoneX;
			y = 0.709051 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
			colorText[] = {1,0,-1,1};
		};
		class buttonChange: RscButton
		{
			idc = 1612;

			text = "Set"; 
			x = 0.530924 * safezoneW + safezoneX;
			y = 0.632032 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
			colorText[] = {1,-1,1,1};
		};
		class buttonClear: RscButton
		{
			idc = 1613;
			action = "ctrlSetText [1000, '']";

			text = "Clear"; 
			x = 0.47423 * safezoneW + safezoneX;
			y = 0.709051 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
			colorText[] = {1,-1,1,1};
		};
		class buttonClose: RscButton
		{
			idc = 1614;
			action = "closeDialog 1";

			text = "Close"; 
			x = 0.530924 * safezoneW + safezoneX;
			y = 0.709051 * safezoneH + safezoneY;
			w = 0.0412325 * safezoneW;
			h = 0.0550133 * safezoneH;
			colorText[] = {1,-1,1,1};
		};
		class inputText: RscText
		{
			idc = 1000;
			align = "center";

			x = 0.438151 * safezoneW + safezoneX;
			y = 0.345963 * safezoneH + safezoneY;
			w = 0.113389 * safezoneW;
			h = 0.033008 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};
		class indicatorLocked: RscText
		{
			idc = 1001;
			align = "center";
			text = "";
			x = 0.407227 * safezoneW + safezoneX;
			y = 0.323957 * safezoneH + safezoneY;
			w = 0.0563866 * safezoneW;
			h = 0.0220053 * safezoneH;
			colorBackground[] = {0,1,0,0};
			colorText[] = {0, 0, 0, 1};
		};
	};
};