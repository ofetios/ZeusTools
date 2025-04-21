class ZT_Module_AwaitTriggers  : BaseSequenceModule {
	displayName = "Await Triggers";
	scope = 2;
	function = "";
	ZT_executionFunction = "ZT_Sequencer_fnc_awaitTriggers";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 1;
	isDisposable = 0;
	curatorCanAttach = 1;
	functionContext = "spawn";

	class Attributes {
        class ZT_AwaitTriggers_AllAny {
            property = "ZT_AwaitTriggers_AllAny";
            tooltip = "How many triggers need to be activated for the sequence to continue";
            displayName = "All / Any Triggers";
            typeName = "NUMBER";
            control = "Combo";
            defaultValue = 0;
            expression = "_this setVariable ['ZT_AwaitTriggers_AllAny', _value, true];";
			class values {
                class Option1 {
                    name = "All";
                    value = 0;
                };
                class Option2 {
                    name = "Any";
                    value = 1;
                };
            };
        };
	};

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Waits for all synced triggers to be activated before continuing"
		};
	};
};
