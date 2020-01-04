        /*
            author: @Aebian
            description: Launch script for AI catapult start from USS Freedom
            returns: nothing
            created: 2017-05-02
            // _null = [Freedom, KI_plane02,"Catapult3"] execVM "scripts\ki_launch.sqf"
        */

        params["_carrier","_plane", "_catapult"];


        private _carrierObj = "Land_Carrier_01_hull_07_F";

        if (_catapult in ["Catapult1", "Catapult2"]) then {
            _carrierObj = "Land_Carrier_01_hull_04_F";
        };

        (driver _plane) disableAI "PATH";
        (driver _plane) disableAI "MOVE";

        sleep 10;

        _carrierObjects = _carrier nearObjects [_carrierObj, 100];

        _CarrierPart = _carrierObjects param [0, objNull];

        _carrierPartCfgCatapult = configfile >> "CfgVehicles" >> _carrierObj >> "Catapults" >> _catapult;
        _CarrierPartanimations = getArray (_carrierPartCfgCatapult >> "animations");
        [_CarrierPart, _CarrierPartanimations, 10] spawn BIS_fnc_Carrier01AnimateDeflectors;

        sleep 12;
        _plane engineOn true;

        [_plane] call BIS_fnc_AircraftCatapultLaunch;

        sleep 3;
        (driver _plane)  enableAI "PATH";
        (driver _plane)  enableAI "MOVE";
        sleep 4;
        [_CarrierPart, _CarrierPartanimations, 0] spawn BIS_fnc_Carrier01AnimateDeflectors;