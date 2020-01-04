/*
    author: @Aebian
    description: enable and disable anti-air AI of SAMs & CIWs
    returns: nothing
    	// ["SILENT", [US_SAM_BATTERY_01, US_SAM_BATTERY_02, US_SAM_BATTERY_03, US_SAM_BATTERY_04]] execVM "itsAebian\KI_airDefense.sqf";


 */

params[ "_cond", "_guns"];


	if (_cond isEqualTo "ACTIVE") then { // Enable DEFENSE

		{ _x setCombatMode "RED" } forEach _guns; 
		{ _x setCombatMode "RED" } forEach _guns; 

		{ _x setCombatMode "RED" } forEach _guns; 
		{ _x setCombatMode "RED" } forEach _guns; 
		{ _x setCombatMode "RED" } forEach _guns; 

		{ _x setCombatMode "RED" } forEach _guns; 
		{ _x setCombatMode "RED" } forEach _guns; 

		{ diag_log format ["%1, %2", _x, "has been enabled" ] } forEach _guns;

} 

else 

 {

	if (_cond isEqualTo "SILENT") then { // Disable DEFENSE	

	{ _x setCombatMode "BLUE" } forEach _guns; 
	{ _x setCombatMode "BLUE" } forEach _guns; 

	{ _x setCombatMode "BLUE" } forEach _guns; 
	{ _x setCombatMode "BLUE" } forEach _guns; 
	{ _x setCombatMode "BLUE" } forEach _guns; 

	{ _x setCombatMode "BLUE" } forEach _guns; 
	{ _x setCombatMode "BLUE" } forEach _guns; 
	
	{ diag_log format ["%1, %2", _x, "has been disabled" ] } forEach _guns;

 }

}   