private ["_lastdeploy","_hours","_minutes","_date","_key","_result","_outcome"];
_lastdeploy = 0;
_lastlongdeploy = 0;
_oldLocalSeconds = 0;
_startHours = 9;
globalRealtime = parseNumber("terminator" callExtension "gettime");
publicVariable "globalRealtime";

_key = "CHILD:307:";
_result = _key call server_hiveReadWrite;
_outcome = _result select 0;
if(_outcome == "PASS") then {
	_date = _result select 1;
	_startHours = _date select 3;
	_date set [4,0];

	if(dayz_fullMoonNights) then {
		_date = [2013,8,3,_startHours,0];
	};
	
	setDate _date;

	diag_log (format["TIME SYNC: Global Time set to %1 - MIN-FPS: %2 - AVG-FPS: %3",  _date, diag_fpsmin, diag_fps]);
	PVDZE_plr_SetDate = _date;
	publicVariable "PVDZE_plr_SetDate";

	PVDZE_StartDate = _date;
	publicVariable "PVDZE_StartDate";
};

while {true} do {
	globalRealtime = parseNumber("terminator" callExtension "gettime");
	
	if(!isNil "restartTime") then {
		_date = PVDZE_StartDate;
		
		_newLocalSeconds = 86400 / restartTime * globalRealtime;
		
		if (DZE_FastTimeSkip) then {
			_skipSeconds = _newLocalSeconds - _oldLocalSeconds;
			_oldLocalSeconds = _newLocalSeconds;
			skipTime(_skipSeconds/3600);
		};

		_newTime = _newLocalSeconds / 60;
		//diag_log ("HOUR: " + str(floor(_startHours + (_newTime/60))));
		_date set [3,floor(_startHours + (_newTime/60)) % 24];
		_date set [4,floor(_newTime % 60)];

		PVDZE_plr_SetDate = _date;
	};

	if ((globalRealtime - _lastdeploy) >= 30) then {
		publicVariable "globalRealtime";
		_lastdeploy = _lastdeploy + 30;
	};
	
	if ((globalRealtime - _lastlongdeploy) >= 300) then {
		diag_log (format["TIME SYNC: Global Time set to %1 - MIN-FPS: %2 - AVG-FPS: %3",  PVDZE_plr_SetDate, diag_fpsmin, diag_fps]);
		setDate PVDZE_plr_SetDate;
		publicVariable "PVDZE_plr_SetDate";
		_lastlongdeploy = _lastlongdeploy + 300;
	};

	uiSleep 10;
};
