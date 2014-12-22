local_lockUnlock = compile preprocessFileLineNumbers "\z\addons\eocs\compile\local_lockUnlock.sqf";
object_hasMaterial = compile preprocessFileLineNumbers "\z\addons\eocs\compile\object_hasMaterial.sqf";
object_removeItems = compile preprocessFileLineNumbers "\z\addons\eocs\compile\object_removeItems.sqf";

if (!isDedicated) then {
	player_doActionLoop = compile preprocessFileLineNumbers "\z\addons\eocs\compile\player_doActionLoop.sqf";
	player_pack_tempobject = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_pack_tempobject.sqf";
	player_build_tempobject = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_build_tempobject.sqf";
	player_build_blueprint = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_build_blueprint.sqf";
	player_upgrade_building = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_upgrade_building.sqf";
	player_LockUnlock = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_LockUnlock.sqf";
	player_craftItem = compile preprocessFileLineNumbers "\z\addons\eocs\actions\player_craftItem.sqf";
};
