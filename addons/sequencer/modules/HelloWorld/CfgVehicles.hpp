class ZT_Module_HelloWorld  : BaseSequenceModule {
	displayName = "Hello World";
	scope = 2;
	function = "";
	ZT_executionFunction = "ZT_Sequencer_fnc_helloWorld";
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
