params ["_module"];

private _codeString = _module getVariable ["scriptCode", ""];

try {
    call compile _codeString;
} catch {
    diag_log format ["[ZT Script] Script error: %1", _exception];
};
