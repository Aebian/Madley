/*

Temp file for debugging external scripts.

[US_Chinook] execVM "itsAebian\_unsorted\default.sqf"

*/

params["_aircraft", "_group"];


            private _aircraftWeapons = _aircraft weaponsTurret [0];
            {
                if ("gatling_30mm_base" in toLowerANSI _x) exitWith 
                {
                    if (_aircraft ammo (currentMuzzle (gunner _aircraft) < 100)) then 
                    {

                        [format ["%1, %2", groupId _group, "is Winchester and is RTB, good luck, out." ]] remoteExecCall ["sideChat"];
                        diag_log format ["%1, %2", groupId _group, "is Winchester and is RTB, good luck, out." ];
                        breakOut  "attackLoop" 
                    }

                } 

            } forEach _aircraftWeapons;