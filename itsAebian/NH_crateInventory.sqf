 /*
	author: Aebian
	description: Crate Inventories
	returns: depends but useful items
	created: 2022-02-10
	updated: 2022-02-11
	[this, "MEDIC"] execVM "itsAebian\NH_crateInventory.sqf";
*/

params ["_crate", "_type"];

clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;
clearItemCargoGlobal _crate;

switch (_type) do
{
	case "MEDIC":
    {	
		_crate addItemCargoGlobal ["ACE_fieldDressing", 35];  
		_crate addItemCargoGlobal ["ACE_packingBandage", 35];   
		_crate addItemCargoGlobal ["ACE_elasticBandage", 35];
		
		_crate addItemCargoGlobal ["ACE_quikclot", 35];   
		_crate addItemCargoGlobal ["ACE_tourniquet", 20];  
		_crate addItemCargoGlobal ["ACE_morphine", 30];   
		
		_crate addItemCargoGlobal ["ACE_epinephrine", 30];  
		_crate addItemCargoGlobal ["ACE_salineIV", 25];   
		_crate addItemCargoGlobal ["ACE_bloodIV", 14];  
		
		_crate addItemCargoGlobal ["ACE_surgicalKit", 15];   
		_crate addItemCargoGlobal ["ACE_personalAidKit", 25];  
		_crate addItemCargoGlobal ["ACE_bodyBag", 10];   
		
		_crate addItemCargoGlobal ["ACE_plasmaIV", 25];   
		_crate addItemCargoGlobal ["ACE_atropine", 25];  
		_crate addItemCargoGlobal ["ACE_adenosine", 25]; 
		_crate addItemCargoGlobal ["ACE_splint", 55];  
	};

};