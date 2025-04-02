params [
	"_triggers"
];

waitUntil {
	sleep 0.2;
	_state = true;
	{
		_state = _state && (triggerActivated _x);
	} forEach _triggers;
	_state;
};
