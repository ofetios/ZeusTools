class ZT_Module_FadeEffect : BaseSequenceModule {
    displayName = "Fade Effect";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_fadeEffect";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments: AttributesBase {
        class fadeType {
            displayName = "Fade In / Out";
            description = "";
            typeName = "NUMBER";
            defaultValue = "0";
            class values {
                class Option1 {
                    name = "Fade In";
                    value = 0;
                    default = 0;
                };
                class Option2 {
                    name = "Fade Out";
                    value = 1;
                };
            };
        };
        class fadeColor {
            displayName = "Fade Color";
            description = "";
            typeName = "STRING";
            defaultValue = "BLACK";
            class values {
                class Option1 {
                    name = "Black";
                    value = "BLACK";
                    default = "BLACK";
                };
                class Option2 {
                    name = "White";
                    value = "WHITE";
                };
            };
        };
        class fadeDuration {
            displayName = "Fade Duration";
            description = "";
            typeName = "NUMBER";
            defaultValue = "3";
        };
        class blur: Checkbox {
            displayName = "Blur";
            description = "";
            typeName = "NUMBER";
            defaultValue = 0;
            class values {
                class Option1 {
                    name = "No";
                    value = 0;
                    default = 0;
                };
                class Option2 {
                    name = "Yes";
                    value = 1;
                };
            };
        };
        class delaySequence: Checkbox {
            displayName = "Delay sequence until the transition is over";
            description = "";
            typeName = "NUMBER";
            defaultValue = 0;
            class values {
                class Option1 {
                    name = "No";
                    value = 0;
                    default = 0;
                };
                class Option2 {
                    name = "Yes";
                    value = 1;
                };
            };
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Creates a Fade IN/OUT effect with multiple parameters"
        };
    };
};
