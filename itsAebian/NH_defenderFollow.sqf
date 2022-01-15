/*
    author: @Aebian
    description: order a vehicle to follow another.
    returns: nothing
	created: 2022-01-15
	[SunriseVHC, HunterVHC, 0] execVM "itsAebian\NH_defenderFollow.sqf";
*/

params ["_target","_defender","_switch"];

_defender engineOn true;


while {alive _target} do 
{ 
    switch (_switch) do
    {
        case 0:
        {
            (group _defender) move (_target getPos [4,45]); 
        };
        case 1: 
        {
            (group _defender) move (getPos _target); 
        };
    };
    sleep 1;
};