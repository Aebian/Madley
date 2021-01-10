/*
	author: @Aebian
	description: none
	returns: nothing
	created: 2017-05-19
	updated: 2021-01-10
	//  _null = [HEMTTA4, SOBJ] execVM "itsAebian\KI_purgedevice.sqf";
*/


KI_fnc_purgeDevice = 
{
	params ["_target", "_caller",  "_id", "_args"];
	_args params ["_device"];

	{ _x setDamage 1; } forEach ( _device nearEntities ["Man", 20]);
};

params["_vehicle", "_object"];

_vehicle addAction ["Trigger Device",KI_fnc_purgeDevice,_object,2,true,true,"","vehicle player isEqualTo _target"];


