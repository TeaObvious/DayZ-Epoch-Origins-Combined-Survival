private ["_waterlevel","_DeployedBy","_isWatered","_nextStage","_upgradablePlantObjects","_allNearestPlants","_upgradablePlants","tmp"];

if(isNil "DZE_PlantingUpgradeWaterlevel") then {
	DZE_PlantingUpgradeWaterlevel = 5;
};

if(isNil "DZE_PlantingUpgradeWaterlevel") then {
	DZE_PlantingUpgradeDistance = 5;
};

_waterlevel = _this select 0;

closeDialog 0;

_upgradablePlantObjects = ([DZE_PlantingPumpkinObjects] call StripLastElementFromArray) + ([DZE_PlantingHempObjects] call StripLastElementFromArray); 
_allNearestPlants = nearestObjects [player, _upgradablePlantObjects, DZE_PlantingUpgradeDistance];
_upgradablePlants = [];
{
	_DeployedBy = _x getVariable ["DeployedBy","unset"];
	_isWatered = _x getVariable ["isWatered","unset"];
	if (alive _x && _DeployedBy == "unset" && _isWatered == "unset") then {
			_upgradablePlants set [(count _upgradablePlants),_x];
	};
} foreach _allNearestPlants;

cutText [format["Going to water %2 of %3 plants with %1oz Waterbottle", _waterlevel, floor (_waterlevel / DZE_PlantingUpgradeWaterlevel), count _upgradablePlants], "PLAIN DOWN"];

{
	sleep 2;
	if (_waterlevel >= DZE_PlantingUpgradeWaterlevel) then {
		_nextStage = [_x, DZE_PlantingPumpkinObjects + DZE_PlantingHempObjects] call GetNextElementFromArray;
		if (_nextStage != "undef") then {
			_tmp = [_waterlevel] call return_itemwaterbottle;
			player removeMagazine _tmp;
			[_x,_nextStage] execVM 'custom\planting\upgrade_plantclass.sqf';
			
			_waterlevel = _waterlevel - DZE_PlantingUpgradeWaterlevel;
			_tmp = [_waterlevel] call return_itemwaterbottle;
			player addMagazine _tmp;
			
			cutText [format["%1 will grow to %2 after the server restart", typeof _x, _nextStage], "PLAIN DOWN"];
		};
		
	};
} foreach _upgradablePlants;

