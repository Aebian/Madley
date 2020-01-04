class CommonGenB : CommonBlufor {

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

class CommonGenO : CommonOpfor {

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

class CommonGenI : CommonIndependet {

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

class CommonGenC : CommonCivilian {

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
	magazines[] = { "11Rnd_45ACP_Mag",2, "30Rnd_65x39_caseless_msbs_mag_Tracer",12 };
	items[] = {"ACE_EarPlugs", 1, "rhs_mag_fakel", 1};
	binoculars[] = { "rhsusf_bino_lerca_1200_black" };
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
	magazines[] = { "11Rnd_45ACP_Mag",2, "rhs_75Rnd_762x39mm_tracer",6 };
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";

};

