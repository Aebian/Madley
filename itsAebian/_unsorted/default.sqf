/*

Temp file for debugging scripts and functions.

[0] execVM "itsAebian\_unsorted\default.sqf"

*/



private _aircraft = param[0,objnull]; //helicopter
private _z1 = param[1,0.5]; //stop height, I recommend setting this slightly above zero
private _v1 = param[2,-2]; //stop velocity in z axis, don't set this positive or the helicopter will start flying upwards
private _refreshTime = param[3,0.01];
 
private _z2 = getpos _aircraft select 2;
private _v2 = velocity _aircraft select 2;
private _Vel = [];
private _velZ = 0;
private _z = getpos _aircraft select 2;
while{_z >= _z1}do
{
    _z = getpos _aircraft select 2;
    _velZ = [_v1,_v2,(_z-_z1)/(_z2-_z1)] call BIS_fnc_lerp;
    _vel = (velocity _aircraft);
    _vel set [2,_velZ];
    _aircraft setVelocity _vel;
    sleep _refreshTime; //does not need to be every frame, gravity is not that fast anyway
    //hintSilent(str([floor _z,_vel select 2,(_z-_z1)/(_z2-_z1)]));
};