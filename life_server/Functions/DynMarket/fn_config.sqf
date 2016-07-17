/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// ███████████████████████████████████████████████████████████████████████
// █████████████████ DYNAMIC MARKET BASIC CONFIGURATION ██████████████████
// ███████████████████████████████████████████████████████████████████████

DYNMARKET_Serveruptime         = 06;   // Serveruptime after restart in hours
DYNMARKET_UseExternalDatabase  = true; // Should the script use the External Database?
DYNMARKET_PriceUpdateInterval  = 15;   // After how many minutes should the price be updated?
DYNMARKET_CreateBackups        = true; // Should the server save write the prices regulary into the Database? If false, it will save the prices before Server-restart?
DYNMARKET_CreateBackupInterval = 04;   // After how many updates (PriceUpdateIntervals) should the prices be saved into the Database?
DYNMARKET_UserNotification     = false; // Should the user be informed with a hint whenever the prices got updated?

// █████████████████ USER NOTIFICATION TEXTS  █████████████████

DYNMARKET_UserNotification_Text =
[
	"Die Preise wurden aktualisiert!",
	"Die neuen Preise werden berechnet!"
];

// █████████████████ ITEM GROUP CONFIGURATION █████████████████

DYNMARKET_Items_Groups =
[
	["unser",
		[
			["gummi_processed",-1,1150,1600],	//1600
			["palmwedel",-1,750,1000],			//1000
			["palmol",-1,1100,1450]				//1450
		],
		0.5
	],

	["kokos",
		[
			["kokosfleisch",-1,400,600],		//600
			["kokosmilch",-1,800,900]			//900
		],
		1
	],

	["wert",
		[
			["schmuck",-1,3100,4950],			//4950
			["diamond_uncut",-1,800,950],		//950
			["diamond_cut",-1,1900,2250],		//2550
			["oil_processed",-1,2900,3100]		//3100
		],
		1
	],

	["metal",
		[
			["iron_refined",-1,1600,2000],		//2000
			["copper_refined",-1,1300,1500]		//1500
		],
		0.2
	],

	["something",
		[
			["cement",-1,1400,1850],			//1850
			["glass",-1,900,1350]				//1350
		],
		1
	],

	["gewurz",
		[
			["zucker",-1,1200,1600],			//1600
			["salt_refined",-1,1000,1450]		//1450
		],
		1
	],

	["wasser",
		[
			["lsd",-1,4000,6500],				//6500
			["turtle",-1,15000,26000]			//26000
		],
		1
	],

	["drogen",
		[
			["heroin_processed",-1,2950,3560],	//3560
			["marijuana",-1,2750,3030],			//3020
			["cocaine_processed",-1,2900,3150]	//3150
		],
		1
	],

	["frucht",
		[
			["apple",-1,80,120],				//120
			["peach",-1,80,120]					//120
		],
		0.2
	],

	["tier",
		[
			["rabbit_raw",-1,95,95],			//95
			["rabbit",-1,115,115],				//115
			["hen_raw",-1,65,65],				//65
			["hen",-1,85,85],					//85
			["rooster_raw",-1,65,65],			//65
			["rooster",-1,85,85],				//85
			["sheep_raw",-1,95,95],				//95
			["sheep",-1,115,115],				//115
			["goat_raw",-1,115,115],			//115
			["goat",-1,135,135]					//135
		],
		1
	],

	["fisch",
		[
			["salema_raw",-1,45,45],			//45
			["salema",-1,55,55],				//55
			["ornate_raw",-1,40,40],			//40
			["ornate",-1,150,150],				//150
			["mackerel_raw",-1,175,175],		//175
			["mackerel",-1,200,200],			//200
			["tuna_raw",-1,700,700],			//700
			["tuna",-1,1000,1000],				//1000
			["mullet_raw",-1,250,250],			//250
			["mullet",-1,400,400],				//400
			["catshark_raw",-1,300,300],		//300
			["catshark",-1,500,500]				//500
		],
		1
	]

];

// █████████████████    ALL SELLABLE ITEMS    █████████████████

DYNMARKET_Items_ToTrack        =
[

	["gummi_processed",1600],  	//unser
	["palmwedel",1000],			//unser
	["palmol",1450],			//unser
	["kokosfleisch",600],		//kokos
	["kokosmilch",900],			//kokos
	["zucker",1600],			//gewurz
	["schmuck",4950],			//wert
	["oil_processed",3100],		//wert
	["copper_refined",1500],	//metal
	["iron_refined",2000],		//metal
	["salt_refined",1450],		//gewurz
	["glass",1350],				//something
	["diamond_uncut",950],		//wert
	["diamond_cut",2550],		//wert
	["cement",1850],			//something
	["lsd",6500],				//wasser
	["heroin_processed",3560],	//drogen
	["marijuana",3020],			//drogen
	["cocaine_processed",3150],	//drogen
	["apple",120],				//frucht
	["peach",120],				//frucht
	["rabbit_raw",95],			//tier
	["rabbit",115],				//tier
	["salema_raw",45],			//fisch
	["salema",55],				//fisch
	["ornate_raw",40],			//fisch
	["ornate",150],				//fisch
	["mackerel_raw",175],		//fisch
	["mackerel",200],			//fisch
	["tuna_raw",700],			//fisch
	["tuna",1000],				//fisch
	["mullet_raw",250],			//fisch
	["mullet",400],				//fisch
	["catshark_raw",300],		//fisch
	["catshark",500],			//fisch
	["turtle",26000],			//wasser
	["hen_raw",65],				//tier
	["hen",85],					//tier
	["rooster_raw",65],			//tier
	["rooster",85],				//tier
	["sheep_raw",95],			//tier
	["sheep",115],				//tier
	["goat_raw",115],			//tier
	["goat",135]				//tier
];

//███████████████████████████████████████████████████████████████████████
//██████████████████ DO NOT MODIFY THE FOLLOWING CODE! ██████████████████
//███████████████████████████████████████████████████████████████████████

DYNMARKET_Items_CurrentPriceArr = [];
DYNMARKET_sellarraycopy = DYNMARKET_Items_ToTrack;
DYNMARKET_Serveruptime = (DYNMARKET_Serveruptime * 3600) - 300;
{
	_currentArray = _x;
	DYNMARKET_Items_CurrentPriceArr pushBack [_currentArray select 0,_currentArray select 1,0];
} forEach DYNMARKET_Items_ToTrack;
publicVariable "DYNMARKET_UserNotification";
publicVariable "DYNMARKET_UserNotification_Text";
if (DYNMARKET_UseExternalDatabase) then {[1] call TON_fnc_HandleDB;};
DYNMARKET_UpdateCount = 0;
if (DYNMARKET_UseExternalDatabase) then {
	[] spawn {
		sleep DYNMARKET_Serveruptime;
		diag_log "### DYNMARKET >> CURRENT PRICES ARE BEING WRITTEN TO THE DATABASE    ###";
		diag_log "### DYNMARKET >> AS PLANNED, AWAITING RESULT...                      ###";
		[0] call TON_fnc_HandleDB;
	};
};
sleep 5;
[] call TON_fnc_sleeper;
