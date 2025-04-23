params [
	"_object"
];

private _triggerClasses = [
	"EmptyDetectorAreaR50",
	"EmptyDetectorAreaR250",
	"EmptyDetectorArea10x10",
	"EmptyDetector"
];

// Get all synced objects on object, including triggers
private _syncedObjects = synchronizedObjects _object;

// Filter for triggers by class
private _triggers = [];
{
	if ((typeOf _x) in _triggerClasses) then {
		_triggers pushBack _x;
	};
} forEach _syncedObjects;

// Return triggers
_triggers;
