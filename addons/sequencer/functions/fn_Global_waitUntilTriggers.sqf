params [
	"_triggers",
	"_cycleTime"
];

if (isNil "_cycleTime") then {_cycleTime = 0.2};

waitUntil {
	sleep _cycleTime;
	_state = true;
	{
		_state = _state && (triggerActivated _x);
	} forEach _triggers;
	_state;
};
