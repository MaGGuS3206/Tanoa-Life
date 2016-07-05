#include "..\..\script_macros.hpp"
/*
    File: fn_gather.sqf
    Author: Devilfloh

    Description:
    Main functionality for gathering.
*/
private["_maxGather","_resource","_amount","_maxGather","_requiredItem"];
if (life_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_time = 0;
_profName = [_gather] call life_fnc_profType; if( _profName != "" ) then {
    _data = missionNamespace getVariable (_profName);
    _time = ( 3 - (0.25 * (_data select 0)));
    };

for "_i" from 0 to 2 do{
    player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    };
    sleep
    _time;
    };

    if(([true,_gather,_diff] call life_fnc_handleInv)) then{_itemName = [([_gather,0] call life_fnc_varHandle)] call life_fnc_varToStr;titleText[format[localize "STR_NOTF_Gather_Success",_itemName,_diff],"PLAIN"];
    if( _profName != "" ) then {[_profName,25] call life_fnc_addExp;};
};

life_action_inUse = false;