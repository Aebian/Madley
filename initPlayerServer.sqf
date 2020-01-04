/*
    Die initPlayerServer.sqf funktioniert genau wie die initPlayerLocal.sqf,
    wird jedoch auf dem Server ausgeführt. Sie erhält als Parameter einmal das
    Spielerobjekt und eine Variable die enthält ob der Spieler gejipt ist.
 */

// Parameter auslesen
params ["_unit", "_didJIP"];

// Headless Clients filtern
if (isNull _unit) exitWith {};