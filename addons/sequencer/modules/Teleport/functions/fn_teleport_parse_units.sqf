params ["_string"];

private _compiledString = compile _string;
_units = call _compiledString;

private _result = [];
switch (typeName _units) do
{
	case "ARRAY": {
		{
			switch (typeName _x) do {
				case "GROUP": {_result append (units _x)};
				case "OBJECT": {_result pushBack _x};
			};
		} forEach _units;
	};
	
	case "OBJECT": {
		_result = [_units];
	};
	
	case "GROUP": {
		_result = units _units;
	};
	
	default {
		_result = []
	};
};

_result;