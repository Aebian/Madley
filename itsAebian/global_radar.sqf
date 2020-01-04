//radarscript
// _null = [this] execVM "itsAebian\global_radar.sqf"

params ["_radar"];

	_myRadarRange = 4000;
	_myGroundClutter = 30;
	_radar_delay = 5;
	_myPosRadarASLuncorrected = getPosASL _radar;
	_myPosRadarASLHight = ( _myPosRadarASLuncorrected select 2 ) + 5 ;
	_myPosRadarASL = [] + _myPosRadarASLuncorrected;
	_myPosRadarASL set [2, _myPosRadarASLHight];
	createMarker ["Radar_0", getPos _radar];
		"Radar_0" setMarkerShape "ELLIPSE";
		"Radar_0" setMarkerSize [_myRadarRange, _myRadarRange];
		"Radar_0" setMarkerBrush "DIAGGRID";
		"Radar_0" setMarkerColor "ColorGrey";
		"Radar_0" setMarkerAlpha 0.5;
	createMarker ["Radar_0_dot", getPos _radar];
		"Radar_0_dot" setMarkerShape "icon";
		"Radar_0_dot" setMarkerType "mil_dot";
		"Radar_0_dot" setMarkerText "Radarstation";
while {alive _radar} do
{
_myplanes = _myPosRadarASL nearEntities [["Helicopter","Plane"],_myRadarRange];
_myPlaneArray = [];
{
	_myNonSigth = terrainIntersectASL [_myPosRadarASL,getPOSASL (_myplanes select _forEachIndex)];
	_myHighATL = getPosATL (_myplanes select _forEachIndex ) select 2;
	if (_myNonSigth or _myHighATL < _myGroundClutter ) then
	{}
	else
	{
		_myPlaneArray = _myPlaneArray + [(_myplanes select _forEachIndex)];
	};
}forEach _myplanes;
	_myplanes = _myPlaneArray;
_myMarkerArray = [];
{
	_mymarkername =  format ["myMarker_%1", _forEachIndex];
	_myhigh = getPosASL (_myplanes select _forEachIndex ) select 2;
	_myside = side (_myplanes select _forEachIndex);
	_myKindofAir = (_myplanes select _forEachIndex);
	_myMarkerArray = _myMarkerArray + [_mymarkername];
	_mySpeed = speed (_myplanes select _forEachIndex );
	_myDirection = getDir (_myplanes select _forEachIndex);
		createMarker [_mymarkername, getPos (_myplanes select _forEachIndex )];
		_mymarkername setMarkerShape "Icon";
switch (_myside) do
{
	case WEST:
	{
		if (_myKindofAir isKindOf "Helicopter") then
		{
		_mymarkername setMarkerType "b_air";
		}
		else
		{
		_mymarkername setMarkerType "b_plane";
		};
	};
	case EAST:
	{
			if (_myKindofAir isKindOf "Helicopter") then
		{
		_mymarkername setMarkerType "o_air";
		}
		else
		{
		_mymarkername setMarkerType "o_plane";
		};
	};
	case "GUER":
	{
		if (_myKindofAir isKindOf "Helicopter") then
		{
		_mymarkername setMarkerType "n_air";
		}
		else
		{
		_mymarkername setMarkerType "n_plane";
		};
	};
	default
	{
			if (_myKindofAir isKindOf "Helicopter") then
		{
		_mymarkername setMarkerType "c_air";
		}
		else
		{
		_mymarkername setMarkerType "c_plane";
		};
	};
};
	_mymarkername setMarkerText format ["H:%1 S:%2 B:%3", ceil _myhigh, ceil _myspeed, ceil _myDirection];
/*Helicopter (Blue) / "b_air"
48. Helicopter (Red) / "o_air"
49. Helicopter (Green) / "n_air"
50. Plane (Blue) / "b_plane"
51. Plane (Red) / "o_plane"
52. Plane (Green) / "n_plane"
53. UAV (Blue) / "b_uav"
54. UAV (Red) / "o_uav"
55. UAV (Green) / "n_uav" */
} forEach _myplanes;
sleep _radar_delay;
{
	_mymarkername =  format ["myMarker_%1", _forEachIndex];
	deleteMarker _mymarkername;
} forEach _myMarkerArray ;
	_myMarkerArray = _myMarkerArray - _myMarkerArray;
};