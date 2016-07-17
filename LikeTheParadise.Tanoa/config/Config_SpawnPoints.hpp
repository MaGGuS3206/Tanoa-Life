/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Georgetown {
            displayName = "Georgetown";
            spawnMarker = "civ_spawn_georgetown";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "id", true }, { "rebel", false } };
            level[] = { "", "", -1 };
        };

        class Katkoula {
            displayName = "Katkoula";
            spawnMarker = "civ_spawn_katkoula";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "id", true } };
            level[] = { "", "", -1 };
        };

        class Doodstil {
            displayName = "Doodstil";
            spawnMarker = "civ_spawn_doodstil";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "id", true } };
            level[] = { "", "", -1 };
        };

        class Tuvanaka {
            displayName = "Tuvanaka";
            spawnMarker = "civ_spawn_tuvanaka";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "rebel", false } };
            level[] = { "", "", -1 };
        };

        class Oumere {
            displayName = "Oumere";
            spawnMarker = "civ_spawn_oumere";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "oumere", true }, { "id", true }  };
            level[] = { "", "", -1 };
		};
			class LaRochelle {
			displayName = "La Rochelle";
            spawnMarker = "civ_spawn_larochelle";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "larochelle", true }, { "id", true }  };
            level[] = { "", "", -1 };
		};

			class Lijnhaven {
            displayName = "Lijnhaven";
            spawnMarker = "civ_spawn_lijnhaven";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "lijnhaven", true }, { "id", true } };
            level[] = { "", "", -1 };
		};

			class Rautake {
            displayName = "Rautake";
            spawnMarker = "civ_spawn_rautake";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rautake", true }, { "id", true } };
            level[] = { "", "", -1 };
		};

        class RebelN {
            displayName = "Rebellen North";
            spawnMarker = "Rebelop";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelW {
            displayName = "Rebellen West";
            spawnMarker = "Rebelop_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
         };

        class HeroS {
            displayName = "Paramilitär HQ";
            spawnMarker = "Heroop";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "hero", true } };
            level[] = { "", "", -1 };
        };

        class HeroN {
            displayName = "Paramilitär Posten";
            spawnMarker = "Heroop_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "hero", true } };
            level[] = { "", "", -1 };
        };
	};

    class Cop {
        class HQ {
            displayName = "Gendarmerie HQ";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		class Lijnhaven {
            displayName = "Lijnhaven";
            spawnMarker = "cop_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		class Larochelle {
            displayName = "LaRochelle";
            spawnMarker = "cop_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		class Tuvanaka {
            displayName = "Tuvanka";
            spawnMarker = "cop_spawn_5";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		class TanoaspecialforceHQ {
            displayName = "TSF HQ";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
        class Airport {
            displayName = "Air HQ";
            spawnMarker = "cop_spawn_7";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Hauptquartier {
            displayName = "Hauptquartier";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Doodstil {
            displayName = "Doodstil";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Katkoula {
            displayName = "Katkoula";
            spawnMarker = "medic_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Tuvanka {
            displayName = "Tuvanka";
            spawnMarker = "medic_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
