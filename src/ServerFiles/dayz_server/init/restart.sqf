private ["_warntimes","_warntime","_text"];
restartTime = 4; // hours
_warnTimes = [230, 120, 60, 30, 15, 10, 5, 3, 2, 1]; // minutes

if (!isServer) exitWith {};

restartTime = restartTime * 60 * 60; // convert to seconds
publicVariable "restartTime";

waituntil {!isnil "globalRealtime"};

diag_log(format ["DEBUG RESTART MESSAGE || Inizializing || Servertime: %1 || Missiontime: %2 || Localtime: %3", servertime, time, globalRealtime]);
{ 
	_warntime = restartTime - (_x * 60); // get time without remaining time until restart
	waituntil {globalRealtime > _warntime};

	// print warning with remaining _x minutes
	diag_log(format ["DEBUG RESTART MESSAGE || Servertime: %1 || Missiontime: %2 || Localtime: %3 || Restart in %4", servertime, time, globalRealtime, _x]);
	_text = format ["SERVER RESTART IN %1 MINUTES", _x];
    [nil,nil,rTitleText,_text, "PLAIN",10] call RE;
} forEach _warntimes;

// last warning 30 seconds before restart
waituntil {globalRealtime > (restartTime-30)};
diag_log(format ["DEBUG RESTART MESSAGE || Servertime: %1 || Missiontime: %2 || Localtime: %3 || near Restart", servertime, time]);
_text = format ["Logout NOW!", _x];
[nil,nil,rTitleText,_text, "PLAIN",10] call RE;

// exit the ArmA Server when the time has come
waituntil {globalRealtime > restartTime};
"terminator" callExtension "terminate";

// should never reach this point
_text = format ["meh... Restart Failed Oo", _x];
[nil,nil,rTitleText,_text, "PLAIN",10] call RE;

// hint format["Connected on Server since Serverstart : %1", serverTime - time]
//_subTextColour = "#FF0000";
//_mainTextColour = "#44a0A0";
//_text = parseText format ["<t align='center' color='%1' shadow='2' size='1.75'>Server Reboot</t><br/><t align='center' color='%2'>---------------------------------</t><br/><t color='%2' size='1.0'>In %3 Minutes</t>", _mainTextColour, _subTextColour, _x];
//[nil,nil,rHINT,_text] call RE;
