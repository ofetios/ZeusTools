class CfgFactionClasses {
    class NO_CATEGORY;
    class MyModuleCategory : NO_CATEGORY {
        displayName = "My Custom Modules";
    };
};

#include "modules\BaseSequenceModule.cpp"
#include "modules\HelloWorld\HelloWorld.cpp"