/*
    Die briefing.sqf wird in der initPlayerLocal eingebunden und ausgeführt.
    Hier können und sollten Informationen rund um die Mission angegeben werden,
    die man sich dann bei Eventbeginn noch einmal kurz durchlesen kann. Dies
    ist besonders wichtig für die Reserve, da sie sich nicht auf eine bestimmte
    Rolle vorbereiten kann.

    Briefingeinträge können mit dem Befehl createDiaryRecord erstellt werden.
    Der Text der einzelnen Einträge kann noch mit folgenden Befehlen formatiert
    werden:
    <br/>                                               - Zeilenumbruch
    <t/>                                                - Einrücken (Tabulator)
    <img image='BILDPFAD' width='200' height='200'/>    - Bild einbinden
    <marker name='MARKER'>TEXT</marker>                 - Verlinkung auf Marker
    <execute expression='CODE'>TEXT</execute>           - Code ausführen
 */

player createDiaryRecord ["Diary", [
    "Auftrag",
    "Erfülle den Auftrag, den dir der Zeus erteilt.<br/><br/>"
    + "Checke auch deinen Tasks-Tab!"
]];

