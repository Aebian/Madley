class CommonChina : CommonOpfor { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "U_O_R_Gorka_01_black_F" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "" };

};

class CN_SPC_CMDR : CommonChina { // Chinese SpecOps Commander

	uniform[] = { "U_O_R_Gorka_01_black_F" };
	vest[] = { "V_PlateCarrier1_blk" };
	backpack[] = { "B_LegStrapBag_black_F" };
	primary[] = { ""};
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "optic_MRD_black" };
	launcher[] = { "" };
	magazines[] = {"11Rnd_45ACP_Mag", 4, "rhs_mag_rgo", 2, "SmokeShellRed", 3, "SmokeShellYellow", 2, "SmokeShellOrange", 2, "SmokeShellBlue", 3, "SmokeShellPurple", 3 };
	items[] += { "rhs_mag_an_m14_th3", 1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Rangefinder" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhssaf_beret_green" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 2, true]";

};

class CN_SPC_OP : CommonChina {  // Chinese SpecOps Operator (X)

	uniform[] = { "U_O_R_Gorka_01_black_F" };
	vest[] = { "V_PlateCarrier1_blk" };
	backpack[] = { "B_LegStrapBag_black_F" };
	primary[] = { "arifle_ARX_blk_F", "rhsusf_acc_aac_762sd_silencer", "acc_pointer_IR", "rhsusf_acc_eotech_552", "bipod_02_F_blk" };
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "optic_MRD_black" };
	launcher[] = { "" };
	magazines[] = { "30Rnd_65x39_caseless_green",10,"10Rnd_50BW_Mag_F",6, "11Rnd_45ACP_Mag", 4, "rhs_mag_rgo", 2, "SmokeShellRed", 2, "SmokeShellBlue", 2, "SmokeShellPurple", 2 };
	items[] += { "rhs_mag_an_m14_th3", 1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Rangefinder" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Tactical_Clear" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_protech_helmet_rhino_ess" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 2, true]";

};

class CN_SPC_OP_AT : CN_SPC_OP { // Chinese SpecOps Operator (AT-4)

	launcher[] = { "rhs_weap_M136" };

};

class CN_SPC_OP_MXM : CN_SPC_OP { // Chinese SpecOps Operator (AMS)

	primary[] = { "arifle_ARX_blk_F", "rhsusf_acc_aac_762sd_silencer", "acc_pointer_IR", "optic_AMS", "bipod_02_F_blk" };

};


class CN_SPC_OP_MED : CN_SPC_OP { // Chinese SpecOps Operator (MED)

	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";

};


class CN_SPC_OP_MG : CN_SPC_OP { // Chinese SpecOps Operator (QBZ-95-1)

	primary[] = { "arifle_CTARS_blk_F", "muzzle_snds_58_blk_F", "acc_pointer_IR", "optic_Hamr", "bipod_02_F_blk" };
	magazines[] = { "100Rnd_580x42_Mag_F",8,"10Rnd_50BW_Mag_F",6, "11Rnd_45ACP_Mag", 4, "rhs_mag_rgo", 3 };
	items[] = {};

};