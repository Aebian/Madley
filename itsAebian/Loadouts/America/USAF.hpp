// United States Airforce - File

class US_AIRFORCE_SECF_LEAD : US_ARMY_DEFAULT_UCP // Airforce Security Forces Lead
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_M203_d","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_acc_SFMB556","rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red","rhs_mag_M441_HE"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red",8,"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_m18_red",2,"rhsusf_mag_15Rnd_9x19_JHP",2,"1Rnd_SmokeRed_Grenade_shell",3,"rhs_mag_m713_Red",4,"rhs_mag_M441_HE",3,"UGL_FlareRed_F",2 };
	items[] += {"ACE_packingBandage",2,"ACE_fieldDressing",2,"ACE_EarPlugs",1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_black"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
};

class US_AIRFORCE_SECF_RFL : US_AIRFORCE_SECF_LEAD // Airforce Security Forces Rifleman
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_Rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_d","rhsusf_acc_SFMB556","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red",8,"rhsusf_mag_15Rnd_9x19_JHP",3,"rhs_mag_m18_red",2,"rhsusf_mag_15Rnd_9x19_JHP",2 };};

class US_AIRFORCE_SECF_SNP : US_AIRFORCE_SECF_LEAD // Airforce Security Forces Sniper
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {"rhsusf_iotv_ucp_SAW"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m24sws_d","rhsusf_acc_m24_muzzlehider_d","rhsusf_acc_M8541_low_d","rhsusf_5Rnd_762x51_m118_special_Mag","rhsusf_acc_harris_swivel"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag",8,"rhsusf_5Rnd_762x51_m118_special_Mag",6,"rhsusf_mag_15Rnd_9x19_JHP",5};
	items[] += {"ACE_packingBandage",2,"ACE_fieldDressing",2,"rhs_mag_m18_red",2};
};


class US_AIRFORCE_ATC : US_ARMY_DEFAULT_UCP // Air Traffic Controller
{
	uniform[] = {"rhs_uniform_abu"};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",1};
	items[] += { };
	compass[]= {"ItemCompass"};
	binoculars[] = {"Binocular"};
	goggles[] = {"G_Aviator"};
	gps[] = {""};
	headgear[] = {"rhsusf_Bowman"};
	map[] = {"ItemMap"};
	watch[] = {"ItemWatch"};
	postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";};
};

class US_AIRFORCE_JPLT : CommonAmerica // Airforce Jet Pilot
{
	uniform[] = {"U_I_pilotCoveralls"};
	vest[] = {""};
	backpack[] = {"B_Parachute"};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_glock17g4"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP",3 };
	items[] += {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_grn"};
	gps[] = {"ItemGPS"};
	headgear[] = {"RHS_jetpilot_usaf"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0]";
};	


class US_AIRFORCE_STARGATE03_TL : CommonAmerica // Airforce Stargate 03 Team-Lead
{
	uniform[] = {"rhs_uniform_acu_oefcp"};
	vest[] = {"rhsusf_spcs_ocp_squadleader"};
	backpack[] = {""};
	primary[] = {"SMG_03C_TR_black","rhsusf_acc_RM05","50Rnd_570x28_SMG_03"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",3,"50Rnd_570x28_SMG_03",11 };
	items[] += {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"H_Watchcap_camo"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ChemicalDetector_01_watch_F"};
	preLoadout = "[(_this select 0),""Stargate03""] call bis_fnc_setUnitInsignia; (_this select 0) setVariable [""ACE_GForceCoef"",0]";};	

class US_AIRFORCE_STARGATE03_RFL : US_AIRFORCE_STARGATE03_TL // Airforce Stargate 03 Member
{
	vest[] = {"rhsusf_spcs_ocp_rifleman_alt"};
	headgear[] = {"H_Watchcap_khk"};
	preLoadout = "[(_this select 0),""Stargate03""] call bis_fnc_setUnitInsignia; (_this select 0) setVariable [""ACE_GForceCoef"",0]";
};