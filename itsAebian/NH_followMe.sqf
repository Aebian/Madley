/*
	author: Aebian
	description: Follow Me Car look and feel for GAZ 233011
	returns: look and feel
	// [ru_car_follow] execVM "itsAebian\NH_followMe.sqf"
*/

params["_car"];

_loc = getPos _car;
//_car setObjectTexture [0, "media\rhs_tigr_co.paa"];

_fm_light1 = "PortableHelipadLight_01_yellow_F" createVehicle _loc;
_fm_light2 = "PortableHelipadLight_01_yellow_F" createVehicle _loc;
_fm_light3 = "PortableHelipadLight_01_yellow_F" createVehicle _loc;

_fm_arrow1 = "ArrowDesk_R_F" createVehicle _loc;
_fm_pole1 = "Land_RedWhitePole_F" createVehicle _loc;

_fm_light1 attachTo [_car, [-0.692871,0.0537109,0.3]]; //left light
_fm_light2 attachTo [_car, [0.6,0.0537109,0.3]]; //right light
_fm_light3 attachTo [_car, [-0.692871,-2.2,0.3]]; // back light

//_fm_arrow1 setObjectTexture [0, "media\follow_me.paa"];
_fm_arrow1 attachTo [_car, [0,-2.2,0.3]];
_fm_pole1 attachTo [_car, [0.881348,-2.09863, 0.6] ];