 /*
	author: Aebian
	description: Self destruction script (requires RHS)
	returns: destruction of area
	created: 2022-02-13
	updated: 2022-02-13
	[400, SGC_SD, 120, [NH_SGC_Speaker01, NH_SGC_Speaker02, NH_SGC_Speaker03, NH_SGC_Speaker04, NH_SGC_Speaker05]] execVM "itsAebian\NH_selfDestruct.sqf";
*/
 
params ["_radius", "_originRAW", "_time", "_speakers"];


_warningSound = objNull;

if (!isnil "_speakers") then
{

	_warningSound = { [_x, "stargateAlarm"] remoteExecCall ["say3D"]; } forEach _speakers;

};

_origin = objNull;

switch (typeName _originRAW) do
{
	case "ARRAY":
	{
		_origin =  _originRAW;
	};

	case "STRING":
	{
		_origin = (getMarkerPos _originRAW);
	};

	case "OBJECT": 
	{
		_origin = (getPos _originRAW);
	};
};


sleep _time;

[_origin, _radius] call rhs_fnc_ss21_nuke;
{_x setdamage 1} foreach nearestObjects [_origin, [], _radius]