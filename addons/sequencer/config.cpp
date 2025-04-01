class CfgPatches {
    class ZT_Sequencer {
        units[] = {
			"ZT_Module_HelloWorld",
			"ZT_Module_HelloWorld2"
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
	};
	
	#include "modules\HelloWorld\CfgVehicles.hpp"
	#include "modules\HelloWorld2\CfgVehicles.hpp"
};

class CfgFunctions {
    class ZT_Sequencer {
        #include "modules\HelloWorld\CfgFunctions.hpp"
        #include "modules\HelloWorld2\CfgFunctions.hpp"
    };
};
