collect3DENHistory {
    {
        _x set3DENAttribute ["rotation", [0, 0, random 360]];
    } forEach (get3DENSelected "object");

    do3DENAction "LevelWithSurface";
};
