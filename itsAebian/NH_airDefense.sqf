/*
    author: @Aebian
    description: enable and disable anti-air AI of SAMs & CIWS
    returns: nothing
	created: 2010-12-19
	updated: 2021-01-10
    // ["SILENT", [US_SAM_BATTERY_01, US_SAM_BATTERY_02, US_SAM_BATTERY_03, US_SAM_BATTERY_04]] execVM "itsAebian\NH_airDefense.sqf";
 */

params[ "_cond", "_guns"];

switch (_cond) do 
{

    case "ACTIVE": // Enable DEFENSE
    {
		{ _x setCombatMode "GREEN" } forEach _guns; 
		{ diag_log format ["%1, %2", _x, "has been enabled" ] } forEach _guns;

	};

	case "SILENT": // Disable DEFENSE	
	{
		{ _x setCombatMode "BLUE" } forEach _guns; 	
		{ diag_log format ["%1, %2", _x, "has been disabled" ] } forEach _guns;

	};

};