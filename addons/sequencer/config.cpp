class CfgPatches {
    class ZT_Sequencer {
        units[] = {
			"ZT_Module_HelloWorld",
			"ZT_Module_HelloWorld2",
			"ZT_Module_Sequencer",
			"ZT_Module_Delay",
			"ZT_Module_AwaitTriggers",
		};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class MyModuleCategory : NO_CATEGORY {
        displayName = "My Custom Modules";
    };
};

class CfgVehicles {
	class Logic;
	class Module_F : Logic {
		class ArgumentsBaseUnits {};
		class ModuleDescription {};
	};
	
	class BaseSequenceModule : Module_F {
		category = "MyModuleCategory";
		is3DEN = 0;
	};
	
	#include "modules\HelloWorld\CfgVehicles.hpp"
	#include "modules\HelloWorld2\CfgVehicles.hpp"
	#include "modules\Sequencer\CfgVehicles.hpp"
	#include "modules\Delay\CfgVehicles.hpp"
	#include "modules\AwaitTriggers\CfgVehicles.hpp"
};

#include "CfgFunctions.hpp"
