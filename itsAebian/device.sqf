/*
	author: @Aebian
	description: none
	returns: nothing
	//  _null = [HEMTTA4, SOBJ] execVM "itsAebian\device.sqf";
*/


KI_fnc_device = {

params ["_target", "_caller",  "_id", "_args"];
_args params ["_device"];

{ _x setDamage 1; } forEach ( _device nearEntities ["Man", 20]);

};


params["_vehicle", "_object"];

_null = _vehicle addAction ["Trigger Device",KI_fnc_device,_object,2,true,true,"","vehicle player isEqualTo _target"];


