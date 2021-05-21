/*
   init.sqf
 */

WEST setFriend [CIVILIAN, 1];
CIVILIAN setFriend [WEST, 1];

WEST setFriend [EAST, 0.8];
EAST setFriend [WEST, 0.7];

if (!isServer) then {waitUntil{!isnull player}};