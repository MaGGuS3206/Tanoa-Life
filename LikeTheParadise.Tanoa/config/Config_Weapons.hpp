/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "SMG_02_F", "",40000, -1 },
            { "SMG_01_F", "",40000, -1 },
            { "hgun_PDW2000_F", "",25000, -1 },
            { "hgun_Rook40_F", "",15000, -1 },
            { "hgun_Pistol_heavy_02_F", "",15000, -1 },
            { "hgun_Pistol_heavy_01_F", "",15000, -1 },
            { "hgun_ACPC2_F", "",15000, -1 }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "",250, -1 },
            { "16Rnd_9x21_Mag", "",250, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "",500, -1 },
			{ "30Rnd_45ACP_Mag_SMG_02", "",500, -1 },
            { "11Rnd_45ACP_Mag", "",250, -1 },
            { "9Rnd_45ACP_Mag", "",250, -1 },
            { "6Rnd_45ACP_Cylinder", "",250, -1 },
			{ "30Rnd_556x45_Stanag", "",250, -1 },
			{ "30Rnd_9x21_Mag_SMG_02", "",250, -1 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 },
			{ "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 }
        };
    };

    class rebel {
        name = "Smuggler Training";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "",75000, -1 },
            { "arifle_Mk20C_plain_F", "",90000, -1 },
            { "arifle_Mk20_plain_F", "",90000, -1 },
            { "arifle_Mk20C_F", "",90000, -1 },
            { "arifle_Mk20_F", "",90000, -1 },
            { "arifle_TRG20_F", "",90000, -1 },
            { "arifle_TRG21_F", "",90000, -1 },
            { "arifle_CTAR_blk_F", "",145000, -1 },
            { "arifle_Katiba_C_F", "",180000, -1 },
            { "arifle_Katiba_F", "",180000, -1 },
            //{ "arifle_MXC_F", "",200000, -1 },
            //{ "arifle_MXC_khk_F", "",200000, -1 },
            //{ "arifle_MX_F", "",240000, -1 },
            //{ "arifle_MX_khk_F", "",240000, -1 },
            //{ "arifle_MXM_F", "",270000, -1 },
            //{ "arifle_MXM_khk_F", "",270000, -1 },
            { "arifle_AKS_F", "",125000, -1 },
            //{ "arifle_AKM_F", "",270000, -1 },
            //{ "arifle_AK12_F", "",500000, -1 },
            //{ "arifle_ARX_hex_F", "",300000, -1 },
            //{ "arifle_ARX_ghex_F", "",300000, -1 },
            //{ "srifle_DMR_01_F", "",400000, -1 },
            //{ "srifle_EBR_F", "",500000, -1 },
            //{ "srifle_DMR_06_camo_F", "",600000, -1 },
            //{ "srifle_DMR_06_olive_F", "",600000, -1 },
            //{ "srifle_DMR_03_multicam_F", "",1000000, -1 },
            //{ "srifle_DMR_03_khaki_F", "",1000000, -1 },
            //{ "srifle_DMR_03_tan_F", "",1000000, -1 },
            //{ "srifle_DMR_03_woodland_F", "",1000000, -1 },
            //{ "srifle_DMR_07_hex_F", "",1000000, -1 },
            //{ "srifle_DMR_07_ghex_F", "",1000000, -1 },
            { "SMG_02_F", "",40000, -1 },
            { "SMG_01_F", "",40000, -1 },
            { "hgun_PDW2000_F", "",25000, -1 },
            { "hgun_Rook40_F", "",15000, -1 },
            { "hgun_Pistol_heavy_02_F", "",15000, -1 },
            { "hgun_Pistol_heavy_01_F", "",15000, -1 },
            { "hgun_Pistol_01_F", "",15000, -1 },
            { "hgun_P07_khk_F", "",15000, -1 },
            { "hgun_ACPC2_F", "",15000, -1 }
        };
        mags[] = {
            //{ "20Rnd_762x51_Mag", "",1000, -1 },
            { "10Rnd_762x54_Mag", "",500, -1 },
            { "30Rnd_65x39_caseless_green", "",500, -1 },
            { "30Rnd_65x39_caseless_mag", "",500, -1 },
            { "30Rnd_556x45_Stanag", "",500, -1 },
            { "20Rnd_556x45_UW_mag", "",500, -1 },
            { "30Rnd_9x21_Mag", "",500, -1 },
            { "16Rnd_9x21_Mag", "",250, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "",500, -1 },
            { "11Rnd_45ACP_Mag", "",250, -1 },
            { "9Rnd_45ACP_Mag", "",250, -1 },
            { "6Rnd_45ACP_Cylinder", "",250, -1 },
            { "30Rnd_545x39_Mag_F", "",500, -1 },
            { "30Rnd_762x39_Mag_F", "",500, -1 },
            { "30Rnd_580x42_Mag_F", "",500, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "",500, -1 }
        };
        accs[] = {
			{ "acc_flashlight", "",500 },
            { "acc_pointer_IR", "",500 },
            { "optic_Aco", "",5000 },
            { "optic_ACO_grn", "",5000 },
            { "optic_Holosight_blk_F", "",7500 },
            { "optic_Holosight", "",7500 },
            { "optic_Holosight_khk_F", "",7500 },
            { "optic_MRCO", "",10000 },
            { "optic_Hamr", "",10000 },
            { "optic_Hamr_khk_F", "",10000 },
            { "optic_Arco", "",10000 },
            { "optic_Arco_ghex_F", "",10000 },
            { "optic_Arco_blk_F", "",10000 },
            { "optic_Erco_khk_F", "",10000 },
            { "optic_Erco_snd_F", "",10000 },
            { "optic_Erco_blk_F", "",10000 },
            { "optic_DMS", "",15000 },
            { "optic_DMS_ghex_F", "",15000 },
            { "optic_AMS", "",17500 },
            { "optic_AMS_snd", "",17500 },
            { "optic_AMS_khk", "",17500 },
            { "optic_KHS_blk", "",17500 },
            { "optic_KHS_old", "",17500 },
            { "optic_KHS_tan", "",17500 },
            { "optic_KHS_hex", "",17500 },
            { "optic_SOS", "",20000 },
            { "optic_SOS_khk_F", "",20000 },
            { "optic_LRPS", "",25000 },
            { "optic_LRPS_ghex_F", "",25000 },
            { "optic_LRPS_tna_F", "",25000 },
            { "optic_NVS", "",75000 },
            { "muzzle_snds_B", "",50000 },
            { "muzzle_snds_B_khk_F", "",50000 },
            { "muzzle_snds_B_snd_F", "",50000 },
            { "muzzle_snds_58_blk_F", "",50000 },
            { "muzzle_snds_58_wdm_F", "",50000 },
            { "muzzle_snds_H", "",50000 },
            { "muzzle_snds_H_khk_F", "",50000 },
            { "muzzle_snds_M", "",50000 },
            { "muzzle_snds_M_khk_F", "",50000 },
            { "muzzle_snds_M_snd_F", "",50000 },
            { "muzzle_snds_65_Ti_blk_F", "",50000 },
            { "muzzle_snds_65_Ti_hex_F", "",50000 },
            { "muzzle_snds_65_Ti_ghex_F", "",50000 },
            { "bipod_01_F_khk", "",15000 },
            { "bipod_01_F_blk", "",15000 },
            { "bipod_01_F_snd", "",15000 },
            { "bipod_01_F_mtp", "",15000 },
            { "bipod_02_F_blk", "",15000 },
            { "bipod_02_F_hex", "",15000 },
            { "bipod_02_F_tan", "",15000 },
            { "bipod_03_F_blk", "",15000 },
            { "bipod_03_F_oli", "",15000 },
			{ "muzzle_snds_L", "",30000 },
            { "muzzle_snds_acp", "",30000 },
            { "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 },
            { "optic_Holosight_smg_blk_F", "",2500 },
            { "optic_Holosight_smg", "",2500 }
        };
    };

    class rebeltwo {
        name = "Mercenary Training";
        side = "civ";
        license = "rebeltwo";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "",75000, -1 },
            { "arifle_Mk20C_plain_F", "",90000, -1 },
            { "arifle_Mk20_plain_F", "",90000, -1 },
            { "arifle_Mk20C_F", "",90000, -1 },
            { "arifle_Mk20_F", "",90000, -1 },
            { "arifle_TRG20_F", "",90000, -1 },
            { "arifle_TRG21_F", "",90000, -1 },
            { "arifle_CTAR_blk_F", "",145000, -1 },
            { "arifle_Katiba_C_F", "",180000, -1 },
            { "arifle_Katiba_F", "",180000, -1 },
            { "arifle_MXC_F", "",200000, -1 },
            { "arifle_MXC_khk_F", "",200000, -1 },
            { "arifle_MX_F", "",240000, -1 },
            { "arifle_MX_khk_F", "",240000, -1 },
            { "arifle_MXM_F", "",270000, -1 },
            { "arifle_MXM_khk_F", "",270000, -1 },
            { "arifle_AKS_F", "",125000, -1 },
            { "arifle_AKM_F", "",270000, -1 },
            //{ "arifle_AK12_F", "",500000, -1 }, VIEL ZU OP!!!(Like)
            { "arifle_ARX_hex_F", "",300000, -1 },
            { "arifle_ARX_ghex_F", "",300000, -1 },
            //{ "srifle_DMR_01_F", "",400000, -1 },
            //{ "srifle_EBR_F", "",500000, -1 },
            //{ "srifle_DMR_06_camo_F", "",600000, -1 },
            //{ "srifle_DMR_06_olive_F", "",600000, -1 },
            //{ "srifle_DMR_03_multicam_F", "",1000000, -1 },
            //{ "srifle_DMR_03_khaki_F", "",1000000, -1 },
            //{ "srifle_DMR_03_tan_F", "",1000000, -1 },
            //{ "srifle_DMR_03_woodland_F", "",1000000, -1 },
            { "srifle_DMR_07_hex_F", "",200000, -1 },
            { "srifle_DMR_07_ghex_F", "",200000, -1 },
            { "SMG_02_F", "",40000, -1 },
            { "SMG_01_F", "",40000, -1 },
            { "hgun_PDW2000_F", "",25000, -1 },
            { "hgun_Rook40_F", "",15000, -1 },
            { "hgun_Pistol_heavy_02_F", "",15000, -1 },
            { "hgun_Pistol_heavy_01_F", "",15000, -1 },
            { "hgun_Pistol_01_F", "",15000, -1 },
            { "hgun_P07_khk_F", "",15000, -1 },
            { "hgun_ACPC2_F", "",15000, -1 }
        };
        mags[] = {
            //{ "20Rnd_762x51_Mag", "",1000, -1 },
            { "10Rnd_762x54_Mag", "",500, -1 },
            { "30Rnd_65x39_caseless_green", "",500, -1 },
            { "30Rnd_65x39_caseless_mag", "",500, -1 },
            { "30Rnd_556x45_Stanag", "",500, -1 },
            { "20Rnd_556x45_UW_mag", "",500, -1 },
            { "30Rnd_9x21_Mag", "",500, -1 },
            { "16Rnd_9x21_Mag", "",250, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "",500, -1 },
            { "11Rnd_45ACP_Mag", "",250, -1 },
            { "9Rnd_45ACP_Mag", "",250, -1 },
            { "6Rnd_45ACP_Cylinder", "",250, -1 },
            { "30Rnd_545x39_Mag_F", "",500, -1 },
            { "30Rnd_762x39_Mag_F", "",500, -1 },
            { "30Rnd_580x42_Mag_F", "",500, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "",500, -1 }
        };
        accs[] = {
            { "acc_flashlight", "",500 },
            { "acc_pointer_IR", "",500 },
            { "optic_Aco", "",5000 },
            { "optic_ACO_grn", "",5000 },
            { "optic_Holosight_blk_F", "",7500 },
            { "optic_Holosight", "",7500 },
            { "optic_Holosight_khk_F", "",7500 },
            { "optic_MRCO", "",10000 },
            { "optic_Hamr", "",10000 },
            { "optic_Hamr_khk_F", "",10000 },
            { "optic_Arco", "",10000 },
            { "optic_Arco_ghex_F", "",10000 },
            { "optic_Arco_blk_F", "",10000 },
            { "optic_Erco_khk_F", "",10000 },
            { "optic_Erco_snd_F", "",10000 },
            { "optic_Erco_blk_F", "",10000 },
            { "optic_DMS", "",15000 },
            { "optic_DMS_ghex_F", "",15000 },
            { "optic_AMS", "",17500 },
            { "optic_AMS_snd", "",17500 },
            { "optic_AMS_khk", "",17500 },
            { "optic_KHS_blk", "",17500 },
            { "optic_KHS_old", "",17500 },
            { "optic_KHS_tan", "",17500 },
            { "optic_KHS_hex", "",17500 },
            { "optic_SOS", "",20000 },
            { "optic_SOS_khk_F", "",20000 },
            { "optic_LRPS", "",25000 },
            { "optic_LRPS_ghex_F", "",25000 },
            { "optic_LRPS_tna_F", "",25000 },
            { "optic_NVS", "",75000 },
            { "muzzle_snds_B", "",50000 },
            { "muzzle_snds_B_khk_F", "",50000 },
            { "muzzle_snds_B_snd_F", "",50000 },
            { "muzzle_snds_58_blk_F", "",50000 },
            { "muzzle_snds_58_wdm_F", "",50000 },
            { "muzzle_snds_H", "",50000 },
            { "muzzle_snds_H_khk_F", "",50000 },
            { "muzzle_snds_M", "",50000 },
            { "muzzle_snds_M_khk_F", "",50000 },
            { "muzzle_snds_M_snd_F", "",50000 },
            { "muzzle_snds_65_Ti_blk_F", "",50000 },
            { "muzzle_snds_65_Ti_hex_F", "",50000 },
            { "muzzle_snds_65_Ti_ghex_F", "",50000 },
            { "bipod_01_F_khk", "",15000 },
            { "bipod_01_F_blk", "",15000 },
            { "bipod_01_F_snd", "",15000 },
            { "bipod_01_F_mtp", "",15000 },
            { "bipod_02_F_blk", "",15000 },
            { "bipod_02_F_hex", "",15000 },
            { "bipod_02_F_tan", "",15000 },
            { "bipod_03_F_blk", "",15000 },
            { "bipod_03_F_oli", "",15000 },
            { "muzzle_snds_L", "",30000 },
            { "muzzle_snds_acp", "",30000 },
            { "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 },
            { "optic_Holosight_smg_blk_F", "",2500 },
            { "optic_Holosight_smg", "",2500 }
        };
    };

class rebelthree {
        name = "Druglord";
        side = "civ";
        license = "rebelthree";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "",75000, -1 },
            { "arifle_Mk20C_plain_F", "",90000, -1 },
            { "arifle_Mk20_plain_F", "",90000, -1 },
            { "arifle_Mk20C_F", "",90000, -1 },
            { "arifle_Mk20_F", "",90000, -1 },
            { "arifle_TRG20_F", "",90000, -1 },
            { "arifle_TRG21_F", "",90000, -1 },
            { "arifle_CTAR_blk_F", "",145000, -1 },
            { "arifle_Katiba_C_F", "",180000, -1 },
            { "arifle_Katiba_F", "",180000, -1 },
            { "arifle_MXC_F", "",200000, -1 },
            { "arifle_MXC_khk_F", "",200000, -1 },
            { "arifle_MX_F", "",240000, -1 },
            { "arifle_MX_khk_F", "",240000, -1 },
            { "arifle_MXM_F", "",270000, -1 },
            { "arifle_MXM_khk_F", "",270000, -1 },
            { "arifle_AKS_F", "",125000, -1 },
            { "arifle_AKM_F", "",270000, -1 },
            //{ "arifle_AK12_F", "",10000000000000000, -1 },VIEL ZU OP!!!(Like)
            { "arifle_ARX_hex_F", "",300000, -1 },
            { "arifle_ARX_ghex_F", "",300000, -1 },
            { "srifle_DMR_01_F", "",400000, -1 },
            { "srifle_EBR_F", "",600000, -1 },
            { "srifle_DMR_06_camo_F", "",400000, -1 },
            { "srifle_DMR_06_olive_F", "",400000, -1 },
            { "srifle_DMR_03_multicam_F", "",600000, -1 },
            { "srifle_DMR_03_khaki_F", "",600000, -1 },
            { "srifle_DMR_03_tan_F", "",600000, -1 },
            { "srifle_DMR_03_woodland_F", "",600000, -1 },
            { "srifle_DMR_07_hex_F", "",200000, -1 },
            { "srifle_DMR_07_ghex_F", "",200000, -1 },
            { "SMG_02_F", "",40000, -1 },
            { "SMG_01_F", "",40000, -1 },
            { "hgun_PDW2000_F", "",25000, -1 },
            { "hgun_Rook40_F", "",15000, -1 },
            { "hgun_Pistol_heavy_02_F", "",15000, -1 },
            { "hgun_Pistol_heavy_01_F", "",15000, -1 },
            { "hgun_Pistol_01_F", "",15000, -1 },
            { "hgun_P07_khk_F", "",15000, -1 },
            { "hgun_ACPC2_F", "",15000, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "",1000, -1 },
            { "10Rnd_762x54_Mag", "",500, -1 },
            { "30Rnd_65x39_caseless_green", "",500, -1 },
            { "30Rnd_65x39_caseless_mag", "",500, -1 },
            { "30Rnd_556x45_Stanag", "",500, -1 },
            { "20Rnd_556x45_UW_mag", "",500, -1 },
            { "30Rnd_9x21_Mag", "",500, -1 },
            { "16Rnd_9x21_Mag", "",250, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "",500, -1 },
            { "11Rnd_45ACP_Mag", "",250, -1 },
            { "9Rnd_45ACP_Mag", "",250, -1 },
            { "6Rnd_45ACP_Cylinder", "",250, -1 },
            { "30Rnd_545x39_Mag_F", "",500, -1 },
            { "30Rnd_762x39_Mag_F", "",500, -1 },
            { "30Rnd_580x42_Mag_F", "",500, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "",500, -1 }
        };
        accs[] = {
            { "acc_flashlight", "",500 },
            { "acc_pointer_IR", "",500 },
            { "optic_Aco", "",5000 },
            { "optic_ACO_grn", "",5000 },
            { "optic_Holosight_blk_F", "",7500 },
            { "optic_Holosight", "",7500 },
            { "optic_Holosight_khk_F", "",7500 },
            { "optic_MRCO", "",10000 },
            { "optic_Hamr", "",10000 },
            { "optic_Hamr_khk_F", "",10000 },
            { "optic_Arco", "",10000 },
            { "optic_Arco_ghex_F", "",10000 },
            { "optic_Arco_blk_F", "",10000 },
            { "optic_Erco_khk_F", "",10000 },
            { "optic_Erco_snd_F", "",10000 },
            { "optic_Erco_blk_F", "",10000 },
            { "optic_DMS", "",15000 },
            { "optic_DMS_ghex_F", "",15000 },
            { "optic_AMS", "",17500 },
            { "optic_AMS_snd", "",17500 },
            { "optic_AMS_khk", "",17500 },
            { "optic_KHS_blk", "",17500 },
            { "optic_KHS_old", "",17500 },
            { "optic_KHS_tan", "",17500 },
            { "optic_KHS_hex", "",17500 },
            { "optic_SOS", "",20000 },
            { "optic_SOS_khk_F", "",20000 },
            { "optic_LRPS", "",25000 },
            { "optic_LRPS_ghex_F", "",25000 },
            { "optic_LRPS_tna_F", "",25000 },
            { "optic_NVS", "",75000 },
            { "muzzle_snds_B", "",50000 },
            { "muzzle_snds_B_khk_F", "",50000 },
            { "muzzle_snds_B_snd_F", "",50000 },
            { "muzzle_snds_58_blk_F", "",50000 },
            { "muzzle_snds_58_wdm_F", "",50000 },
            { "muzzle_snds_H", "",50000 },
            { "muzzle_snds_H_khk_F", "",50000 },
            { "muzzle_snds_M", "",50000 },
            { "muzzle_snds_M_khk_F", "",50000 },
            { "muzzle_snds_M_snd_F", "",50000 },
            { "muzzle_snds_65_Ti_blk_F", "",50000 },
            { "muzzle_snds_65_Ti_hex_F", "",50000 },
            { "muzzle_snds_65_Ti_ghex_F", "",50000 },
            { "bipod_01_F_khk", "",15000 },
            { "bipod_01_F_blk", "",15000 },
            { "bipod_01_F_snd", "",15000 },
            { "bipod_01_F_mtp", "",15000 },
            { "bipod_02_F_blk", "",15000 },
            { "bipod_02_F_hex", "",15000 },
            { "bipod_02_F_tan", "",15000 },
            { "bipod_03_F_blk", "",15000 },
            { "bipod_03_F_oli", "",15000 },
            { "muzzle_snds_L", "",30000 },
            { "muzzle_snds_acp", "",30000 },
            { "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 },
            { "optic_Holosight_smg_blk_F", "",2500 },
            { "optic_Holosight_smg", "",2500 }
        };
    };

    class hero {
        name = "Freiheitskämpfer Shop";
        side = "civ";
        license = "hero";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SDAR_F", "",75000, -1 },
            { "arifle_Mk20C_plain_F", "",90000, -1 },
            { "arifle_Mk20_plain_F", "",90000, -1 },
            { "arifle_Mk20C_F", "",90000, -1 },
            { "arifle_Mk20_F", "",90000, -1 },
            { "arifle_TRG20_F", "",90000, -1 },
            { "arifle_TRG21_F", "",90000, -1 },
            { "arifle_CTAR_blk_F", "",145000, -1 },
            //{ "arifle_Katiba_C_F", "",180000, -1 },
            //{ "arifle_Katiba_F", "",180000, -1 },
            { "arifle_MXC_F", "",200000, -1 },
            { "arifle_MXC_khk_F", "",200000, -1 },
            { "arifle_MX_F", "",240000, -1 },
            { "arifle_MX_khk_F", "",240000, -1 },
            { "arifle_MXM_F", "",270000, -1 },
            { "arifle_MXM_khk_F", "",270000, -1 },
            //{ "arifle_AKS_F", "",125000, -1 },
            //{ "arifle_AKM_F", "",270000, -1 },
            //{ "arifle_AK12_F", "",500000, -1 },
            { "arifle_CTAR_blk_F", "",300000, -1 },
            { "arifle_CTAR_GL_blk_F", "",250000, -1 },
            { "arifle_SPAR_01_blk_F", "",250000, -1 },
            { "arifle_SPAR_01_khk_F", "",250000, -1 },
            { "arifle_SPAR_01_snd_F", "",250000, -1 },
            //{ "srifle_DMR_01_F", "",400000, -1 },
            //{ "srifle_EBR_F", "",500000, -1 },
            //{ "srifle_DMR_06_camo_F", "",600000, -1 },
            //{ "srifle_DMR_06_olive_F", "",600000, -1 },
            //{ "srifle_DMR_03_multicam_F", "",1000000, -1 },
            //{ "srifle_DMR_03_khaki_F", "",1000000, -1 },
            //{ "srifle_DMR_03_tan_F", "",1000000, -1 },
            //{ "srifle_DMR_03_woodland_F", "",1000000, -1 },
            //{ "srifle_DMR_07_hex_F", "",1000000, -1 },
            //{ "srifle_DMR_07_ghex_F", "",1000000, -1 },
            { "SMG_02_F", "",40000, -1 },
            { "SMG_01_F", "",40000, -1 },
            { "hgun_PDW2000_F", "",25000, -1 },
            { "hgun_Rook40_F", "",15000, -1 },
            { "hgun_Pistol_heavy_02_F", "",15000, -1 },
            { "hgun_Pistol_heavy_01_F", "",15000, -1 },
            { "hgun_Pistol_01_F", "",15000, -1 },
            { "hgun_P07_khk_F", "",15000, -1 },
            { "hgun_ACPC2_F", "",15000, -1 }
        };
        mags[] = {
            //{ "20Rnd_762x51_Mag", "",1000, -1 },
            { "10Rnd_762x54_Mag", "",500, -1 },
            { "30Rnd_65x39_caseless_green", "",500, -1 },
            { "30Rnd_65x39_caseless_mag", "",500, -1 },
            { "30Rnd_556x45_Stanag", "",500, -1 },
            { "20Rnd_556x45_UW_mag", "",500, -1 },
            { "30Rnd_9x21_Mag", "",500, -1 },
            { "16Rnd_9x21_Mag", "",250, -1 },
            { "30Rnd_45ACP_Mag_SMG_01", "",500, -1 },
            { "11Rnd_45ACP_Mag", "",250, -1 },
            { "9Rnd_45ACP_Mag", "",250, -1 },
            { "6Rnd_45ACP_Cylinder", "",250, -1 },
            { "30Rnd_545x39_Mag_F", "",500, -1 },
            { "30Rnd_762x39_Mag_F", "",500, -1 },
            { "30Rnd_580x42_Mag_F", "",500, -1 },
            { "20Rnd_650x39_Cased_Mag_F", "",500, -1 }
        };
        accs[] = {
			{ "acc_flashlight", "",500 },
            { "acc_pointer_IR", "",500 },
            { "optic_Aco", "",5000 },
            { "optic_ACO_grn", "",5000 },
            { "optic_Holosight_blk_F", "",7500 },
            { "optic_Holosight", "",7500 },
            { "optic_Holosight_khk_F", "",7500 },
            { "optic_MRCO", "",10000 },
            { "optic_Hamr", "",10000 },
            { "optic_Hamr_khk_F", "",10000 },
            { "optic_Arco", "",10000 },
            { "optic_Arco_ghex_F", "",10000 },
            { "optic_Arco_blk_F", "",10000 },
            { "optic_Erco_khk_F", "",10000 },
            { "optic_Erco_snd_F", "",10000 },
            { "optic_Erco_blk_F", "",10000 },
            { "optic_DMS", "",15000 },
            { "optic_DMS_ghex_F", "",15000 },
            { "optic_AMS", "",17500 },
            { "optic_AMS_snd", "",17500 },
            { "optic_AMS_khk", "",17500 },
            { "optic_KHS_blk", "",17500 },
            { "optic_KHS_old", "",17500 },
            { "optic_KHS_tan", "",17500 },
            { "optic_KHS_hex", "",17500 },
            { "optic_SOS", "",20000 },
            { "optic_SOS_khk_F", "",20000 },
            { "optic_LRPS", "",25000 },
            { "optic_LRPS_ghex_F", "",25000 },
            { "optic_LRPS_tna_F", "",25000 },
            { "optic_NVS", "",75000 },
            { "muzzle_snds_B", "",50000 },
            { "muzzle_snds_B_khk_F", "",50000 },
            { "muzzle_snds_B_snd_F", "",50000 },
            { "muzzle_snds_58_blk_F", "",50000 },
            { "muzzle_snds_58_wdm_F", "",50000 },
            { "muzzle_snds_H", "",50000 },
            { "muzzle_snds_H_khk_F", "",50000 },
            { "muzzle_snds_M", "",50000 },
            { "muzzle_snds_M_khk_F", "",50000 },
            { "muzzle_snds_M_snd_F", "",50000 },
            { "muzzle_snds_65_Ti_blk_F", "",50000 },
            { "muzzle_snds_65_Ti_hex_F", "",50000 },
            { "muzzle_snds_65_Ti_ghex_F", "",50000 },
            { "bipod_01_F_khk", "",15000 },
            { "bipod_01_F_blk", "",15000 },
            { "bipod_01_F_snd", "",15000 },
            { "bipod_01_F_mtp", "",15000 },
            { "bipod_02_F_blk", "",15000 },
            { "bipod_02_F_hex", "",15000 },
            { "bipod_02_F_tan", "",15000 },
            { "bipod_03_F_blk", "",15000 },
            { "bipod_03_F_oli", "",15000 },
			{ "muzzle_snds_L", "",30000 },
            { "muzzle_snds_acp", "",30000 },
            { "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 },
            { "optic_Holosight_smg_blk_F", "",2500 },
            { "optic_Holosight_smg", "",2500 }
        };
    };

    class herotwo {
        name = "Scharfschützenladen";
        side = "civ";
        license = "herotwo";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_SPAR_03_snd_F", "",550000, -1 },
            { "srifle_EBR_F", "",500000, -1 }
        };
        mags[] = {
            { "20Rnd_762x51_Mag", "",1000, -1 }
        };
        accs[] = {
            { "acc_flashlight", "",500 },
            { "acc_pointer_IR", "",500 },
            { "optic_Aco", "",5000 },
            { "optic_ACO_grn", "",5000 },
            { "optic_Holosight_blk_F", "",7500 },
            { "optic_Holosight", "",7500 },
            { "optic_Holosight_khk_F", "",7500 },
            { "optic_MRCO", "",10000 },
            { "optic_Hamr", "",10000 },
            { "optic_Hamr_khk_F", "",10000 },
            { "optic_Arco", "",10000 },
            { "optic_Arco_ghex_F", "",10000 },
            { "optic_Arco_blk_F", "",10000 },
            { "optic_Erco_khk_F", "",10000 },
            { "optic_Erco_snd_F", "",10000 },
            { "optic_Erco_blk_F", "",10000 },
            { "optic_DMS", "",15000 },
            { "optic_DMS_ghex_F", "",15000 },
            { "optic_AMS", "",17500 },
            { "optic_AMS_snd", "",17500 },
            { "optic_AMS_khk", "",17500 },
            { "optic_KHS_blk", "",17500 },
            { "optic_KHS_old", "",17500 },
            { "optic_KHS_tan", "",17500 },
            { "optic_KHS_hex", "",17500 },
            { "optic_SOS", "",20000 },
            { "optic_SOS_khk_F", "",20000 },
            { "optic_LRPS", "",25000 },
            { "optic_LRPS_ghex_F", "",25000 },
            { "optic_LRPS_tna_F", "",25000 },
            { "optic_NVS", "",75000 },
            { "muzzle_snds_B", "",50000 },
            { "muzzle_snds_B_khk_F", "",50000 },
            { "muzzle_snds_B_snd_F", "",50000 },
            { "muzzle_snds_58_blk_F", "",50000 },
            { "muzzle_snds_58_wdm_F", "",50000 },
            { "muzzle_snds_H", "",50000 },
            { "muzzle_snds_H_khk_F", "",50000 },
            { "muzzle_snds_M", "",50000 },
            { "muzzle_snds_M_khk_F", "",50000 },
            { "muzzle_snds_M_snd_F", "",50000 },
            { "muzzle_snds_65_Ti_blk_F", "",50000 },
            { "muzzle_snds_65_Ti_hex_F", "",50000 },
            { "muzzle_snds_65_Ti_ghex_F", "",50000 },
            { "bipod_01_F_khk", "",15000 },
            { "bipod_01_F_blk", "",15000 },
            { "bipod_01_F_snd", "",15000 },
            { "bipod_01_F_mtp", "",15000 },
            { "bipod_02_F_blk", "",15000 },
            { "bipod_02_F_hex", "",15000 },
            { "bipod_02_F_tan", "",15000 },
            { "bipod_03_F_blk", "",15000 },
            { "bipod_03_F_oli", "",15000 },
            { "muzzle_snds_L", "",30000 },
            { "muzzle_snds_acp", "",30000 },
            { "optic_MRD", "",2500 },
            { "optic_Yorris", "",2500 },
            { "optic_Aco_smg", "",2500 },
            { "optic_ACO_grn_smg", "",2500 },
            { "optic_Holosight_smg_blk_F", "",2500 },
            { "optic_Holosight_smg", "",2500 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Tanoa General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "Rangefinder", "", 5000, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "NVGoggles_OPFOR", "", 2000, 980 },
            { "NVGoggles_INDEP", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tanoa Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
 /*   class cop_basic {
        name = "Tanoa Private Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Private!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
            { "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 }						//Taser Munition
        };
        accs[] = {
        };
    };

    class cop_patrol {
        name = "Tanoa Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Officer!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
			{ "SMG_05_F", "", 2000, -1 },						//Protector
            { "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
			{ "30Rnd_9x21_Mag_SMG_02", "", 60 }					//9mm Munition
		};
        accs[] = {
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
            { "muzzle_snds_L", "", 650 }						//9mm Schalldämpfer

		};
    };

    class cop_sergeant {
        name = "Tanoa Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
			{ "arifle_SPAR_01_blk_F", "", 20000, -1 },			//SPAR-16
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
			{ "30Rnd_556x45_Stanag", "", 25 }					//5.56 Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 },						//Taschenlampe
			{ "muzzle_snds_M", "", 650 }						//5.56mm Schalldämpfer
		};
    };

	class cop_lieutenant {
        name = "Tanoa Lieutenant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Lieutenant!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, -1 },          //SPAR-16
			{ "arifle_MXC_Black_F", "", 20000, -1 },			//MXC
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
			{ "30Rnd_65x39_caseless_mag", "", 25 }				//6.5 Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 },						//Taschenlampe
            { "muzzle_snds_L", "", 650 }						//9mm Schalldämpfer
		};
    };

	class cop_captain {
        name = "Tanoa Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Captain!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, -1 },          //SPAR-16
            { "arifle_MXC_Black_F", "", 20000, -1 },            //MXC
			{ "arifle_CTAR_blk_F", "", 20000, -1 },				//CAR-95
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
            { "30Rnd_65x39_caseless_mag", "", 25 },             //6.5 Munition
			{ "30Rnd_580x42_Mag_F", "", 25 }					//5.8mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 }						//Taschenlampe
		};
    };

	class cop_commander {
        name = "Tanoa Commander Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Commander!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, -1 },          //SPAR-16
            { "arifle_MXC_Black_F", "", 20000, -1 },            //MXC
            { "arifle_CTAR_blk_F", "", 20000, -1 },             //CAR-95
			{ "arifle_MXM_Black_F", "", 20000, -1 },			//MXM
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
            { "30Rnd_580x42_Mag_F", "", 25 },                   //5.8mm Munition
			{ "30Rnd_65x39_caseless_mag", "", 25 }				//6.5mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "optic_LRPS", "", 650 },							//LRPS Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 }						//Taschenlampe
		};
    };

	class cop_depchief {
        name = "Tanoa Deputy Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Deputy Chief!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, -1 },          //SPAR-16
            { "arifle_MXC_Black_F", "", 20000, -1 },            //MXC
            { "arifle_CTAR_blk_F", "", 20000, -1 },             //CAR-95
            { "arifle_MXM_Black_F", "", 20000, -1 },            //MXM
			{ "arifle_ARX_blk_F", "", 20000, -1 },				//Type 115
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
            { "30Rnd_580x42_Mag_F", "", 25 },                   //5.8mm Munition
            { "30Rnd_65x39_caseless_mag", "", 25 }              //6.5mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "optic_LRPS", "", 650 },							//LRPS Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 }						//Taschenlampe
		};
    };

	class cop_asschief {
        name = "Tanoa Assistant Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a Assistant Chief!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
            { "SMG_05_F", "", 2000, -1 },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, -1 },          //SPAR-16
            { "arifle_MXC_Black_F", "", 20000, -1 },            //MXC
            { "arifle_CTAR_blk_F", "", 20000, -1 },             //CAR-95
            { "arifle_MXM_Black_F", "", 20000, -1 },            //MXM
            { "arifle_ARX_blk_F", "", 20000, -1 },              //Type 115
			{ "arifle_SPAR_03_blk_F", "", 20000, -1 },			//SPAR-17
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
            { "30Rnd_580x42_Mag_F", "", 25 },                   //5.8mm Munition
            { "30Rnd_65x39_caseless_mag", "", 25 },             //6.5mm Munition
			{ "30Rnd_762x39_Mag_F", "", 25 }					//7.62mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "optic_LRPS", "", 650 },							//LRPS Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 }						//Taschenlampe
		};
    };
*/
	class cop_chief {
        name = "Tanoa Assistant Chief Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Cop!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, { "life_coplevel", "SCALAR", 1 } },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, { "life_coplevel", "SCALAR", 2 } },		//Taser Rifle
            { "SMG_05_F", "", 2000, { "life_coplevel", "SCALAR", 2 } },                       //Protector
            { "arifle_SPAR_01_blk_F", "", 20000, { "life_coplevel", "SCALAR", 3 } },          //SPAR-16
            { "arifle_MXC_Black_F", "", 20000, { "life_coplevel", "SCALAR", 4 } },            //MXC
            { "arifle_CTAR_blk_F", "", 20000, { "life_coplevel", "SCALAR", 5 } },             //CAR-95
            { "arifle_MXM_Black_F", "", 20000, { "life_coplevel", "SCALAR", 6 } },           //MXM
            { "arifle_ARX_blk_F", "", 20000, { "life_coplevel", "SCALAR", 7 } },            //Type 115
            { "arifle_SPAR_03_blk_F", "", 20000, { "life_coplevel", "SCALAR", 8 } },          //SPAR-17
			{ "srifle_DMR_03_F", "", 20000,{ "life_coplevel", "SCALAR", 9 } },				//Mk-I
			{ "ItemGPS", "", 100, { "life_coplevel", "SCALAR", 1 } },						//GPS
			{ "ItemCompass", "", 150, { "life_coplevel", "SCALAR", 1 } },					//Kompass
			{ "ItemMap", "", 150, { "life_coplevel", "SCALAR", 1 } },						//Map
            { "Binocular", "", 150, { "life_coplevel", "SCALAR", 1 } },						//Fernglas
            { "Rangefinder", "", 5000, { "life_coplevel", "SCALAR", 1 } },                   //Rangefinder
            { "NVGoggles_OPFOR", "", 2000, { "life_coplevel", "SCALAR", 1 } },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, { "life_coplevel", "SCALAR", 1 } }					//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },                //9mm Munition
            { "30Rnd_556x45_Stanag", "", 25 },                  //5.56 Munition
            { "30Rnd_580x42_Mag_F", "", 25 },                   //5.8mm Munition
            { "30Rnd_65x39_caseless_mag", "", 25 },             //6.5mm Munition
			{ "20Rnd_762x51_Mag", "", 25 }						//7.62mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "optic_LRPS", "", 650 },							//LRPS Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 }						//Taschenlampe
		};
    };

	class cop_special {
        name = "Tanoa Spezial-Waffen Shop";
        side = "cop";
        license = "special";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Private!" };
        items[] = {
            { "hgun_P07_snds_F", "Taser", 2000, -1 },			//Taser
			{ "arifle_sdar_F", "Taser Rifle", 5000, -1 },		//Taser Rifle
			{ "arifle_MXM_Black_F", "", 20000, -1 },			//MXM
			{ "arifle_ARX_blk_F", "", 20000, -1 },				//Type 115
			{ "arifle_SPAR_03_blk_F", "", 20000, -1 },			//SPAR-17
			{ "srifle_DMR_03_F", "", 20000, -1 },				//Mk-I
			{ "ItemGPS", "", 100, -1 },							//GPS
			{ "ItemCompass", "", 150, -1 },						//Kompass
			{ "ItemMap", "", 150, -1 },							//Map
            { "Binocular", "", 150, -1 },						//Fernglas
            { "NVGoggles_OPFOR", "", 2000, -1 },				//Nachtsichtgerät
            { "FirstAidKit", "", 150, -1 }						//Medikit
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },						//Taser Munition
			{ "20Rnd_556x45_UW_mag", "", 45 },					//Taser Rifle Ammo
			{ "30Rnd_65x39_caseless_mag", "", 25 },				//6.5mm Munition
			{ "30Rnd_762x39_Mag_F", "", 25 },					//7.62mm Munition
			{ "20Rnd_762x51_Mag", "", 25 }						//7.62mm Munition
        };
        accs[] = {
			{ "optic_Hamr", "", 650 },							//RCO Scope
			{ "optic_MRCO", "", 650 },							//MRCO Scope
			{ "optic_Aco_grn", "", 650 },						//ACO Scope
			{ "optic_ERCO_blk_F", "", 650 },					//ERCO Scope
			{ "optic_Holosight", "", 650 },						//Mk17 Holosight
			{ "optic_LRPS", "", 650 },							//LRPS Scope
			{ "bipod_01_F_blk", "", 650 },						//Zweibein
			{ "acc_flashlight", "", 650 },						//Taschenlampe
			{ "muzzle_snds_H", "", 650 },						//6.5mm Schalldämpfer
			{ "muzzle_snds_B", "", 650 }						//7.62mm Schalldämpfer
        };
    };

	class cop_tsf {
        name = "T.S.F. Waffenladen";
        side = "cop";
        license = "tsf";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_05_F", "", 15000, -1 },
			{ "arifle_SPAR_01_blk_F", "", 15000, -1 },
			{ "arifle_SPAR_01_khk_F", "", 15000, -1 },
			{ "arifle_SPAR_03_blk_F", "", 45000, -1 },
			{ "arifle_SPAR_03_khk_F", "", 45000, -1 },
            { "arifle_MX_GL_Black_F", "", 45000, -1 },
            { "srifle_DMR_03_F", "", 45000, -1 },
            { "arifle_ARX_blk_F", "", 45000, -1 },
            { "arifle_CTAR_blk_F", "", 45000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 200 },
            { "30Rnd_9x21_Mag_SMG_02", "", 60 },
			{ "30Rnd_556x45_Stanag", "", 300 },
			{ "20Rnd_762x51_Mag", "", 500 },
            { "30Rnd_580x42_Mag_F", "", 25 },
            { "1Rnd_Smoke_Grenade_shell", "", 500 },
            { "1Rnd_SmokeRed_Grenade_shell", "", 500 },
            { "1Rnd_SmokeGreen_Grenade_shell", "", 500 },
            { "1Rnd_SmokeYellow_Grenade_shell", "", 500 },
            { "1Rnd_SmokePurple_Grenade_shell", "", 500 },
            { "1Rnd_SmokeBlue_Grenade_shell", "", 500 },
            { "1Rnd_SmokeOrange_Grenade_shell", "", 500 }
        };
        accs[] = {
			{ "muzzle_snds_L", "", 650 },
			{ "muzzle_snds_M", "", 650 },
			{ "muzzle_snds_m_khk_F", "", 650 },
			{ "muzzle_snds_B", "", 5000 },
			{ "muzzle_snds_B_khk_F", "", 5000 },
			{ "bipod_01_F_blk", "", 5000 },
			{ "optic_Arco_blk_F", "", 2500 },
			{ "optic_Arco_ghex_F", "", 25001 },
			{ "optic_ERCO_blk_F", "", 2500 },
			{ "optic_ERCO_khk_F", "", 2500 },
			{ "optic_DMS", "", 7500 },
			{ "optic_DMS_ghex_F", "", 7500 }
        };
    };

	class cop_udc {
        name = "Undercover Cop Shop";
        side = "cop";
        license = "udc";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "arifle_TRG20_F", "", 20000, -1 },
            { "arifle_SDAR_F", "", 20000, -1 },
			{ "arifle_AKS_F", "", 25000, -1 },
			{ "arifle_AKM_F", "", 35000, -1 },
			{ "arifle_AK12_F", "", 35000, -1 },
            { "arifle_CTAR_blk_F", "", 35000, -1 },
            { "srifle_DMR_03_F", "", 35000, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 800 },
            { "20Rnd_556x45_UW_mag", "", 800 },
            { "20Rnd_762x51_Mag", "", 25 },
			{ "30Rnd_545x39_Mag_F", "", 1100 },
			{ "30Rnd_762x39_Mag_F", "", 1250 },
            { "30Rnd_580x42_Mag_F", "", 25 },
			{ "30Rnd_762x39_Mag_F", "", 2000 }
        };
        accs[] = {
			{ "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
			{ "optic_DMS", "", 7500 },
			{ "optic_DMS_ghex_F", "", 7500 },
            { "optic_ERCO_blk", "", 2500 },
			{ "acc_flashlight", "", 1000 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
