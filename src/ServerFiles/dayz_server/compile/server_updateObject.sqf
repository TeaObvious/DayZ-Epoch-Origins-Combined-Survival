/*
[_object,_type] spawn server_updateObject;
*/
private ["_object","_type","_objectID","_uid","_lastUpdate","_needUpdate","_object_position","_object_inventory","_object_damage","_isNotOk","_parachuteWest","_firstTime","_object_killed","_object_repair","_isbuildable"];

_object = 	_this select 0;

if(isNull(_object)) exitWith {
	diag_log format["Skipping Null Object: %1", _object];
};

_type = 	_this select 1;
_parachuteWest = ((typeOf _object == "ParachuteWest") || (typeOf _object == "ParachuteC"));
_isbuildable = (typeOf _object) in dayz_allowedObjects;
_isNotOk = false;
_firstTime = false;

_objectID =	_object getVariable ["ObjectID","0"];
_uid = 		_object getVariable ["ObjectUID","0"];

if ((typeName _objectID != "string") || (typeName _uid != "string")) then
{ 
    diag_log(format["Non-string Object: ID %1 UID %2", _objectID, _uid]);
    //force fail
    _objectID = "0";
    _uid = "0";
};
if (!_parachuteWest && !(locked _object)) then {
	if (_objectID == "0" && _uid == "0") then
	{
		_object_position = getPosATL _object;
    	_isNotOk = true;
	};
};

// do not update if buildable && not ok
if (_isNotOk && _isbuildable) exitWith {  };

// delete if still not ok
if (_isNotOk) exitWith { deleteVehicle _object; diag_log(format["Deleting object %1 with invalid ID at pos [%2,%3,%4]",typeOf _object,_object_position select 0,_object_position select 1, _object_position select 2]); };


_lastUpdate = _object getVariable ["lastUpdate",time];
_needUpdate = _object in needUpdate_objects;

// TODO ----------------------
_object_position = {
	private["_worldspace","_fuel","_key"];
	_worldspace = _object call serializeExtendedObjectData;
	
	_fuel = 0;
	if (_object isKindOf "AllVehicles") then {
		_fuel = fuel _object;
	};

	_key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
};

_object_inventory = {
	private["_inventory","_previous","_key"];
		_inventory = [
			getWeaponCargo _object,
			getMagazineCargo _object,
			getBackpackCargo _object
		];
		_previous = str(_object getVariable["lastInventory",[]]);
		if (str(_inventory) != _previous) then {
			_object setVariable["lastInventory",_inventory];
			if (_objectID == "0") then {
				_key = format["CHILD:309:%1:%2:",_uid,_inventory];
			} else {
				_key = format["CHILD:303:%1:%2:",_objectID,_inventory];
			};
			//diag_log ("HIVE: WRITE: "+ str(_key));
			_key call server_hiveWrite;
		};
};

_object_damage = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
		_hitpoints = _object call vehicle_getHitpoints;
		_damage = damage _object;
		_array = [];
		{
			_hit = [_object,_x] call object_getHit;
			_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
			if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
			_object setHit ["_selection", _hit];
		} count _hitpoints;
	
		_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
		//diag_log ("HIVE: WRITE: "+ str(_key));
		_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
	};

_object_killed = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	//_damage = damage _object;
	_damage = 1;
	_array = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
		_hit = 1;
		_object setHit ["_selection", _hit];
	} count _hitpoints;
	
	if (_objectID == "0") then {
		_key = format["CHILD:306:%1:%2:%3:",_uid,_array,_damage];
	} else {
		_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
	};
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
	if ((count _this) > 2) then {
		_killer = _this select 2;
		_charID = _object getVariable ['CharacterID','0'];
		_objID 	= _object getVariable['ObjectID','0'];
		_objUID	= _object getVariable['ObjectUID','0'];
		_worldSpace = getPosATL _object;
		if (getPlayerUID _killer != "") then {
			_name = if (alive _killer) then { name _killer; } else { format["OBJECT %1", _killer]; };
			diag_log format["Vehicle killed: Vehicle %1 (TYPE: %2), CharacterID: %3, ObjectID: %4, ObjectUID: %5, Position: %6, Killer: %7 (UID: %8)", _object, (typeOf _object), _charID, _objID, _objUID, _worldSpace, _name, (getPlayerUID _killer)];
		} else {
			diag_log format["Vehicle killed: Vehicle %1 (TYPE: %2), CharacterID: %3, ObjectID: %4, ObjectUID: %5, Position: %6", _object, (typeOf _object), _charID, _objID, _objUID, _worldSpace];
		};
	};
};

_object_repair = {
	private["_hitpoints","_array","_hit","_selection","_key","_damage"];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;
	_array = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {_array set [count _array,[_selection,_hit]]};
		_object setHit ["_selection", _hit];
	} count _hitpoints;
	
	_key = format["CHILD:306:%1:%2:%3:",_objectID,_array,_damage];
	//diag_log ("HIVE: WRITE: "+ str(_key));
	_key call server_hiveWrite;
	_object setVariable ["needUpdate",false,true];
};
// TODO ----------------------

_object_changeCharacterID = {
	private["_vehicleLock","_skinFiles","_animationStates","_position","_worldspace","_fuel","_key"];
	_charID = _this select 0;
	_player = _this select 1;
	_inventory = [
		getWeaponCargo _object,
		getMagazineCargo _object,
		getBackpackCargo _object
	];
	_hitpoints = _object call vehicle_getHitpoints;
	_damage = damage _object;
	_hitarray = [];
	{
		_hit = [_object,_x] call object_getHit;
		_selection = getText (configFile >> "CfgVehicles" >> (typeOf _object) >> "HitPoints" >> _x >> "name");
		if (_hit > 0) then {_hitarray set [count _hitarray,[_selection,_hit]]};
		_object setHit ["_selection", _hit];
	} forEach _hitpoints;
	/****** BEGIN From _object_position ******/
	_worldspace = _object call serializeExtendedObjectData;
	
	_fuel = 0;
	if (_object isKindOf "AllVehicles") then {
		_fuel = fuel _object;
	};
	/****** END From _object_position ******/
	
	[_objectID,_uid,_player] call server_deleteObj;
	sleep 1;

	_uid = _worldspace call dayz_objectUID2;
	
	_key = format["CHILD:308:%1:%2:%3:%4:%5:%6:%7:%8:%9:",dayZ_instance, (typeOf _object), (damage _object) , _charID, _worldspace, _inventory, _hitarray, _fuel,_uid];
	_key call server_hiveWrite;

	_object setVariable ["lastUpdate",time];
	_object setVariable ["ObjectUID", _uid,true];
	_object setVariable ["CharacterID",_charID,true];

	[_object,_uid,_charID] spawn {
	   private["_object","_uid","_fuel","_damage","_array","_characterID","_done","_retry","_key","_result","_outcome","_oid","_selection","_dam","_class"];

	   _object = _this select 0;
	   _uid = _this select 1;
	   _charID = _this select 2;

	   _done = false;
		_retry = 0;
		// TODO: Needs major overhaul
		while {_retry < 10} do {
			sleep 1;
			// GET DB ID
			_key = format["CHILD:388:%1:",_uid];
			diag_log ("HIVE: WRITE: "+ str(_key));
			_result = _key call server_hiveReadWrite;
			_outcome = _result select 0;
			if (_outcome == "PASS") then {
				_oid = _result select 1;
				_object setVariable ["ObjectID", _oid, true];
				diag_log("CUSTOM: Selected " + str(_oid));
				_done = true;
				_retry = 100;

			} else {
				diag_log("CUSTOM: trying again to get id for: " + str(_uid));
				_done = false;
				_retry = _retry + 1;
			};
		};
		if(!_done) exitWith { deleteVehicle _object; diag_log("CUSTOM: failed to get id for : " + str(_uid)); };

		_object setVariable ["lastUpdate",time];
	};
};

_object setVariable ["lastUpdate",time,true];
switch (_type) do {
	case "all": {
		call _object_position;
		call _object_inventory;
		call _object_damage;
		};
	case "position": {
		if (!(_object in needUpdate_objects)) then {
			//diag_log format["DEBUG Position: Added to NeedUpdate=%1",_object];
			needUpdate_objects set [count needUpdate_objects, _object];
		};
	};
	case "gear": {
		call _object_inventory;
			};
	case "damage": {
		if ( (time - _lastUpdate) > 5) then {
			call _object_damage;
		} else {
			if (!(_object in needUpdate_objects)) then {
				//diag_log format["DEBUG Damage: Added to NeedUpdate=%1",_object];
				needUpdate_objects set [count needUpdate_objects, _object];
			};
		};
	};
	case "killed": {
		call _object_killed;
	};
	case "repair": {
		call _object_damage;
	};
	case "changeCharacterID": {
		[_this select 2,_this select 3] call _object_changeCharacterID;

	};
};
