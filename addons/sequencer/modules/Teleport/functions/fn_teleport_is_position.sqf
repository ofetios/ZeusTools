params ["_positionCandidate"];

// Check if the candidate is an array
if (typeName _positionCandidate != "ARRAY") exitWith {false};

// Check if the array has exactly three elements
if ((count _positionCandidate) != 3) exitWith {false};

// Check that all elements are SCALAR
_allScalars = true;
{
	_allScalars = _allScalars and ((typeName _x) == "SCALAR");
} forEach _positionCandidate;

_allScalars;