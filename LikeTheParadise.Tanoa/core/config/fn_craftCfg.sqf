#include "..\..\script_macros.hpp"
/*
 File: fn_craftCfg.sqf
 Author: EdgeKiller
 Description:
 Master configuration file for the crafting menu.
*/
private["_craft","_return"];
_craft = [_this,0,"",[""]] call BIS_fnc_param;
if(_craft == "") exitWith {closeDialog 0}; //Bad shop type passed.
switch(_craft) do {
 case "weapon": {
 _return = [
 //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
 ["hgun_Rook40_F", ["abzug",1,"griff",1,"gehause",1,"lauf",1]],
 ["30Rnd_9x21_Mag", ["neunmm",5,"magazin",1]],
 ["arifle_SPAR_01_blk_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["30Rnd_556x45_Stanag", ["kugeln",5,"magazin",1]],
 ["SMG_05_F", ["abzug",1,"griff",1,"gehause",2,"lauf",1,"stutze",1]],
 ["30Rnd_9x21_Mag_SMG_02", ["neunmm",5,"magazin",1]],
 ["srifle_DMR_01_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["10Rnd_762x54_Mag", ["neunmm",5,"magazin",1]],
 ["srifle_EBR_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["srifle_DMR_03_woodland_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["srifle_DMR_06_camo_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["20Rnd_762x51_Mag", ["neunmm",5,"magazin",1]],
 ["arifle_AK12_F", ["abzug",1,"griff",1,"gehause",6,"lauf",3,"stutze",1,"schutz",3]],
 ["30Rnd_762x39_Mag_F", ["neunmm",5,"magazin",1]]
 ];
 };
 case "uniform": {
 _return = [
 //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
 ["U_IG_Guerilla1_1", ["stoff",45]],
 ["U_C_Driver_1", ["stoff",45]],
 ["U_B_survival_uniform", ["stoff",45]],
 ["U_OG_leader", ["stoff",45]],
 ["U_I_GhillieSuit", ["stoff",10,"palmblatt",15]],
 ["U_O_Wetsuit", ["neopren",15]]
 ];
 };
 case "backpack": {
 _return = [
 //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
 ["B_Carryall_oli", ["stoff",40]],
 ["B_ViperHarness_blk_F", ["stoff",55]],
 ["B_ViperHarness_oli_F", ["stoff",55]],
 ["B_ViperLightHarness_khk_F", ["stoff",55]],
 ["B_Bergen_hex_F", ["stoff",80]],
 ["B_Bergen_mcamo_F", ["stoff",80]],
 ["B_Bergen_tna_F", ["stoff",80]],
 ["B_Parachute", ["stoff",75]]
 ];
 };
 case "item": {
 _return = [
 //[Object classname, [item #1,quantity item #1,item #2,quantity item #2]],]
 ["lauf", ["iron_refined",20]],
 ["griff", ["iron_refined",5,"gummi_processed",10]],
 ["gehause", ["iron_refined",25,"gummi_processed",5]],
 ["schutz", ["iron_refined",5,"gummi_processed",15]],
 ["abzug", ["iron_refined",5]],
 ["stutze", ["iron_refined",10,"gummi_processed",15]],
 ["magazin", ["iron_refined",25,"gummi_processed",5]],
 ["kugeln", ["iron_refined",5]],
 ["neunmm", ["iron_refined",5]],
 ["stoff", ["palmblatt",5]],
 ["neopren", ["gummi_raw",5]]
 ];
 };
 };
_return;