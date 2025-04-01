class CfgPatches {
    class ZT_Sequencer {
        units[] = {"ZT_Module_HelloWorld"};
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class MyModuleCategory : NO_CATEGORY {
        displayName = "My Custom Modules";
    };
};

class CfgVehicles {
	#include "modules\HelloWorld\CfgVehicles.hpp"
};

class CfgFunctions {
    class ZT_Sequencer {
        #include "modules\HelloWorld\CfgFunctions.hpp"
    };
};
