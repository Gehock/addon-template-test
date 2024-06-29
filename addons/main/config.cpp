#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CBA_main"};
        author = "";
        authors[] = {"Zeusops""};
        authorUrl = "http://zeusops.com";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
