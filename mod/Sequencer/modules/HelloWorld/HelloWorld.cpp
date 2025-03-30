class CfgPatches {
    class ZT {
        units[] = {"ModuleHelloWorld"};
    };
};

class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class ArgumentsBaseUnits {};
        class ModuleDescription;
    };

    class BaseSequenceModule : Module_F {
        category = "MyModuleCategory";
    };

    class ModuleHelloWorld : BaseSequenceModule {
        displayName = "Hello World2";
        scope = 2;
        function = "ZT_Sequencer_fnc_helloWorld";
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
    class ZT_Sequencer {
        class HelloWorld {
            file = "\mod\Sequencer\modules\HelloWorld\functions";
            class helloWorld {};
        };
    };
};
