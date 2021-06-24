/*
    author: @Aebian
    description: Autonomous Armata T-15 Combat Vehicle
    returns: nothing
	created: 2021-05-30
	[NH_T15A, 1] execVM "itsAebian\NH_autonArmata.sqf"; 
*/ 

params["_vehicle","_crew"];

_vehicle addEventHandler ["Fired",{(_this select 0) setVehicleAmmo 1}];


_vehicle lockTurret [[0,0],true];
_grpT15A = creategroup east; 

_driverT15A = _grpT15A createUnit ["O_UAV_AI", Position _vehicle, [], 0, "CARGO"]; 
_driverT15A assignAsDriver _vehicle;

_driverT15A moveInDriver _vehicle;
_vehicle lockDriver true;

if (_crew == 2) then
{
    _gunnerT15A = _grpT15A createUnit ["O_UAV_AI", Position _vehicle, [], 0, "CARGO"]; 
    _gunnerT15A assignAsGunner _vehicle;

    _gunnerT15A moveInGunner _vehicle;
    _vehicle lockTurret [[0],true];
};

