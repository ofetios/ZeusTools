class ZT_Module_HelloWorld2  : BaseSequenceModule {
	displayName = "Hello World 2";
	scope = 2;
	function = "";
	ZT_executionFunction = "ZT_Sequencer_fnc_helloWorld2";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 1;
	isDisposable = 0;
	curatorCanAttach = 1;
	functionContext = "spawn";

	class ModuleDescription : ModuleDescription {
		description[] = {
			"Test Module"
		};
	};
};
