/*
    author: @Aebian
    description: Canon back blast for armored vehicles excluding autocanon below 40mm.
    returns: nothing
	[] execVM "itsAebian\KI_CanonBlast.sqf"; 
    */ 
 
 {
    if   (_x isKindOf "Tank_F" )
		then {

        _x addEventHandler ["Fired", {
            params ["_veh", "_wep"];
            if (_wep isKindOf ["CannonCore", configFile >> "CfgWeapons"] && !(_wep isKindOf ["autocannon_Base_F", configFile >> "CfgWeapons"]))
             then {
                private _vel = velocity _veh;
                private _dir = _veh weaponDirection _wep;
                _veh setVelocity (_vel vectorAdd (_dir vectorMultiply -3.0));
            };
        }];
    };
} forEach vehicles;