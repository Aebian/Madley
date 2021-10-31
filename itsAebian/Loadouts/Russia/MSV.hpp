class RU_MSV_RFL_BASE : CommonRussia // MSV [Rifleman] Base
{
	uniform[] = {"rhs_uniform_vkpo_gloves_alt"};
	vest[] = {"rhs_6b45_rifleman"};
	backpack[] = {""};
	primary[] = {"rhs_weap_ak74m_fullplum","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",8};
	items[] += {"ACE_packingBandage",2,"ACE_quikclot",2,"ACE_elasticBandage",2,"ACE_fieldDressing",2, "rhs_mag_rgo",2,"ACE_morphine",1,"ACE_epinephrine",1};
	binoculars[] = {""};
	compass[] = {"ItemCompass"};
	goggles[] = {"rhs_facewear_6m2_1"};
	gps[] = {""};
	headgear[] = {"rhs_6b47_ess_bala","rhs_6b7_1m_bala1_emr","rhs_6b7_1m_bala2_emr","rhs_6b7_1m_emr_ess_bala"};
	map[] = {""};
	watch[] = {"ItemWatch"};
};

class RU_MSV_EMR_Sergeant : RU_MSV_RFL_BASE // MSV [Group Leader] (Junior Sergeant / Sergeant)
{
	vest[] = {"rhs_6b45_off"};
	primary[] = {"rhs_weap_an94","rhs_acc_dtk","rhs_acc_1p63","rhs_30Rnd_545x39_7U1_AK"};
	binoculars[] = {"Binocular"};

};

class RU_MSV_EMR_Rifleman : RU_MSV_RFL_BASE // MSV [Rifleman] (Private)
{
 	launcher[] = {"rhs_weap_rpg26"};
	items[] += {"rhs_mag_rgo",4};
};

class RU_MSV_EMR_Grenadier : RU_MSV_RFL_BASE // VDV [Grenadier (RPG-7)]
{
	backpack[] = {"rhs_rpg_empty"};
	primary[] = {"rhs_weap_ak74m_fullplum","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
	launcher[] = {"rhs_weap_rpg7","rhs_acc_pgo7v3"};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",5,"rhs_rpg7_PG7VL_mag",3,"rhs_rpg7_OG7V_mag",2};
};

class RU_MSV_EMR_Grenadier_Ass : RU_MSV_EMR_Grenadier // VDV [Grenadier-Asistant (RPG-7)]
{
	backpack[] = {"rhs_rpg_empty"};
	primary[] = {"rhs_weap_ak74m_fullplum","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
	launcher[] = {""};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",6,"rhs_rpg7_PG7VL_mag",2,"rhs_rpg7_OG7V_mag",2};
};

class RU_MSV_EMR_Machinegunner : RU_MSV_RFL_BASE // MSV [Rifleman] (Private)
{
	vest[] = {"rhs_6b45_mg"};
	backpack[] = {"rhs_tortila_emr"};
 	primary[] = {"rhs_weap_pkp","rhs_100Rnd_762x54mmR_7N26"};
	secondary[] = {""};
	launcher[] = {""};
	magazines[] = {"rhs_100Rnd_762x54mmR_7N26",4};
};

class RU_MSV_EMR_Yefreytor : RU_MSV_EMR_Sergeant // MSV [Senior Rifleman] (Yefreytor)
{
	vest[] = {"rhs_6b45_rifleman_2"};
	primary[] = {"rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",6,"rhs_VG40TB",4,"rhs_GRD40_White",10};
};

class RU_MSV_EMR_Rifleman_GP30 : RU_MSV_RFL_BASE // MSV [Rifleman] (Private)
{
	vest[] = {"rhs_6b45_grn"};
	primary[] = {"rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",6,"rhs_VG40TB",6,"rhs_VOG25P",7};
};

class RU_MSV_EMR_CREW : RU_MSV_RFL_BASE // MSV [Vehicle Crew]
{
	primary[] = {"rhs_weap_aks74un","rhs_acc_dtk","rhs_30Rnd_545x39_7U1_AK"};
 	magazines[] = {"rhs_30Rnd_545x39_7U1_AK",5};
	headgear[] = {"rhs_6b48"};
};

class RU_MSV_EMR_CREW_CM : RU_MSV_EMR_CREW // MSV [Tank Crew Commander]
{
	vest[] = {"rhs_6b45_off"};
	lrradios[] =  {"ACRE_PRC148", "ACRE_PRC148"};
	secondary[] = {"rhs_weap_pya"};
	magazines[] += {"rhs_mag_9x19_17",2};
};

class RU_MSV_EMR_MED : RU_MSV_RFL_BASE // MSV [Medic]
{
	vest[] = {"rhs_6b23_digi_medic"};
	backpack[] = {"rhs_rk_sht_30_emr_medic"};
	primary[] = {"rhs_weap_ak105","rhs_acc_perst1ik","rhs_acc_1p63","rhs_30Rnd_545x39_7N22_plum_AK"};
	secondary[] = {"rhs_weap_pya","rhs_mag_9x19_17"};
	magazines[] = {"rhs_30Rnd_545x39_7N22_plum_AK",4,"rhs_mag_9x19_17",2,"rhs_mag_nspn_yellow",4};
	items[] += {"ACE_packingBandage",24,"ACE_quikclot",24,"ACE_elasticBandage",24,"ACE_bloodIV",10,"ACE_epinephrine",18,"ACE_morphine",16,"ACE_atropine",6,"ACE_surgicalKit","ACE_tourniquet",10};
	preLoadout = "(_this select 0) setVariable [""ACE_medical_medicClass"", 2, true]";
};


class RU_MSV_EMR_MEDBASE : RU_MSV_EMR_MED // MSV [Medic on secure Base]
{
	vest[] = {""};
	backpack[] = {""};
	primary[] = {""};
	secondary[] = {""};
	magazines[] = {""};
	items[] = {"ACE_surgicalKit","ACE_tourniquet",6};
	goggles[] = {"rhs_googles_clear"};
	headgear[] = {""};
}