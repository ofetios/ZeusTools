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

    class Attributes {
        class ZT_FadeEffect_FadeType {
            property = "ZT_FadeEffect_FadeType";
            tooltip = "Fade to selected color / fade back to normal screen";
            displayName = "Fade In / Out";
            typeName = "NUMBER";
            control = "Combo";
            defaultValue = "0";
            expression = "_this setVariable ['ZT_Teleport_FadeType', _value, true];";
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

        class ZT_FadeEffect_FadeColor {
            property = "ZT_FadeEffect_FadeColor";
            tooltip = "Fade to selected color / fade back to normal screen";
            displayName = "Fade Color";
            typeName = "STRING";
            control = "Combo";
            defaultValue = """BLACK""";
            expression = "_this setVariable ['ZT_FadeEffect_FadeColor', _value, true];";
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

        class ZT_FadeEffect_FadeDuration {
            property = "ZT_FadeEffect_FadeDuration";
            tooltip = "How fast should the effect take place";
            displayName = "Fade Duration";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = "3";
            expression = "_this setVariable ['ZT_FadeEffect_FadeDuration', _value, true];";
        };
        class ZT_FadeEffect_Blur {
            property = "ZT_FadeEffect_Blur";
            tooltip = "Blur the screen while fading?";
            displayName = "Blur";
            typeName = "NUMBER";
            control = "CheckboxNumber";
            defaultValue = 0;
            expression = "_this setVariable ['ZT_FadeEffect_Blur', _value, true];";
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

        class ZT_FadeEffect_DelaySequence {
            property = "ZT_FadeEffect_DelaySequence";
            tooltip = "Should this module delay the sequencer?";
            displayName = "Delay Sequence";
            typeName = "BOOL";
            control = "CheckboxNumber";
            expression = "_this setVariable ['ZT_FadeEffect_DelaySequence', _value, true];";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Creates a Fade IN/OUT effect with multiple parameters"
        };
    };
};
