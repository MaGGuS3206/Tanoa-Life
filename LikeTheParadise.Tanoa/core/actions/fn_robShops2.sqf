/*
            file: fn_robShops.sqf
            Author: MrKraken
            Made from MrKrakens bare-bones shop robbing tutorial on www.altisliferpg.com forums
            Description:
            Executes the rob shob action!
            Idea developed by PEpwnzya v2.0

*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip"];
_shop = [_this,0,objNull,[objNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,objNull,[objNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if !(alive _robber) exitWith {};

_rip = true;
_kassa = 8000 + round(random 19000); //setting the money in the registry, anywhere from 3000 to 15000.
[_shop,_robber,_action,-1] remoteExec ["TON_fnc_shopState",2]; //sending information to the server so the animations and removeaction can be performed for all players if the checks clear.

_chance = random(100); //calling a random number between 0-100.
if(_chance >= 0) then {[0,format["ALARM! - Gasstation: %1 is being robbed!", _shop]] remoteExec ["life_fnc_broadcast",west]; }; //We set a 15% chance that the silent alarm is being triggered, wich sends a 911-message to the police.


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Es wird ausgeraubt , bleib in der Nähe (5m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
    while{true} do
    {
        sleep  3;
        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format["Es wird ausgeraubt , bleib in der nähe (5m) (%1%2)...",round(_cP * 100),"%"];
        _Pos = position player; // by ehno: get player pos
                                _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
                                "Marker200" setMarkerColor "ColorRed";
                                "Marker200" setMarkerText "!ACHTUNG! Tankstellenraub !ACHTUNG!";
                                "Marker200" setMarkerType "mil_warning";
        if(_cP >= 1) exitWith {};
        if(_robber distance _shop > 5) exitWith { };
        if!(alive _robber) exitWith {};

    }; // the loop continues til the progressbar is full, distance is exceeded or robber dies.
    if!(alive _robber) exitWith { _rip = false; };
    if(_robber distance _shop > 5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hint "Du warst zu weit weg! - Hier kannst du nicht mehr ausrauben."; 5 cutText ["","PLAIN"]; _rip = false; };
    5 cutText ["","PLAIN"];
    titleText[format["Du hast %1 geklaut, nichts wie weg hier , die Cops sind auf dem Weg!",[_kassa] call life_fnc_numberText],"PLAIN"];
    deleteMarker "Marker200"; // by ehno delete maker
    life_cash = life_cash + _kassa;
    _rip = false;
    life_use_atm = false;
    sleep (30 + random(180)); //Clerk in the store takes between 30-210 seconds before he manage to warn the police about the robbery.
    life_use_atm = true; // Robber can not use the ATM at this point.
    if!(alive _robber) exitWith {};
[0,format["112 - Gasstation: %2 wurde gerade von %1 ausgeraubt und es wurden $%3 gestohlen",name _robber, _shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",west];
[0,format["NEWS: Gasstation: %2 wurde gerade von %1 ausgeraubt und es wurden $%3 gestohlen",name _robber, _shop, [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",civilian];
    [getPlayerUID _robber,_robber getVariable ["realname",name _robber],"211"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
};

[_shop,_robber,_action,0] remoteExec ["TON_fnc_shopState",2];
