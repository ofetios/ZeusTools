class CfgPatches {
    class ZT_Sequencer {
        units[] = {"ZT_Module_HelloWorld"};
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

    class ZT_Module_HelloWorld  : BaseSequenceModule {
        displayName = "Hello World";
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
                "Test Module"
            };
        };
    };
};

class CfgFunctions {
    class ZT_Sequencer {
        class HelloWorld {
            file = "z\ZT\Sequencer\modules\HelloWorld\functions";
            class helloWorld {};
        };
    };
};
