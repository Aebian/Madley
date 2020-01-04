	[] spawn
	{
		sleep 0.25; abc = false;
		sleep 0.25; abc = true;
		
		_veh = objectParent player;
		OBJECT setPosATL ((_veh getRelPos [-4,0]) vectorAdd [0,0,0.5]);
		OBJECT setVectorUp [0,0,1];
		
		
		{ropeDestroy _x }forEach ropes _veh;
		_Rope1 = ropeCreate	[_veh,	[0, -4,		-0.5],		OBJECT, 	[1,1,-0.5],	 4.5];
		_Rope2 = ropeCreate	[_veh,	[0, -4,		-0.5],		OBJECT, 	[-1,1,-0.5], 4.5];
		_Rope2 = ropeCreate	[_veh,	[0, -10,	-0.5],		OBJECT, 	[0,-1,-0.75], 2];

		KI_SleepTime = 0.01;
		while{abc}do
		{
			[OBJECT] call KI_fnc_Veh_HoverBox;
			sleep KI_SleepTime;
		};
	};


	KI_fnc_Veh_HoverBox =
	{
		_KI_Crate = _this select 0;
		
		_KgNewton = 9.80665;
		
		_Mass = getMass _KI_Crate;
		_Newt = (_Mass * _KgNewton) * DS_SleepTime;
		_Pos = getPosATL _KI_Crate;
		_Z = _Pos select 2;
		
		_Velo = (velocityModelSpace _KI_Crate);
		_VeloZ = _Velo select 2;
		
		if(_Z > 1 && (_VeloZ > 0))then{_Newt = _Newt * 1.25;};
		if(_Z < 1 && (_VeloZ < 0))then{_Newt = _Newt * 1.25;};
		
		_LinConv = [0,0, (_Newt / 4)];
		_LinConv = [0,0, (linearConversion [0,2,_Z,_Newt,0,false])];
		
		_KI_Crate addForce [_LinConv, [1,1,1]];
		_KI_Crate addForce [_LinConv, [-1,1,1]];
		_KI_Crate addForce [_LinConv, [-1,-1,1]];
		_KI_Crate addForce [_LinConv, [1,-1,1]];
		MAINFORCE = _LinConv;
	};	


/////Optional:
if(!isNil "KI_ForceOverlay")then{removeMissionEventHandler ["Draw3D", KI_ForceOverlay];};
KI_ForceOverlay = addMissionEventHandler
["Draw3D",
	{
		_Icon = "\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\target_ca.paa";
		{
			drawIcon3D [_Icon, [1,1,1,1], (OBJECT modelToWorld _x), 1, 1, 45, str MAINFORCE , 2, 0.0325, "RobotoCondensed", "center", false];
		}forEach
		[
			[1,1,1],
			[-1,1,1],
			[-1,-1,1],
			[1,-1,1]
		];
	}];