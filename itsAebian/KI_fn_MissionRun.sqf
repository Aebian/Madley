/*
            author: @Aebian
            description: some functions I add to my test-mission cause I'm lazy.
            returns: functions
            created: 2020-12-31
*/

KI_fnc_baseAirSupport = 
{
  [Vulture21CR, Vulture21VHC, 1200, [1159.28,11927.1,0]] execVM "itsAebian\KI_airSupport.sqf";
};

KI_fnc_baseSiren = 
{
  _speakers = [USMC_Base_Speaker01, USMC_Base_Speaker02, USMC_Base_Speaker03, USMC_Base_Speaker04];
  { [_x, "cobraSiren"] remoteExecCall ["say3D"]; } forEach _speakers

};

KI_fnc_baseIncoming = 
{
  _speakers = [USMC_Base_Speaker01, USMC_Base_Speaker02, USMC_Base_Speaker03, USMC_Base_Speaker04];
  { [_x, "IncomingIncoming"] remoteExecCall ["say3D"]; } forEach _speakers

}