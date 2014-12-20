"PVDZE_veh_Skin" addPublicVariableEventHandler {
	private["_player","_object","_skinNumber","_skinFiles","_objectID","_fuel","_position","_worldspace","_key","_texture","_vehicleInit","_appendVehicleInit","_PUID","_objectName","_text","_PID"];

	_player = ((_this select 1) select 0);
	_object = ((_this select 1) select 1);
	_skinNumber = ((_this select 1) select 2);

	if (!isNull _object) then {
		_objectName = getText(configFile >> "cfgVehicles" >> (typeOf _object) >> "displayName");
		_skinFiles = [_object,_skinNumber] call getSkinFiles;

		if ((count _skinFiles) > 0) then {
			_object setVariable["skinFiles",_skinFiles,true];
			_object setVariable["skinNumber",_skinNumber,true];

			_objectID = _object getVariable ["ObjectID","0"];
			_fuel = 0;
			_fuel = fuel _object;

			_position = getPosATL _object;
			_animationStates = _object getVariable ["animationStates",[]];
			_vehicleLock = "UNLOCKED";
			if (locked _object) then {
				_vehicleLock = "LOCKED";
			};
			
			_worldspace = [
				round(direction _object),
				_position,
				[
					_vehicleLock,
					_skinFiles,
					_animationStates
				]
			];
			
			if (_objectID != "0") then {
				_key = format["CHILD:305:%1:%2:%3:",_objectID,_worldspace,_fuel];
				_key call server_hiveWrite;
			};
			
			_vehicleInit = "";
			{ 
				_texture = format ["\origins_pack\vehicles\skins\%1", _x];
				[nil,nil,rSETOBJECTTEXTURE,_object,_forEachIndex,_texture] call RE;
				//_object setObjectTexture [_forEachIndex, _texture];

				_appendVehicleInit = format ["this setObjectTexture [%1, ""\origins_pack\vehicles\skins\%2""]; ", _forEachIndex, _x];
				_vehicleInit = _vehicleInit + _appendVehicleInit;
			} forEach _skinFiles;
			_object setVehicleInit _vehicleInit;

			_PUID = (getPlayerUID _player);
			diag_log format ["VEHICLE PAINT: Player %1 has painted a %2!",_PUID,_objectName];
		} else {
			_text = format ["NO Skin with Number %1 found for %2!", _skinNumber, _objectName];
			[nil,_player,"loc",rTitleText,_text,"PLAIN",10] call RE;
		};
	};
};