params ["_cursorObject"];

_hasCode = _cursorObject getVariable ["hasCode", false];
_building = _cursorObject getVariable ["building", nil];
_doorNumber = _cursorObject getVariable ["doorNumber", nil];

hintSilent "";
if (_hasCode) then
{
	_ctrlIndicator = (findDisplay 1234) displayCtrl 1001;
	ctrlSetText [1001, "Door Locked"];
	_ctrlIndicator ctrlSetTextColor [1, 0, 0, 1];

	_lockDoor = format ["bis_disabled_Door_%1", _doorNumber];
	_closeDoor = format ["Door_%1_rot", _doorNumber];
	_building animate [_closeDoor, 0, false];
	_building setVariable [_lockDoor, 1, true];
	
	_cursorObject setVariable ["isLocked", true, true];
}
else
{
	hint "A code must be set to lock the building";
};