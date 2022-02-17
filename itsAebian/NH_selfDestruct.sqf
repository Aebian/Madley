 /*
	author: Aebian
	description: Self destruction script (requires RHS)
	returns: destruction of area
	created: 2022-02-13
	updated: 2022-02-13
	[400, SGC_SD, 120, [NH_SGC_Speaker01, NH_SGC_Speaker02, NH_SGC_Speaker03, NH_SGC_Speaker04, NH_SGC_Speaker05]] execVM "itsAebian\NH_selfDestruct.sqf";
*/
 
params ["_radius", "_nukeObject", "_time", "_speakers"];

(_nukeObject getVariable ["NH_selfDestruct", "INIT"]) params ["_cond"];


switch (_cond) do 
{
    case "INIT": // Enable Device
    {

		_nukeObject setVariable ["NH_selfDestruct", "PREPERATION"];
		_nukeObject setVariable ["NH_radius_selfDestruct", _radius];
		_nukeObject setVariable ["NH_time_selfDestruct", _time];

		if (!isnil "_speakers") then
		{
			_nukeObject setVariable ["NH_speakers_selfDestruct", _speakers];
		};

	_holdAction = [ 
		_nukeObject, 
		"Activate Self-Destruct", 
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_destroy_ca.paa", 
		"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_destroy_ca.paa", 
		"_this distance _target < 3", 
		"_caller distance _target < 3", 
		{}, 
		{}, 
		{ 
			_nukeObject = _this select 0;
			_radius = _nukeObject getVariable ["NH_radius_selfDestruct", 400];

			_time = _nukeObject getVariable ["NH_time_selfDestruct", 20];
			_speakers = _nukeObject getVariable "NH_speakers_selfDestruct";

		if (!isnil "_speakers") then
		{
			[_radius, _nukeObject, _time, _speakers] execVM "itsAebian\NH_selfDestruct.sqf"; 
		} else 
		{
			[_radius, _nukeObject, _time] execVM "itsAebian\NH_selfDestruct.sqf"; 
		}
		
		}, 
		{}, 
		[], 
		1, 
		0, 
		false, 
		false 
		] remoteExec["BIS_fnc_holdActionAdd", 0, _nukeObject];

		_nukeObject setVariable ["NH_selfDestruct", "STANDBY"];    
	};

    case "STANDBY": // Enable Device
    {

		_warningSound = objNull;

		if (!isnil "_speakers") then
		{

			_warningSound = { [_x, "stargateAlarm"] remoteExecCall ["say3D"]; } forEach _speakers;

		};

		_origin = objNull;

		switch (typeName _nukeObject) do
		{
			case "ARRAY":
			{
				_origin =  _nukeObject;
			};

			case "STRING":
			{
				_origin = (getMarkerPos _nukeObject);
			};

			case "OBJECT": 
			{
				_origin = (getPos _nukeObject);
			};
		};

		_nukeObject setVariable ["NH_selfDestruct", "ACTIVATED"];  
		[_nukeObject,0] remoteExec["BIS_fnc_holdActionRemove", 0, _nukeObject];

		sleep _time;
		_nukeObject setVariable ["NH_selfDestruct", "DETONATED"];    
		
		[_origin, _radius] call rhs_fnc_ss21_nuke;
		{_x setdamage 1} foreach nearestObjects [_origin, ["house"], _radius];

	};
};