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

	class Attributes : AttributesBase {
        class allAny: Combo {
            property = "ZT_AwaitTriggers_AllAny";
            displayName = "All / Any Triggers";
            description = "How many triggers need to be activated for the sequence to continue";
            typeName = "NUMBER";
            defaultValue = 0;
            class values {
                class Option1 {
                    name = "ALL";
                    value = 0;
                };
                class Option2 {
                    name = "ANY";
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
