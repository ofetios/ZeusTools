params ["_variableName"];

diag_log format ["Removing action: %1", _variableName];
[_variableName] call zen_context_menu_fnc_removeAction;