private ["_Object","_nextStage","_ObjectID","_ObjectUID","_CharacterID","_dir","_location","_worldspace","_classname"];
_Object = _this select 0;
_nextStage = _this select 1;

_ObjectID = _Object getVariable ["ObjectID","unset"];
_ObjectUID = _Object getVariable ["ObjectUID","unset"];

_CharacterID = "0";
_dir = getDir _Object;
			
if (_nextStage == "MAP_pumpkin2") then {
	_dir = _dir - 90;
};

if (_nextStage == "Grave") then {
	_dir = _dir + 90;
};

_location = getPosATL _Object;
_worldspace = [_dir,_location];
_classname = _nextStage;
			
PVDZE_obj_Delete = [_objectID,_objectUID,player];
publicVariableServer "PVDZE_obj_Delete";
			
PVDZE_veh_Publish = [_Object,_worldspace,_classname,true,_CharacterID];
publicVariableServer  "PVDZE_veh_Publish";
			
_Object setVariable ["isWatered", "1", true];