// Function: buildDirectedGraph
// Input: _root (the root module), _parent (The parent module, if any), _visited (Array of visited modules)
// Returns: A directed graph as an array [module, children] or throws an error if a cycle is detected

params [
    "_root",
    "_parent",
    "_visited"
];

// Check for cycles
if (_visited find _root != -1) then {
    throw "Cycle detected in module sync graph";
};

_visited pushBack _root;

// Get all synced modules and remove the parent to keep direction
private _neighbors = [_root] call ZT_Sequencer_fnc_Global_getSyncedModules;
private _children = _neighbors - [_parent];

// Build node structure: [current module, list of child nodes]
private _childGraphs = [];
{
    _childNode = [_x, _root, _visited] call ZT_Sequencer_fnc_Global_buildDirectedGraph;
    _childGraphs pushBack _childNode;
} forEach _children;

[_root, _childGraphs];
