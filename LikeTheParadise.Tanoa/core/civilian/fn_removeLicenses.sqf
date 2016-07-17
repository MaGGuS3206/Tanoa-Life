#include "..\..\script_macros.hpp"
/*
    File: fn_removeLicenses.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Used for stripping certain licenses off of civilians as punishment.
*/
private "_state";
_state = param [0,1,[0]];

switch (_state) do {
    //Death while being wanted
    case 0: {
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("heroin","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("marijuana","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("cocaine","civ"),false];
    };

    //Jail licenses
    case 1: {
        missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("hero","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("rebeltwo","civ"),false];
        missionNamespace setVariable [LICENSE_VARNAME("rebelthree","civ"),false];
    };

    //Remove motor vehicle licenses
    case 2: {
        if (missionNamespace getVariable LICENSE_VARNAME("driver","civ") || missionNamespace getVariable LICENSE_VARNAME("pilot","civ") || missionNamespace getVariable LICENSE_VARNAME("trucking","civ") || missionNamespace getVariable LICENSE_VARNAME("boat","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("pilot","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("driver","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("trucking","civ"),false];
            missionNamespace setVariable [LICENSE_VARNAME("boat","civ"),false];
            hint localize "STR_Civ_LicenseRemove_1";
            };
        };


    //Killing someone while owning a gun license
    case 3: {
        if (missionNamespace getVariable LICENSE_VARNAME("gun","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("gun","civ"),false];
            hint localize "STR_Civ_LicenseRemove_2";
            };
        };


    // Hero shizzle
    case 4: {
        if (missionNamespace getVariable LICENSE_VARNAME("hero","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("hero","civ"),false];
            hint localize "STR_Civ_LicenseRemove_3";
            };
        };


    case 5: {
        if (missionNamespace getVariable LICENSE_VARNAME("hero","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("rebel","civ"),false];
            hint "Du hast die Seiten gewechselt!";
            };
        };


    case 6: {
        if (missionNamespace getVariable LICENSE_VARNAME("rebel","civ")) then {
            missionNamespace setVariable [LICENSE_VARNAME("hero","civ"),false];
            hint "Du hast die Seiten gewechselt!";
            };
        };
};