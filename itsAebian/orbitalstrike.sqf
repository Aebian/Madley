/*
	author: @Aebian
	description: Orbital Strike
	returns: Orbital Strike on position looked at
	url: https://Knight-Industries.org
	 	// _null = [] execVM "itsAebian\orbitalstrike.sqf"
	//
*/

_strikePos = getPosASL cursorObject;

_weap = "RHS_ammo_23mm_AA";
_amount = 20;

for [{_x = 0}, {_x <= _amount}, {_x = _x + 1}]

do
{
_orbitalstrike = createVehicle [_weap  , _strikePos, [], 10, "CAN_COLLIDE"];
_orbitalstrike setPosASL [position _orbitalstrike select 0, position _orbitalstrike select 1, 1000];

_orbitalstrike setVelocity [0,0,-4000];
};

sleep 3;

for [{_x = 0}, {_x <= _amount}, {_x = _x + 1}]

do
{
_orbitalstrike = createVehicle [_weap  , _strikePos, [], 10, "CAN_COLLIDE"];
_orbitalstrike setPosASL [position _orbitalstrike select 0, position _orbitalstrike select 1, 1000];

_orbitalstrike setVelocity [0,0,-4000];
};