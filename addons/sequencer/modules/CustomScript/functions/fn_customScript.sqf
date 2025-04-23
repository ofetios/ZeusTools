params ["_module"];

private _code = _module getVariable "ZT_CustomScipt_Code";

private _compiledCode = compile _code;

call _compiledCode;

