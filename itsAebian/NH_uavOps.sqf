/*
            author: @Aebian
            description: Orbital Satelite camera
            returns: Images
            created: 2018-07-22
            //[A_screenRU, "ascreenfeed",[10272.3,10329.8,65.0],A_CAMP_MIDDLE_POS, 47.0, 4] execVM "itsAebian\NH_uavOps.sqf"
*/


params ["_screen", "_feed","_pos", "_target", "_direction", "_effect"];

	_campos = (_pos getPos [-1, _direction]) vectorAdd [0,0, (_pos select 2)]; 

	// systemChat str (_campos); // debug purpose

	_screen setObjectTexture [ 0, format ["#(argb,512,512,1)r2t(%1,1)", _feed]];

/* create camera and stream to render surface */
	_cam = "camera" camCreate _campos;  
	_cam camSetTarget _target;
	_cam cameraEffect ["INTERNAL", "BACK", _feed];

	_cam camCommit 1;
	
/* switch cam to thermal */

_feed setPiPEffect [6, 0, 0, 9, 0, 0, 0, false];
_feed setPiPEffect [_effect];