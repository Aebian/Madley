//Parameters
params ["_car", "_alarm", "_duration", "_lights", "_logic"];

//Calculate timeout
private "_timeout";
_timeout = time + _duration;

//Loop
while { alive _car && canMove _car && time < _timeout } do {
	//Play sample
	_car say3D _alarm;
	
	if (isServer) then {
		for "_i" from 1 to 4 do {
			_logic action ["LightOn", _car];
			sleep 0.25;
			_logic action ["LightOff", _car];
			sleep 0.25;
		};
	} else {
		sleep 2;
	};
};
