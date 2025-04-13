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

    class Attributes : AttributesBase {
        class fadeMode: Combo {
            property = "ZT_cinematicBorder_fadeMode";
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

        class duration: Edit {
            property = "ZT_CinematicBorder_Duration";
            displayName = "Fade Duration";
            description = "";
            typeName = "NUMBER";
            defaultValue = "1.5";
        };

        class playSound: Checkbox {
            property = "ZT_CinematicBorder_playSound";
            displayName = "Play Sound";
            tooltip = "";
            typeName = "BOOL";
            defaultValue = "true";
        };

        class forceFirstPerson: Checkbox {
            property = "ZT_CinematicBorder_forceFirstPerson";
            displayName = "Force first-person";
            tooltip = "";
            typeName = "BOOL";
            defaultValue = "false";
        };

        class delaySequence: Checkbox {
            property = "ZT_CinematicBorder_delaySequence";
            displayName = "Delay Sequence";
            tooltip = "Delay Sequence by fade duration";
            typeName = "BOOL";
            defaultValue = "true";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            ""
        };
    };
};
