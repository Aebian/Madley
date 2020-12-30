/*

Temp file for debugging external scripts.

[AH64T, AH64TT] execVM "itsAebian\_unsorted\default.sqf"

*/

params["_aircraft", "_group"];
(units _group) params ["_gunner", "_pilot"];

/*

            private _aircraftWeapons = _aircraft weaponsTurret [0];
            {
                if ("gatling_30mm" in toLowerANSI _x) then 
                {
                    if ((_aircraft ammo _x) < 1300) then 
                    {
                        hint "does this look infected?";
                    }

                } else
                {
                    hint "that";
                };

            } forEach _aircraftWeapons;

            */

/*
        {
        if ("cmdispenser" in toLowerANSI _x || "CMFlareLauncher" in toLowerANSI _x) exitWith
        {
            diag_log ([configFile >> "CfgWeapons" >> toString (_weapons select[0]), true ] call BIS_fnc_returnParents select [0]);
            for "_fire" from 1 to 4 do {
            _pilot forceWeaponFire [_x, "0"];
            sleep 1;
            };
        };
        
        } forEach _weapons;

        */



        // getArray(configFile >> "CfgWeapons" >> "rhsusf_weap_CMDispenser_M130" >> "modes")