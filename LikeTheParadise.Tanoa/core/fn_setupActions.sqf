/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/




switch (playerSide) do{
	case civilian:
    {
    //Ausweis
    life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
    };
    case west:
    {
   	// nano EMP Little Bird
	life_actions = life_actions + [player addAction["<t color='#FF0000'>EMP Operator Konsole öffnen</t>",life_fnc_openEmpMenu,[],8,false,false,"",'[_this] call life_fnc_isEmpOperator']];
    //Ausweis
    life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
    };
    case independent:
    {
    //Ausweis
    life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
    };
    case east:
    {
    //Ausweis
    life_actions = life_actions + [player addAction["Ausweis zeigen",life_fnc_Lizenzzeigen,"",1,false,true,"",'!isNull cursorTarget && cursorTarget isKindOf "Man"']];
    };
};
