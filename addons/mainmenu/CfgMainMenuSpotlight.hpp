class CfgMainMenuSpotlight  {
    class Bootcamp {
        condition = "false";
    };

    class EastWind {
        condition = "false";
    };

    class ApexProtocol {
        condition = "false";
    };

    class AoW_Showcase_AoW {
        condition = "false";
    };

    class AoW_Showcase_Future {
        condition = "false";
    };

    class Contact_Campaign {
        condition = "false";
    };

    class OldMan {
        condition = "false";
    };

    class Orange_Campaign {
        condition = "false";
    };

    class Orange_CampaignGerman {
        condition = "false";
    };

    class Orange_Showcase_IDAP {
        condition = "false";
    };

    class Orange_Showcase_LoW {
        condition = "false";
    };

    class SP_FD14 {
        condition = "false";
    };

    class Tacops_Campaign_01 {
        condition = "false";
    };

    class Tacops_Campaign_02 {
        condition = "false";
    };

    class Tacops_Campaign_03 {
        condition = "false";
    };

    class Tanks_Campaign_01 {
        condition = "false";
    };

    class ClusterServer {
        text = "Cluster Community Server";
        textIsQuote = 0;
        picture = QPATHTOF(UI\thumbnail_ca.paa);
        action = QUOTE([ARR_4(_this,QUOTE(QUOTE(SERVER_IP)),QUOTE(QUOTE(SERVER_PORT)),QUOTE(QUOTE(SERVER_PASSWORD)))] execVM QUOTE(QPATHTOF(functions\fnc_joinserver.sqf)));
        actionText = "Join server: Cluster Community Server";
        condition = "true";
    };
};
