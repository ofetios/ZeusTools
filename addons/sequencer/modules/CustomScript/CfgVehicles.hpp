class ZT_Module_CustomScript : BaseSequenceModule {
    displayName = "Custom Script";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_customScript";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Attributes {
        
        class ZT_CustomScipt_Code {
            property = "ZT_CustomScipt_Code";
            displayName = "Code";
            description = "";
            control = "EditCodeMulti5";
            typeName = "STRING";
            defaultValue = """""";
            expression = "_this setVariable ['ZT_CustomScipt_Code', _value, true];";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Runs custom scripts"
        };
    };
};
