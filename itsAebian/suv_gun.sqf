/*
	author: Aebian
	description: none
	returns: look and feel
	// _null = ["SH", this] execVM "itsAebian\suv_gun.sqf"
*/

private [""];

params["_state", _suv];

if (_state isEqualTo "SH") then {

_suv animate["HideGun_01",0];
_suv animate["HideGun_02",0];
_suv animate["HideGun_03",0];
_suv animate["HideGun_04",0];
_suv animate["CloseCover1",0];
_suv animate["CloseCover2",0];
}

if (_state isEqualTo "HD") then {

_suv animate["HideGun_01",1];
_suv animate["HideGun_02",1];
_suv animate["HideGun_03",1];
_suv animate["HideGun_04",1];
_suv animate["CloseCover1",1];
_suv animate["CloseCover2",1];
}