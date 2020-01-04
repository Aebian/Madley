/// Supplies Crates by Aebian
// [AmmoCrate_01, "CTRG_AMMOCRATE"] execVM "itsAebian\supply_crates.sqf";

params["_target", "_type"];



clearMagazineCargoGlobal _target; 
clearWeaponCargoGlobal _target; 
clearItemCargoGlobal _target; 
clearBackpackCargoGlobal _target; 


if ( _type isEqualTo "CTRG_AMMOCRATE" ) then {

_target addMagazineCargoGlobal ["rhs_mag_30Rnd_556x45_Mk318_Stanag", 60]; 
_target addMagazineCargoGlobal ["29rnd_300BLK_STANAG_S", 40];
_target addMagazineCargoGlobal ["UK3CB_BAF_556_30Rnd_T", 60];

_target addMagazineCargoGlobal ["rhs_200rnd_556x45_B_SAW", 20];
_target addMagazineCargoGlobal ["150Rnd_93x64_Mag", 25];
_target addMagazineCargoGlobal ["rhsusf_5Rnd_300winmag_xm2010", 60];

_target addMagazineCargoGlobal ["6Rnd_45ACP_Cylinder", 30];
_target addMagazineCargoGlobal ["rhsusf_mag_17Rnd_9x19_FMJ", 30];
_target addMagazineCargoGlobal ["rhsusf_mag_17Rnd_9x19_JHP", 30];

_target addItemCargoGlobal ["ACE_tourniquet", 20];

};
 
if ( _type isEqualTo "CTRG_LAUNCHERS_AMMONATION" ) then {

_target addWeaponCargoGlobal ["rhs_weap_M136_hp", 3];
_target addMagazineCargoGlobal ["rhs_mag_smaw_HEDP", 3];
_target addMagazineCargoGlobal ["rhs_mag_smaw_HEAA", 3];

_target addMagazineCargoGlobal ["rhs_mag_smaw_SR", 10];
_target addMagazineCargoGlobal ["rhsusf_mag_6Rnd_M397_HET", 15];



};

if ( _type isEqualTo "UNISEX_MEDICAL" ) then {

_target addItemCargoGlobal ["ACE_surgicalKit", 4];
_target addItemCargoGlobal ["ACE_salineIV_500", 8];
_target addItemCargoGlobal ["ACE_salineIV_250", 6];
_target addItemCargoGlobal ["ACE_salineIV", 20];
_target addItemCargoGlobal ["ACE_plasmaIV_500", 8];
_target addItemCargoGlobal ["ACE_plasmaIV_250", 6];
_target addItemCargoGlobal ["ACE_plasmaIV", 20];
_target addItemCargoGlobal ["ACE_personalAidKit", 2];
_target addItemCargoGlobal ["ACE_packingBandage", 40];
_target addItemCargoGlobal ["ACE_morphine", 15];
_target addItemCargoGlobal ["ACE_epinephrine", 15];
_target addItemCargoGlobal ["W_Defibrillator", 2];
_target addItemCargoGlobal ["ACE_CableTie", 10];
_target addItemCargoGlobal ["ACE_bloodIV_500", 10];
_target addItemCargoGlobal ["ACE_bloodIV_250", 8];
_target addItemCargoGlobal ["ACE_bloodIV", 25];
_target addItemCargoGlobal ["ACE_quikclot", 40];
_target addItemCargoGlobal ["ACE_elasticBandage", 40];
_target addItemCargoGlobal ["ACE_fieldDressing", 40];
_target addItemCargoGlobal ["ACE_atropine", 15];
_target addItemCargoGlobal ["ACE_adenosine", 15];
_target addItemCargoGlobal ["ACE_tourniquet", 25];


};