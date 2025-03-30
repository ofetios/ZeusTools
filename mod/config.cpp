class CfgPatches {
    class ZT {
        units[] = {"ModuleCheckVIP"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Modules_F"};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class MyModuleCategory : NO_CATEGORY {
        displayName = "My Custom Modules";
    };
};

class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class ArgumentsBaseUnits {};
        class ModuleDescription {};
    };

    class ModuleCheckVIP : Module_F {
        scope = 2;
        displayName = "Check VIP Alive";
        category = "MyModuleCategory";
        function = "MyModule_fnc_checkVIP";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable = 0;
        curatorCanAttach = 1;
		functionContext = "spawn";

        class ModuleDescription : ModuleDescription {
            description[] = {
                "Checks if VIP is dead when triggered."
            };
        };
    };
};

class CfgFunctions {
    class ZT {
        class Functions {
            file = "\mod\functions";
            class checkVIP {};
			class helloWorld {};
        };
    };
};
