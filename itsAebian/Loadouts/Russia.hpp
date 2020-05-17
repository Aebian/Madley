class CommonRussia : CommonOpfor { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] = { "ACE_EarPlugs",1 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "" };
	map[] = { "" };
	nvgs[] = { "" };
	watch[] = { "ItemWatch" };
	lrRadios[] = {""};

};

class RU_VDV_CO : CommonRussia { // VDV [Commanding Officer]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_crewofficer" };
	backpack[] = { "rhs_assault_umbts" };
	primary[] = { "rhs_weap_ak74m_camo","rhs_acc_dtk3","rhs_acc_perst1ik","rhs_acc_pkas" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",5,"rhs_mag_9x19_17",2,"SmokeShellPurple",6,"SmokeShellGreen",3,"SmokeShell",3,"SmokeShellRed",3 };
	items[] += {"ACE_bloodIV",2,"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"rhs_6b27m_digi_ess_bala",1 };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Goggles_VR" };
	gps[] = { "o_EasyTrack_Tablet" };
	headgear[] = { "rhs_beret_vdv1" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_VDV_JTAC : CommonRussia { // VDV [Joint Terminal Attack Controller]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_6sh92_vog" };
	backpack[] = { "rhs_assault_umbts" };
	primary[] = { "rhs_weap_ak103_gp25","rhs_acc_pbs1","rhs_acc_ekp1" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_30Rnd_762x39mm_tracer",5,"rhs_mag_9x19_17",2,"SmokeShellGreen", 4,"SmokeShellPurple",6,"SmokeShell",3,"rhs_VG40MD_Red",6 };
	items[] += { "ACE_morphine",1,"ACE_epinephrine",2 };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Laserdesignator_02" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Bandanna_khk" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_beret_vdv1" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_VDV_CREW : CommonRussia { // VDV [Vehicle Crew]

	uniform[] = { "rhs_uniform_vdv_emr" };
	vest[] = { "rhs_6b23_crew" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_camo_folded", "rhs_acc_dtk3", "rhs_acc_perst1ik" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "rhs_30Rnd_545x39_AK_no_tracers",4};
	items[] += { "ACE_fieldDressing",6,"ACE_elasticBandage",6,"ACE_quikclot",6,"ACE_packingBandage",6,"ACE_fieldDressing",6,"ACE_tourniquet",2,"ACE_epinephrine",1,"ACE_morphine",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_tsh4_ess_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_CREW_CM : RU_VDV_CREW { // VDV [Vehicle Crew Commander]

	vest[] = { "rhs_6b23_crewofficer" };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	secondary[] = { "rhs_weap_pya" };
	magazines[] += { "rhs_mag_9x19_17",2 };

};

class RU_VDV_DES_Sergeant : CommonRussia {  // VDV [Team Leader] (Lieutenant / Sergeant)

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92_headset_mapcase" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_camo","rhs_acc_dtk3","rhs_acc_perst1ik","rhs_acc_1p29" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "rhs_weap_rshg2" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",6,"rhs_mag_9x19_17",2,"SmokeShellRed",3 };
	items[] += {"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_morphine",1,"ACE_epinephrine",1, "rhs_mag_rgo",3 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_6b7_1m_emr_ess_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_RFL_BASE : CommonRussia {  // VDV [Rifleman] Base

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_fullplum","rhs_acc_dtk" };
	secondary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",7};
	items[] += { "ACE_packingBandage",2,"ACE_quikclot",2,"ACE_elasticBandage",2,"ACE_fieldDressing",2, "rhs_mag_rgo",3,"ACE_morphine",1,"ACE_epinephrine",1};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_ess_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_DES_Efreitor : RU_VDV_RFL_BASE { // VDV [Rifleman] Senior (Corporal)

	vest[] = { "rhs_6b13_6sh92" };
	primary[] = { "rhs_weap_ak74m_gp25","rhs_acc_dtk" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",3,"rhs_VG40TB",4,"rhs_VG40SZ",4,"SmokeShellGreen",2 };

};


class RU_VDV_DES_Machinegunner : CommonRussia { // VDV [Machine Gunner] (Private 1st Class)

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_pkm" };
	launcher[] = { "rhs_weap_rpg26" };
	magazines[] = { "rhs_100Rnd_762x54mmR_7N26",6};
	items[] += { "ACE_packingBandage",3,"ACE_quikclot",3,"ACE_elasticBandage",3,"ACE_fieldDressing",3, "rhs_mag_rgo",3 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};


class RU_VDV_DES_GL_RShG2 : RU_VDV_RFL_BASE { // VDV [Rifleman GP-25] (Private 1st Class)

	vest[] = { "rhs_6b13_6sh92_vog" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk" };
	launcher[] = { "rhs_weap_rshg2" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",3,"rhs_VG40TB",14,"rhs_VG40SZ",4,"SmokeShellGreen",2 };
	items[] += { "ACE_packingBandage",2,"ACE_quikclot",2,"ACE_elasticBandage",2,"ACE_fieldDressing",2, "rhs_mag_rgo",3 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_DES_GL_RPG26 : RU_VDV_DES_GL_RShG2 { // VDV [Rifleman GP-25] (Private 1st Class)

	launcher[] = { "rhs_weap_rpg26" };
};

class RU_VDV_DES_Rifleman_Lite : CommonRussia {  // VDV [Sharpshooter] (Corporal)

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92_radio" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_zenitco01","rhs_acc_pso1m2" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",8};
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",1,"ACE_epinephrine",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_ess_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};


class RU_VDV_DES_Rifleman : RU_VDV_RFL_BASE { // VDV [Rifleman] (Private 1st Class)

 launcher[] = { "rhs_weap_rpg26" };

};

class RU_VDV_DES_Rifleman02 : RU_VDV_RFL_BASE { // VDV [Rifleman] (Private 2nd Class --> Private)

launcher[] = { "rhs_weap_rshg2" };
backpack[] = { "rhs_sidor" };
magazines[] += { "rhs_100Rnd_762x54mmR_7N26",2};

};


class RU_VDV_SNP : CommonRussia {  // VDV [Sniper]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92_radio" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_svdp_wd","rhs_acc_pso1m21_svd" };
	launcher[] = { "" };
	magazines[] = { "rhs_10Rnd_762x54mmR_7N1",10,"rhs_mag_9x19_17",2 };
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",1,"ACE_epinephrine",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_ess_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_Grenadier : CommonRussia { // VDV [Grenadier (RPG-7)]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "rhs_rpg_empty" };
	primary[] = { "rhs_weap_ak74m_fullplum","rhs_acc_dtk" };
	launcher[] = { "rhs_weap_rpg7","rhs_acc_pgo7v" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",4,"rhs_mag_9x19_17",2,"rhs_rpg7_PG7VL_mag",3,"rhs_rpg7_OG7V_mag",2};
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",1,"ACE_epinephrine",1, "rhs_mag_rgo",2 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_Grenadier_Assistant : RU_VDV_RFL_BASE { // VDV [Grenadier (RPG-7)]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "rhs_rpg_empty" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",6,"rhs_rpg7_PG7VL_mag",2,"rhs_rpg7_OG7V_mag",2};
	items[] += { "ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_quikclot",2,"ACE_morphine",1,"ACE_epinephrine",1, "rhs_mag_rgo",1 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_DES_Machinegunner_WT : CommonRussia { // VDV [Machine Gunner / Weapons Team] (Corporal)

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_pkp" };
	launcher[] = { "" };
	magazines[] = { "rhs_100Rnd_762x54mmR_7N26",6};
	items[] += { "ACE_packingBandage",3,"ACE_quikclot",3,"ACE_elasticBandage",3,"ACE_fieldDressing",3, "rhs_mag_rgo",2 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_DES_Machinegunner_Assistant_WT : RU_VDV_RFL_BASE {

backpack[] = { "B_Carryall_oli" };
magazines[] = { "rhs_45Rnd_545X39_7U1_AK", 5,"rhs_100Rnd_762x54mmR_7N26",3};


};

class RU_VDV_DES_RFL_AA : CommonRussia { // VDV [Rifleman Anti-Air]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b13_6sh92" };
	backpack[] = { "B_TacticalPack_rgr" };
	primary[] = { "rhs_weap_aks74un","rhs_acc_pgs64_74un" };
	launcher[] = { "rhs_weap_igla" };
	magazines[] = { "rhs_30Rnd_545x39_7U1_AK",7,"rhs_mag_9x19_17",2,"rhs_mag_9k38_rocket",3,"SmokeShellGreen",2, "rhs_mag_rgo",3 };
	items[] += { "ACE_EarPlugs" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhs_6b27m_digi_ess_bala" };
	map[] = { "" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_LOG : CommonRussia {  // VDV [Logistic]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_ML_6sh92_headset" };
	backpack[] = { "rhs_assault_umbts_engineer_empty" };
	primary[] = { "rhs_weap_ak74m", "rhs_acc_dtk", "rhs_acc_1p63" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",5,"rhs_mag_9x19_17",2 };
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",2,"ACE_epinephrine",2, "ACE_wirecutter",2, "ToolKit",1 };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "ffaa_brilat_item_nbq" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_6b27m_ml_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 1, true];";

};

class RU_VDV_ACO : CommonRussia {  // VDV [Aircraft Ground Coordinator]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_ML_6sh92" };
	backpack[] = { "" };
	primary[] = { "" };
	launcher[] = { "" };
	magazines[] = { "" };
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",2,"ACE_epinephrine",2};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "ffaa_moe_boina" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };

};

class RU_VDV_ATC : CommonRussia {  // VDV [Air Traffic Controller]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_ML_6sh92" };
	backpack[] = { "" };
	primary[] = {  };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_9x19_17",4 };
	items[] += { "ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_quikclot",4,"ACE_morphine",2,"ACE_epinephrine",2, "rhs_weap_pya",1};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhsusf_Bowman" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };

};


 class RU_VDV_SPC01 : CommonRussia { // VDV [Specialist]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_svdp_npz","rhsusf_acc_ACOG_RMR_3d","rhs_acc_perst1ik" };
	secondary[] = { "rhs_weap_pb_6p9", "rhs_acc_6p9_suppressor" };
	launcher[] = { "rhs_weap_rshg2" };
	magazines[] = { "rhs_10Rnd_762x54mmR_7N14",11,"rhs_mag_9x18_8_57N181S",4 };
	items[] += { "ACE_elasticBandage",4,"ACE_fieldDressing",4,"ACE_quikclot",4,"ACE_packingBandage",4,"ACE_morphine",2,"ACE_epinephrine",2,"ACE_tourniquet",2,"ACE_microDAGR", "rhs_mag_rgd5", 6 };
	lrradios[] =  { ""};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };
	nvgs[]= { "rhs_1PN138" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

 class RU_VDV_SPC02 : CommonRussia { // VDV [Specialist]

	uniform[] = { "rhs_uniform_vdv_emr_des" };
	vest[] = { "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak103_2_npz","rhs_acc_1p87","rhs_acc_ak5", "rhs_acc_perst1ik" };
	secondary[] = { "rhs_weap_pb_6p9", "rhs_acc_6p9_suppressor" };
	launcher[] = { "rhs_weap_rshg2" };
	magazines[] = { "rhs_75Rnd_762x39mm",3,"rhs_mag_9x18_8_57N181S",4 };
	items[] += { "ACE_elasticBandage",4,"ACE_fieldDressing",4,"ACE_quikclot",4,"ACE_packingBandage",4,"ACE_morphine",2,"ACE_epinephrine",2,"ACE_tourniquet",2,"ACE_microDAGR", "rhs_mag_rgd5", 6 };
	lrradios[] =  { ""};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };
	nvgs[]= { "rhs_1PN138" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class RU_MSV_Rifleman : RU_VDV_RFL_BASE { // MSV [Rifleman] (Private 1st Class)

 uniform[] = { "rhs_uniform_flora" };
 launcher[] = { "rhs_weap_rpg26" };

};

class RU_MSV_CREW : RU_VDV_CREW { // MSV [Vehicle Crew Commander]

	uniform[] = { "rhs_uniform_msv_emr" };
};

class RU_MSV_CREW_CM : RU_MSV_CREW { // MSV [Vehicle Crew Commander]

	vest[] = { "rhs_6b23_crewofficer" };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	secondary[] = { "rhs_weap_pya" };
	magazines[] += { "rhs_mag_9x19_17",2 };
};


class RU_VVS_HPLT : CommonRussia { // VVS [Helicopter Pilot]

	uniform[] = { "rhs_uniform_df15_tan" };
	vest[] = { "rhs_6b23_ML_vydra_3m" };
	backpack[] = { "B_TacticalPack_rgr" };
	primary[] = { "rhs_weap_ak74m_desert_folded","rhs_acc_dtk1","rhs_acc_perst1ik" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",4,"rhs_mag_9x19_17",2 };
	items[] += { "ACE_elasticBandage",4,"ACE_fieldDressing",4,"ACE_quikclot",4,"ACE_packingBandage",4,"ACE_morphine",2,"ACE_epinephrine",2,"ACE_tourniquet",2,"ACE_MapTools","ACE_microDAGR" };
	lrradios[] =  { "ACRE_PRC117F"};
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_zsh7a_mike_green_alt" };
	map[] = { "ItemMap" };
	watch[] = { "ItemWatch" };
	nvgs[]= { "NVGogglesB_gry_F" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class RU_VVS_JPLT : RU_VVS_HPLT {

	headgear[] = { "rhs_zsh7a_alt" };
	backpack[] = { "rhs_d6_Parachute_backpack" };

}

class RU_SPC_LEAD : CommonRussia { // спецназ [Colonel / Leader] #\ Not Used By Players /#

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_asval_grip","rhs_acc_ekp1" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_20rnd_9x39mm_SP6",6,"rhs_mag_9x19_17",2,"SmokeShellGreen",2,"SmokeShellRed",2 };
	items[] += { "ACE_packingBandage",2,"ACE_quikclot",2,"ACE_packingBandage",2,"ACE_fieldDressing",2,"ACE_tourniquet",1,"ACE_MapTools" };
	lrradios[] =  { "ACRE_PRC148"};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Bandanna_khk" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_beret_vdv3" };
	map[] = { "ItemMap" };


};

class RU_SPC_PO : CommonRussia { // спецназ [Project Officer]

	uniform[] = { "rhs_uniform_gorka_r_y" };
	vest[] = { "rhsgref_6b23_khaki_officer" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_ak74m_zenitco01_b33","rhs_acc_uuk", "rhsusf_acc_anpeq15_bk_top", "rhsusf_acc_eotech_552_d", "rhsusf_acc_grip2" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",3,"rhs_mag_9x19_17",2,"SmokeShellPurple",3,"rhs_mag_an_m14_th3",1 };
	items[] += { "ACE_packingBandage",3,"ACE_quikclot",3,"ACE_elasticBandage",3,"ACE_fieldDressing",3,"ACE_morphine",2,"ACE_epinephrine",2,"ACE_tourniquet",1,"ACE_MapTools" };
	lrradios[] =  { ""};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Goggles_VR" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhssaf_beret_red" };
	map[] = { "ItemMap" };
    preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0];";

};

class RU_SPC_TL : CommonRussia { // спецназ [Team Leader]

	uniform[] = { "rhs_uniform_gorka_r_y" };
	vest[] = { "rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_ak105_zenitco01_b33","rhs_acc_dtk4short", "rhsusf_acc_eotech_552_d", "rhsusf_acc_grip2", "rhs_acc_perst3" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",11,"rhs_mag_9x19_17",2,"SmokeShellGreen",4,"SmokeShellRed",4 };
	items[] += { "ACE_packingBandage",8,"ACE_quikclot",8,"ACE_fieldDressing",8,"ACE_tourniquet",4,"ACE_MapTools" };
	lrradios[] =  { "ACRE_PRC148"};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_OP : CommonRussia { // спецназ [Operator]

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_asval_grip","rhs_acc_pkas_asval" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_20rnd_9x39mm_SP6",11,"rhs_mag_9x19_17",2,"SmokeShellGreen",3,"SmokeShellRed",3 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_tourniquet",2,"ACE_epinephrine","ACE_morphine" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_MG : CommonRussia { // спецназ [Machine Gunner]

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_pkp","rhs_acc_1p63" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_100Rnd_762x54mmR_7N26",3,"rhs_mag_9x19_17",2,"SmokeShellGreen",4 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_elasticBandage",4,"ACE_epinephrine",2,"ACE_morphine",2,"ACE_tourniquet",2 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_MED : CommonRussia { // спецназ [Medic]

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_medic" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_ak105","rhs_acc_dtk4short","rhs_acc_perst1ik","rhs_acc_1p63" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_45Rnd_545X39_7U1_AK",6,"rhs_mag_9x19_17",2,"SmokeShellYellow",4 };
	items[] += {"ACE_packingBandage",26,"ACE_quikclot",26,"ACE_elasticBandage",26,"ACE_bloodIV",12,"ACE_epinephrine",19,"ACE_morphine",16,"ACE_atropine",6,"ACE_surgicalKit","ACE_tourniquet",10 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";

};

class RU_SPC_SNP : CommonRussia { // спецназ [Sniper]

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "rhs_assault_umbts" };
	primary[] = { "rhs_weap_vss_grip","rhs_acc_pso1m21" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_20rnd_9x39mm_SP6",13,"rhs_mag_9x19_17",2,"SmokeShellYellow",4 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_elasticBandage",4,"ACE_tourniquet",2,"ACE_morphine",2 };
	binoculars[] = { "ACE_MX2A" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_SNP_T5000 : CommonRussia { // спецназ [Sniper ORSIS T-500]

	uniform[] = { "rhs_uniform_gorka_r_y" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_t5000","rhs_acc_dh520x56" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_5Rnd_338lapua_t5000",20,"rhs_mag_9x19_17",6,"SmokeShellYellow",4 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_elasticBandage",4,"ACE_tourniquet",2,"ACE_morphine",2 };
	binoculars[] = { "ACE_MX2A" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Bandanna_aviator" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_beanie_green" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_ENG : CommonRussia { // спецназ | Engineer

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "rhs_assault_umbts_engineer_empty" };
	primary[] = { "rhs_weap_ak104_zenitco01_b33_grip1","rhs_acc_pbs1","rhsusf_acc_anpeq15_bk_top_h","rhsusf_acc_eotech_552","rhs_acc_grip_rk6" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "" };
	magazines[] = { "rhs_30Rnd_762x39mm_U",8,"rhs_mag_9x19_17",2,"SmokeShellGreen",3,"SmokeShellRed",3 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_tourniquet",2,"ACE_epinephrine","ACE_morphine","ACE_DefusalKit","ACE_EntrenchingTool","MineDetector","ACE_wirecutter" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };

};

class RU_SPC_IGLA : CommonRussia { // спецназ [Operator]

	uniform[] = { "rhs_uniform_gorka_r_g" };
	vest[] = { "rhs_6b23_digi_6sh92_headset_spetsnaz" };
	backpack[] = { "rhs_assault_umbts" };
	primary[] = { "rhs_weap_ak104_zenitco01_b33_afg","rhs_acc_pbs1", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552", "rhsusf_acc_grip2" };
	secondary[] = { "rhs_weap_pya" };
	launcher[] = { "rhs_weap_igla" };
	magazines[] = { "rhs_30Rnd_762x39mm",10,"rhs_mag_9x19_17",2,"rhs_mag_9k38_rocket",2,"SmokeShellGreen",3,"SmokeShellRed",3 };
	items[] += { "ACE_packingBandage",4,"ACE_quikclot",4,"ACE_elasticBandage",4,"ACE_tourniquet",2,"ACE_epinephrine","ACE_morphine" };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_ess_black" };
	gps[] = { "o_EasyTrack_PDA" };
	headgear[] = { "rhs_altyn_novisor_bala" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };

};
