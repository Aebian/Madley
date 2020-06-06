class CommonGenB : CommonBlufor { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] = { "ACE_EarPlugs", 1 , "ACE_fieldDressing", 8 , "ACE_tourniquet", 1 };
	lrRadios[] = { "" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};

class CommonGenO : CommonOpfor { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] = { "ACE_EarPlugs", 1 , "ACE_fieldDressing", 8 , "ACE_tourniquet", 1 };
	lrRadios[] = { "" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};

class CommonGenI : CommonIndependet { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] = { "ACE_EarPlugs", 1 , "ACE_fieldDressing", 8 , "ACE_tourniquet", 1 };
	lrRadios[] = { "" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};

class CommonGenC : CommonCivilian { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] = { "ACE_EarPlugs", 1 , "ACE_fieldDressing", 8 , "ACE_tourniquet", 1 };
	lrRadios[] = { "" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};


class Inferno_TL : CommonIndependet { // Inferno Squad Team-Lead

	uniform[] = { "rhs_uniform_g3_blk" };
	vest[] = { "V_PlateCarrier2_blk" };
	backpack[] = { "" };
	primary[] = { "arifle_MSBS65_black_F","muzzle_snds_65_TI_blk_F", "acc_pointer_IR", "optic_Hamr", "30Rnd_65x39_caseless_msbs_mag_Tracer"};
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "muzzle_snds_acp", "optic_MRD_black", "11Rnd_45ACP_Mag" };
	launcher[] = { "" };
	magazines[] = { "11Rnd_45ACP_Mag",2, "30Rnd_65x39_caseless_msbs_mag_Tracer",12, "Laserbatteries", 2};
	items[] = {"ACE_EarPlugs", 1, "rhs_mag_fakel", 1};
	binoculars[] = { "Laserdesignator_03" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh_od" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_hgu56p_visor_mask_Empire_black" };
	map[] = { "ItemMap" };
	nvgs[] = { "NVGogglesB_blk_F" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";


};

class Inferno_LR : Inferno_TL { // Inferno Squad Long-Range Soldier

	primary[] = { "arifle_MSBS65_Mark_black_F","muzzle_snds_65_TI_blk_F", "acc_pointer_IR", "optic_Hamr", "30Rnd_65x39_caseless_msbs_mag_Tracer"};
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";
};

class Inferno_HW : Inferno_TL { // Inferno Squad Heavy-Weapon Soldier

	backpack[] = { "B_LegStrapBag_black_F" };
	primary[] = { "arifle_RPK12_F","muzzle_snds_B", "optic_Hamr", "rhs_75Rnd_762x39mm_tracer"};
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "muzzle_snds_acp", "optic_MRD_black", "11Rnd_45ACP_Mag" };
	launcher[] = { "" };
	magazines[] = { "11Rnd_45ACP_Mag",2, "rhs_75Rnd_762x39mm_tracer",5 };
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";

};


class CIA_OP : CommonIndependet { // CIA Operator

	uniform[] = { "U_C_Uniform_Scientist_01_F" };
	vest[] = { "V_PlateCarrier1_blk" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_7x45acp_MHP",2, "Laserbatteries", 1};
	items[] = {"ACE_EarPlugs", 1};
	binoculars[] = { "Laserdesignator_01_khk_F" };
	compass[] = { "" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "H_Watchcap_blk" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};


class CIA_SEC : CIA_OP { // CIA Security Force

	uniform[] = { "U_C_Uniform_Scientist_01_formal_F" };
	vest[] = { "V_PlateCarrier1_blk" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_hk416d10", "rhsusf_acc_eotech_552", "rhsusf_acc_grip2", "rhsusf_acc_rotex5_grey", "rhs_mag_30Rnd_556x45_M855A1_Stanag" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_7x45acp_MHP",2, "rhs_mag_30Rnd_556x45_M855A1_Stanag", 5};
	items[] = {"ACE_EarPlugs", 1};
	binoculars[] = { "" };
	compass[] = { "" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_bowman_cap" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };

};