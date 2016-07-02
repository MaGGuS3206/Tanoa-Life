#include "..\script_macros.hpp"
_bar = abschlepphof2;

if(10000 > CASH) exitWith {titleText["Du besitzt nicht genug Geld.","PLAIN"];};

CASH = CASH - 10000;
[0] call SOCK_fnc_updatePartial;
if(10000 <= CASH) then {titleText["Du hast den Betrag bezahlt.","PLAIN"];};
_bar animate ["Door_1_move", 1];
sleep 5;
_bar animate ["Door_1_move", 0];