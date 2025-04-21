params [
	"_triggers",
	"_cycleTime",
	"_allAny"
];

if (isNil "_cycleTime") then {_cycleTime = 0.2};
if (isNil "_allAny") then {_allAny = true};

waitUntil {
	sleep _cycleTime;

	private _state = false;

	if (_allAny) then {
		_state = true;
	} else {
		_state = false;
	};

	
	{
		if (_allAny) then {
			_state = _state && (triggerActivated _x);
		} else {
			_state = _state || (triggerActivated _x);
		};
	} forEach _triggers;
	
	_state;
};
