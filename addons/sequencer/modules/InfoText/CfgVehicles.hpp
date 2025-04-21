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
        
        class ZT_InfoText_Header {
            property = "ZT_InfoText_Header";
            displayName = "Header";
            description = "";
            control = "Edit";
            typeName = "STRING";
            defaultValue = """""";
            expression = "_this setVariable ['ZT_InfoText_Header', _value, true];";
        };

        class ZT_InfoText_LineOne {
            property = "ZT_InfoText_LineOne";
            displayName = "Line One";
            description = "";
            control = "Edit";
            typeName = "STRING";
            defaultValue = """""";
            expression = "_this setVariable ['ZT_InfoText_LineOne', _value, true];";
        };

        class ZT_InfoText_LineTwo {
            property = "ZT_InfoText_LineTwo";
            displayName = "Line Two";
            description = "";
            control = "Edit";
            typeName = "STRING";
            defaultValue = """""";
            expression = "_this setVariable ['ZT_InfoText_LineTwo', _value, true];";
        };

        class ZT_InfoText_Type {
            property = "ZT_InfoText_Type";
            displayName = "Text Type";
            description = "";
            control = "Combo";
            typeName = "NUMBER";
            defaultValue = "0";
            expression = "_this setVariable ['ZT_InfoText_Type', _value, true];";

            class values {
                class Option1 {
                    name = "Type 1";
                    value = 0;
                    default = 0;
                };
                class Option2 {
                    name = "Type 2";
                    value = 1;
                };
            };
        };

        class ZT_InfoText_Delay {
            property = "ZT_InfoText_Delay";
            displayName = "Character Delay";
            tooltip = "Character delay (only works on type 1)";
            control = "Slider";
            typeName = "NUMBER";
            defaultValue = "1";
            expression = "_this setVariable ['ZT_InfoText_Delay', _value, true];";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Displays text in the bottom right part of the screen"
        };
    };
};
