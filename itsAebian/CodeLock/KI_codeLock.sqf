 /*
	author: Aebian
	description: Codelock for doors [main-file]
	returns: KeyPad
	created: 2019-12-31

	desc:
		#include "itsAebian\CodeLock\dialog\kicl_defines.hpp"
		#include "itsAebian\CodeLock\dialog\kicl_control.hpp"

	init:
		[CellTab_01, CellHouse_01, 628400] execVM "itsAebian\CodeLock\KI_CodeLock.sqf"; // for default status (door open, no code set) set code to 123456
*/

params ["_keypad", "_building", "_code"];

_keyPad = (_this select 0);
_doorCount = getNumber (configFile >> "cfgVehicles" >> typeOf _building >> "numberOfDoors");
_doorList = [];

for "_i" from 1 to _doorCount do
{
	_data = [];
	_door = format ["Door_%1_trigger", _i];
	_tempPos = _building selectionPosition _door;	
	_doorPos = _building modelToWorld _tempPos;
	_num = _i;
	_data pushBack _door;
	_data pushBack _doorPos;
	_data pushBack _num;
	_doorList pushBack _data;
};

_index = true;
_holderDist = 50000;
{
	_pos = _x select 1;
	_distance = _keyPad distance [_pos select 0, _pos select 1, _pos select 2];
	if (_distance < _holderDist) then
	{
		_index = _forEachIndex;
		_holderDist = _distance;
	};
} forEach _doorList;

_tempSel = _doorList select _index;
_closestDoor = _tempSel select 0;
_doorNumber = _tempSel select 2;

_keyPad setVariable ["building", _building, true];
_keyPad setVariable ["doorNumber", _doorNumber, true];
_keyPad setVariable ["theCode", "", true];
_keyPad setVariable ["hasCode", false, true];
_keyPad setVariable ["isLocked", false, true];


if (typeName  _code == "SCALAR" && _code != 123456  ) then {

_keyPad setVariable ["theCode", _code, true];
_keyPad setVariable ["hasCode", true, true];
_keyPad setVariable ["isLocked", true, true];
[_keyPad, _building] execVM "itsAebian\CodeLock\actions\lockDoors.sqf";

};


[_keyPad, ["Open KeyPad", 
{
	params ["","","","_keyPad"]; [_keyPad] execVM "itsAebian\CodeLock\dialog\openDialog.sqf";

}, 
[_keyPad], 6, false, true, "", "_this distance _target <  2.2"]] remoteExec ["addAction", 0, true];