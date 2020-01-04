/*
   init.sqf
 */

WEST setFriend [CIVILIAN, 1];
CIVILIAN setFriend [WEST, 1];

if (!isServer) then {waitUntil{!isnull player}};
