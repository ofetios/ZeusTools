class ZT_Module_Time : BaseSequenceModule {
    displayName = "Skip Time";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_skipTime";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {
        class time {
            displayName = "Hours";
            description = "How many hours to skip.";
            typeName = "NUMBER";
            defaultValue = "1";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Skips time"
        };
    };
};
