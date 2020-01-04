/*
            author: @Aebian
            description: Reveal if soldier has a gun
            returns: information to soldiers
            created: 2019-09-03
*/



{
 
 if (side _x == WEST) then {

	_WeaponList = {Weapons _x} forEach allUnits;

if (Count _WeaponList > 0) then

{

  	_grp reveal [_grp,20]} forEach allUnits;
}


} forEach allGroups;