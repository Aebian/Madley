class CommonCanada : CommonBlufor // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {"rhs_uniform_FROG01_wd"};
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] = {"ACE_EarPlugs",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {""};
	headgear[] = {""};
	map[] = {""};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {""};

};

class CA_RECON_RFL : CommonCanada // Recon Rifleman
{
	uniform[] = {"rhs_uniform_g3_m81"};
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_mk18_grip_wd","muzzle_snds_m_khk_F","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_d","rhs_acc_grip_rk6"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2,"rhs_mag_30Rnd_556x45_Mk318_Stanag",10};
	items[] += {"ACE_quikclot",4,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2};
	binoculars[] = {"ACE_MX2A"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Combat_Goggles_tna_F"};
	gps[] = {"B_EasyTrack_PDA"};
	headgear[] = {"rhsusf_ach_bare_semi_headset_ess"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
	preLoadout = "[(_this select 0) ,""Canada""] call bis_fnc_setUnitInsignia;";

};

class CA_RECON_ARM : CA_RECON_RFL // Recon Rifleman (ARM)
{
	uniform[] = {"rhs_uniform_g3_m81"};
	vest[] = {"rhsusf_mbav_mg"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m27iar_grip","rhsusf_acc_anpeq15side_bk","rhsusf_acc_eotech_552_d"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2,"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",3};
	binoculars[] = {"ACE_MX2A"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Combat_Goggles_tna_F"};
	gps[] = {"B_EasyTrack_PDA"};
	headgear[] = {"rhsusf_ach_bare_semi"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
	preLoadout = "[(_this select 0) ,""Canada""] call bis_fnc_setUnitInsignia;";

};