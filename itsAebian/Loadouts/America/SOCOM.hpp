// United States SOCOM - File

class US_DELTA_OPERATOR : US_ARMY_DEFAULT_OCP // 1st SFOD-D Operator
{
	uniform[] = {"U_B_CombatUniform_mcam"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {""};
	primary[] = {"rhs_weap_mk18_m320","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",4,"rhs_mag_M397_HET",3};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_protech_helmet_rhino_ess","rhsusf_protech_helmet_ess"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"",0];(_this select 0) setVariable [""ACE_medical_medicClass"",1,true]";
};

class US_DELTA_OPERATOR_AT : US_DELTA_OPERATOR // 1st SFOD-D Operator (with AT)
{
	primary[] = {"rhs_weap_mk18_KAC_bk","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",5};
	launcher[] = {"rhs_weap_m72a7"};
};

class US_DELTA_SPOTTER : US_DELTA_OPERATOR // 1st SFOD-D Spotter
{
	primary[] = {"rhs_weap_mk18_KAC_bk","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","optic_MRCO","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",12};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",1};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	headgear[] = {"rhsusf_protech_helmet_ess"};
};

class US_DELTA_SNIPER : US_DELTA_SPOTTER // 1st SFOD-D Sniper
{
	primary[] = {"rhs_weap_m14_socom_rail","rhsusf_acc_m14_flashsuppresor","rhsusf_acc_ACOG_RMR_3d","rhsusf_20Rnd_762x51_m118_special_Mag"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhsusf_20Rnd_762x51_m118_special_Mag",8};
	items[] = {"rhsusf_acc_aac_m14dcqd_silencer","ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_purple",1};
};