/*
    author: @Aebian
    description: Canon back blast for armored vehicles excluding autocanon below 40mm.
    returns: nothing
    created: 2016-10-03
	updated: 2022-04-03
	[] execVM "itsAebian\NH_canonBlast.sqf"; 
*/ 
 
 {
    if (_x isKindOf "Tank_F" )
		then {
                _x addEventHandler ["Fired", {
                    params ["_veh", "_wep"];
                    if (_wep isKindOf ["CannonCore", configFile >> "CfgWeapons"] && !(_wep isKindOf ["autocannon_Base_F", configFile >> "CfgWeapons"]) && !(_wep isKindOf ["autocannon_35mm", configFile >> "CfgWeapons"]) && !(_wep isKindOf ["rhs_weap_azp23", configFile >> "CfgWeapons"]) && !(_wep isKindOf ["rhs_weap_2a42", configFile >> "CfgWeapons"]))
                    then {
                        private _vel = velocity _veh;
                        private _dir = _veh weaponDirection _wep;
                        _veh setVelocity (_vel vectorAdd (_dir vectorMultiply -2.7));
                    };
                }];
    };
} forEach vehicles;