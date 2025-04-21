params ["_module"];

private _variableName = _module getVariable ["ZT_ActionMenuAdd_VariableName_Add", ""];
private _displayName = _module getVariable ["ZT_ActionMenuAdd_DisplayName", ""];


private _actionMenuItemVariable = [_variableName] call ZT_Sequencer_fnc_actionMenuGetVariableTag;

private _action = [
    _actionMenuItemVariable,
    _displayName,
    "\A3\ui_f\data\map\groupicons\selector_selectable_ca.paa",
    {_args call ZT_Sequencer_fnc_actionMenuCalled},
    {true},
    [_actionMenuItemVariable]
] call zen_context_menu_fnc_createAction;

missionNamespace setVariable [_actionMenuItemVariable, false];

[_action, [], 0] call zen_context_menu_fnc_addAction;

_action;