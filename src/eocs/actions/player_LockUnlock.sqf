private["_object","_animationStates","_combination","_ok"];
_object = _this select 0;
_animationStates = _this select 1;

_combination = _object getVariable ["CharacterID","0"];


if (_combination != dayz_combination) then {
  dayz_combination = "";
  _ok = createdialog "SafeKeyPad";
  waitUntil{!dialog};
};

if (_combination == dayz_combination) then {
	if (_object isKindOf "Stronghold_DZEOCS" || _object isKindOf "SmallGarage_DZEOCS" || _object isKindOf "BigGarage_DZEOCS") then {
		if (_object isKindOf "Stronghold_DZEOCS") then {
			[nil, _object, rSAY, "z_krepostv_0", 20] call RE;
		} else {
			[nil, _object, rSAY, "origins_garage_door", 20] call RE;
		};
	} else {
		[nil, _object, rSAY, "origins_door_creak", 20] call RE;  
	};
	{ _object animate _x; } forEach _animationStates;
};