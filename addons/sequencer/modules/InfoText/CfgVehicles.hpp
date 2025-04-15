class ZT_Module_InfoText : BaseSequenceModule {
    displayName = "Info Text";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_infoText";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Attributes : AttributesBase {
        
        class headerString: Edit {
            property = "ZT_InfoText_Header";
            displayName = "Header";
            description = "";
            typeName = "STRING";
            defaultValue = """""";
        };

        class lineOneString: Edit {
            property = "ZT_InfoText_LineOne";
            displayName = "Line One";
            description = "";
            typeName = "STRING";
            defaultValue = """""";
        };

        class lineTwoString: Edit {
            property = "ZT_InfoText_LineTwo";
            displayName = "Line Two";
            description = "";
            typeName = "STRING";
            defaultValue = """""";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Displays text in the bottom right part of the screen"
        };
    };
};
