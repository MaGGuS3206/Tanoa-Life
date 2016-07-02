#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
		
		if (backpack player isEqualTo "B_Carryall_khk") then {
            (unitBackpack player) setObjectTextureGlobal [0, ""];
        };
		
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\cop_uniform.jpg"];
        };
		if (backpack player isEqualTo "B_Bergen_sgg") then {
            (unitBackpack player) setObjectTextureGlobal [0, "textures\cop\gendarmerie-backpack.paa"];
        };
		if (backpack player isEqualTo "B_Carryall_cbr") then {
            (unitBackpack player) setObjectTextureGlobal [0, ""];
        };
    };

    case independent: {
        if (uniform player isEqualTo "U_C_Driver_1_white") then {
            player setObjectTextureGlobal [0, "textures\medic\medic_uniform2.paa"];
        };
		if (uniform player isEqualTo "U_C_Driver_3") then {
            player setObjectTextureGlobal [0, "textures\medic\medic_pilot.paa"];
        };
		if (backpack player isEqualTo "B_Carryall_khk") then {
            (unitBackpack player) setObjectTextureGlobal [0, ""];
        };
		if (backpack player isEqualTo "B_Carryall_cbr") then {
            (unitBackpack player) setObjectTextureGlobal [0, "textures\medic\medic-backpack.paa"];
        };
    };
};
