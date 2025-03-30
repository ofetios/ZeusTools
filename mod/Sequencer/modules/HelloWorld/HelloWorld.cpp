class CfgPatches {
    class ZT {
        units[] = {"ModuleHelloWorld"};
    };
};

class CfgVehicles {
    class BaseSequenceModule;
    class ModuleDescription;
    class ModuleHelloWorld : BaseSequenceModule {
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
