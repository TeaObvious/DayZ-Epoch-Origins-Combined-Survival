if (isServer) then {
	DZEOC_allowedObjects = ["ori_safe", "vil_watchtower", "krepost", 
							"Uroven1DrevenaBudka", "Uroven2KladaDomek", "Uroven3DrevenyDomek", 
							"Uroven1VelkaBudka", "Uroven2MalyDomek", "Uroven3VelkyDomek", 
							"malaGaraz", "velkaGaraz", 
							"elektro", "elektro2", "elektro3", 
							"elektro_hero", "elektro2_hero", "elektro3_hero", 
							"BCrane", "CementMixer", "TentStorageR"];
	dayz_allowedObjects = dayz_allowedObjects + DZEOC_allowedObjects;
};
dayz_updateObjects = dayz_updateObjects + ["Land_A_tent"];