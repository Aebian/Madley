// United States Army - File

class US_ARMY_DEFAULT_UCP : CommonBlufor // Base Loadout for US Army 
{ 
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {""};
	items[] += { };
	compass[]= {""};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	goggles[] = {"G_Aviator"};
	gps[] = {""};
	headgear[] = {"rhsusf_patrolcap_ucp"};
	map[] = {"ItemMap"};
	watch[] = {""};
};

class US_ARMY_DEFAULT_OCP : US_ARMY_DEFAULT_UCP
{
	uniform[] = {"rhs_uniform_cu_ocp"};
}

class US_ARMY_DEFAULT_UCP_NM : US_ARMY_DEFAULT_UCP // US Army Soldier (No-Main)
{
	primary[] = {""};
	postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";
};

class US_ARMY_DEFAULT_UCP_NG : US_ARMY_DEFAULT_UCP_NM // US Army Soldier (Un-Armed) 
{
	primary[] = {""};
	secondary[] = {""};
	nvgs[] = {""};
};

// US Army Infantry //

class US_ARMY_AIR_CMDR : US_ARMY_DEFAULT_UCP // US Army Air Commander
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","optic_MRD_black","11Rnd_45ACP_Mag"};
	launcher[] = {""};
	magazines[] = {"11Rnd_45ACP_Mag", 4 };
	items[] += {"ACE_EarPlugs",1 };
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_para"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
	insignia[] = {"Spetsnaz223rdDetachment"};
	postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";
};

class US_ARMY_OPL : US_ARMY_DEFAULT_OCP // Army [Platoon Leader] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Squadleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_KAC_wd","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M193_Stanag"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",6,"rhsusf_mag_15Rnd_9x19_JHP",2 };
	items[] += {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",2,"rhs_mag_m18_red",2};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_green"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
};

class US_ARMY_UPL : US_ARMY_OPL // Army [Platoon Leader] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_squadleader"};
};


class US_ARMY_OJTAC : US_ARMY_OPL // Army [JTAC] OCP 
{
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	primary[] = {"rhs_weap_m4_m203","rhsusf_acc_SF3P556","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG_RMR","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",6,"rhsusf_mag_15Rnd_9x19_JHP",2,"rhs_mag_M397_HET",2};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"Laserbatteries",1,"rhs_mag_m18_green",4,"rhs_mag_m18_purple",4,"rhs_mag_m18_red",4,"rhs_mag_m18_yellow",4,"rhs_mag_m713_Red",3,"rhs_mag_m716_yellow",3,"rhs_mag_m715_Green",3,"NVGogglesB_blk_F",1};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148", "ACRE_PRC148"};
	binoculars[] = {"Laserdesignator"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_oakley_goggles_blk"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"rhsusf_ach_helmet_headset_ocp","rhsusf_ach_helmet_headset_ocp_alt"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
};

class US_ARMY_UJTAC : US_ARMY_OJTAC // Army [JTAC] UCP 
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_squadleader"};
	headgear[] = {"rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
};

class US_ARMY_OSQL : US_ARMY_OPL // Army [Squad Leader] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Squadleader"};
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	primary[] = {"rhs_weap_m4_m203","rhsusf_acc_anpeq15side","rhsusf_acc_ACOG3_3d","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_M397_HET"};
	secondary[] = {""};
	launcher[] = {"rhs_weap_m136"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",8,"rhs_mag_M397_HET",5,"rhs_mag_m662_red",2,"rhs_mag_m661_green",2,"rhs_mag_m714_White",6,"rhs_mag_m715_Green",6,"rhs_mag_m713_Red",6};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",4,"rhs_mag_m18_purple",3,"rhs_mag_m18_red",2};
	lrradios[] = {"ACRE_PRC148"};
	goggles[] = {""};
	headgear[] = {"rhsusf_ach_helmet_ocp_alt","rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ESS_ocp","rhsusf_ach_helmet_headset_ocp","rhsusf_ach_helmet_headset_ocp_alt","rhsusf_ach_helmet_headset_ess_ocp"};
	nvgs[] = {"rhsusf_ANPVS_14"};
};

class US_ARMY_USQL : US_ARMY_OSQL // Army [Squad Leader] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Squadleader"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OFTL : US_ARMY_OSQL // Army [Fire Team Leader] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Teamleader"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4","rhsusf_acc_anpeq15side","rhsusf_acc_g33_xps3","rhs_mag_30Rnd_556x45_M193_Stanag"};	
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",7};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",2,"rhs_mag_m18_purple",3,"rhs_mag_m18_red",3};
	lrradios[] = {""};
	binoculars[] = {""};
};

class US_ARMY_UFTL : US_ARMY_OFTL // Army [Fire Team Leader] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Teamleader"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_ORFL : US_ARMY_OFTL // Army [Rifleman] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Rifleman"};
	primary[] = {"rhs_weap_m4","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M193_Stanag"};	
	launcher[] = {""};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",4,"rhs_mag_m18_purple",1};
};

class US_ARMY_URFL : US_ARMY_ORFL // Army [Rifleman] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Rifleman"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OARM : US_ARMY_ORFL // Army [Automatic Rifleman] OCP
{
	vest[] = {"rhsusf_iotv_ocp_SAW"};
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_eotech_552","rhsusf_200Rnd_556x45_soft_pouch_coyote"};
	magazines[]= {"rhsusf_200Rnd_556x45_soft_pouch_coyote", 2};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",2,"rhs_mag_m18_purple",1,"rhs_mag_m18_red",2};
};

class US_ARMY_UARM : US_ARMY_OARM // Army [Automatic Rifleman] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_SAW"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OGND : US_ARMY_ORFL // Army [Grenadier] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Grenadier"};
	primary[] = {"rhs_weap_m4_m320","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhs_mag_30Rnd_556x45_M193_Stanag","rhs_mag_M397_HET"};	
	magazines[]= {"rhs_mag_30Rnd_556x45_M193_Stanag", 6,"rhs_mag_M397_HET", 12};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",1};
};

class US_ARMY_UGND : US_ARMY_OGND // Army [Grenadier] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Grenadier"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OMXM : US_ARMY_ORFL // Army [Marksman] OCP
{
	vest[] = {"rhsusf_spcs_ocp_sniper"};
	primary[] = {"rhs_weap_sr25_ec_d","rhsusf_acc_anpeq15side","rhsusf_acc_su230a_mrds_c_3d","rhsusf_20Rnd_762x51_SR25_m993_Mag"};	
	magazines[] = {"rhsusf_20Rnd_762x51_SR25_m993_Mag",8};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",2,"rhs_mag_m18_purple",1};
};

class US_ARMY_UMXM : US_ARMY_OMXM // Army [Marksman] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_sniper"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OHMG : US_ARMY_OARM // Army [Machine Gunner] OCP
{
	vest[] = {"rhsusf_spcs_ocp_machinegunner"};
	primary[] = {"rhs_weap_m240B","rhsusf_acc_ARDEC_M240","optic_Hamr","rhsusf_100Rnd_762x51"};
	secondary[] = {"rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"};
	magazines[]= {"rhsusf_100Rnd_762x51", 3,"rhsusf_mag_15Rnd_9x19_JHP", 4};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m18_green",1,"rhs_mag_m18_red",2};
};

class US_ARMY_UHMG : US_ARMY_OHMG // Army [Machine Gunner] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_machinegunner"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_OMGA : US_ARMY_ORFL // Army [Machine Gunner Assistant] OCP
{
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	magazines[] += {"rhsusf_100Rnd_762x51", 4};
};

class US_ARMY_UMGA : US_ARMY_OMGA // Army [Machine Gunner Assistant] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_spcs_ucp_rifleman_alt"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
};

class US_ARMY_OATS : US_ARMY_ORFL // Army [AT-Specialist] OCP
{
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	launcher[] = {"rhs_weap_maaws","rhs_optic_maaws","rhs_mag_maaws_HEAT"};
	magazines[] += {"rhs_mag_maaws_HEAT", 2};
};

class US_ARMY_UATS : US_ARMY_OATS // Army [AT-Specialist] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_spcs_ucp_rifleman_alt"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
};


class US_ARMY_OASA : US_ARMY_ORFL // Army [AT-Specialist Assistant] OCP
{
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	magazines[] += {"rhs_mag_maaws_HEAT", 2};
};

class US_ARMY_UASA : US_ARMY_OASA // Army [AT-Specialist Assistant] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_rifleman","rhsusf_spcs_ucp_rifleman_alt"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
	backpack[] = {"rhsusf_assault_eagleaiii_ucp"};
};

class US_ARMY_OENG : US_ARMY_ORFL // Army [Engineer] OCP
{
	vest[] = {"rhsusf_iotv_ocp_Repair"};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",2,"rhs_mag_m18_purple",1};
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 1, true];";
   	postLoadout = "(unitbackPack (_this select 0)) additemCargo [""ToolKit"",1];(unitbackPack (_this select 0)) additemCargo [""ACE_wirecutter"",1];(unitbackPack (_this select 0)) additemCargo [""MineDetector"",1];(unitbackPack (_this select 0)) additemCargo [""ACE_EntrenchingTool"",2];(unitbackPack (_this select 0)) additemCargo [""ACE_CableTie"",6];(unitbackPack (_this select 0)) additemCargo [""APERSMineDispenser_Mag"",1];";
};

class US_ARMY_UENG : US_ARMY_OENG // Army [Engineer] UCP
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp_Repair"};
	headgear[] = {"rhsusf_ach_helmet_ucp_alt","rhsusf_ach_helmet_ucp","rhsusf_ach_helmet_ESS_ucp","rhsusf_ach_helmet_headset_ucp","rhsusf_ach_helmet_headset_ucp_alt","rhsusf_ach_helmet_headset_ess_ucp"};
};

class US_ARMY_VHC : US_ARMY_DEFAULT_UCP // Vehicle Crew
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_spcs_ucp_crewman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_KAC_wd","rhs_acc_1p87", "rhs_mag_30Rnd_556x45_M193_Stanag"};
	secondary[] = {"rhsusf_weap_m9"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",3,"rhsusf_mag_15Rnd_9x19_FMJ",2 };
	items[] += {"ACE_packingBandage",5,"ACE_quikclot",5,"ACE_tourniquet",2,"rhs_mag_m18_purple",3};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_cvc_green_alt_helmet"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"", 1, true];";
};

// US Army Rangers // 

class US_ARMY_RANGER_CMDR : US_ARMY_DEFAULT_UCP // US Ranger Commander
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_medic"};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","optic_MRD_black"};
	launcher[] = {""};
	magazines[] = {"11Rnd_45ACP_Mag", 4 };
	items[] += {"ACE_EarPlugs",1 };
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_googles_black"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_green"};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ACE_Altimeter"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_CMDR_ALT : US_ARMY_RANGER_CMDR 
{
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_saw_bipod","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_200Rnd_556x45_soft_pouch"};
	magazines[] += {"rhsusf_200Rnd_556x45_soft_pouch", 3 };
};

class US_ARMY_RANGER_LEAD : US_ARMY_OPL // Army [Element Leader]
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_light"};
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	primary[] = {"rhs_weap_SCARH_FDE_CQC","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_acc_grip2_tan" ,"rhs_mag_20Rnd_SCAR_762x51_m61_ap"};
	secondary[] = {"hgun_Pistol_heavy_01_F","acc_flashlight_pistol"};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7,"11Rnd_45ACP_Mag", 3,"Laserbatteries"};
	items[] += {"ACE_EarPlugs",1 };
	binoculars[] = {"Laserdesignator_03"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	headgear[] = {"rhsusf_mich_bare_norotos_alt","rhsusf_mich_bare_norotos_alt_tan","rhsusf_mich_bare_norotos_alt_semi"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_RFL : US_ARMY_RANGER_LEAD // US Army Ranger (Rifleman)
{
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7,"11Rnd_45ACP_Mag", 3 };
	items[] = {"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",1,"rhs_mag_m18_green",1,"rhs_mag_m18_red",2};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	insignia[] = {"Spetsnaz223rdDetachment"};
};

class US_ARMY_RANGER_ARM : US_ARMY_RANGER_RFL 
{
	vest[] = {"rhsusf_mbav_mg"};
	primary[] = {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_saw_bipod","rhsusf_acc_anpeq15side","rhsusf_acc_eotech_552_d","rhsusf_200Rnd_556x45_soft_pouch"};
	magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch", 3,"11Rnd_45ACP_Mag", 2 };
};

class US_ARMY_RANGER_ARM_NEW : US_ARMY_RANGER_ARM 
{
	primary[] = {"MMG_02_sand_F","bipod_01_F_blk","rhsusf_acc_anpeq15side","optic_ERCO_snd_F","130Rnd_338_Mag"};
	magazines[] = {"130Rnd_338_Mag", 4,"11Rnd_45ACP_Mag", 2 };
	backpack[] = {"B_Kitbag_tan"};
};

class US_ARMY_RANGER_MED : US_ARMY_RANGER_RFL // US Army Ranger (Medic)
{
	vest[] = {"rhsusf_mbav_medic"};
	backpack[] = {"B_Kitbag_cbr"};
	primary[] = {"rhs_weap_mk18_KAC_wd","muzzle_snds_m_khk_F","acc_pointer_IR","rhsusf_acc_compm4","rhsusf_acc_grip2_wd","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 7,"11Rnd_45ACP_Mag", 2 };
	items[] += {"ACE_surgicalKit","ACE_fieldDressing",20,"ACE_elasticBandage",20,"ACE_quikclot",20,"ACE_packingBandage",20,"ACE_bloodIV",10,"ACE_epinephrine",16,"ACE_morphine", 16,"ACE_tourniquet", 8,"rhs_mag_m18_green", 6 };
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
};

class US_ARMY_RANGER_MED_NG : US_ARMY_RANGER_MED // US Army Ranger (Medic, No-Gun [Main])
{
	primary[] = {""};
	goggles[] = {""};
	postLoadout = "(_this select 0) action ['SwitchWeapon', (_this select 0), (_this select 0), 1]";
};

class US_ARMY_RANGER_MXM : US_ARMY_RANGER_RFL // US Army Ranger (Marksman)
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_SCARH_FDE_LB_grip3","rhsusf_acc_anpeq15side","rhsusf_acc_su230_mrds_c","rhsusf_acc_grip2_tan","rhs_mag_20Rnd_SCAR_762x51_m61_ap"};
	launcher[] = {""};
	magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m61_ap", 7,"11Rnd_45ACP_Mag", 3 };
	items[] += {};
};

class US_ARMY_RANGER_SNP : US_ARMY_RANGER_RFL // US Army Ranger (Sniper)
{
	uniform[] = {"rhs_uniform_g3_mc"};
	vest[] = {"rhsusf_mbav_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m24sws_d","rhsusf_acc_m24_muzzlehider_d" ,"rhsusf_acc_M8541_low_d" ,"rhsusf_5Rnd_762x51_m118_special_Mag" ,"rhsusf_acc_harris_swivel","rhsusf_5Rnd_762x51_m993_Mag"};
	launcher[] = {""};
	magazines[] = {"rhsusf_5Rnd_762x51_m993_Mag", 8,"rhsusf_5Rnd_762x51_m118_special_Mag", 6 ,"11Rnd_45ACP_Mag", 3 };
	items[] += {"rhsusf_acc_eotech_552_d","rhsusf_acc_m24_silencer_d"};
};

class US_ARMY_SPC_SNIPER : US_ARMY_DEFAULT_UCP // Army Sniper
{ 
	uniform[] = {"rhs_uniform_g3_m81"};
	vest[] = {"rhsusf_spcs_ocp_sniper"};
	backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
	primary[] = {"rhs_weap_XM2010_d","rhsusf_acc_M2010S","rhsusf_acc_anpeq15side","rhsusf_acc_premier_mrds","bipod_02_F_hex","rhsusf_5Rnd_300winmag_xm2010"};
	secondary[] = {"rhsusf_weap_m1911a1", "rhsusf_mag_7x45acp_MHP"};
	launcher[] = {""};
	magazines[] = {"rhsusf_5Rnd_300winmag_xm2010",25,"rhsusf_mag_7x45acp_MHP",4};
	items[] += {"ACE_EarPlugs",1,"rhs_mag_m18_green",3,"rhs_mag_m18_purple",4};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_mich_bare_norotos_alt_semi"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
	postLoadout = "(unitbackPack (_this select 0)) addWeaponWithAttachmentsCargoGlobal [[""rhs_weap_mk18_KAC_wd"",""rhsusf_acc_nt4_tan"",""rhs_acc_perst1ik_ris"",""optic_Hamr_khk_F"",[""rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"",30],[],""rhsusf_acc_grip2_wd""],1];(unitbackPack (_this select 0)) additemCargo [""rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"",10];";
};

class US_ARMY_SPC_SNIPER_ALT : US_ARMY_SPC_SNIPER  // Army Sniper (Alternate)
{
    primary[] = {"rhs_weap_m24sws_d","rhsusf_acc_m24_silencer_d","rhsusf_acc_premier_mrds","rhsusf_acc_harris_swivel","rhsusf_5Rnd_762x51_m993_Mag"};
    magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 10,"rhsusf_mag_7x45acp_MHP", 3,"rhsusf_5Rnd_762x51_m993_Mag",20};
    postLoadout = "(unitbackPack (_this select 0)) addWeaponWithAttachmentsCargoGlobal [[""rhs_weap_mk18_KAC_wd"",""rhsusf_acc_nt4_tan"",""rhs_acc_perst1ik_ris"",""optic_Hamr_khk_F"",[""rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"",30],[],""rhsusf_acc_grip2_wd""],1];(unitbackPack (_this select 0)) additemCargo [""rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"",10];";
};

class US_ARMY_SPC_SNIPER_ALT2 : US_ARMY_SPC_SNIPER  // Army Sniper (Alternate 2)
{
    primary[] = {"rhs_weap_mk18_KAC_wd","rhsusf_acc_nt4_tan","rhs_acc_perst1ik_ris","optic_Hamr_khk_F","rhsusf_acc_grip2_wd","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
    magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", 10,"rhsusf_mag_7x45acp_MHP", 3};
    postLoadout = "(unitbackPack (_this select 0)) addWeaponWithAttachmentsCargoGlobal [[""rhs_weap_XM2010_d"",""rhsusf_acc_M2010S"",""rhsusf_acc_anpeq15side"",""rhsusf_acc_premier_mrds"",[""rhsusf_5Rnd_300winmag_xm2010"",5],[],""bipod_02_F_hex""],1];(unitbackPack (_this select 0)) additemCargo [""rhsusf_5Rnd_300winmag_xm2010"",25];";
};


class US_ARMY_SPC_SPOTTER : US_ARMY_SPC_SNIPER_ALT2 // Army Spotter
{ 
	postLoadout = "(unitbackPack (_this select 0)) additemCargo [""rhsusf_5Rnd_300winmag_xm2010"",20];";
};

class US_ARMY_SPC_ACI : US_ARMY_DEFAULT_UCP // Army Counter Intelligence
{
	uniform[] = {"rhs_uniform_g3_rgr"};
	vest[] = {"rhs_6b2_lifchik"};
	backpack[] = { };
	primary[] = {"rhs_weap_mk18_KAC_wd","muzzle_snds_m_khk_F","optic_Hamr","acc_pointer_IR","rhs_mag_30Rnd_556x45_M193_Stanag"};
	secondary[] = {"hgun_Pistol_heavy_01_green_F","optic_MRD_black"};
	launcher[] = {"rhs_weap_m72a7"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M193_Stanag",10,"11Rnd_45ACP_Mag",4 };
	items[] += {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_EarPlugs",1,"MineDetector",1};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_od"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"rhsusf_opscore_paint_pelt_nsw_cam"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "[(_this select 0),"""",""male02rus""] call BIS_fnc_setIdentity;(_this select 0) setVariable [""ACE_GForceCoef"", 0];(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true];(_this select 0) setVariable [""ACE_IsEngineer"", 2, true];";
}; 

class US_ARMY_SPC_ACI_148 : US_ARMY_SPC_ACI // Army Counter Intelligence (with 148-Vest)
{
	backpack[] = {"rhs_r148"};
}

class US_ARMY_PLT : US_ARMY_DEFAULT_UCP // Army Pilot with HGU-65
{
	uniform[] = {"rhs_uniform_cu_ucp"};
	vest[] = {"rhsusf_iotv_ucp"};
	backpack[] = {""};
	primary[] = {"rhsusf_weap_MP7A2_aor1","rhsusf_acc_anpeq15A","optic_Yorris","rhsusf_mag_40Rnd_46x30_FMJ"};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ",3};
	items[] += {"ACE_packingBandage",3,"ACE_quikclot",3,"ACE_tourniquet",4,"rhs_mag_m18_purple",1};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_gogg_tan"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_hgu56p","rhsusf_hgu56p_visor"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};

class US_ARMY_PLT_MED : US_ARMY_PLT // Army MEDAVAC Pilot
{
	goggles[] = {"rhsusf_shemagh2_od"};
	headgear[] = {"rhsusf_hgu56p_visor_tan"};
};

class US_ARMY_PLT_AH64 : US_ARMY_PLT // Army Pilot with IHADSS (AH-64D Apache ready)
{ 
	goggles[] = {"rhsusf_shemagh2_od"};
	headgear[] = {"rhsusf_ihadss"};
	nvgs[] = { };
};


class US_ARMY_DOORGUNNER : US_ARMY_PLT // Army Helicopter Door Gunner with HGU-65
{
	primary[] = {"rhs_weap_mk18_KAC_wd","rhsusf_acc_anpeq15A","rhsusf_acc_eotech_552_wd","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag",4 };
	items[] = {"ACE_packingBandage",3,"ACE_quikclot",3,"ACE_tourniquet",4};
	goggles[] = {"rhsusf_shemagh2_od"};
	headgear[] = {"rhsusf_hgu56p_visor_mask","rhsusf_hgu56p_mask","rhsusf_hgu56p_mask_mo","rhsusf_hgu56p_mask_skull","rhsusf_hgu56p_visor_mask_mo","rhsusf_hgu56p_visor_mask_skull"};
	nvgs[] = {"NVGogglesB_blk_F"};
};

class US_ARMY_HGUN_FLIR : US_ARMY_DOORGUNNER 
{
	primary[] = {"MMG_02_sand_F","bipod_01_F_blk","rhsusf_acc_anpeq15side","rhsusf_acc_anpas13gv1","130Rnd_338_Mag"};
	magazines[] = {"130Rnd_338_Mag",1,"rhsusf_mag_7x45acp_MHP",2};
};

class US_ARMY_JPLT : US_ARMY_DEFAULT_UCP // Army Jet Pilot
{
	uniform[] = {"rhs_uniform_g3_rgr"};
	vest[] = {"rhs_vydra_3m"};
	backpack[] = {"rhs_d6_Parachute_backpack"};
	primary[] = {""};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3 };
	items[] += {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhsusf_shemagh2_grn"};
	gps[] = {"ItemGPS"};
	headgear[] = {"RHS_jetpilot_usaf"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_14"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};

class US_DELTA_OPERATOR : US_ARMY_DEFAULT_OCP // 1st SFOD-D Operator
{
	uniform[] = {"U_B_CombatUniform_mcam"};
	vest[] = {"V_PlateCarrier2_blk"};
	backpack[] = {""};
	primary[] = {"rhs_weap_m4a1_blockII_M203","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","optic_MRCO","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger","rhs_mag_M397_HET"};
	secondary[] = {"rhsusf_weap_m1911a1"};
	launcher[] = {""};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",5,"rhs_mag_M397_HET",2};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",2};
	lrradios[] =  {"ACRE_PRC148"};
	binoculars[] = {"rhsusf_bino_m24_ARD"};
	compass[] = {"ItemCompass"};
	goggles[] = {""};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhsusf_protech_helmet_rhino_ess"};
	map[] = {"ItemMap"};
	nvgs[] = {"rhsusf_ANPVS_15"};
	watch[] = {"ACE_Altimeter"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0];(_this select 0) setVariable [""ACE_medical_medicClass"", 1, true]";
};

class US_DELTA_SPOTTER : US_DELTA_OPERATOR // 1st SFOD-D Spotter
{
	primary[] = {"rhs_weap_m4a1_blockII_KAC","rhsusf_acc_rotex5_grey","rhsusf_acc_anpeq15side_bk","optic_MRCO","rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",12};
	items[] = {"ACE_quikclot",2,"ACE_fieldDressing",2,"ACE_packingBandage",2,"ACE_tourniquet",2,"rhs_mag_m67",3,"rhs_mag_m18_purple",1};
	binoculars[] = {"rhsusf_bino_lerca_1200_tan"};
	headgear[] = {"rhsusf_protech_helmet_ess"};
};

class US_DELTA_SNIPER : US_DELTA_SPOTTER // 1st SFOD-D Sniper
{
	primary[] = {"rhs_weap_m14_socom_rail","rhsusf_acc_m14_flashsuppresor","rhsusf_acc_ACOG_RMR_3d","rhsusf_20Rnd_762x51_m118_special_Mag"};
	magazines[] = {"rhsusf_mag_7x45acp_MHP",3,"rhsusf_20Rnd_762x51_m118_special_Mag",8};
};