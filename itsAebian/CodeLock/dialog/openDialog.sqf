 /*
	author: Aebian
	description: Codelock for doors [dialog-exec]
	returns: RSC Dialog
	created: 2019-12-31
*/

params["_addAction"];
_addaction params["_keyPad"];

_displayID = 1234;
_hasCode = _keyPad getVariable ["hasCode", false];
_isLocked = _keyPad getVariable ["isLocked", false];

createDialog "KI_KeyDialog";
_ctrlIndicator = (findDisplay _displayID) displayCtrl 1001;

if (_isLocked) then
{
	ctrlSetText [1001, "Door Locked"];
	_ctrlIndicator ctrlSetTextColor [1, 0, 0, 1];
}
else
{
	ctrlSetText [1001, "Door Open"];
	_ctrlIndicator ctrlSetTextColor [0, 1, 0, 1];
};


if (!_hasCode) then
{
	ctrlSetText [1000, "Confirm Code"];
};


// Button Actions
_btn1600 = (findDisplay _displayID) displayCtrl 1600;

_btn1601 = (findDisplay _displayID) displayCtrl 1601;
_btn1602 = (findDisplay _displayID) displayCtrl 1602;
_btn1603 = (findDisplay _displayID) displayCtrl 1603;

_btn1604 = (findDisplay _displayID) displayCtrl 1604;
_btn1605 = (findDisplay _displayID) displayCtrl 1605;
_btn1606 = (findDisplay _displayID) displayCtrl 1606;

_btn1607 = (findDisplay _displayID) displayCtrl 1607;
_btn1608 = (findDisplay _displayID) displayCtrl 1608;
_btn1609 = (findDisplay _displayID) displayCtrl 1609;


	_btn1600 ctrlAddEventHandler ["ButtonClick",{

	["1"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1601 ctrlAddEventHandler ["ButtonClick",{

	["2"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];


	_btn1602 ctrlAddEventHandler ["ButtonClick",{

	["3"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1603 ctrlAddEventHandler ["ButtonClick",{

	["4"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];


	_btn1604 ctrlAddEventHandler ["ButtonClick",{

	["5"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1605 ctrlAddEventHandler ["ButtonClick",{

	["6"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1606 ctrlAddEventHandler ["ButtonClick",{

	["7"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1607 ctrlAddEventHandler ["ButtonClick",{

	["8"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1608 ctrlAddEventHandler ["ButtonClick",{

	["9"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

	_btn1609 ctrlAddEventHandler ["ButtonClick",{

	["0"] execVM "itsAebian\CodeLock\actions\addToText.sqf"
	    
	}];

_btn1610 = (findDisplay _displayID) displayCtrl 1610;
_btn1611 = (findDisplay _displayID) displayCtrl 1611;
_btn1612 = (findDisplay _displayID) displayCtrl 1612;

_btn1610 setVariable ["keyPad", _keyPad];
_btn1611 setVariable ["keyPad", _keyPad];
_btn1612 setVariable ["keyPad", _keyPad];

	_btn1610 ctrlAddEventHandler ["ButtonClick",{
	   params ["_control"];
	    
	    _extracted = _control getVariable ["keyPad", nil];
	    if (isNull _extracted) exitWith { systemChat "Error 500 - Internal Server Error"};

	[_extracted] execVM "itsAebian\CodeLock\actions\enterPressed.sqf";
	    
	}];


	_btn1611 ctrlAddEventHandler ["ButtonClick",{
	    params ["_control"];
	    
	    _extracted = _control getVariable ["keyPad", nil];
	    if (isNull _extracted) exitWith { systemChat "Error 500 - Internal Server Error"};

	[_extracted] execVM "itsAebian\CodeLock\actions\lockDoors.sqf";
	    
	}];


	_btn1612 ctrlAddEventHandler ["ButtonClick",{
	    params ["_control"];
	    
	    _extracted = _control getVariable ["keyPad", nil];
	    if (isNull _extracted) exitWith { systemChat "Error 500 - Internal Server Error"};

	[_extracted] execVM "itsAebian\CodeLock\actions\setCode.sqf";
	    
	}];
