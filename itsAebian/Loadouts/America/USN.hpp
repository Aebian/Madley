// United States Navy - File

class US_NAVY_ADM : CommonAmerica // Admiral
{
	uniform[] = {"FUTARM_U_BASIC_MT"};
	vest[] = {"usm_vest_safety"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",4,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"rhs_pdu4"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"FUTARM_H_MILCAP_MT"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
};


class US_NAVY_RADM : US_NAVY_ADM // Rear Admiral
{
	gps[] = {"ItemGPS"};
};


class US_NAVY_SWCC_LEAD : CommonAmerica // SWCC [Officer]
{
	uniform[] = {"rhs_uniform_g3_m81"};
	vest[] = {"rhsusf_spc_patchless_radio"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4_carryhandle","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG3","rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_FMJ"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger",8,"rhsusf_mag_15Rnd_9x19_FMJ",2 };
	items[] += {"ACE_quikclot", 3, "ACE_fieldDressing", 4, "ACE_packingBandage", 4, "ACE_tourniquet", 2, "rhs_mag_m18_green", 1, "rhs_mag_m18_red", 1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_black"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_opscore_fg_pelt"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
};

class US_NAVY_SWCC_OP : US_NAVY_SWCC_LEAD // SWCC [Operator]
{
	vest[] = {"rhsusf_spc_patchless"};
	primary[] = {"rhs_weap_m4_carryhandle","rhsusf_acc_anpeq15_top","rhsusf_acc_eotech_552","rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan","rhsusf_shemagh_gogg_tan"};
	headgear[] = {"rhsusf_opscore_fg"};
	watch[] = {"ACE_Altimeter"};
};


class US_NAVY_JPLT : CommonAmerica // Navy [Jet Pilot]
{
	uniform[] = {"U_B_PilotCoveralls"};
	vest[] = {"TFA_PlateCarrierH_fol"};
	backpack[] = {"ACE_NonSteerableParachute"};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",4,"ACE_microDAGR"};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_PilotHelmetFighter_B"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};

class US_NAVY_MPLT : CommonAmerica // Air Medavac Pilot
{
	uniform[] = {"rhs_uniform_g3_tan"};
	vest[] = {"V_PlateCarrier1_rgr"};
	backpack[] = {"ACE_NonSteerableParachute"};
	primary[] = {"rhsusf_weap_MP7A2_desert", "optic_Aco"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_40Rnd_46x30_AP",10,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"ACE_microDAGR"};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_hgu56p"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};

class US_NAVY_MEDIC : CommonAmerica // Navy Medic
{
	uniform[] = {"rhs_uniform_g3_rgr"};
	vest[] = {"V_PlateCarrier2_rgr"};
	backpack[] = {"B_Carryall_oli"};
	primary[] = {"rhs_weap_m4a1_blockII_KAC_wd", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_surgicalKit","ACE_fieldDressing",24,"ACE_elasticBandage",24,"ACE_quikclot",24,"ACE_packingBandage",24, "ACE_bloodIV",12, "ACE_epinephrine",22, "ACE_morphine", 22, "ACE_tourniquet", 8, "rhs_mag_m18_green", 4 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_mich_bare_alt_semi"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
};

class US_NAVY_PARAM : CommonAmerica // Navy Paramedic
{
	uniform[] = {"rhs_uniform_g3_rgr"};
	vest[] = {"V_PlateCarrier1_rgr"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_KAC_wd", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_fieldDressing", 6, "ACE_elasticBandage", 6, "ACE_quikclot", 6, "ACE_packingBandage", 6, "ACE_bloodIV", 2, "ACE_epinephrine", 8, "ACE_morphine", 8, "ACE_tourniquet", 4, "rhs_mag_m18_green", 3};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_mich_bare_alt_semi"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
};

class US_NAVY_AMCQSEC : CommonAmerica // Air Medevac Perimeter Security
{
	uniform[] = {"rhs_uniform_g3_tan"};
	vest[] = {"V_PlateCarrier1_rgr"};
	backpack[] = {"ACE_NonSteerableParachute"};
	primary[] = {"rhs_weap_m240G", "rhsusf_acc_ACOG2_3d"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_100Rnd_762x51_m80a1epr",4,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_hgu56p_mask"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
};

class US_NAVY_BOATSEC : CommonAmerica // Navy Ship Security (Pistol Only)
{
	uniform[] = {"U_B_CTRG_Soldier_3_F"};
	vest[] = {"V_Pocketed_olive_F"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"hgun_P07_khk_F","16Rnd_9x21_Mag"};
	launcher[] = {""};
	magazines[] = {"16Rnd_9x21_Mag",5};
	items[] += {};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Balaclava_TI_G_tna_F"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_HelmetB_tna_F"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
};

class US_NAVY_BOATSEC_LR : US_NAVY_BOATSEC // Navy Ship Security (with Primary)
{
	primary[] = {"rhs_weap_mk18_wd","rhsusf_acc_eotech_552_wd","rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red"};
	magazines[] = {"16Rnd_9x21_Mag",3,"rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red",4};
};