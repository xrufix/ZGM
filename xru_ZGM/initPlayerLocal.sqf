/*
    Die initPlayerLocal.sqf wird für jeden Spieler einmal bei Missionsbeitritt
    ausgeführt, das heißt also entweder wenn die Mission gestartet wird (noch
    bevor das Briefing angezeigt wird), oder wenn der Spieler während die
    Mission bereits läuft sich mit dem Server verbindet, also jipt (steht für
    join in progress).
    Soll ein Skript nur für nicht-JIPs ausgeführt werden, können JIPs mit dem
    didJIP Befehl gefiltert werden.
 */

// Hier wird die initHC ausgeführt - der Rest der initPlayerLocal.sqf wird für
// Headless Clients nicht mehr ausgeführt!
if (isHC && !didJIP) exitWith { [localHC] execVM "initHC.sqf" };
if (!isMultiplayer)  then     { [localHC] execVM "initHC.sqf" };

// Hier wird das Briefing automatisch eingefügt und ausgeführt
#include "briefing.sqf"
