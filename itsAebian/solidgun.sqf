
/*
            author: @Aebian
            description: Steady Gunner
            returns: Nothing
            created: 2019-08-22
            //[A_BaseMG] execVM "itsAebian\solidgun.sqf"
*/

params ["_gun"];

_unit = gunner _gun;

if (!isNull gunner _gun) then {



	_unit disableAI "AUTOCOMBAT";
	//_unit disableAI "WEAPONAIM";

}  else {
	

	_unit enableAI "AUTOCOMBAT";
	//_unit enableAI "WEAPONAIM";

}



