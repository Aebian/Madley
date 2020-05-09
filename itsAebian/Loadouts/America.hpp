class CommonAmerica : CommonBlufor { // [this, "Loadout"] call Poppy_fnc_applyLoadout;

	uniform[] = { "rhs_uniform_FROG01_wd" };
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

class US_ARMY_DEFAULT_UCP : CommonBlufor { // Base Loadout for US Army

	uniform[] = { "rhs_uniform_cu_ucp" };
	vest[] = { "rhsusf_iotv_ucp" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_m9" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_15Rnd_9x19_JHP", 4 };
	items[] += { };
	binoculars[] = { "Binocular" };
	goggles[] = { "G_Aviator" };
	gps[] = { "" };
	headgear[] = { "rhsusf_patrolcap_ucp" };
	map[] = { "ItemMap" };
	watch[] = { "" };

};

class US_ARMY_DEFAULT_UCP_NM : US_ARMY_DEFAULT_UCP { // US Army Soldier (No-Main)

primary[] = { "" };
postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";

};

class US_ARMY_DEFAULT_UCP_NG : US_ARMY_DEFAULT_UCP_NM { // US Army Soldier (Un-Armed)

primary[] = { "" };
secondary[] = { "" };

};

class US_ARMY_PL : US_ARMY_DEFAULT_UCP { // Army [Platoon Leader]

	uniform[] = { "rhs_uniform_cu_ucp" };
	vest[] = { "rhsusf_spcs_ucp_squadleader" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m4a1_blockII_KAC_wd","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m9" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",2,"rhs_mag_m18_red",2};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhssaf_beret_green" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ACE_Altimeter" };

};

class US_ARMY_RANGER_CMDR : US_ARMY_DEFAULT_UCP { // US Ranger Commander

	uniform[] = { "rhs_uniform_g3_mc" };
	vest[] = { "rhsusf_mbav_medic" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "optic_MRD_black" };
	launcher[] = { "" };
	magazines[] = { "11Rnd_45ACP_Mag", 4 };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_googles_black" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhssaf_beret_green" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ACE_Altimeter" };
	insignia[] = {"Spetsnaz223rdDetachment"};

};

class US_ARMY_RANGER_CMDR_ALT : US_ARMY_RANGER_CMDR {

primary[] = { "rhs_weap_m249_pip_L_vfg", "rhsusf_acc_saw_bipod", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d", "rhsusf_200Rnd_556x45_soft_pouch" };
magazines[] += { "rhsusf_200Rnd_556x45_soft_pouch", 3 };

};

class US_ARMY_RANGER_LEAD : US_ARMY_PL { // Army [Element Leader]

	uniform[] = { "rhs_uniform_g3_mc" };
	vest[] = { "rhsusf_mbav_light" };
	backpack[] = { "rhsusf_assault_eagleaiii_ocp" };
	primary[] = { "rhs_weap_SCARH_FDE_CQC", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d", "rhsusf_acc_grip2_tan" };
	secondary[] = { "hgun_Pistol_heavy_01_F", "acc_flashlight_pistol" };
	magazines[] = { "rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7, "11Rnd_45ACP_Mag", 3, "Laserbatteries" };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "Laserdesignator_03" };
	goggles[] = { "rhsusf_shemagh2_gogg_tan" };
	headgear[] = { "rhsusf_mich_bare_norotos_alt", "rhsusf_mich_bare_norotos_alt_tan", "rhsusf_mich_bare_norotos_alt_semi"};
	insignia[] = {"Spetsnaz223rdDetachment"};

};

class US_ARMY_RANGER_RFL : US_ARMY_RANGER_LEAD { // US Army Ranger (Rifleman)

	vest[] = { "rhsusf_mbav_rifleman" };
	backpack[] = { "" };
	magazines[] = { "rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7, "11Rnd_45ACP_Mag", 3 };
	items[] = {"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",1,"rhs_mag_m18_green",1,"rhs_mag_m18_red",2};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	insignia[] = {"Spetsnaz223rdDetachment"};

};

class US_ARMY_RANGER_ARM : US_ARMY_RANGER_RFL {

vest[] = { "rhsusf_mbav_mg" };
primary[] = { "rhs_weap_m249_pip_L_vfg", "rhsusf_acc_saw_bipod", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d", "rhsusf_200Rnd_556x45_soft_pouch" };
magazines[] = { "rhsusf_200Rnd_556x45_soft_pouch", 3, "11Rnd_45ACP_Mag", 2 };

};

class US_ARMY_RANGER_ARM_NEW : US_ARMY_RANGER_ARM {

primary[] = { "MMG_02_sand_F", "bipod_01_F_blk", "rhsusf_acc_anpeq15side", "optic_ERCO_snd_F", "130Rnd_338_Mag" };
magazines[] = { "130Rnd_338_Mag", 4, "11Rnd_45ACP_Mag", 2 };
backpack[] = { "B_Kitbag_tan" };

};

class US_ARMY_RANGER_MED : US_ARMY_RANGER_RFL { // US Army Ranger (Medic)

vest[] = { "rhsusf_mbav_medic" };
backpack[] = { "B_Kitbag_cbr" };
primary[] = { "rhs_weap_mk18_KAC_wd", "muzzle_snds_m_khk_F", "acc_pointer_IR", "rhsusf_acc_compm4", "rhsusf_acc_grip2_wd" };
magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 7, "11Rnd_45ACP_Mag", 2 };
items[] += { "ACE_surgicalKit","ACE_fieldDressing",20,"ACE_elasticBandage",20,"ACE_quikclot",20,"ACE_packingBandage",20, "ACE_bloodIV",10, "ACE_epinephrine",16, "ACE_morphine", 16, "ACE_tourniquet", 8, "rhs_mag_m18_green", 6 };
preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";

};


class US_ARMY_RANGER_MED_NG : US_ARMY_RANGER_MED { // US Army Ranger (Medic, No-Gun [Main])

primary[] = { "" };
postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";

};

class US_ARMY_RANGER_MXM : US_ARMY_RANGER_RFL { // US Army Ranger (Marksman)

	uniform[] = { "rhs_uniform_g3_mc" };
	vest[] = { "rhsusf_mbav_rifleman" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_SCARH_FDE_LB_grip3", "rhsusf_acc_anpeq15side", "rhsusf_acc_su230_mrds_c", "rhsusf_acc_grip2_tan" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7, "11Rnd_45ACP_Mag", 3 };
	items[] += {  };
	nvgs[] = { "" };

};

class US_ARMY_RANGER_SNP : US_ARMY_RANGER_RFL { // US Army Ranger (Sniper)

	uniform[] = { "rhs_uniform_g3_mc" };
	vest[] = { "rhsusf_mbav_rifleman" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m24sws_d", "rhsusf_acc_m24_muzzlehider_d" ,"rhsusf_acc_M8541_low_d" ,"rhsusf_5Rnd_762x51_m118_special_Mag" ,"rhsusf_acc_harris_swivel" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_5Rnd_762x51_m993_Mag", 8, "rhsusf_5Rnd_762x51_m118_special_Mag", 6 , "11Rnd_45ACP_Mag", 3 };
	items[] += { "rhsusf_acc_eotech_552_d", "rhsusf_acc_m24_silencer_d" };
	nvgs[] = { "" };

};

class US_ARMY_AIR_CMDR : US_ARMY_DEFAULT_UCP { // US Army Air Commander

	uniform[] = { "rhs_uniform_cu_ucp" };
	vest[] = { "rhsusf_spcs_ucp" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "optic_MRD_black" };
	launcher[] = { "" };
	magazines[] = { "11Rnd_45ACP_Mag", 4 };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhs_googles_black" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhssaf_beret_para" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ACE_Altimeter" };
	insignia[] = {"Spetsnaz223rdDetachment"};

};


class US_ARMY_VHC : US_ARMY_DEFAULT_UCP { // Vehicle Crew

	uniform[] = { "rhs_uniform_cu_ucp" };
	vest[] = { "rhsusf_spcs_ucp_crewman" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m4a1_blockII_KAC_wd", "rhs_acc_1p87" };
	secondary[] = { "rhsusf_weap_m9" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_100Rnd_556x45_M855_cmag",3,"rhsusf_mag_15Rnd_9x19_FMJ",2 };
	items[] += { "ACE_packingBandage",5,"ACE_quikclot",5, "ACE_tourniquet",2,"rhs_mag_m18_purple",3  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_cvc_green_alt_helmet" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 1, true];";

};


class US_ARMY_SPC_SNIPER : US_ARMY_DEFAULT_UCP { // Army Special Scout Sniper

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "rhsusf_spcs_ocp_sniper" };
	backpack[] = { "ace_gunbag" };
	primary[] = { "rhs_weap_XM2010_d", "rhsusf_acc_M2010S", "rhsusf_acc_anpeq15side", "rhsusf_acc_M8541_mrds", "bipod_02_F_hex"};
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_5Rnd_300winmag_xm2010", 10, "rhsusf_mag_7x45acp_MHP", 3 };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_bare_norotos_alt_semi" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "" };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
	postLoadout = "(unitbackPack (_this select 0)) additemCargo [""rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"",9];(unitbackPack (_this select 0)) additemCargo [""rhs_weap_mk18_KAC_wd"",1];(unitbackPack (_this select 0)) additemCargo [""rhsusf_acc_nt4_tan"",1];(unitbackPack (_this select 0)) additemCargo [""rhs_acc_perst1ik_ris"",1];(unitbackPack (_this select 0)) additemCargo [""optic_Hamr_khk_F"",1];(unitbackPack (_this select 0)) additemCargo [""rhsusf_acc_grip2_wd"",1];";
};


class US_ARMY_SPC_SNIPER_ALT : US_ARMY_DEFAULT_UCP { // Army Special Scout Sniper (Alternate)

    uniform[] = { "rhs_uniform_g3_m81" };
    vest[] = { "rhsusf_spcs_ocp_sniper" };
    backpack[] = { "ace_gunbag" };
    primary[] = { "rhs_weap_mk18_KAC_wd", "rhsusf_acc_nt4_tan", "rhs_acc_perst1ik_ris", "optic_Hamr_khk_F", "rhsusf_acc_grip2_wd"};
    secondary[] = { "rhsusf_weap_m1911a1" };
    launcher[] = { "" };
    magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 9, "rhsusf_mag_7x45acp_MHP", 3,};
    items[] += { "ACE_EarPlugs",1 };
    binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
    compass[] = { "ItemCompass" };
    goggles[] = { "rhsusf_shemagh2_gogg_od" };
    gps[] = { "ItemGPS" };
    headgear[] = { "rhsusf_mich_bare_norotos_alt_semi" };
    map[] = { "ItemMap" };
    nvgs[] = { "rhsusf_ANPVS_14" };
    watch[] = { "" };
    preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
    postLoadout = "(unitbackPack (_this select 0)) additemCargo [""rhsusf_5Rnd_300winmag_xm2010"",10];(unitbackPack (_this select 0)) additemCargo [""rhs_weap_XM2010_d"",1];(unitbackPack (_this select 0)) additemCargo [""rhsusf_acc_anpeq15side"",1];(unitbackPack (_this select 0)) additemCargo [""rhsusf_acc_M8541_mrds"",1];(unitbackPack (_this select 0)) additemCargo [""bipod_02_F_hex"",1];";  
};


class US_ARMY_SPC_SPOTTER : US_ARMY_DEFAULT_UCP { // Army Special Scout Spotter

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "rhsusf_spcs_ocp_sniper" };
	backpack[] = { "rhssaf_kitbag_smb" };
	primary[] = { "rhs_weap_mk18_KAC_wd", "rhsusf_acc_nt4_tan", "rhs_acc_perst1ik_ris", "optic_Hamr_khk_F", "rhsusf_acc_grip2_wd"};
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 9, "rhsusf_mag_7x45acp_MHP", 3 };
	items[] += { "ACE_EarPlugs",1 };
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "B_UAVTerminal" };
	headgear[] = { "rhsusf_mich_bare_norotos_alt_semi" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "" };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
	postLoadout = "(unitbackPack (_this select 0)) additemCargo [""rhsusf_5Rnd_300winmag_xm2010"",10];";
	
};

class US_ARMY_SPC_LDF : US_ARMY_DEFAULT_UCP { // Army Special WDL Guy

	uniform[] = { "rhs_uniform_g3_rgr" };
	vest[] = { "V_CarrierRigKBT_01_light_EAF_F" };
	backpack[] = { "rhssaf_kitbag_digital" };
	primary[] = { "arifle_MSBS65_camo_F", "muzzle_snds_65_TI_blk_F", "optic_Hamr", "acc_pointer_IR" };
	secondary[] = { "hgun_Pistol_heavy_01_green_F", "optic_MRD_black" };
	launcher[] = { "" };
	magazines[] = { "30Rnd_65x39_caseless_msbs_mag",9,"rhsusf_mag_7x45acp_MHP",3 };
	items[] += { "ACE_packingBandage",6,"ACE_quikclot",6, "ACE_EarPlugs",1,"MineDetector",1  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_od" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_bare_norotos_arc_alt" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "ACE_Altimeter" };
    preLoadout = "[(_this select 0),"""",""male02rus""] call BIS_fnc_setIdentity;(_this select 0) setVariable [""ACE_GForceCoef"", 0];(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true];(_this select 0) setVariable [""ACE_IsEngineer"", 2, true];";
	postLoadout = "(unitbackPack (_this select 0)) additemCargo [""30Rnd_65x39_caseless_msbs_mag"",6];(unitbackPack (_this select 0)) additemCargo [""HandGrenade"",2];(unitbackPack (_this select 0)) additemCargo [""11Rnd_45ACP_Mag"",4];(unitbackPack (_this select 0)) additemCargo [""ACE_CableTie"",4];(unitbackPack (_this select 0)) additemCargo [""ACE_Clacker"",1];(unitbackPack (_this select 0)) additemCargo [""ACE_DefusalKit"",1];(unitbackPack (_this select 0)) additemCargo [""ACE_wirecutter"",1];";

};


class US_ARMY_PLT : US_ARMY_DEFAULT_UCP { // Army Pilot with HGU-65

	uniform[] = { "rhs_uniform_abu" };
	vest[] = { "V_TacVest_oli" };
	backpack[] = { "" };
	primary[] = { "rhsusf_weap_MP7A2_aor1", "rhsusf_acc_anpeq15A", "optic_Yorris", "rhsusf_mag_40Rnd_46x30_FMJ" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_40Rnd_46x30_FMJ",5,"rhsusf_mag_7x45acp_MHP",3 };
	items[] += { "ACE_packingBandage",6,"ACE_quikclot",6, "ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_tan" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_hgu56p" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class US_ARMY_PLT_MED : US_ARMY_PLT { // Army MEDAVAC Pilot

	goggles[] = { "rhsusf_shemagh2_od" };
	headgear[] = { "rhsusf_hgu56p_visor_tan" };

};

class US_ARMY_PLT_AH64 : US_ARMY_PLT { // Army Pilot with IHADSS (AH-64D Apache ready)

	goggles[] = { "rhsusf_shemagh2_od" };
	headgear[] = { "rhsusf_ihadss" };
	nvgs[] = { };

};


class US_ARMY_HGUN : US_ARMY_PLT { // Army Helicopter Gunner with HGU-65

	primary[] = { "rhs_weap_mk18_KAC_wd", "rhsusf_acc_anpeq15A", "rhsusf_acc_eotech_552_wd", "rhs_mag_30Rnd_556x45_M855A1_Stanag" };
	magazines[] = { "rhs_mag_30Rnd_556x45_M855A1_Stanag",3,"rhsusf_mag_7x45acp_MHP",3 };
	goggles[] = { "rhsusf_shemagh2_od" };
	headgear[] = { "rhsusf_hgu56p_visor_mask" };

};

class US_ARMY_HGUN_FLIR : US_ARMY_PLT {

	primary[] = { "MMG_02_sand_F", "bipod_01_F_blk", "rhsusf_acc_anpeq15side", "rhsusf_acc_anpas13gv1", "130Rnd_338_Mag" };
	magazines[] = { "130Rnd_338_Mag",1,"rhsusf_mag_7x45acp_MHP",2 };
	goggles[] = { "rhsusf_shemagh2_od" };
	headgear[] = { "rhsusf_hgu56p_visor_mask" };

};

class US_ARMY_JPLT : US_ARMY_DEFAULT_UCP { // Army Jet Pilot

	uniform[] = { "rhs_uniform_g3_rgr" };
	vest[] = { "rhs_vydra_3m" };
	backpack[] = { "rhs_d6_Parachute_backpack" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_7x45acp_MHP",3 };
	items[] += { "ACE_packingBandage",6,"ACE_quikclot",6, "ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_grn" };
	gps[] = { "ItemGPS" };
	headgear[] = { "RHS_jetpilot_usaf" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class US_AIRFORCE_JPLT : CommonAmerica { // Airforce Jet Pilot

	uniform[] = { "U_I_pilotCoveralls" };
	vest[] = { "" };
	backpack[] = { "B_Parachute" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_glock17g4" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_17Rnd_9x19_JHP",3 };
	items[] += { "ACE_packingBandage",6,"ACE_quikclot",6, "ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_grn" };
	gps[] = { "ItemGPS" };
	headgear[] = { "RHS_jetpilot_usaf" };
	map[] = { "ItemMap" };
	nvgs[] = { "rhsusf_ANPVS_14" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};	


class US_AIRFORCE_STARGATE03_TL : CommonAmerica { // Airforce Stargate 03 Team-Lead

	uniform[] = { "rhs_uniform_acu_oefcp" };
	vest[] = { "rhsusf_spcs_ocp_squadleader" };
	backpack[] = { "" };
	primary[] = { "SMG_03C_TR_black", "rhsusf_acc_RM05", "50Rnd_570x28_SMG_03" };
	secondary[] = { "rhsusf_weap_m9", "rhsusf_mag_15Rnd_9x19_JHP" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_15Rnd_9x19_JHP",3, "50Rnd_570x28_SMG_03", 11 };
	items[] += { "ACE_packingBandage",6,"ACE_quikclot",6, "ACE_tourniquet",2,"rhs_mag_m18_purple",2  };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhsusf_bino_lerca_1200_tan" };
	compass[] = { "ItemCompass" };
	goggles[] = { "rhsusf_shemagh2_gogg_tan" };
	gps[] = { "B_UavTerminal" };
	headgear[] = { "H_Watchcap_camo" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ChemicalDetector_01_watch_F" };
	preLoadout = "[(_this select 0),""Stargate03""] call bis_fnc_setUnitInsignia; (_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};	

class US_AIRFORCE_STARGATE03_RFL : US_AIRFORCE_STARGATE03_TL { // Airforce Stargate 03 Member

	vest[] = { "rhsusf_spcs_ocp_rifleman_alt" };
	headgear[] = { "H_Watchcap_khk" };
	preLoadout = "[(_this select 0),""Stargate03""] call bis_fnc_setUnitInsignia; (_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};


class US_NAVY_ADM : CommonAmerica { // Admiral

	uniform[] = { "FUTARM_U_BASIC_MT" };
	vest[] = { "usm_vest_safety" };
	backpack[] = { "" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",4,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "rhs_pdu4" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "ItemGPS" };
	headgear[] = { "FUTARM_H_MILCAP_MT" };
	map[] = { "ItemMap" };
	nvgs[] = { "" };
	watch[] = { "ACE_Altimeter" };

};


class US_NAVY_RADM : US_NAVY_ADM { // Rear Admiral

	gps[] = {"B_EasyTrack_Tablet"};

};


class US_MARINES_PL : CommonAmerica { // Marines [Platoon Leader]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_squadleader" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m4a1_d_mstock","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",5,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",3,"rhs_mag_m18_red",3};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_helmet_marpatwd_norotos_arc_headset" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_JTAC : CommonAmerica { // Marines [Joint Terminal Attack Controller]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_patchless_radio" };
	backpack[] = { "B_Carryall_cbr" };
	primary[] = { "rhs_weap_m4a1_m203s_d","rhsusf_acc_anpeq15side","optic_ERCO_snd_F" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"rhs_mag_m18_green",5,"rhs_mag_m18_purple",5,"rhs_mag_m18_red",5,"rhs_mag_m661_green",8,"rhs_mag_m662_red",8,"rhs_mag_m713_Red",5,"rhs_mag_m714_White",5,"rhs_mag_m715_Green",5,"rhs_mag_m716_yellow",5,"Laserdesignator_03",1,"Laserbatteries",3 };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "ACE_Vector" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_helmet_marpatwd_norotos_arc_headset" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_SQL : CommonAmerica { // Marines [Squad Leader]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_squadleader" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m4a1_d_mstock","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot", 3, "ACE_fieldDressing", 4, "ACE_packingBandage", 4, "ACE_tourniquet", 2, "rhs_mag_m18_green", 1, "rhs_mag_m18_red", 1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_helmet_marpatwd_norotos_arc_headset" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_FTL : CommonAmerica { // Marines [Fire Team Leader]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_squadleader" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_mk18_KAC_wd","optic_ACO_grn" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1,"rhs_mag_m18_red",1};
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Bandanna_sport" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_opscore_ut_pelt_nsw_cam" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_ARM : CommonAmerica { // Marines [Automatic Rifleman]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_iar" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m249_pip_L_vfg","rhsusf_acc_eotech_552" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_200Rnd_556x45_soft_pouch",3,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += { "ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Bandanna_sport" };
	gps[] = { "" };
	headgear[] = { "rhsusf_opscore_ut_pelt_nsw_cam" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_GND : CommonAmerica { // Marines [Grenadier]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_teamleader" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m32" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_6Rnd_M397_HET",6,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += { "ACE_quikclot", 3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhsusf_opscore_ut_pelt_nsw_cam" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_RFL : CommonAmerica { // Marines [Rifleman]

	uniform[] = { "rhs_uniform_FROG01_wd" };
	vest[] = { "rhsusf_spc_light" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_hk416d10_LMT","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk262_Stanag",8,"rhsusf_mag_7x45acp_MHP",2, "rhsusf_200Rnd_556x45_soft_pouch", 4 };
	items[] += { "ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1};
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "" };
	headgear[] = { "rhsusf_opscore_ut_pelt_nsw_cam" };
	map[] = { "" };
	watch[] = { "ACE_Altimeter" };


};

class US_MARINES_WSL : CommonAmerica { // Marines [Weapon Squad Leader]

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "V_PlateCarrierSpec_rgr" };
	backpack[] = { "B_TacticalPack_oli" };
	primary[] = { "rhs_weap_hk416d145","rhsusf_acc_anpeq15side","optic_ERCO_blk_F","rhs_acc_grip_ffg2" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",22,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",3,"ACE_fieldDressing",4,"ACE_packingBandage",4,"ACE_tourniquet",2,"rhs_mag_m18_green",1,"rhs_mag_m18_red",1 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_ach_bare_semi_headset" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_MG : CommonAmerica { // Marines [Heavy Machine Gunner]

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "V_PlateCarrierSpec_tna_F" };
	backpack[] = { "rhssaf_kitbag_smb" };
	primary[] = { "MMG_01_tan_F","rhsusf_acc_EOTECH","bipod_01_F_snd" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "150Rnd_93x64_Mag",4,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += { "ACE_quikclot", 3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "ffaa_Glasses" };
	gps[] = { "" };
	headgear[] = { "ffaa_moe_casco_02_2_b" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_AMG : CommonAmerica { // Marines [Assistant Heavy Machine Gunner]

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "V_PlateCarrierSpec_tna_F" };
	backpack[] = { "rhssaf_kitbag_smb" };
	primary[] = { "rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",12,"rhsusf_mag_7x45acp_MHP",3,"150Rnd_93x64_Mag",3 };
	items[] += { "ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "ffaa_Glasses" };
	gps[] = { "" };
	headgear[] = { "ffaa_moe_casco_02_2_b" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_SPEC_AT : CommonAmerica { // Marines [AT Specialist]

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "V_PlateCarrierSpec_tna_F" };
	backpack[] = { "rhssaf_kitbag_smb" };
	primary[] = { "rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "launch_O_Titan_short_ghex_F" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",7,"rhsusf_mag_7x45acp_MHP",3,"Titan_AT",3 };
	items[] += { "ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = { "" };
	compass[] = { "ItemCompass" };
	goggles[] = { "ffaa_Glasses" };
	gps[] = { "" };
	headgear[] = { "ffaa_moe_casco_02_2_b" };
	map[] = { "ItemMap" };	
	watch[] = { "ACE_Altimeter" };

};

class US_MARINES_SPEC_AT_ASS : CommonAmerica { // Marines [Assistant AT Specialist]

	uniform[] = { "rhs_uniform_g3_m81" };
	vest[] = { "V_PlateCarrierSpec_tna_F" };
	backpack[] = { "rhssaf_kitbag_smb" };
	primary[] = { "rhs_weap_mk18_KAC_wd","optic_ERCO_khk_F" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",6,"rhsusf_mag_7x45acp_MHP",3,"Titan_AT",2 };
	items[] += { "ACE_quikclot",3,"ACE_fieldDressing",3,"ACE_packingBandage",3,"ACE_tourniquet",2,"rhs_mag_m18_green",1 };
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "ffaa_Glasses" };
	gps[] = { "" };
	headgear[] = { "ffaa_moe_casco_02_2_b" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};


class US_NAVY_JPLT : CommonAmerica { // Navy [Jet Pilot]

	uniform[] = { "U_B_PilotCoveralls" };
	vest[] = { "TFA_PlateCarrierH_fol" };
	backpack[] = { "ACE_NonSteerableParachute" };
	primary[] = { "" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",4,"ACE_microDAGR" };
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "H_PilotHelmetFighter_B" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class US_NAVY_MPLT : CommonAmerica { // Air Medavac Pilot

	uniform[] = { "rhs_uniform_g3_tan" };
	vest[] = { "V_PlateCarrier1_rgr" };
	backpack[] = { "ACE_NonSteerableParachute" };
	primary[] = { "rhsusf_weap_MP7A2_desert", "optic_Aco" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_mag_40Rnd_46x30_AP",10,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {"ACE_quikclot",6,"ACE_fieldDressing",6,"ACE_packingBandage",6,"ACE_tourniquet",2,"ACE_microDAGR"};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_hgu56p" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";

};

class US_NAVY_MEDIC : CommonAmerica {  // Navy Medic

	uniform[] = { "rhs_uniform_g3_rgr" };
	vest[] = { "V_PlateCarrier2_rgr" };
	backpack[] = { "B_Carryall_oli" };
	primary[] = { "rhs_weap_m4a1_blockII_KAC_wd", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += { "ACE_surgicalKit","ACE_fieldDressing",24,"ACE_elasticBandage",24,"ACE_quikclot",24,"ACE_packingBandage",24, "ACE_bloodIV",12, "ACE_epinephrine",22, "ACE_morphine", 22, "ACE_tourniquet", 8, "rhs_mag_m18_green", 4 };
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_bare_alt_semi" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";

};

class US_NAVY_PARAM : CommonAmerica {  // Navy Paramedic

	uniform[] = { "rhs_uniform_g3_rgr" };
	vest[] = { "V_PlateCarrier1_rgr" };
	backpack[] = { "" };
	primary[] = { "rhs_weap_m4a1_blockII_KAC_wd", "rhsusf_acc_anpeq15side", "rhsusf_acc_eotech_552_d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhs_mag_30Rnd_556x45_Mk318_Stanag",8,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += { "ACE_fieldDressing", 6, "ACE_elasticBandage", 6, "ACE_quikclot", 6, "ACE_packingBandage", 6, "ACE_bloodIV", 2, "ACE_epinephrine", 8, "ACE_morphine", 8, "ACE_tourniquet", 4, "rhs_mag_m18_green", 3};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_mich_bare_alt_semi" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";

};

class US_NAVY_AMCQSEC : CommonAmerica { // Air Medevac Perimeter Security

	uniform[] = { "rhs_uniform_g3_tan" };
	vest[] = { "V_PlateCarrier1_rgr" };
	backpack[] = { "ACE_NonSteerableParachute" };
	primary[] = { "rhs_weap_m240G", "rhsusf_acc_ACOG2_3d" };
	secondary[] = { "rhsusf_weap_m1911a1" };
	launcher[] = { "" };
	magazines[] = { "rhsusf_100Rnd_762x51_m80a1epr",4,"rhsusf_mag_7x45acp_MHP",2 };
	items[] += {};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = { "Binocular" };
	compass[] = { "ItemCompass" };
	goggles[] = { "G_Aviator" };
	gps[] = { "ItemGPS" };
	headgear[] = { "rhsusf_hgu56p_mask" };
	map[] = { "ItemMap" };
	watch[] = { "ACE_Altimeter" };

};