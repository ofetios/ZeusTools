class ZT_Module_Weather  : BaseSequenceModule {
	displayName = "Set Weather";
	scope = 2;
	function = "";
	ZT_executionFunction = "ZT_Sequencer_fnc_setWeather";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 1;
	isDisposable = 0;
	curatorCanAttach = 1;
	functionContext = "spawn";

	class Arguments {
        class overcast {
            displayName = "Overcast";
            description = "Values are between 0 and 1. -1 = no change";
            typeName = "NUMBER";
            defaultValue = -1;
        };
        class rain {
            displayName = "Rain";
            description = "Values are between 0 and 1. -1 = no change";
            typeName = "NUMBER";
            defaultValue = -1;
        };
        class fogValue {
            displayName = "Fog Value";
            description = " normal fog value that represents fog density at fogBase level, in range 0..1. -1 = no change";
            typeName = "NUMBER";
            defaultValue = -1;
        };
        class fogDecay {
            displayName = "Fog Decay";
            description = "decay of fog density with altitude, in range -1..1; a negative value means a ""ceiling"" fog";
            typeName = "NUMBER";
            defaultValue = -1;
        };
        class fogBase {
            displayName = "Fog Base";
            description = "base altitude (ASL) of fog (in meters), in range -5000..5000";
            typeName = "NUMBER";
            defaultValue = 0;
        };
        class windStr {
            displayName = "Wind Strength";
            description = "Wind Strength - new value in range 0..1, -1 = no change";
            typeName = "NUMBER";
            defaultValue = 0;
        };
        class windDir {
            displayName = "Wind Direction";
            description = "azimuth, -1 = no change";
            typeName = "NUMBER";
            defaultValue = 0;
        };
        class duration {
            displayName = "Transition Duration (seconds)";
            description = "How long should the transition take";
            typeName = "NUMBER";
            defaultValue = 120;
        };
    };

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Waits for all synced triggers to be activated before continuing"
		};
	};
};
