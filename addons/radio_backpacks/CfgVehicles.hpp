class CfgVehicles {
    class B_AssaultPack_rgr;
    class B_simc_MC_rajio_base: B_AssaultPack_rgr {
        author = "Petr Svenda, Tapawingo";
        //scope = 2;
        descriptionShort = "AN/PRC-25 w/ ST138 carrier";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_rajio_1: B_simc_MC_rajio_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_rajio_2: B_simc_MC_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_rajio_1: B_simc_MC_rajio_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 200;
        mass = 60;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_rajio_2: B_simc_MC_packboard_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 190;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_rajio_3: B_simc_MC_packboard_rajio_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_rajio_flak_base: B_AssaultPack_rgr {
        author = "Petr Svenda, Tapawingo";
        scope = 2;
        descriptionShort = "AN/PRC-25 w/ ST138 carrier";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_rajio_flak_1: B_simc_MC_rajio_flak_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_rajio_flak_2: B_simc_MC_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_flak_rajio_1: B_simc_MC_rajio_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 200;
        mass = 60;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_flak_rajio_2: B_simc_MC_packboard_flak_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 190;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_MC_packboard_flak_rajio_3: B_simc_MC_packboard_flak_rajio_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_pack_56;
    class B_simc_rajio_base: B_simc_pack_56 {
        author = "Petr Svenda, Tapawingo";
        scope = 2;
        descriptionShort = "AN/PRC-25 w/ ST138 carrier";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_1: B_simc_rajio_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_gasbag_1: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 70;
        class TransportItems {
            class _xx_ItemRadio {
                name = "ACRE_PRC77";
                count = 1;
            };
            class _xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 1;
            };
            class _xx_SmokeShellRed {
                name = "SmokeShellRed";
                count = 1;
            };
        };
    };

    class B_simc_rajio_gasbag_2: B_simc_rajio_gasbag_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 70;
        class TransportItems {
            class _xx_ItemRadio {
                name = "ACRE_PRC77";
                count = 1;
            };
            class _xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 1;
            };
        };
    };

    class B_simc_rajio_M43_1: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_M43_2: B_simc_rajio_M43_1 {
        author = "Petr Svenda, Tapawingo";
        model = "\simc_uaf_67\pack_rajio_m43.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_M43_ligt: B_simc_rajio_M43_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_2: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_2_a: B_simc_rajio_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_3: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_3_alt: B_simc_rajio_3 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_4: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 60;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_Frem_Ligt: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_Frem: B_simc_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_Frem_2: B_simc_rajio_Frem {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_base: B_simc_pack_56 {
        author = "Petr Svenda, Tapawingo";
        scope = 2;
        descriptionShort = "AN/PRC-25 w/ ST138 carrier";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_1: B_simc_rajio_flak_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_gasbag_flak_1: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 70;
        class TransportItems {
            class _xx_ItemRadio {
                name = "ACRE_PRC77";
                count = 1;
            };
            class _xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 1;
            };
            class _xx_SmokeShellRed {
                name = "SmokeShellRed";
                count = 1;
            };
        };
    };

    class B_simc_rajio_gasbag_flak_2: B_simc_rajio_gasbag_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 180;
        mass = 70;
        class TransportItems {
            class _xx_ItemRadio {
                name = "ACRE_PRC77";
                count = 1;
            };
            class _xx_SmokeShellGreen {
                name = "SmokeShellGreen";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_M43_1: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_M43_2: B_simc_rajio_flak_M43_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_M43_ligt: B_simc_rajio_flak_M43_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 140;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_2: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 149;
        mass = 20;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_2_a: B_simc_rajio_flak_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_3: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_3_alt: B_simc_rajio_flak_3 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_4: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 170;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_Frem_Ligt: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        hiddenSelectionsTextures[] = {""};
        maximumLoad = 180;
        mass = 50;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_Frem: B_simc_rajio_flak_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_rajio_flak_Frem_2: B_simc_rajio_flak_Frem {
        author = "Petr Svenda, Tapawingo";
        scope = 1;
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_pack_trop_1;
    class B_simc_pack_trop_rajio: B_simc_pack_trop_1 {
        author = "Smicradeu";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_pack_trop_6;
    class B_simc_pack_trop_rajio_frem: B_simc_pack_trop_6 {
        author = "Smicradeu";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_pack_trop_flak_1;
    class B_simc_pack_trop_flak_rajio: B_simc_pack_trop_flak_1 {
        author = "Smicradeu";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_pack_trop_flak_6;
    class B_simc_pack_trop_flak_rajio_frem: B_simc_pack_trop_flak_6 {
        author = "Smicradeu";
        maximumLoad = 240;
        mass = 120;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_rajio_base: B_AssaultPack_rgr {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 120;
        mass = 30;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_rajio_1: B_simc_packboard_rajio_base {
        author = "Petr Svenda, Tapawingo";
        descriptionShort = "1945-Packboard w/ AN/PRC-25";
        maximumLoad = 160;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_rajio_1_B: B_simc_packboard_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        descriptionShort = "1945-Packboard w/ AN/PRC-25";
        maximumLoad = 190;
        mass = 60;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_rajio_2: B_simc_packboard_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 140;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_rajio_3: B_simc_packboard_rajio_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 120;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_flak_rajio_base: B_simc_packboard_rajio_base {
        author = "Petr Svenda, Tapawingo";
        scope = 1;
        descriptionShort = "1945-packboard w/ AN/PRC-25";
        maximumLoad = 120;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_flak_rajio_1: B_simc_packboard_flak_rajio_base {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 160;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_flak_rajio_1_B: B_simc_packboard_flak_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        descriptionShort = "1945-packboard w/ AN/PRC-25";
        maximumLoad = 190;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_flak_rajio_2: B_simc_packboard_flak_rajio_1 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 140;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };

    class B_simc_packboard_flak_rajio_3: B_simc_packboard_flak_rajio_2 {
        author = "Petr Svenda, Tapawingo";
        maximumLoad = 120;
        mass = 40;
        class TransportItems {
            class _xx_ACRE_PRC77 {
                name = "ACRE_PRC77";
                count = 1;
            };
        };
    };
};
