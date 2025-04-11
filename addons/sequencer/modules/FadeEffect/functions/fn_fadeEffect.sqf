params ["_module"];

private _fadeType = _module getVariable ["fadeType", 1];
private _fadeColor = _module getVariable ["fadeColor", 1];
private _fadeduration = _module getVariable ["fadeduration", 1];
private _blur = _module getVariable ["blur", 0];
private _delaySequence = _module getVariable ["delaySequence", 0];

[_fadeType, _fadeColor, _fadeduration, _blur] spawn BIS_fnc_fadeEffect;

if (_delaySequence == 1) then {
	// artificially increase the delay by one second to avoid quick change
	// in case there is another fade module being called in less than a second
	_sleepDelay = _fadeduration + 1;
	sleep _sleepDelay;
}
