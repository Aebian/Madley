params 
[
	"_source",
	["_radius", 200]
];

_source say3D ["DEDZ_QUEST_11_EMP_REVERB", 2000, 1, false];
_source say3D ["DEDZ_QUEST_11_EMP_SOURCE", 1000, 1, false];
_source say3D ["DEDZ_EXPLOSION_AMBIENT", 1000, 1, false];

_lightsOnMen = ( allMissionObjects "#lightpoint" select { _x distance _source <= _radius } );

{ deleteVehicle _x } forEach _lightsOnMen;

_lampsToPop = (nearestObjects [getPosWorld _source, [], _radius])  select {

	"lamp" in tolower ( getText ( configFile >> "CfgVehicles" >> typeOf _x >> "editorSubcategory" ) )

};

_lampsToDisable = (nearestObjects [getPosWorld _source, [], _radius])  select {

	lightIsOn _x in ["AUTO", "ON"];

};

private _handle = _lampsToPop spawn {

	sleep 0.5;
	{ 
		_x switchLight "OFF";
		_x say3D 
		[
			selectRandom ["DEDZ_LIGHTPOP_1","DEDZ_LIGHTPOP_2","DEDZ_LIGHTPOP_3","DEDZ_LIGHTPOP_4"],
			300,
			0.9+ random 0.2,
			false
		];
		sleep 0.05; 

		_light = "#lightpoint" createVehicle position _x; 
		_light setPosWorld getPosWorld _x; 
		
		_light setLightAmbient [0.25,0.5,1];   
		_light setLightColor [0.25,0.5,1];  
		_light setLightIntensity 10;  
		_light setLightAttenuation [50, 0, 0, 0, 1, 10]; 
		
		_light spawn { 
			
			for "_i" from 50 to 0 step -10 do { 
			
			_this setLightIntensity _i * 5;  
			_this setLightAttenuation [_i^2, 0, 0, 0, 1, _i^5]; 
			sleep 0.0015; 
			
			}; 
			
			deleteVehicle _this; 
		};

	} forEach _this;

};


[_handle, _lampsToDisable] spawn {
	params ["_handle", "_lampsToDisable"];
	waitUntil { scriptDone _handle };

	{
		_x switchLight "OFF";
	} forEach _lampsToDisable;

};


_empLight = "#lightpoint" createVehicle position _source; 
_empLight setPosWorld getPosWorld _source; 
 
_empLight setLightAmbient [0.25,0.5,1];   
_empLight setLightColor [0.25,0.5,1];  
_empLight setLightIntensity 0;  
_empLight setLightAttenuation [50, 0, 0, 0, 1, 100]; 
 

_empLight spawn { 
	
	for "_i" from 0 to 50 do { 
	
	_this setLightIntensity _i * 5;  
	_this setLightAttenuation [_i^2, 0, 0, 0, 1, _i^10]; 
	sleep 0.0015; 
	
	}; 
	
	for "_i" from 50 to 0 step -5 do { 
	
	_this setLightIntensity _i * 5;  
	_this setLightAttenuation [_i^2, 0, 0, 0, 1, _i^10]; 
	sleep 0.0015; 
	
	}; 
	
	deleteVehicle _this; 
 
};


_handle 