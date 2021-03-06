/*
            author: @Aebian
            description: spawn targetSoldier on enemie unit/vehicle
            returns: LaserTarget the player or his AI can lock-on to.
            created: 2019-09-04
            //[LDF_RADAR_01, LDF_SAM_01] execVM "itsAebian\NH_additionalTarget.sqf"
*/


params["_weapons"];

{
    private _objectHandle = _x;
    private _side = side _objectHandle;
    private _className = switch (_side) do 
    	{
	    	case independent: { "I_TargetSoldier" };
	        case west: { "B_TargetSoldier" };
	        case east: { "O_TargetSoldier" };
	        default { "" }; // Aliens
    	};

    	createVehicleCrew (_className createVehicle (getPos _objectHandle));

} forEach _weapons;





