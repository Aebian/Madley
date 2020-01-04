_unit = player;


//if (!local _unit) exitWith {};

_d = 0;

while {true} do
{	
	if (isNil "_d") then { _d = 0; };
	
	if (count (nearestObjects [player, ["Car"], 5]) > 0) then 
	{	
	
		_vcl = nearestObjects [player, ["Car"], 5] select 0;
		
		if (_d == 0 && (count (crew _vcl))== 0 && ((vectorUp _vcl) select 2) < 0.5) then
		{
			natascha_unflip = player addAction ["Flip Vehicle", "itsAebian\unflip\unflip_action.sqf",_vcl, 0, true, true];
			_d = 1;
		};	
	};
	
	if (_d == 1 && count (nearestObjects [player, ["Car"], 5]) == 0) then 
	{
		player removeAction natascha_unflip;
		_d = 0;
	};
	sleep 1;
};

if(true)exitWith {};


	