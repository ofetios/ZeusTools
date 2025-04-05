class ZT_Module_Delay : BaseSequenceModule {
    displayName = "Delay";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_delay";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {
        class delayDuration {
            displayName = "Delay Duration";
            description = "How many seconds to wait before continuing.";
            typeName = "NUMBER";
            defaultValue = "5";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Waits for the specified duration before continuing the sequence."
        };
    };
};
