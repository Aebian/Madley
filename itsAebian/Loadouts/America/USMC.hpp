// United States Marines - File

class US_MARINES_DEFAULT_FROGWD : CommonBlufor // Base Loadout for US Marines (FROG-WD)
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_crewman"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m9"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP", 4 };
	items[] += { };
	binoculars[] = {"Binocular"};
	goggles[] = {"rhsusf_shemagh_gogg_tan", "rhsusf_shemagh2_gogg_tan"};
	gps[] = {""};
	headgear[] = {"rhsusf_opscore_ut_pelt_nsw_cam", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_lwh_helmet_marpatwd_headset"};
	map[] = {"ItemMap"};
	watch[] = {""};

};


class US_MARINES_PL : US_MARINES_DEFAULT_FROGWD // Marines [Platoon Leader]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_d_mstock","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d", "rhs_mag_30Rnd_556x45_Mk262_Stanag"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",6,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",5,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",3,"rhs_mag_m18_red",3, "rhs_8point_marpatwd",1};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	gps[] = {"ItemGPS"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_JTAC : US_MARINES_DEFAULT_FROGWD // Marines [Joint Terminal Attack Controller]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_patchless_radio"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	primary[] = {"rhs_weap_m4a1_m203s_d","rhsusf_acc_anpeq15side","optic_ERCO_snd_F", "rhs_mag_30Rnd_556x45_Mk262_Stanag"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"rhs_mag_m18_green",5,"rhs_mag_m18_purple",5,"rhs_mag_m18_red",5,"rhs_mag_m661_green",8,"rhs_mag_m662_red",8,"rhs_mag_m713_Red",5,"rhs_mag_m714_White",5,"rhs_mag_m715_Green",5,"rhs_mag_m716_yellow",5,"Laserdesignator_03",1,"Laserbatteries",3 };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"ACE_Vector"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_SQL : US_MARINES_DEFAULT_FROGWD // Marines [Squad Leader]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m27iar_grip","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG2_USMC", "rhs_mag_30Rnd_556x45_Mk262_Stanag"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot", 3, "ACE_fieldDressing", 4, "ACE_packingBandage", 4, "ACE_tourniquet", 2, "rhs_mag_m18_green", 1, "rhs_mag_m18_red", 1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_FTL : US_MARINES_DEFAULT_FROGWD // Marines [Fire Team Leader]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_teamleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m27iar_grip","rhsusf_acc_ACOG2_USMC", "rhs_mag_30Rnd_556x45_Mk262_Stanag"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1,"rhs_mag_m18_red",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_ARM : US_MARINES_DEFAULT_FROGWD // Marines [Automatic Rifleman]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_iar"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_eotech_552", "rhsusf_200Rnd_556x45_soft_pouch"};
	launcher[] = {""};
	magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch",3,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_GND : US_MARINES_DEFAULT_FROGWD // Marines [Grenadier]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_hk416d10_m320", "rhsusf_acc_rotex5_tan", "rhsusf_acc_anpeq16a", "rhsusf_acc_eotech_552_d", "rhs_mag_30Rnd_556x45_Mk262_Stanag"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",5, "rhs_mag_M441_HE",14, "rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot", 3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_GND32 : US_MARINES_DEFAULT_FROGWD // Marines [Grenadier M32]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {"rhsusf_falconii_gr_m32"};
	primary[] = {"rhs_weap_m32", "rhsusf_acc_anpeq15side_bk", "rhsusf_mag_6Rnd_M397_HET"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_6Rnd_M397_HET",6,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot", 4,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",4,"rhs_mag_m18_green",4};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_RFL : US_MARINES_DEFAULT_FROGWD // Marines [Rifleman]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	primary[] = {"rhs_weap_hk416d10_LMT","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2, "rhsusf_200Rnd_556x45_soft_pouch",4 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_RFL_AT : US_MARINES_DEFAULT_FROGWD // Marines [Rifleman Anti-Tank]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_hk416d10_LMT","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d"};
	launcher[] = {"rhs_weap_maaws", "rhs_optic_maaws", "rhs_mag_maaws_HEAT"};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2, "rhs_mag_maaws_HEAT", 2, "rhs_mag_maaws_HE",1 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_MXM : US_MARINES_DEFAULT_FROGWD // Marines [Rifleman]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_marksman"};
	backpack[] = {"rhsusf_assault_eagleaiii_coy"};
	primary[] = {"rhs_weap_m14_rail_wd","rhsusf_acc_anpeq15side","rhsusf_acc_su230a_mrds_c"};
	launcher[] = {""};
	magazines[] = {"rhsusf_20Rnd_762x51_m993_Mag",10,"rhsusf_mag_15Rnd_9x19_JHP",2};
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	map[] = {""};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_WSL : US_MARINES_DEFAULT_FROGWD // Marines [Weapon Squad Leader]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_squadleader"};
	backpack[] = {"rhsusf_falconii_mc"};
	primary[] = {"rhs_weap_hk416d145","rhsusf_acc_anpeq15side","optic_ERCO_blk_F","rhs_acc_grip_ffg2"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",22,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1,"rhs_mag_m18_red",1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_ach_bare_semi_headset"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_MG : US_MARINES_DEFAULT_FROGWD // Marines [Heavy Machine Gunner]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_mg"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"MMG_01_tan_F","rhsusf_acc_EOTECH","bipod_01_F_snd"};
	launcher[] = {""};
	magazines[] = {"150Rnd_93x64_Mag",4,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot", 3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"ffaa_Glasses"};
	gps[] = {""};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_AMG : US_MARINES_DEFAULT_FROGWD // Marines [Assistant Heavy Machine Gunner]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_iar"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",12,"rhsusf_mag_15Rnd_9x19_JHP",3,"150Rnd_93x64_Mag",3 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"ffaa_Glasses"};
	gps[] = {""};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_SPEC_AT : US_MARINES_DEFAULT_FROGWD // Marines [AT Specialist]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_light"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F"};
	launcher[] = {"launch_O_Titan_short_ghex_F"};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",7,"rhsusf_mag_15Rnd_9x19_JHP",3,"Titan_AT",3 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {"ffaa_Glasses"};
	gps[] = {""};
	map[] = {"ItemMap"};	
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_SPEC_AT_ASS : US_MARINES_DEFAULT_FROGWD // Marines [Assistant AT Specialist]
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {"rhsusf_spc_rifleman"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,"rhsusf_mag_15Rnd_9x19_JHP",3,"Titan_AT",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"ffaa_Glasses"};
	gps[] = {""};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};

};

class US_MARINES_PLT : US_MARINES_DEFAULT_FROGWD // Army Pilot with HGU-65
{
	backpack[] = {""};
	primary[] = {"rhsusf_weap_MP7A2_aor1", "rhsusf_acc_anpeq15A", "optic_Yorris", "rhsusf_mag_40Rnd_46x30_FMJ"};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ",4 };
	items[] += {"ACE_packingBandage",4,"ACE_quikclot",4, "ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_hgu56p_visor_tan"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class US_MARINES_DOORGUNNER : US_MARINES_PLT 
{
	primary[] = {"rhs_weap_mk18_KAC_wd", "rhsusf_acc_anpeq15A", "rhsusf_acc_eotech_552_wd", "rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4 };
	headgear[] = {"rhsusf_hgu56p_visor_mask_tan"};

};