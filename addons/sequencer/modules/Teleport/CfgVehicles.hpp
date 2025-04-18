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

    class Attributes {
        class ZT_Teleport_Units {
            property = "ZT_Teleport_Units";
            tooltip = "Unit, Array of Units, Group, or Array of Groups";
            displayName = "Units";
            typeName = "STRING";
            control = "Edit";
            defaultValue = "";
            expression = "_this setVariable ['ZT_Teleport_Units', _value, true];";
        };

        class ZT_Teleport_Targets {
            property = "ZT_Teleport_Targets";
            tooltip = "Position, Array of Positions, Vehicle, Array Of Vehicle";
            displayName = "Targets";
            typeName = "STRING";
            control = "Edit";
            defaultValue = "";
            expression = "_this setVariable ['ZT_Teleport_Targets', _value, true];";
        };
    };

    class ModuleDescription : ModuleDescription {
        description[] = {
            "Teleports units."
        };
    };
};
