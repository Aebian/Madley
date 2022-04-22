/*
    author: @Aebian
    description: Auto-rearm of SAM assets after three minutes if vehicle ammo is zero.
	[MissileAmmo_01, SAM_BATTERY_01] execVM "itsAebian\NH_samRearm.sqf"
 */


params ["_ammobox", "_gun"];

if (!isServer) exitWith {};

_healthStatus = 1;

sleep 4;

_globalName = vehicleVarName _gun;	
_antiairTube = createMarker [format ["%1%2", _globalName], position _gun];

_antiairTube setMarkerShape "Icon";
_aside = side _gun;

switch (_aside) do
{
	case WEST:
	{
		_antiairTube setMarkerType "b_antiair";
	};
	case EAST:
	{
		_antiairTube setMarkerType "o_antiair";
	};
	case INDEPENDENT:
	{
		_antiairTube setMarkerType "i_antiair";
	};
	default
	{
		_antiairTube setMarkerType "c_antiair";
	};
};

while { _healthStatus == 1 } do {

	if (!alive _gun) then {

		deleteMarker _antiairTube;
		sleep 4;
		_healthStatus = 0;
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