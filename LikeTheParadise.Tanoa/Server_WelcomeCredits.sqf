/*
	File: welcome.sqf
	Author: ZedBuster
	Link: opendayz.net/threads/dayz-welcome-message-credits-style.13071/
*/


_onScreenTime = 10;

_role1 = "WILLKOMMEN AUF LIKE THE PARADISE";
_role1names = ["Wir wuenschen dir viel Spass im Paradies."];
_role2 = "EINIGE TIPPS";
_role2names = ["Melde dich beim Einwohnermeldeamt um neue Staedte freizuschalten.","RedGull ist ein must have und dank neuer Formel hält es dich länger fit."];
_role3 = "HOMEPAGE";
_role3names = ["www.like-the-paradise.net"];
_role4 = "Changelog";
_role4names = ["Besuche unser Forum unter: www.like-the-paradise.net"];
_role5 = "TEAMSPEAK";
_role5names = ["ts.like-the-paradise.net"];
_role5 = "Viel Spaß im Paradies.";


{
sleep 5;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.6' color='#f2cb0b' align='right'>%1<br /></t>", _memberFunction]; //Ändert die Farbe und Größe der Überschrift
_finalText = _finalText + "<t size='0.8' color='#FFFFFF' align='right'>"; //Ändert die Farbe und Größe des Textes
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50],
[safezoneY + safezoneH - 0.8,0.7],
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [

[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names]

];