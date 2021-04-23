class RU_VVS_HPLT : CommonRussia // VVS [Helicopter Pilot]
{
	uniform[] = {"rhs_uniform_df15_tan"};
	vest[] = {"rhs_6b23_ML_vydra_3m"};
	backpack[] = {"B_TacticalPack_rgr"};
	primary[] = {"rhs_weap_ak74m_desert_folded","rhs_acc_dtk1","rhs_acc_perst1ik"};
	secondary[] = {"rhs_weap_pya"};
	launcher[] = {""};
	magazines[] = {"rhs_45Rnd_545X39_7U1_AK",4,"rhs_mag_9x19_17",2};
	items[] += {"ACE_elasticBandage",4,"ACE_fieldDressing",4,"ACE_quikclot",4,"ACE_packingBandage",4,"ACE_morphine",2,"ACE_epinephrine",2,"ACE_tourniquet",2,"ACE_MapTools","ACE_microDAGR"};
	lrradios[] =  {"ACRE_PRC117F"};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {"G_Aviator"};
	gps[] = {"o_EasyTrack_PDA"};
	headgear[] = {"rhs_zsh7a_mike_green_alt"};
	map[] = {"ItemMap"};
	watch[] = {"ItemWatch"};
	nvgs[]= {"NVGogglesB_gry_F"};
	preLoadout = "(_this select 0) setVariable [""ACE_GForceCoef"", 0]";
};

class RU_VVS_JPLT : RU_VVS_HPLT 
{
	headgear[] = {"rhs_zsh7a_alt"};
	backpack[] = {"rhs_d6_Parachute_backpack"};
};