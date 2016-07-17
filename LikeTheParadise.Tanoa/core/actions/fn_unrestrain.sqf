#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?





if(life_inv_handcuffkeys > 0) then {
	life_inv_handcuffs = life_inv_handcuffs + 1;
	_unit setVariable ["restrained",false,true];
	_unit setVariable ["Escorting",false,true];
	_unit setVariable ["transporting",false,true];
	detach _unit;
	} else {
			hint "Du hast keine Handschellenschlüssel!";
};


