/*

Temp file for debugging scripts and functions.

[0] execVM "itsAebian\_unsorted\default.sqf"

*/

params["_aircraft", "_group"];
// (units _group) params ["_gunner", "_pilot"];



_unitsGreen = [];
{if ((side _x) == independent) then {_unitsGreen pushBack _x}} forEach allUnits;



_targetPos = [];

switch (_aircraft) do
{

	case 0: 
	{
		_targetPos = [10114.1,3990.78,0.0120544]; // Medical Camp

	};

	case 1: 
	{
		_targetPos = [8474.72,3773.58,0]; // Police Port
		
	};

	case 2: 
	{
		_targetPos = [7725.62,4113.46,0.929428]; // Police HQ
		
	};

	case 3: 
	{
		_targetPos = [4476.17,4268.79,0]; // USMC Hideout
		
	};


	case 4: 
	{
		_targetPos = [729.582,12121.9,3.396]; // US Base
		
	};

	case 5: 
	{
		_targetPos = []; // TBD
		
	};

};

{group _x addWaypoint [_targetPos, 1, 1, "MOVEIT"]} forEach _unitsGreen;