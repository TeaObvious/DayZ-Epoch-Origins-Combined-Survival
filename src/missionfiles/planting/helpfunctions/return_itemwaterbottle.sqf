private ["_waterlevel","_bottle"];

_waterlevel = _this select 0;
_bottle = "ItemWaterbottle";

if (_waterlevel == 10) then {
	if ("ItemWaterbottle" in magazines player) then {
		_bottle = "ItemWaterbottle";
	} else {
		_bottle = "ItemWaterbottleBoiled";
	};
} else {
	if (_waterlevel > 0) then {
		_bottle = format["ItemWaterbottle%1oz", _waterlevel];
	} else {
		_bottle = "ItemWaterbottleUnfilled";
	};
};

_bottle;