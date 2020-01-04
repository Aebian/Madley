_building = (_this select 0);
_doorNumber = (_this select 1);

_ctrlIndicator = (findDisplay 1234) displayCtrl 1001;
ctrlSetText [1001, "Door Unlocked"];
_ctrlIndicator ctrlSetTextColor [0, 1, 0, 1];


_lockDoor = format ["bis_disabled_Door_%1", _doorNumber];
_building setVariable [_lockDoor, 0, true];