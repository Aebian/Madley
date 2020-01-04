_cursorObject = (_this select 0);
_isLocked = _cursorObject getVariable ["isLocked", false];
_hasLetter = false;

_newCode = ctrlText 1000;
_abc = ["P", "l", "e", "a", "s", "e", "S", "e", "t", "A", "C", "o", "d", "e", " "];

{
	_test = _newCode find _x;
	if (_test != -1) exitWith {_hasLetter = true};
} forEach _abc;

if (!_hasLetter) then
{
	if (!_isLocked) then
	{
		_cursorObject setVariable ["theCode", _newCode, true];
		_cursorObject setVariable ["hasCode", true, true];
		if (_newCode == "") then
		{
			hint "Empty code entered, code reset";
			ctrlSetText [1000, "Please Set A Code"];
			_cursorObject setVariable ["hasCode", false, true];
		}
		else
		{
			hint format ["New Building Code: %1", _newCode];
			ctrlSetText [1000, ""];
		};
	}
	else
	{
		hint "Building must be unlocked to set a new code";
	};
}
else
{
	hint "Code cannot contain letters, re-enter code";
};
