class ZT_Module_RunScript : BaseSequenceModule {
    displayName = "Run Custom Script";
    scope = 2;
    function = ""; 
    ZT_executionFunction = "ZT_Sequencer_fnc_runScript";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {
        class scriptCode {
                property = "ZT_scriptCode";
                displayName = "Custom Script";
                tooltip = "Write any SQF code to be executed.";
                expression = "_this setVariable ['ZT_scriptCode', _value, true];";
                defaultValue = """hint 'Hello from custom script!';""";
                unique = 0;
                validate = "none";
                typeName = "STRING";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Executes custom user-written SQF code from the module attributes."
        };
    };
};
