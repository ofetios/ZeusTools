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

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Waits for all synced triggers to be activated before continuing"
		};
	};
};
