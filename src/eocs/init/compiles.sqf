local_lockUnlock = compile preprocessFileLineNumbers "\z\addons\eocs\compile\local_lockUnlock.sqf";
object_hasMaterial = compile preprocessFileLineNumbers "\z\addons\eocs\compile\object_hasMaterial.sqf";
object_removeItems = compile preprocessFileLineNumbers "\z\addons\eocs\compile\object_removeItems.sqf";
FNC_GetPlayerUID = {
	private ["_object","_version","_PID"];
	_object = _this select 0;
	_version = productVersion select 3;
	if (DayZ_UseSteamID) then {
		_PID = GetPlayerUID _object;
	} else {
		if (_version >= 125548) then {
			_PID = call (compile "GetPlayerUIDOld _object");
		} else {
			_PID = GetPlayerUID _object;
			diag_log format["Your game version, %1, is less than the required for the old UID system; using Steam ID system instead. Update to 1.63.125548 (or latest steam beta)", _version];
		};
	};
	_PID;
};
	
if (!isDedicated) then {
	player_doActionLoop = 		compile preprocessFileLineNumbers "\z\addons\eocs\compile\player_doActionLoop.sqf";
	player_pack_tempobject = 	compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_pack_tempobject.sqf";
	player_build_tempobject = 	compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_build_tempobject.sqf";
	player_build_blueprint = 	compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_build_blueprint.sqf";
	player_upgrade_building = 	compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_upgrade_building.sqf";
	player_LockUnlock = 		compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_LockUnlock.sqf";
	player_craftItem = 			compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_craftItem.sqf";
	if(DZEOCS_SnapSys) then {
		player_build =			compile preprocessFileLineNumbers "\z\addons\eocs\external\snap_build\player_build.sqf";
		snap_build = 			compile preprocessFileLineNumbers "\z\addons\eocs\external\snap_build\snap_build.sqf";
	};
};
FNC_GetPlayerUID = {
	private ["_object","_version","_PID"];
	_object = _this select 0;
	_version = productVersion select 3;
	if (DayZ_UseSteamID) then {
		_PID = GetPlayerUID _object;
	} else {
		if (_version >= 125548) then {
			_PID = call (compile "GetPlayerUIDOld _object");
		} else {
			_PID = GetPlayerUID _object;
			diag_log format["Your game version, %1, is less than the required for the old UID system; using Steam ID system instead. Update to 1.63.125548 (or latest steam beta)", _version];
		};
	};
	_PID;
};
