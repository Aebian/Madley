class AebianUI 
{

		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = -1;

		class BLUECIRCLE : IGUIBack
		{
			idc = -1;
			duration = -1;
			x = "SafeZoneX + (795 / 1920) * SafeZoneW";
			y = "SafeZoneY + (30 / 1080) * SafeZoneH";
			w = "(128 / 1920) * SafeZoneW";
			h = "(128 / 1080) * SafeZoneH";
			text = "media\bluecircle.paa";
		};
		class REDCIRCLE : IGUIBack
		{
			idc = -1;
			duration = -1;
			x = "SafeZoneX + (1170 / 1920) * SafeZoneW";
			y = "SafeZoneY + (30 / 1080) * SafeZoneH";
			w = "(128 / 1920) * SafeZoneW";
			h = "(128 / 1080) * SafeZoneH";
			text = "media\redcircle.paa";
		};
		class MIDDLEWARE : RscEdit
		{
			idc = -1;
			duration = -1;
			text = "conquest_score_west |  conquest_score_east";
			font = "EtelkaNarrowMediumPro";
			x = "SafeZoneX + (909.166666666667 / 1920) * SafeZoneW";
			y = "SafeZoneY + (29.166666666667 / 1080) * SafeZoneH";
			w = "(250 / 1920) * SafeZoneW";
			h = "(105 / 1080) * SafeZoneH";
		};

};