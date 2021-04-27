class CommonPolice : CommonBlufor // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {"U_B_GEN_Soldier_F"};
	vest[] = {"V_TacVest_gen_F"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] += {"ACE_EarPlugs",1};
	binoculars[] = {""};
	compass[] = {""};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {"H_MilCap_gen_F"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class Police_Officer_WEST : CommonPolice 
{
	uniform[] = {"U_C_Uniform_Scientist_01_F"};
	vest[] = {"V_TacVest_blk_POLICE"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP",4};
	items[] += {"ACE_EarPlugs",1};
	binoculars[] = {""};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {"H_Cap_police"};
	postLoadout = "(_this select 0) action ['SwitchWeapon',(_this select 0),(_this select 0),1]";
};


class Police_Specialist_WEST_Lead : CommonPolice 
{
	uniform[] = {"U_I_G_Story_Protagonist_F"};
	vest[] = {"V_TacVest_gen_F"};
	backpack[] = {""};
	primary[] = {"SMG_01_F","muzzle_snds_acp","acc_flashlight_smg_01","optic_ACO_grn","30Rnd_45ACP_Mag_SMG_01"};
	secondary[] = {"hgun_P07_F","16Rnd_9x21_Mag"};
	launcher[] = {""};
	magazines[] = {"16Rnd_9x21_Mag",4,"30Rnd_45ACP_Mag_SMG_01",4};
	items[] += {"ACE_EarPlugs",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Balaclava_combat"};
	gps[] = {""};
	headgear[] = {"H_PASGT_basic_black_F"};
};

class Police_Specialist_WEST_Operator : Police_Specialist_WEST_Lead 
{
	primary[] = {"arifle_AK12_F","optic_ACO_grn","30Rnd_762x39_Mag_F"};
	magazines[] = {"16Rnd_9x21_Mag",2,"30Rnd_762x39_Mag_F",8};
	binoculars[] = {""};
	compass[] = {""};
};

class Police_Specialist_WEST_Shooter : Police_Specialist_WEST_Operator 
{
	primary[] = {"srifle_DMR_06_camo_F","optic_AMS","20Rnd_762x51_Mag"};
	magazines[] = {"16Rnd_9x21_Mag",2,"20Rnd_762x51_Mag",8};
	binoculars[] = {""};
};

class Police_Specialist_WEST_Pilot : Police_Specialist_WEST_Operator 
{
	uniform[] = {"U_B_GEN_Soldier_F"};
	primary[] = {""};
	magazines[] = {"16Rnd_9x21_Mag",4};
	binoculars[] = {""};
	headgear[] = {"rhsusf_hgu56p_visor_black"};
};


class Police_Officer_EAST : CommonPolice 
{
	uniform[] = {"rhs_uniform_omon"};
	vest[] = {"rhs_belt_holster"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhs_weap_pya","rhs_mag_9x19_7n31_17"};
	magazines[] = {"rhs_mag_9x19_7n31_17",4};
	items[] += {"ACE_EarPlugs",1};
	goggles[] = {""};
	headgear[] = {"rhs_omon_cap"};
	postLoadout = "(_this select 0) action ['SwitchWeapon',(_this select 0),(_this select 0),1]";
};

class Police_Officer_EAST_Beret : Police_Officer_EAST 
{
	headgear[] = {"rhs_beret_omon"};

};

class Police_Specialist_EAST_Lead : CommonPolice 
{
	uniform[] = {"rhs_uniform_gorka_r_g_gloves"};
	vest[] = {"rhs_6b2_holster"};
	backpack[] = {""};
	primary[] = {"rhs_weap_ak74n_2","rhs_acc_dtk3","rhs_acc_perst1ik","rhs_acc_1p63","rhs_30Rnd_545x39_7N6M_plum_AK"};
	secondary[] = {"rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"};
	magazines[] = {"rhs_mag_9x18_8_57N181S",4,"rhs_30Rnd_545x39_7N6M_plum_AK",8};
	goggles[] = {""};
	headgear[] = {"rhs_altyn_bala"};
	compass[] = {"ItemCompass"};	
};

class Police_Specialist_EAST_Operator : Police_Specialist_EAST_Lead 
{
	vest[] = {"rhs_6b2_holster"};
	primary[] = {"rhs_weap_ak105","rhs_acc_uuk","rhs_30Rnd_545x39_7N6M_plum_AK"};
	magazines[] = {"rhs_mag_9x18_8_57N181S",4,"rhs_30Rnd_545x39_7N6M_plum_AK",6};
	compass[] = {""};	
};


class Police_Specialist_EAST_Shooter : Police_Specialist_EAST_Operator 
{
	vest[] = {"rhs_6b2_SVD"};
	primary[] = {"rhs_weap_svds","rhs_acc_tgpv2","rhs_acc_pso1m2","rhs_10Rnd_762x54mmR_7N14"};
	magazines[] = {"rhs_mag_9x18_8_57N181S",2,"rhs_10Rnd_762x54mmR_7N14",8};
};


class Police_Specialist_EAST_Pilot : Police_Specialist_EAST_Operator 
{
	uniform[] = {"rhs_uniform_df15_tan"};
	vest[] = {"rhsgref_6b23_ttsko_digi_officer"};
	primary[] = {""};
	secondary[] = {"rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"};
	magazines[] = {"rhs_mag_9x18_8_57N181S",4};
	binoculars[] = {"rhsusf_bino_lrf_Vector21"};
	googles[] = {"G_Aviator"};
	headgear[] = {"rhsusf_hgu56p"};
};