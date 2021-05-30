/*
    author: @Aebian
    description: Auto-rearm of SAM assets after three minutes if vehicle ammo is zero.
	[MissileAmmo_01, SAM_BATTERY_01] execVM "itsAebian\NH_samRearm.sqf"
 */


params ["_ammobox", "_gun"];

if (!isServer) exitWith {};

_yikes = 0;

sleep 4;

_gname = vehicleVarName _gun;	
_antiairtube = createMarker [format ["%1%2", _gname], position _gun];

_antiairtube setMarkerShape "Icon";
_antiairtube setMarkerType "b_antiair";

while { _yikes == 0 } do {

	if (!alive _gun) then {

		deleteMarker _antiairtube;
		sleep 4;
		_yikes = 1;
	};
};

while { alive _ammobox && alive _gun } do {


	if (!( someAmmo _gun ) ) then {
		sleep 180;

		if ( alive _ammobox ) then {
		_gun setVehicleAmmo 1;
		
		};

	};

};