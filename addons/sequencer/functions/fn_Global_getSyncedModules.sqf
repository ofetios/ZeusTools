params [
	"_object"
];

// Get all synced objects on object, including modules
private _syncedObjects = synchronizedObjects _object;

// Filter for modules by class
private _modules = [];
{
	if (_x isKindOf "Module_F") then {
		_modules pushBack _x;
	};
} forEach _syncedObjects;

// Return modules
_modules;
