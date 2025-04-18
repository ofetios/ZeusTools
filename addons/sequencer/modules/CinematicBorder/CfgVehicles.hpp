class ZT_Module_CinematicBorder : BaseSequenceModule {
    displayName = "Cinematic Border";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_cinematicBorder";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Attributes {
        class ZT_CinematicBorder_FadeMode {
            property = "ZT_CinematicBorder_FadeMode";
            tooltip = "Fade In / Out";
            displayName = "Fade In / Out";
            typeName = "NUMBER";
            control = "Combo";
            defaultValue = "0";
            expression = "_this setVariable ['ZT_CinematicBorder_FadeMode', _value, true];";
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

        class ZT_CinematicBorder_Duration {
            property = "ZT_CinematicBorder_Duration";
            tooltip = "How fast should the effect take place";
            displayName = "Fade Duration";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = "1.5";
            expression = "_this setVariable ['ZT_CinematicBorder_Duration', _value, true];";
        };

        class ZT_CinematicBorder_PlaySound {
            property = "ZT_CinematicBorder_PlaySound";
            tooltip = "Play sound?";
            displayName = "Play Sound";
            typeName = "BOOL";
            control = "Checkbox";
            defaultValue = "true";
            expression = "_this setVariable ['ZT_CinematicBorder_PlaySound', _value, true];";
        };

        class ZT_CinematicBorder_ForceFirstPerson {
            property = "ZT_CinematicBorder_ForceFirstPerson";
            tooltip = "";
            displayName = "Force first-person";
            typeName = "BOOL";
            control = "Checkbox";
            defaultValue = "false";
            expression = "_this setVariable ['ZT_CinematicBorder_ForceFirstPerson', _value, true];";
        };

        class ZT_CinematicBorder_DelaySequence {
            property = "ZT_CinematicBorder_DelaySequence";
            tooltip = "Delay Sequence by fade duration";
            displayName = "Delay Sequence";
            typeName = "BOOL";
            control = "Checkbox";
            defaultValue = "true";
            expression = "_this setVariable ['ZT_CinematicBorder_DelaySequence', _value, true];";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Adds Cinematic borders to local user"
        };
    };
};
