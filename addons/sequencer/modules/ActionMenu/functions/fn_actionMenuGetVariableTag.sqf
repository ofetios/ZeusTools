params ["_variableName"];

_actionMenuItemVariable = format ["ZT_Sequence_actionMenu_item_%1", _variableName];

diag_log format ["Variable Tag: %1", _actionMenuItemVariable];

_actionMenuItemVariable;
