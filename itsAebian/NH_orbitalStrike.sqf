/*
	author: @Aebian
	description: Orbital Strike
	returns: Orbital Strike on position looked at
// [this, "Laserdesignator_03"] execVM "itsAebian\NH_OrbitalStrike.sqf"
*/

params["_caller", "_device"];
	
if (cameraOn == _caller && cameraView == "GUNNER" && (currentWeapon _caller) == _device) then
	{

	 _lasertgt = laserTarget  _caller;

	_strikePos = getPosASL _lasertgt;

	_weap = "RHS_ammo_23mm_AA";
	_amount = 100;

	for [{_x = 0}, {_x <= _amount}, {_x = _x + 1}]

		do
			{
			_orbitalstrike = createVehicle [_weap  , _strikePos, [], 15, "CAN_COLLIDE"];
			_orbitalstrike setPosASL [position _orbitalstrike select 0, position _orbitalstrike select 1, 2000];

			_orbitalstrike setVelocity [0,0,-2000];
			};

	sleep 1;

	for [{_x = 0}, {_x <= _amount}, {_x = _x + 1}]

		do
			{
			_orbitalstrike = createVehicle [_weap  , _strikePos, [], 15, "CAN_COLLIDE"];
			_orbitalstrike setPosASL [position _orbitalstrike select 0, position _orbitalstrike select 1, 2000];

			_orbitalstrike setVelocity [0,0,-2000];
			};


	};