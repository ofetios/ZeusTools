class ZT_Module_ActionMenuAdd : BaseSequenceModule {
    displayName = "Add Action Menu Item";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_actionMenuAdd";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {

        class variableName {
            displayName = "Action Variable Name";
            description = "A variable name used to refer to the action in other modules";
            typeName = "STRING";
            defaultValue = "";
        };

        class displayName {
            displayName = "Action Text";
            description = "The text displayed in the Action Menu";
            typeName = "STRING";
            defaultValue = "";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Adds an item to the Zeus Action menu."
        };
    };
};


class ZT_Module_ActionMenuAwait : BaseSequenceModule {
    displayName = "Await Action Menu Item";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_actionMenuAwait";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {

        class variableName {
            displayName = "Action Variable Name";
            description = "The variable name used to refer to the action in other modules";
            typeName = "STRING";
            defaultValue = "";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Await an item in the Zeus Action menu to be called"
        };
    };
};
