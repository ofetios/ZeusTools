class ZT_Module_Sequencer  : SequencerBase {
	displayName = "Sequencer";
	scope = 2;
	function = "ZT_Sequencer_fnc_Sequencer_Invoke";
	functionPriority = 1;
	isGlobal = 1;
	isTriggerActivated = 1;
	isDisposable = 0;
	curatorCanAttach = 1;
	functionContext = "spawn";

	class ModuleDescription : ModuleDescription {
		description[] = {
			"This modules handles sequencing"
		};
	};
};
