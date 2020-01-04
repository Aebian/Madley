 /*
    author: Aebian
    description: Record of Coordinates
    returns: coordinates array
    created: 2019-06-23
    Init: [true] execVM "itsAebian\coords.sqf";
*/

params ["_state"];

keepRecording = _state ;


0 spawn {

    _prevPos = [0, 0, 0];

    // That's where we will store positions
    _positions = [];

    while {keepRecording} do {
        _currentPos = getPosASL player;
        // Log only positions which are far from a previous position
        // We probably don't want a million points when object stops for instance
        if ((_currentPos distance _prevPos) > 3) then {
            _positions pushBack _currentPos;
            _prevPos = _currentPos;
        };
        sleep 0.01;
    };

    // Output through clipboard or anything
    copyToClipboard (str _positions);

    systemChat format ["Logged %1 positions to the clipboard", count _positions];
    
};