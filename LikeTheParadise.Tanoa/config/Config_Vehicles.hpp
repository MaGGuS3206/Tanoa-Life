class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } }
        };
    };
    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };
    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "O_Truck_03_transport_F", { "", "", -1 } },
            { "O_Truck_03_covered_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "O_Truck_03_device_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
        };
    };
    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Transport_04_box_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_F", { "", "", -1 } },
			{ "B_T_VTOL_01_infantry_F", { "", "", -1 } },
			{ "C_Plane_civil_01_F", { "", "", -1 } },
			{ "C_Plane_civil_01_racing_F", { "", "", -1 } }
        };
    };
     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
			{ "I_C_Boat_Transport_02_F", { "", "", -1 } }
        };
    };
    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", { "", "", -1} }
        };
    };
	class hero_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", { "", "", -1} }
        };
    };
	class hero_air {
        side = "med";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },
            { "O_Heli_Transport_04_box_F", { "", "", -1 } },
			{ "B_T_VTOL_01_vehicle_F", { "", "", -1 } },
			{ "B_T_VTOL_01_infantry_F", { "", "", -1 } }
        };
    };
    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } }
        };
    };
    class med_air {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } }
        };
    };
    class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_GEN_Offroad_01_gen_F", { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", { "life_coplevel", "SCALAR", 1 } },
			{ "C_Hatchback_01_F", { "life_coplevel", "SCALAR", 2 } },
			{ "B_Truck_01_transport_F", { "life_coplevel", "SCALAR", 3 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 4 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 6 } },
			{ "B_LSV_01_unarmed_F", { "life_coplevel", "SCALAR", 7 } },
			{ "B_CTRG_LSV_01_light_F", { "life_coplevel", "SCALAR", 7 } }
        };
    };
    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 2 } },
			{ "C_Heli_Light_01_civil_F", { "life_coplevel", "SCALAR", 2 } },
			{ "O_Heli_Light_02_unarmed_F", { "life_coplevel", "SCALAR", 5 } },
			{ "B_T_VTOL_01_vehicle_F", { "life_coplevel", "SCALAR", 7 } },
			{ "B_T_VTOL_01_infantry_F", { "life_coplevel", "SCALAR", 7 } },
			{ "C_Plane_civil_01_F", { "life_coplevel", "SCALAR", 4 } },
			{ "C_Plane_civil_01_racing_F", { "life_coplevel", "SCALAR", 4 } },
			{ "I_Heli_light_03_unarmed_F", { "life_coplevel", "SCALAR", 7 } }
        };
    };
    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "life_coplevel", "SCALAR", 2 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", { "life_coplevel", "SCALAR", 3 } },
			{ "I_C_Boat_Transport_02_F", { "life_coplevel", "SCALAR", 3 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */
    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };
    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };
    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };
    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {
			{ "Zivilist", "civ", {
                "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"
            } },
            { "Camo", "civ", {
                "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"
            } }
		};
    };
	/* class C_Scooter_Transport_01_F {
        vItemSpace = 10;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = {
			{ "Schwarz", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            } },
			{ "Blau", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            } },
			{ "Grau", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            } },
			{ "Grün", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            } },
			{ "Rot", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
			{ "Weiß", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
			{ "Gelb", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            } }
		};
    };
	*/
    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 600000;
        textures[] = { };
    };
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 180;
        licenses[] = { {"rebel"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };
	class B_LSV_01_unarmed_F {
		vItemSpace = 180;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 160000;
        textures[] = {
			{ "Schwarz", "cop", {
                "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
            } },
			{ "Camo", "cop", {
                "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
            } }
		};
    };
	class B_CTRG_LSV_01_light_F {
		vItemSpace = 180;
        licenses[] = { {""}, {"tsf"}, {""}, {""} };
        price = 160000;
        textures[] = {
			{ "Schwarz", "cop", {
                "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"
            } },
			{ "Camo", "cop", {
                "\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa",
				"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"
            } }
		};
    };
    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 25000;
        textures[] = {
			{ "Black", "cop", {
                "\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
            } },
            { "Digital", "cop", {
                "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"
            } }
		};
    };
    class O_Truck_03_transport_F {
        vItemSpace = 325;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 575000;
        textures[] = {
			{ "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
            } },
			{ "HEX Grün", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            } }
		};
    };
    class O_Truck_03_device_F {
        vItemSpace = 1000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 6250000;
        textures[] = {
			{ "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
            } },
            { "HEX Grün", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            } }
		};
    };
    class Land_CargoBox_V1_F {
        vItemSpace = 10000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
    class Box_IND_Grenades_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
    class B_supplyCrate_F {
        vItemSpace = 1000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	class Land_Wreck_Traw_F {
        vItemSpace = 10000000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
	class Land_Wreck_Traw2_F {
        vItemSpace = 10000000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };
    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25500;
        textures[] = { };
    };
    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = { };
    };

	class I_C_Boat_Transport_02_F {
        vItemSpace = 150;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 125000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 850;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 3400000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 525;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\cop\cop_hemtt1.paa",
                "textures\cop\cop_hemtt.paa"
            } }

		};
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
        };
    };

	class C_Offroad_02_unarmed_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 25500;
        textures[] = {
			{ "Schwarz", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            } },
			{ "Blau", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            } },
			{ "Grün", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            } },
			{ "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            } },
			{ "Rot", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            } },
			{ "Medic", "med", {
                "textures\medic\medic_jeep.paa"
            } },
			{ "Polizei", "cop", {
                "textures\cop\cop_jeep.paa"
            } },
			{ "Braun", "reb", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa"
            } },
			{ "Oliv", "reb", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa"
            } },
			{ "Weiß", "reb", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            } }
		};
    };

	class B_GEN_Offroad_01_gen_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 25500;
        textures[] = {};
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 105000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "textures\cop\cop_limo.paa"
            } },
            { "Undercover", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Medic", "med", {
                "textures\medic\medic_limo.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 340000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_opfor_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_opfor_co.paa"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_opfor_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_opfor_co.paa"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {

			{ "HEX", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"
            } },
            { "HEX Grün", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
            } }
		};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 10500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "Gendarmerie", "cop", {
                "textures\cop\cop_limo.paa"
            } },
			{ "Undercover", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Medic", "med", {
                "textures\medic\medic_limo.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Gendarmerie", "cop", {
                "textures\cop\cop_suv.paa"
            } },
            { "Undercover", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Medic", "med", {
                "textures\medic\medic_suv.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 110;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 170;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 175000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 500000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\cop\cop_littlebird.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Medic", "med", {
                "textures\medic\medic_littlebird.paa"
            } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 70;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 350000;
    };


		class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 450;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 9000000;
		textures[] = {
			{ "Schwarz", "civ", {
                "\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_black_co.paa",
				"\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_black_co.paa"
            } },
			{ "Polizei", "cop", {
                "\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_black_co.paa",
				"\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_black_co.paa"
            } },
			{ "Dark Green", "civ", {
                "\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext01_co.paa",
				"\A3\air_f_heli\Heli_Transport_03\Data\heli_transport_03_ext02_co.paa"
            } }
		};
    };

		class O_Heli_Transport_04_box_F {
        vItemSpace = 400;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 8000000;
    };



    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 200;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 2500000;
        textures[] = {
			{ "Black", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "Gendarmerie", "cop", {
                "textures\cop\cop_orca.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
			{ "Digi", "reb", {
                "\A3\air_f_heli\Heli_Light_02\Data\heli_light_02_ext_opfor_v2_co.paa"
            } },
            { "Medic", "med", {
                "textures\medic\medic_orca.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Zivil", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_fuel_indp_co.paa"
            } },
            { "Desert Digi", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_opfor_co.paa",
				"\a3\soft_f_beta\Truck_02\data\truck_02_fuel_opfor_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 350;
        licenses[] = { {"pilot" }, {"cAir"}, {""}, {""} };
        price = 5000000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
			{ "Ion", "reb", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "reb", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "Polizei", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)",
                "#(argb,8,8,3)color(1,1,1,0.8)",
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_1_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_2_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_3_indp_co.paa"
            } },
			{ "Digi Green", "reb", {
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_1_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_2_indp_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\heli_transport_02_3_indp_co.paa"
            } }
        };
    };

	class B_T_VTOL_01_vehicle_F {
        vItemSpace = 50;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 2500000;
        textures[] = {
			{ "Olive", "civ", {
                "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"
            } },
			{ "Polizei", "cop", {
                "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"
            } }
		};
    };

    class B_T_VTOL_01_infantry_F {
        vItemSpace = 10;
        licenses[] = { {"pilot" }, {"cAir"}, {"mAir"}, {""} };
        price = 200000;
        textures[] = {
			{ "Olive", "civ", {
                "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"
            } },
			{ "Polizei", "cop", {
                "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
				"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"
            } }
		};
    };

	class C_Plane_civil_01_F {
        vItemSpace = 75;
        licenses[] = { {"pilot" }, {"cAir"}, {""}, {""} };
        price = 400000;
        textures[] = {
			{ "Rennen (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Rennen", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Rote Linie (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Rote Linie", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Stamm (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Stamm", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Blaue Welle (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Blaue Welle", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
			},
            { "Polizei", "cop", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
			}
		};
    };

    class C_Plane_civil_01_racing_F {
        vItemSpace = 75;
        licenses[] = { {"pilot" }, {"cAir"}, {""}, {""} };
        price = 400000;
        textures[] = {
			{ "Rennen (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Rennen", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Rote Linie (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Rote Linie", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Stamm (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Stamm", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Blaue Welle (Hellbrauner Innenraum)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Blaue Welle", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
			},
            { "Polizei", "cop", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
			}
		};
    };

	class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 1000000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\cop\cop_hellcat.paa"
            } }
        };
    };
};
