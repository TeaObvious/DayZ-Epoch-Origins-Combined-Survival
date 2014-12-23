private["_vehicleLock","_skinFiles","_animationStates","_position","_worldspace","_fuel","_key"];
_object = _this;
_position = _object getVariable ["extendedPos",getPosATL _object];
_vector = _object getVariable ["vector",[]];
_ownerPUID = _object getVariable ["ownerPUID",""];
_skinFiles = _object getVariable ["skinFiles",[]];
_animationStates = _object getVariable ["animationStates",[]];
_buildStage = _object getVariable ["buildStage", 0];
_attachedObjects = [];

_vehicleLock = 0;
if (locked _object) then {
	_vehicleLock = 1;
};

_worldspace = [
	round(direction _object),
	_position,
	_vector,
	_ownerPUID,
	[
		_vehicleLock,
		_buildStage,
		_skinFiles,
		_animationStates,
		_attachedObjects
	]
];

_worldspace