class ZT_Module_Teleport : BaseSequenceModule {
    displayName = "Teleport";
    scope = 2;
    function = "";
    ZT_executionFunction = "ZT_Sequencer_fnc_teleport";
    functionPriority = 1;
    isGlobal = 1;
    isTriggerActivated = 1;
    isDisposable = 0;
    curatorCanAttach = 1;
    functionContext = "spawn";

    class Arguments {

        class units {
            displayName = "Units";
            description = "Unit, Array of Units, Group, or Array of Groups";
            typeName = "STRING";
            defaultValue = "";
        };

        class targets {
            displayName = "Targets";
            description  = "Position, Array of Positions, Vehicle, Array Of Vehicles";
            typeName = "STRING";
            defaultValue = "";
        };

    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Teleports units."
        };
    };
};
