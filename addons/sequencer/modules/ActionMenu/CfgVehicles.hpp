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

    class Attributes {

        class ZT_ActionMenuAdd_VariableName_Add {
            property = "ZT_ActionMenuAdd_VariableName_Add";
            tooltip = "A variable name used to refer to the action in other modules";
            displayName = "Action Variable Name";
            typeName = "STRING";
            control = "Edit";
            defaultValue = "";
            expression = "_this setVariable ['ZT_ActionMenuAdd_VariableName_Add', _value, true];";
        };

        class ZT_ActionMenuAdd_DisplayName {
            property = "ZT_ActionMenuAdd_DisplayName";
            tooltip = "The text displayed in the Action Menu";
            displayName = "Action Text";
            typeName = "STRING";
            control = "Edit";
            defaultValue = "";
            expression = "_this setVariable ['ZT_ActionMenuAdd_DisplayName', _value, true];";
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

        class ZT_ActionMenuAdd_VariableName_Await {
            property = "ZT_ActionMenuAdd_VariableName_Await";
            tooltip = "The variable name used to refer to the action in other moduless";
            displayName = "Action Variable Name";
            typeName = "STRING";
            control = "Edit";
            defaultValue = "";
            expression = "_this setVariable ['ZT_ActionMenuAdd_VariableName_Await', _value, true];";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Await an item in the Zeus Action menu to be called"
        };
    };
};
