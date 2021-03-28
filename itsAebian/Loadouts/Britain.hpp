class CommonBritain : CommonBlufor // [this,"Loadout"] call Poppy_fnc_applyLoadout;
{
	uniform[] = {"U_B_CTRG_3"};
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
	gps[] = {"ItemGPS"};
	headgear[] = {""};
	map[] = {"ItemMap"};
	nvgs[] = {""};
	watch[] = {"ItemWatch"};
};


class CTRG_CO : CommonBritain // Commanding Officer
{
	vest[] = {"V_TacVest_oli"};
	backpack[] = {"B_LegStrapBag_black_F"};
	primary[] = {"hlc_rifle_bcmblackjack","rhs_acc_1p87"};
	secondary[] = {"hgun_Pistol_heavy_02_F"};
	magazines[] = {"6Rnd_45ACP_Cylinder",6 ,"29rnd_300BLK_STANAG_S",8};
	items[] += {"ACE_elasticBandage",4 ,"ACE_quikclot",4};
    lrRadios[] = {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"Binocular"};
	goggles[] = {"rhsusf_shemagh2_gogg_grn"};
	gps[] = {"ItemGPS"};
	headgear[] = {"rhssaf_beret_green"};
};

class CTRG_NATO_ADM : CommonBritain // Carrier Admiral
{
	vest[] = {"V_TacVest_oli"};
	backpack[] = {"B_LegStrapBag_black_F"};
	primary[] = {"rhs_weap_ak105_npz","rhs_acc_tgpa","rhs_acc_perst1ik","rhsusf_acc_eotech_552_d"};
	secondary[] = {"hgun_Pistol_heavy_02_F"};
	launcher[] = {""};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",6,"6Rnd_45ACP_Cylinder",6,"Laserbatteries",1};
	items[] = {"ACE_packingBandage",6,"ACE_quikclot",6,"ACE_tourniquet",2,"rhs_mag_m18_purple",4};
	lrradios[] =  {"ACRE_PRC148","ACRE_PRC148"};
	binoculars[] = {"Laserdesignator_03"};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Combat"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"H_MilCap_gry"};
	map[] = {"ItemMap"};
	watch[] = {"ACE_Altimeter"};
};


class CTRG_XO : CTRG_CO // Executive Officer
{
};

class CTRG_COS : CTRG_CO // Chief of Supplies
{
	backpack[] = {"B_TacticalPack_blk"};
	items[] += {"CL_Logitracker",1 ,"SmokeShellBlue",6 ,"SmokeShellYellow" ,6 ,"29rnd_300BLK_STANAG_S",10};
};


class CTRG_FAC : CommonBritain // Forward Air Controller
{
	uniform[] = {"U_B_CTRG_2"};
	vest[] = {"V_PlateCarrier2_rgr_noflag_F"};
	backpack[] = {"B_TacticalPack_rgr"};
	primary[] = {"UK3CB_BAF_L85A2_UGL","UK3CB_BAF_SFFH","rhs_acc_1p87"};
	magazines[] = {"UK3CB_BAF_556_30Rnd_T",14};
	items[] += {"ACE_EarPlugs",1,"ACE_fieldDressing",6,"Laserbatteries",2,"ACE_microDAGR",1,"ACE_MapTools",1,"UK3CB_BAF_1Rnd_SmokeBlue_Grenade_shell",6,"UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell",6,"UK3CB_BAF_1Rnd_SmokeGreen_Grenade_shell",6,"UK3CB_BAF_1Rnd_SmokeOrange_Grenade_shell",6,"Laserdesignator_03",1,"ACRE_PRC117F",1};
	lrRadios[] = {"ACRE_PRC148"};
	binoculars[] = {"ACE_VectorDay"};
	goggles[] = {"G_Balaclava_combat"};
	gps[] = {"ItemGPS"};
	headgear[] = {"H_Cap_headphones"};
};


class CTRG_LEAD : CommonBritain // Section Lead
{
	uniform[] = {"U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_3_F"};
	vest[] = {"V_PlateCarrier1_CTRG_Tropical"};
	backpack[] = {"B_LegStrapBag_black_F"};
	primary[] = {"rhs_weap_hk416d145_m320","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15A","rhs_acc_1p87"};
	secondary[] = {"rhsusf_weap_glock17g4"};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",8,"rhsusf_mag_17Rnd_9x19_JHP",4,"rhs_mag_M397_HET",6};
	items[] += {"rhs_mag_m67",6};
	lrRadios[] = {"ACRE_PRC148"};
	binoculars[] = {"Rangefinder"};
	goggles[] = {"G_Balaclava_TI_G_tna_F"};
	headgear[] = {"H_HelmetB_TI_tna_F"};
};

class CTRG_OPERATOR_LITE : CTRG_LEAD // HK416 Operator
{
	backpack[] = {""};
	primary[] = {"rhs_weap_hk416d10_LMT_wd","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15A","rhsusf_acc_ACOG"};
	secondary[] = {""};
	magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag",10	};
	lrRadios[] = {""};
	binoculars[] = {""};
};

class CTRG_OPERATOR_MEDIUM : CTRG_OPERATOR_LITE // HK416 Operator
{
	backpack[] = {"B_Kitbag_rgr"};
	primary[] = {"UK3CB_BAF_L85A2","UK3CB_BAF_Silencer_L85","rhs_acc_1p87"};
	magazines[] = {"UK3CB_BAF_556_30Rnd_T",14};
	items[] = {"ACE_EarPlugs",1,"ACE_fieldDressing",8,"ACE_tourniquet",1};
};
	
class CTRG_OPERATOR_SUPRESS : CTRG_OPERATOR_LITE // M249 Operator
{
	backpack[] = {"B_Kitbag_rgr"};
	primary[] = {"rhs_weap_minimi_para_railed","rhsusf_acc_eotech_552"};
	magazines[] = {"rhs_200rnd_556x45_B_SAW",6};
};

class CTRG_OPERATOR_GRENADES : CTRG_OPERATOR_LITE // M32 Operator
{
	backpack[] = {"B_Carryall_oli"};
	magazines[] += {"rhsusf_mag_6Rnd_M397_HET",6};
	items[] += {"rhs_weap_m32",1,"rhsusf_acc_anpeq16a",1};
};

class CTRG_OPERATOR_LITE_AT : CTRG_OPERATOR_LITE // HK416 Operator with M136
{
	launcher[] = {"rhs_weap_M136_hp"};
};

class CTRG_OPERATOR_MEDICAL : CTRG_OPERATOR_LITE // HK416 Operator with Medical Training Class 07 (Advanced)
{
	uniform[] = {"U_B_CTRG_Soldier_F","U_B_CTRG_Soldier_3_F"};
	backpack[] = {"B_ViperLightHarness_ghex_F"};
	items[] += {"ACE_surgicalKit",1,"ACE_morphine",11,"ACE_epinephrine",11,"ACE_fieldDressing",20,"ACE_elasticBandage",20,"ACE_quikclot",20,"ACE_packingBandage",20,"ACE_tourniquet",10,"ACE_bloodIV",10,"ACE_CableTie",4};
	preLoadout = "(_this select 0) setVariable [""ace_medical_medicClass"",2,true];";
};

class CTRG_OPERATOR_ENGINEER : CTRG_OPERATOR_MEDIUM // L85A2 Operator with Engineering Training Class 05 (basic)
{
	vest[] = {"V_PlateCarrierSpec_A_CTRG_GL_Tropical"};
	backpack[] = {"rhs_assault_umbts_engineer_empty"};
	items[] += {"ACE_EntrenchingTool",1,"ACE_DefusalKit",1,"ACE_Clacker",1,"ToolKit",1,"ACE_wirecutter",1,"MineDetector",1};
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"",2,true];";
};

class CTRG_OPERATOR_MEDIUM_MACHINE_GUN : CTRG_OPERATOR_MEDIUM // MMG Operator
{
	backpack[] = {""};
	primary[] = {"MMG_01_tan_F","rhs_acc_perst3","rhs_acc_1p87","bipod_02_F_hex"};
	magazines[] = {"150Rnd_93x64_Mag",3};
};

class CTRG_OPERATOR_MEDIUM_MACHINE_GUN_ASSISTANT : CTRG_OPERATOR_MEDIUM // L85A2 Operator with Ammunation for MMG
{
  backpack[] = {"B_Carryall_ghex_F"};
  items[] += {"150Rnd_93x64_Mag",3,"ACE_SpareBarrel",1};
  binoculars[] = {"Binocular"};
};

class CTRG_OPERATOR_MEDIUM_AT : CTRG_OPERATOR_MEDIUM // L85A2 Operator with SMAAW
{
  backpack[] = {"B_Carryall_oli"};
  launcher[] = {"rhs_weap_smaw_green","ACE_acc_pointer_green","rhs_weap_optic_smaw"};
  items[] += {"rhs_mag_smaw_HEDP",1 ,"rhs_mag_smaw_HEAA",1};
};

class CTRG_OPERATOR_MEDIUM_AT_ASSISTANT : CTRG_OPERATOR_MEDIUM // L85A2 Operator with Rockets for SMAAW
{
  backpack[] = {"B_Carryall_oli"};
  items[] += {"rhs_mag_smaw_HEDP",1 ,"rhs_mag_smaw_HEAA",1, "rhs_mag_smaw_SR",2};
};

class CTRG_OPERATOR_RAVEN : CTRG_OPERATOR_MEDIUM  // L85A2 Operator with RAVEN
{
  backpack[] = {"B_rhsusf_B_BACKPACK"};
};

class CTRG_OPERATOR_ESR : CTRG_OPERATOR_MEDIUM // M2010 Operator 
{
  uniform[] = {"U_B_CTRG_Soldier_2_F"};
  backpack[] = {"B_LegStrapBag_olive_F"};
  primary[] = {"rhs_weap_XM2010_wd","rhsusf_acc_premier","rhsusf_acc_anpeq15A","rhsusf_acc_harris_bipod"};
  secondary[] = {"rhsusf_weap_glock17g4"};
  magazines[] = {"rhsusf_5Rnd_300winmag_xm2010",35,"rhsusf_mag_17Rnd_9x19_FMJ",4};
  items[] += {"ClaymoreDirectionalMine_Remote_Mag",2,"ACE_FlareTripMine_Mag",2,"ACE_ATragMX",1,"ACE_microDAGR",1,"ACE_MapTools",1,"ACE_Tripod",1,"ACE_Kestrel4500",1,"ACE_RangeCard",1};
  binoculars[] = {"lerca_1200_tan"};
  goggles[] = {"rhsusf_shemagh2_gogg_grn"};
  headgear[] = {"rhsusf_bowman_cap"};
};



class CTRG_UCAV_OPERATOR : CommonBritain // Unmaned Combat Arial Vehicle Operator. The guy with the bombs.
{
	vest[] = {"V_PlateCarrierL_CTRG"};
	backpack[] = {""};
	primary[] = {"SMG_01_F","muzzle_snds_acp","acc_flashlight_smg_01","optic_Aco_smg"};
	secondary[] = {"hgun_Pistol_heavy_01_F"};
	magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",10};
	lrRadios[] = {"ACRE_PRC148"};
	binoculars[] = {"Rangefinder"};
	gps[] = {"B_UavTerminal"};
	headgear[] = {"rhsusf_Bowman"};
};

class CTRG_COMBAT_PILOT : CommonBritain // Flying Angel
{
	uniform[] = {"U_BG_Guerrilla_6_1"};
	vest[] = {"V_PlateCarrierL_CTRG"};
	backpack[] = {""};
	primary[] = {"SMG_01_F","muzzle_snds_acp","acc_flashlight_smg_01","optic_Aco_smg"};
	secondary[] = {"hgun_Pistol_heavy_01_F"};
	magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",10};
	lrRadios[] = {"ACRE_PRC148"};
	binoculars[] = {"Rangefinder"};
	goggles[] = {"G_Balaclava_TI_tna_F"};
	headgear[] = {"H_PilotHelmetHeli_B"};
	nvgs[] = {"NVGogglesB_grn_F"};
};

class CTRG_SUPPLY_LEAD : CTRG_OPERATOR_MEDIUM // Coordinator of Supplies
{
	uniform[] = {"U_B_CTRG_3"};
	lrRadios[] = {"ACRE_PRC148","ACRE_PRC148"};
	items[] += {"CL_Logitracker",1,"SmokeShellBlue",6,"SmokeShellYellow" ,6};
	headgear[] = {"H_HelmetB_Enh_tna_F"};
	goggles[]= {"rhsusf_oakley_goggles_ylw"};
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"",2,true];";
};

class CTRG_SUPPLY_DISPATCHER : CTRG_SUPPLY_LEAD // Workhorse
{
	items[] += {"ToolKit"};
	preLoadout = "(_this select 0) setVariable [""ACE_IsEngineer"",1,true];";
};