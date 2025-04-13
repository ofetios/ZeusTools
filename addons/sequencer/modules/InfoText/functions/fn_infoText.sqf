params ["_module"];

private _header = _module getVariable "headerString";
private _lineOne = _module getVariable "lineOneString";
private _lineTwo = _module getVariable "lineTwoString";

[_header, _lineOne, _lineTwo] spawn BIS_fnc_infoText;

