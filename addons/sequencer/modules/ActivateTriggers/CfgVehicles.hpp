class ZT_Module_ActivateTriggers  : BaseSequenceModule {
	displayName = "Activate Triggers";
	scope = 2;
	function = "";
	ZT_executionFunction = "ZT_Sequencer_fnc_activateTriggers";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 1;
	isDisposable = 0;
	curatorCanAttach = 1;
	functionContext = "spawn";

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Activates all synced triggers. Used for triggering vanilla modules"
		};
	};
};
