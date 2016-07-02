/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "playerMarker.sqf"; //Zeigt Spielerposition / Gangposition an, eingefügt von Slayer
[] execVM "Server_WelcomeCredits.sqf"; // Willkommensnachrichten rechts bei Spawn von Slayer eingefügt
[] execVM "scripts\monitor.sqf"; // Statusbar von Slayer eingefügt
_igiload = execVM "IgiLoad\IgiLoadInit.sqf";


StartProgress = true;