/*
    author: @Aebian
    description: Decontamination Stuff
    returns: Animations & Stuff
	created: 2022-04-03
	updated: 2022-04-03
	[NH_deconDome01,"door_2_rot",thisList,[NH_VehShower01,NH_VehShower02],"ON"] execVM "itsAebian\NH_deconUtil.sqf";
*/ 
 
 params["_dome","_door","_entities","_shower","_state"];

if (_entities findIf {_x isKindOf "Man"} !=-1) then 
{
    // MAN
    switch (_state) do 
    {
        case "ON":
        {
            _dome animate [_door, 1];
        };

        case "OFF":
        {
            _dome animate [_door, 0];
        };
    };
};


if (_entities findIf {_x isKindOf "LandVehicle"} !=-1) then 
{
    // Vehicle
    switch (_state) do 
    {
        case "ON":
        {
            _dome animate [_door, 1];
            sleep 1;
            {[_x,6,4,2,true] spawn bin_fnc_deconShowerAnimLarge;} forEach _shower;
        };

        case "OFF":
        {
            _dome animate [_door, 0];
            sleep 3;
            {[_x] spawn BIN_fnc_deconShowerAnimStop;} forEach _shower;
        };
    };
};