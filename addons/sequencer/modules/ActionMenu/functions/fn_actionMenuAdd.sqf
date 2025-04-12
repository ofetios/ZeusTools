params ["_module"];

private _variableName = _module getVariable ["variableName", ""];
private _displayName = _module getVariable ["displayName", ""];


hint format ["%1\n%2", _variableName, _displayName];
private _actionMenuItemVariable = [_variableName] call ZT_Sequencer_fnc_actionMenuGetVariableTag;

private _action = [
    _actionMenuItemVariable,
    _displayName,
    "",
    {_args call ZT_Sequencer_fnc_actionMenuCalled},
    {true},
    [_actionMenuItemVariable]
] call zen_context_menu_fnc_createAction;

missionNamespace setVariable [_actionMenuItemVariable, false];

[_action, [], 0] call zen_context_menu_fnc_addAction;

_action;