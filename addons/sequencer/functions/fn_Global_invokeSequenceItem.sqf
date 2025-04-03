params ["_module"];

private _type = typeOf _module;
private _config = configFile >> "CfgVehicles" >> _type;

// Look up execution function of the module
private _fnName = getText (_config >> "ZT_executionFunction");

diag_log format ["[ZT Sequencer] Invoking function: %1", _fnName];

[_module] call (missionNamespace getVariable _fnName);
