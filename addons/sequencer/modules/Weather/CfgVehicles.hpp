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

	class Attributes {
        class ZT_Weather_Overcast {
            property = "ZT_Weather_Overcast";
            tooltip = "Overcast only changes after 1 hour (not fully tested yet)";
            displayName = "Overcast";
            description = "Values are between 0 and 1. -1 = no change";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = -1;
            expression = "_this setVariable ['ZT_Weather_Overcast', _value, true];";
        };
        class ZT_Weather_Rain {
            property = "ZT_Weather_Rain";
            displayName = "Rain";
            tooltip = "Overcast neeeds to already be more than 0.7 for rain to apply";
            description = "Values are between 0 and 1. -1 = no change";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = -1;
            expression = "_this setVariable ['ZT_Weather_Rain', _value, true];";
        };
        class ZT_Weather_FogValue {
            property = "ZT_Weather_FogValue";
            displayName = "Fog Value";
            description = " normal fog value that represents fog density at fogBase level, in range 0..1. -1 = no change";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = -1;
            expression = "_this setVariable ['ZT_Weather_FogValue', _value, true];";
        };
        class ZT_Weather_FogDecay {
            property = "ZT_Weather_FogDecay";
            displayName = "Fog Decay";
            description = "decay of fog density with altitude, in range -1..1; a negative value means a ""ceiling"" fog";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = -1;
            expression = "_this setVariable ['ZT_Weather_FogDecay', _value, true];";
        };
        class ZT_Weather_FogBase {
            property = "ZT_Weather_FogBase";
            displayName = "Fog Base";
            description = "base altitude (ASL) of fog (in meters), in range -5000..5000";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = 0;
            expression = "_this setVariable ['ZT_Weather_FogBase', _value, true];";
        };
        class ZT_Weather_WindStrength {
            property = "ZT_Weather_WindStrength";
            displayName = "Wind Strength";
            description = "Wind Strength - new value in range 0..1, -1 = no change";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = 0;
            expression = "_this setVariable ['ZT_Weather_WindStrength', _value, true];";
        };
        class ZT_Weather_WindDirection {
            property = "ZT_Weather_WindDirection";
            displayName = "Wind Direction";
            description = "azimuth, -1 = no change";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = 0;
            expression = "_this setVariable ['ZT_Weather_WindDirection', _value, true];";
        };
        class ZT_Weather_Duration {
            property = "ZT_Weather_Duration";
            displayName = "Transition Duration (seconds)";
            description = "How long should the transition take";
            typeName = "NUMBER";
            control = "Edit";
            defaultValue = 120;
            expression = "_this setVariable ['ZT_Weather_Duration', _value, true];";
        };
    };

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Waits for all synced triggers to be activated before continuing"
		};
	};
};
