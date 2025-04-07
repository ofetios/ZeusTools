class CfgPatches {
    class ZT_Sequencer {
        units[] = {
			"ZT_Module_Sequencer",
			"ZT_Module_Delay",
			"ZT_Module_AwaitTriggers",
			"ZT_Module_ActivateTriggers",
			"ZT_Module_RunScript",
		};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class ZTSequencerCategory : NO_CATEGORY {
        displayName = "[Zeus Tools] Sequencer";
    };
};

class CfgVehicles {
	class Logic;
	class Module_F : Logic {
		class ArgumentsBaseUnits {};
		class ModuleDescription {};
	};
	
	class BaseSequenceModule : Module_F {
		category = "ZTSequencerCategory";
		is3DEN = 0;
	};
	
	#include "modules\Sequencer\CfgVehicles.hpp"
	#include "modules\Delay\CfgVehicles.hpp"
	#include "modules\AwaitTriggers\CfgVehicles.hpp"
	#include "modules\ActivateTriggers\CfgVehicles.hpp"
	#include "modules\RunScript\CfgVehicles.hpp"
};

#include "CfgFunctions.hpp"
