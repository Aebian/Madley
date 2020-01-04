//unflip_action

_vcl = _this select 3; 

//hint format ["%1", _vcl];

player removeAction natascha_unflip;

_dir = getDir _vcl;
_pos = getPos _vcl;
_vcl setDir _dir;
_vcl setVectorUp [0,0,0]; 
_vcl setPos _pos; 
_vcl setvelocity [0,0,1];
_vcl setDir _dir;

if (true) exitWith {};
