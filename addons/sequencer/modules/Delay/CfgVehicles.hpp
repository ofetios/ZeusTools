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

    class Attributes {
        class ZT_Delay_DelayDuration {
            property = "ZT_Delay_DelayDuration";
            tooltip = "How many seconds to wait before continuing.";
            displayName = "Delay Duration";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = 3;
            expression = "_this setVariable ['ZT_Delay_DelayDuration', _value, true];";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Waits for the specified duration before continuing the sequence."
        };
    };
};
