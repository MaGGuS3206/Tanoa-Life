#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch (playerSide) do {
    case west: {
		ctrlShow[1207,false];
		ctrlShow[1209,false];
		ctrlShow[2025,false];
        ctrlShow[2011,false];
		ctrlShow[40003,false]; //Medic Placables
    };

    case civilian: {
		ctrlShow[1210,false];
		ctrlShow[2008,false];
        ctrlShow[2012,false];
		ctrlShow[20003,false]; // COP Placeables
		ctrlShow[40003,false]; //Medic Placables
    };

    case independent: {
		ctrlShow[1210,false];
		ctrlShow[2008,false];
		ctrlShow[1207,false];
		ctrlShow[1209,false];
        ctrlShow[2012,false];
		ctrlShow[2025,false];
        ctrlShow[2011,false];
		ctrlShow[20003,false];		// COP Placeables
		ctrlShow[980022,false];	//Markt
		ctrlShow[980021,false];	//Markt
    };
};

if (FETCH_CONST(life_adminlevel) < 6) then {
    ctrlShow[20210,false];
    ctrlShow[2021,false];
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
