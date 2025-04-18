params ["_module"];

private _fadeType = _module getVariable ["ZT_Teleport_FadeType", 1];
private _fadeColor = _module getVariable ["ZT_FadeEffect_FadeColor", 1];
private _fadeduration = _module getVariable ["ZT_FadeEffect_FadeDuration", 1];
private _blur = _module getVariable ["ZT_FadeEffect_Blur", 0];
private _delaySequence = _module getVariable ["ZT_FadeEffect_DelaySequence", 0];

[_fadeType, _fadeColor, _fadeduration, _blur] spawn BIS_fnc_fadeEffect;

if (_delaySequence == 1) then {
	// artificially increase the delay by one second to avoid quick change
	// in case there is another fade module being called in less than a second
	_sleepDelay = _fadeduration + 1;
	sleep _sleepDelay;
}
