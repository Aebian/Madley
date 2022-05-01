class CommonGenB : CommonBlufor // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{ 
	uniform[] = {""};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] = {"ACE_EarPlugs",1 ,"ACE_fieldDressing",8 ,"ACE_tourniquet",1};
	lrRadios[] = {""};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {""};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class CommonGenO : CommonOpfor // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {""};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] = {"ACE_EarPlugs",1 ,"ACE_fieldDressing",8 ,"ACE_tourniquet",1};
	lrRadios[] = {""};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {""};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class CommonGenI : CommonIndependet // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {""};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] = {"ACE_EarPlugs",1 ,"ACE_fieldDressing",8 ,"ACE_tourniquet",1};
	lrRadios[] = {""};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {""};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class CommonGenC : CommonCivilian // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {""};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] = {"ACE_EarPlugs",1 ,"ACE_fieldDressing",8 ,"ACE_tourniquet",1};
	lrRadios[] = {""};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {""};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class EXP_VDV_SOLDIER : CommonOpfor // Experimental VDV Soldier (no-Damage)
{
	uniform[] = {"rhs_uniform_gorka_r_g_gloves"};
	vest[] = {"rhs_6b3_AK_2"};
	backpack[] = {"rhs_rk_sht_30_olive"};
	primary[] = {"rhs_weap_rpk74m","rhs_acc_uuk","rhs_acc_perst1ik","rhs_acc_okp7_dovetail","rhs_45Rnd_545X39_7N22_polymer_AK"};
	secondary[] = {"rhs_weap_savz61_folded","rhsgref_20rnd_765x17_vz61"};
	launcher[] = {"rhs_weap_rpg18"};
	magazines[] = {"rhsgref_20rnd_765x17_vz61",4,"rhs_45Rnd_545X39_7N22_polymer_AK",10};
	items[] = {"ACE_EarPlugs",1,"rhs_mag_fakel",1,"rhs_mag_m7a3_cs",10,"rhssaf_mag_rshb_p98",3,"NVGogglesB_blk_F",1};
	binoculars[] = {"rhs_pdu4"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_balaclava"};
	gps[] = {"O_UavTerminal"};
	headgear[] = {"rhs_altyn_visordown"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ChemicalDetector_01_watch_F"};
	preLoadout = "(_this select 0) allowDamage false;";

};

class EXP_ARMY_SOLDIER : EXP_VDV_SOLDIER // Experimental Army Soldier (no-Damage)
{
	uniform[] = {"U_I_E_CBRN_Suit_01_EAF_F"};
	vest[] = {"V_PlateCarrierGL_wdl"};
	backpack[] = {"B_CombinationUnitRespirator_01_F"};
	magazines[] = {"rhsgref_20rnd_765x17_vz61",4,"rhs_45Rnd_545X39_7N22_polymer_AK",6};
	items[] = {"ACE_EarPlugs",1,"rhs_mag_fakel",1};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	goggles[] = {"G_AirPurifyingRespirator_01_F"};
	gps[] = {"O_UavTerminal"};
	headgear[] = {"rhs_altyn_novisor_bala"};

};


class Inferno_TL : CommonIndependet // Inferno Squad Team-Lead
{
	uniform[] = {"rhs_uniform_g3_blk"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {""};
	primary[] = {"arifle_MSBS65_black_F","muzzle_snds_65_TI_blk_F","acc_pointer_IR","optic_Hamr","30Rnd_65x39_caseless_msbs_mag_Tracer"};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","muzzle_snds_acp","optic_MRD_black","11Rnd_45ACP_Mag"};
	launcher[] = {""};
	magazines[] = {"11Rnd_45ACP_Mag",2,"30Rnd_65x39_caseless_msbs_mag_Tracer",12,"Laserbatteries",2};
	items[] = {"ACE_EarPlugs",1,"rhs_mag_fakel",1};
	binoculars[] = {"Laserdesignator_03"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh_od"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_hgu56p_visor_mask_Empire_black"};
	map[] = {"ItemMap"};
	nvgs[] = {"NVGogglesB_blk_F"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";
};

class Inferno_LR : Inferno_TL // Inferno Squad Long-Range Soldier
{
	primary[] = {"arifle_MSBS65_Mark_black_F","muzzle_snds_65_TI_blk_F","acc_pointer_IR","optic_Hamr","30Rnd_65x39_caseless_msbs_mag_Tracer"};
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";};

class Inferno_HW : Inferno_TL // Inferno Squad Heavy-Weapon Soldier
{
	backpack[] = {"B_LegStrapBag_black_F"};
	primary[] = {"arifle_RPK12_F","muzzle_snds_B","optic_Hamr","rhs_75Rnd_762x39mm_tracer"};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","muzzle_snds_acp","optic_MRD_black","11Rnd_45ACP_Mag"};
	launcher[] = {""};
	magazines[] = {"11Rnd_45ACP_Mag",2,"rhs_75Rnd_762x39mm_tracer",5};
	preLoadout = "[(_this select 0),""InfernoSquad""] call bis_fnc_setUnitInsignia;";
};


class CIA_OP : CommonIndependet // CIA Operator
{
	uniform[] = {"U_C_Uniform_Scientist_01_F"};
	vest[] = {"V_PlateCarrier1_blk"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2,"Laserbatteries",1};
	items[] = {"ACE_EarPlugs",1};
	binoculars[] = {"Laserdesignator_01_khk_F"};
	compass[] = {""};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_Watchcap_blk"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};


class CIA_SEC : CIA_OP // CIA Security Force
{
	uniform[] = {"U_C_Uniform_Scientist_01_formal_F"};
	vest[] = {"V_PlateCarrier1_blk"};
	backpack[] = {""};
	primary[] = {"rhs_weap_hk416d10","rhsusf_acc_eotech_552","rhsusf_acc_grip2","rhsusf_acc_rotex5_grey","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2,"rhs_mag_30Rnd_556x45_M855A1_Stanag",5};
	items[] = {"ACE_EarPlugs",1};
	binoculars[] = {""};
	compass[] = {""};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_bowman_cap"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};


class WEAPONS_DEALER_LEAD : CommonIndependet // The Weapons Dealer
{
	uniform[] = {"U_O_R_Gorka_01_camo_F"};
	vest[] = {"rhs_6b45_off"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhs_weap_cz99_etched","rhssaf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhssaf_mag_15Rnd_9x19_JHP",12,"Laserbatteries",1};
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_red",2};
	binoculars[] = {"Laserdesignator_01_khk_F"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_Watchcap_camo"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};

class WEAPONS_DEALER_RFL : WEAPONS_DEALER_LEAD // Advanced Rifleman 
{
	vest[] = {"rhs_6b45_rifleman"};
	primary[] = {"rhs_weap_ak105_zenitco01_b33","rhs_acc_tgpa","rhs_acc_perst3","rhsusf_acc_ACOG_USMC","rhs_30Rnd_545x39_7N10_AK"};
	magazines[] = {"rhs_30Rnd_545x39_7N10_AK",14};
	items[] = {"ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2};
	binoculars[] = {""};
	goggles[] = {"G_Tactical_Clear"};
	headgear[] = {"rhsusf_bowman_cap"};
};

class WEAPONS_DEALER_MG : WEAPONS_DEALER_RFL // Advanced Machine Gunner 
{
	vest[] = {"rhs_6b45_mg"};
	primary[] = {"rhs_weap_minimi_para_railed","rhsusf_acc_SF3P556","rhs_acc_perst3","rhsusf_acc_ACOG_USMC","rhsusf_acc_saw_bipod","rhsusf_200Rnd_556x45_soft_pouch"};
	magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch",2};
	binoculars[] = {""};
	goggles[] = {"G_Tactical_Black"};
};