if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];
if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};
if(!(_ziel isKindOf "Man")) then {_ziel = player;};
if(!(alive _ziel)) then {_ziel = player;};
switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Rekrut"; };
   case 2: { _rang = "Officer"; };
   case 3: { _rang = "Sergeant"; };
   case 4: { _rang = "Lieutenant"; };
   case 5: { _rang = "Captain"; };
   case 6: { _rang = "Commander"; };
   case 7: { _rang = "Deputy Chief"; };
   case 8: { _rang = "Assistant Chief"; };
   case 9: { _rang = "Chief of Police"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Gendarmerie Tanoa";
 };
 case east:{
  switch (call life_adaclevel) do{
   case 1: { _rang = "ADAC Praktikant"; };
   case 2: { _rang = "ADAC Azubi"; };
   case 3: { _rang = "ADAC Geselle"; };
   case 4: { _rang = "ADAC Techniker"; };
   case 5: { _rang = "ADAC Meister"; };
   case 6: { _rang = "ADAC Co.Chef"; };
   case 7: { _rang = "ADAC Chef"; };
   case 8: { _rang = "Leitung"; };
  };
  _marke = "marke_ziv";
  _org = "ADAC Tanoa";
 };
 case independent:{
  switch (call life_mediclevel) do{
   case 1: { _rang = "Notarzt"; };
   case 2: { _rang = "Notarzt"; };
   case 3: { _rang = "Notarzt"; };
   case 4: { _rang = "Notarzt"; };
   case 5: { _rang = "Notarzt"; };
   case 6: { _rang = "Notarzt"; };
   case 7: { _rang = "Notarzt"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_ziv";
  _org = "Republik Tanoa";
 };
 case civilian:{
  if(playerSide == civilian)then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Tanoa";
  }else{
   _rang = "Zivilist";
   _marke = "marke_abi";
   _org = "Republik Tanoa";
  };
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];
[player, _message] remoteExec ["life_fnc_Lizenzsehen",_ziel];