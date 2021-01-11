/*
    author: @Aebian
    description: Animated control checkpoint.
    returns: nothing
	created: 2021-01-02
	["PreCheck", TestTrigger, [SgtTest,CplTest], TestGate] execVM "itsAebian\KI_controlCheckpoint.sqf";
	Usage: Create trigger 8 long, 3 wide.  
*/

params["_cond", "_triggerObj", "_group", "_barGate"];


(list _triggerObj) params["_vehicleObject"];
_vehicleDriver = (driver _vehicleObject);

(_group) params["_watchGuard", "_inspectGuard"];

if ((direction _vehicleObject) != ( ((_triggerObj getRelDir _barGate) < +2) || ((_triggerObj getRelDir _barGate) < -2) )) exitWith { hint "nope";};


{_watchGuard disableAI _x} forEach ["AUTOTARGET", "FSM", "MOVE", "TARGET"];
{_inspectGuard disableAI _x} forEach ["AUTOTARGET", "FSM", "MOVE", "TARGET"];

switch (_cond) do 
{
	case "PreCheck":
	{
		_watchGuard reveal [_vehicleObject, 4];
		_watchGuard doWatch _vehicleObject;

        [format ["%1: %2", groupId (group _watchGuard), "Slow Down and stop your vehicle, your entering a security checkpoint." ]] remoteExecCall ["sideChat", allPlayers select {_vehicleObject distance _watchGuard < 15}];
		diag_log format ["%1: %2", (group _watchGuard), "Slow Down and stop your vehicle, your entering a security checkpoint." ];

		_watchGuard disableAI "ANIM";
		[_watchGuard, "Acts_PercMstpSlowWrflDnon_handup2c"] remoteExecCall ["playMove"];

		waitUntil {speed _vehicleObject == 0 };
		sleep 2;

		["Inspection", _triggerObj, _group, _barGate] execVM "itsAebian\KI_controlCheckpoint.sqf";

	};

	case "Inspection":
	{
		_inspectGuard reveal [_vehicleObject, 4];
		_inspectGuard doWatch _vehicleObject;

		[format ["%1: %2", groupId (group _watchGuard), "Turn off the engine and stay in your vehicle." ]] remoteExecCall ["sideChat", allPlayers select {_vehicleObject distance _watchGuard < 15}];
		diag_log format ["%1: %2", groupId (group _watchGuard), "Turn off the engine and stay in your vehicle." ];
		
		sleep 4;
		[_watchGuard, "Acts_SignalToCheck"] remoteExecCall ["playMove"];
		
		private ["_animEH"];
		_animEH = [_watchGuard, ["AnimDone", 
		{
			params["_unit", "_anim"];
			if (_anim == "Acts_SignalToCheck") then 
			{
				// Remove eventhandler
				_unit removeEventHandler ["AnimDone", _thisEventHandler];
				{_unit enableAI _x} forEach ["ANIM", "AUTOTARGET", "FSM", "MOVE", "TARGET"];
			}
		}]] remoteExecCall ["addEventHandler", 0, _watchGuard];
		_watchGuard setVariable ["KI_animEH", _animEH];
		
		sleep 3;
		[_inspectGuard, "Acts_WalkingChecking"] remoteExecCall ["switchMove"];
		
		private ["_animEH"];
		_animEH = [_inspectGuard, ["AnimDone", 
		{
			params["_unit", "_anim"];
			if (_anim == "Acts_WalkingChecking") then 
			{
				// Remove eventhandler
				_unit removeEventHandler ["AnimDone", _thisEventHandler];
				{_unit enableAI _x} forEach ["ANIM", "AUTOTARGET", "FSM", "MOVE", "TARGET"];
							
				// Ensure correct ending
				_unit switchMove "AmovPercMstpSlowWrflDnon";
			}
		}]] remoteExecCall ["addEventHandler", 0, _inspectGuard];
		_inspectGuard setVariable ["KI_animEH", _animEH];

		sleep 5;
		_watchGuard enableAI "ANIM";

		[format ["%1: %2", groupId (group _watchGuard), "Your vehicle checks out. You are allowed to pass. Start your engine and move trough gate." ]] remoteExecCall ["sideChat", allPlayers select {_vehicleObject distance _watchGuard < 10}];
		diag_log format ["%1: %2", groupId (group _watchGuard), "Your vehicle checks out. You are allowed to pass. Start your engine and move trough gate." ];

		sleep 20;
		["OpenGate", _triggerObj, _group, _barGate] execVM "itsAebian\KI_controlCheckpoint.sqf";

	};

	case "OpenGate": 
	{
		
		_barGate animate ["Door_1_rot", 1];
	};

};