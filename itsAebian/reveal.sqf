/*
            author: @Aebian
            description: Reveal of units 
            returns: information to soldiers
            created: 2020-12-14
*/

params ["_sideF", "_sideE", "_range", "_sideFArray"];
{
	if (side _x == _sideF) then {
		_grp = _x;
		{_grp reveal [_x,_range]} forEach _sideFArray;
	}
} forEach allGroups;
