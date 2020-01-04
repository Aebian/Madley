/*
    author: @Aebian
    description: enable and disable of CVN's CIWS
    returns: nothing
		// CIWS_Laptop addAction ["Turn CIWS ON","itsAebian\CIWS\KI_ciws.sqf","CIWSON"];
		// CIWS_Laptop addAction ["Turn CIWS OFF","itsAebian\CIWS\KI_ciws.sqf","CIWSOFF"];
    	// _null = ["CIWSOFF"] execVM "itsAebian\CIWS\ciws.sqf"


 */

params[ "_cond", "", "", "_cond"];


	if (_cond isEqualTo "CIWSON") then { // Enable CIWS

		["ACTIVE", [Mk29LB, Mk29RF, PhalanxRF, PhalanxLM, PhalanxCB, Mk31LF, Mk31RB]] execVM "itsAebian\KI_airDefense.sqf";
 
 		CIWS_Laptop setVariable  ["CIWSenabled", false];

 		CIWS_Laptop setObjectTexture [0, "itsAebian\CIWS\laptop_02_screen_on.paa"];


	} 

else 

 {

	if (_cond isEqualTo "CIWSOFF") then { // Disable CIWS	

		["SILENT", [Mk29LB, Mk29RF, PhalanxRF, PhalanxLM, PhalanxCB, Mk31LF, Mk31RB]] execVM "itsAebian\KI_airDefense.sqf";

		CIWS_Laptop setVariable  ["CIWSenabled", true];

		CIWS_Laptop setObjectTexture [0, "itsAebian\CIWS\laptop_02_screen_off.paa"];

 	}

}   