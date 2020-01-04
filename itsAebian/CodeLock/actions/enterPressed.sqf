 /*
	author: Aebian
	description: Codelock for doors [enterbtn-exec]
	returns: function execute
	created: 2019-12-31
*/

params["_keyPad"];

_isLocked = _keyPad getVariable ["isLocked", false];
_hasCode = _keyPad getVariable ["hasCode", false];
_objectName = typeOf _keyPad;
_tablet = (_this select 0);
_building = _keyPad getVariable ["building", nil];
_doorNumber = _keyPad getVariable ["doorNumber", nil];
_codeEntered = parseNumber (ctrlText 1000);
_code = 0;

if (!(_objectName isKindOf ["House", configfile >> "CfgVehicles"])) then
{
	if (!_hasCode) then
	{
		hint "A code must be set to check the building's code";
	}
	else
	{

		_codeRecieved = _keyPad getVariable ["theCode", ""];

		if (typeName  _codeRecieved == "SCALAR" ) then {_code = _codeRecieved} else {_code = parseNumber (_codeRecieved)};

		if (_code == _codeEntered) then
		{
			if (_isLocked) then
			{
				[_building, _doorNumber] execVM "itsAebian\CodeLock\actions\unlockDoors.sqf";
				_keyPad setVariable ["isLocked", false, true];
			}
			else
			{
				hint "Doors are already unlocked";
			};
		}
		else
		{
			hint "Access Denied";
		};
		ctrlSetText [1000,""];
	};
};