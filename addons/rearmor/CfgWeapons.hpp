class CfgWeapons {
    class ItemCore;
    
    class Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };

    // ---------------------------------------------------------------------------- RHS: AFRF -----------------------------------------------------------------------------------
    class rhs_6b2: Vest_Camo_Base {
        descriptionShort = "Armor Level 2";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 8;
                    PassThrough = 0.4;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 8;
                    PassThrough = 0.4;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.4;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };

    class rhs_6b3: rhs_6b2 {
        descriptionShort = "Armor Level 3";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 11;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 11;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 11;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23: Vest_Camo_Base {
        descriptionShort = "Armor Level 2-3";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 1;
                    PassThrough = 0.4;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_6sh92: rhs_6b23 {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 9;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_digi: rhs_6b23 {
        descriptionShort = "Armor Level 4";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 1;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 14;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_6sh92_radio: rhs_6b23_6sh92 {
        class ItemInfo;
    };

    class rhs_6b23_digi_6sh92: rhs_6b23_6sh92 {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.4;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_vydra_3m: rhs_6b23_6sh92 {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 1;
                    PassThrough = 0.4;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 9;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b23_6sh116: rhs_6b23_digi {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 11;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 11;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 11;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b13: rhs_6b23 {
        descriptionShort = "Armor Level 4";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b13_6sh92: rhs_6b13 {
        descriptionShort = "Armor Level 4";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class rhs_6b43: rhs_6b23 {
        descriptionShort = "Armor Level 6";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };

    class rhs_6b5: rhs_6b23 {
        descriptionShort = "Armor Level 4";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 7;
                    PassThrough = 0.5;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.3;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 14;
                    PassThrough = 0.3;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 14;
                    passThrough = 0.3;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 14;
                    passThrough = 0.4;
                };
            };
        };
    };

    class rhs_6b45: rhs_6b43 {
        descriptionShort = "Armor Level 5";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 9;
                    PassThrough = 0.3;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 17;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 17;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 17;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };

        // ---------------------------------------------------------------------------- RHS: USAF -----------------------------------------------------------------------------------

    class rhsusf_iotv_ocp_base: Vest_Camo_Base {
        descriptionShort="Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ocp: rhsusf_iotv_ocp_base;
    class rhsusf_iotv_ocp_Medic: rhsusf_iotv_ocp_base;
    class rhsusf_iotv_ocp_Repair: rhsusf_iotv_ocp_base;

    class rhsusf_iotv_ocp_Rifleman: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ocp_SAW: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ocp_Squadleader: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ocp_Teamleader: rhsusf_iotv_ocp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base;
    class rhsusf_iotv_ucp: rhsusf_iotv_ocp;

    class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                }; 
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_Rifleman: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_SAW: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_Squadleader: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 12;
                    PassThrough = 0.40000001;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };

    class rhsusf_spc: rhsusf_iotv_ocp_base {
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_rifleman: rhsusf_spc {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_iar: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_corpsman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_crewman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    passThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_light: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_marksman: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_mg: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_sniper: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spc_squadleader: rhsusf_spc_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spcs_ocp: rhsusf_iotv_ocp_base {
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.40000001;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_spcs_ocp_squadleader: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_teamleader: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_teamleader_alt: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_saw: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_grenadier: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_rifleman: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_rifleman_alt: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_medic: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_crewman: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_machinegunner: rhsusf_spcs_ocp;
    class rhsusf_spcs_ocp_sniper: rhsusf_spcs_ocp;
    class rhsusf_spcs_ucp: rhsusf_spcs_ocp;
    class rhsusf_spcs_ucp_teamleader: rhsusf_spcs_ocp_teamleader;
    class rhsusf_spcs_ucp_teamleader_alt: rhsusf_spcs_ocp_teamleader_alt;
    class rhsusf_spcs_ucp_saw: rhsusf_spcs_ocp_saw;
    class rhsusf_spcs_ucp_grenadier: rhsusf_spcs_ocp_grenadier;
    class rhsusf_spcs_ucp_rifleman: rhsusf_spcs_ocp_rifleman;
    class rhsusf_spcs_ucp_rifleman_alt: rhsusf_spcs_ocp_rifleman_alt;
    class rhsusf_spcs_ucp_medic: rhsusf_spcs_ocp_medic;
    class rhsusf_spcs_ucp_crewman: rhsusf_spcs_ocp_crewman;
    class rhsusf_spcs_ucp_machinegunner: rhsusf_spcs_ocp_machinegunner;
    class rhsusf_spcs_ucp_sniper: rhsusf_spcs_ocp_sniper;

    class rhsusf_mbav: rhsusf_iotv_ocp_base {
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_mbav_light: rhsusf_mbav {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.1;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.40000001;
                };
            };
        };
    };

    class rhsusf_mbav_rifleman: rhsusf_mbav_light;
    class rhsusf_mbav_mg: rhsusf_mbav_light;

    class rhsusf_mbav_grenadier: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = "16";
                    PassThrough = 0.1;
                };
                class Diaphragm: Diaphragm {};
                class Body: Body {};
            };
        };
    };

    class rhsusf_mbav_medic: rhsusf_mbav_light;

    class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base {
        descriptionShort = "Armor Level III";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };

    class rhsusf_plateframe_light: rhsusf_plateframe_sapi {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "13 + 3";
                    PassThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };

    class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 14;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = "13 + 3";
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };

        // ---------------------------------------------------------------------------- RHS: GREF -----------------------------------------------------------------------------------

    class rhsgref_6b23_khaki: rhs_6b23;
    class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki;
    class rhsgref_6b23_khaki_sniper: rhsgref_6b23_khaki;
    class rhsgref_6b23_khaki_officer: rhsgref_6b23_khaki;
    class rhsgref_6b23_khaki_nco: rhsgref_6b23_khaki;
    class rhsgref_6b23_khaki_medic: rhsgref_6b23_khaki;
    class rhsgref_6b23_ttsko_forest: rhsgref_6b23_khaki;
    class rhsgref_6b23_ttsko_forest_rifleman: rhsgref_6b23_khaki_rifleman;
    class rhsgref_6b23_ttsko_mountain: rhsgref_6b23_khaki;
    class rhsgref_6b23_ttsko_mountain_rifleman: rhsgref_6b23_khaki_rifleman;
    class rhsgref_6b23_ttsko_mountain_sniper: rhsgref_6b23_khaki_sniper;
    class rhsgref_6b23_ttsko_mountain_officer: rhsgref_6b23_khaki_officer;
    class rhsgref_6b23_ttsko_mountain_nco: rhsgref_6b23_khaki_nco;
    class rhsgref_6b23_ttsko_mountain_medic: rhsgref_6b23_khaki_medic;
    class rhsgref_6b23_ttsko_digi: rhsgref_6b23_khaki;
    class rhsgref_6b23_ttsko_digi_rifleman: rhsgref_6b23_khaki_rifleman;
    class rhsgref_6b23_ttsko_digi_sniper: rhsgref_6b23_khaki_sniper;
    class rhsgref_6b23_ttsko_digi_officer: rhsgref_6b23_khaki_officer;
    class rhsgref_6b23_ttsko_digi_nco: rhsgref_6b23_khaki_nco;
    class rhsgref_6b23_ttsko_digi_medic: rhsgref_6b23_khaki_medic;

    class rhs_6b5: rhs_6b23 {
        descriptionShort = "Armor Level 6";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 8;
                    PassThrough = 0.5;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 1;
                    passThrough = 0.5;
                };
            };
        };
    };

    class rhs_6b5_officer: rhs_6b5;
    class rhs_6b5_medic: rhs_6b5;
    class rhs_6b5_sniper: rhs_6b5;
    class rhs_6b5_rifleman: rhs_6b5;
    class rhs_6b5_khaki: rhs_6b5;
    class rhs_6b5_officer_khaki: rhs_6b5_officer;
    class rhs_6b5_medic_khaki: rhs_6b5_medic;
    class rhs_6b5_sniper_khaki: rhs_6b5_sniper;
    class rhs_6b5_rifleman_khaki: rhs_6b5_rifleman;
    class rhs_6b5_vsr: rhs_6b5;
    class rhs_6b5_officer_vsr: rhs_6b5_officer;
    class rhs_6b5_medic_vsr: rhs_6b5_medic;
    class rhs_6b5_sniper_vsr: rhs_6b5_sniper;
    class rhs_6b5_rifleman_vsr: rhs_6b5_rifleman;
    class rhs_6b5_ttsko: rhs_6b5;
    class rhs_6b5_officer_ttsko: rhs_6b5_officer;
    class rhs_6b5_medic_ttsko: rhs_6b5_medic;
    class rhs_6b5_sniper_ttsko: rhs_6b5_sniper;
    class rhs_6b5_rifleman_ttsko: rhs_6b5_rifleman;

    class rhsgref_otv_khaki: rhsgref_6b23_khaki_rifleman {
        descriptionShort = "Armor Level III";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck
                {
                    HitpointName = "HitNeck";
                    armor = 0;
                    PassThrough = 0.89999998;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 15;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class rhsgref_otv_digi: rhsgref_otv_khaki;

    class rhsgref_TacVest_ERDL: rhsgref_6b23_khaki_rifleman {
        descriptionShort = "Armor Level I";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 0;
                    PassThrough = 0.89999998;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 8;
                    PassThrough = 0.5;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 8;
                    PassThrough = 0.5;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 3;
                    passThrough = 0.60000002;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };

    class rhsgref_alice_webbing: rhs_6b23 {
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };

    class rhsgref_chestrig: rhs_6b23 {
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };

    class rhsgref_chicom: rhsgref_chestrig {
        descriptionShort = "No Armor";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Body {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 1;
                };
            };
        };
    };

    class rhsgref_chicom_m88: rhsgref_chicom;
};
