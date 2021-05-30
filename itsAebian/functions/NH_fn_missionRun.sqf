/*
            author: @Aebian
            description: some functions I add to my test-mission cause I'm lazy.
            returns: functions
            created: 2020-12-31
*/

KI_fnc_baseAirSupport = 
{
  [Stryker, StrykerVHC, 1200, [228.376,11813.2,171.598]] execVM "itsAebian\NH_airSupport.sqf";
};

NH_fnc_baseSiren = 
{
  _speakers = [USMC_Base_Speaker01, USMC_Base_Speaker02, USMC_Base_Speaker03, USMC_Base_Speaker04, USMC_Base_Speaker05, USMC_Base_Speaker06];
  { [_x, "cobraSiren"] remoteExecCall ["say3D"]; } forEach _speakers

};

NH_fnc_baseIncoming = 
{
  _speakers = [USMC_Base_Speaker01, USMC_Base_Speaker02, USMC_Base_Speaker03, USMC_Base_Speaker04, USMC_Base_Speaker05, USMC_Base_Speaker06];
  { [_x, "IncomingIncoming"] remoteExecCall ["say3D"]; } forEach _speakers

};