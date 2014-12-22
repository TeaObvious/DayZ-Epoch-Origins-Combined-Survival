if (isServer) then {
	DZEOC_allowedObjects = ["ori_safe", "vil_watchtower", "Stronghold_DZEOCS", "Kings_Pyramid_DZEOCS",
				"Bandit_Level_1_DZEOCS", "Bandit_Level_2_DZEOCS", "Bandit_Level_3_DZEOCS", 
				"Hero_Level_1_DZEOCS", "Hero_Level_2_DZEOCS", "Hero_Level_3_DZEOCS", 
				"SmallGarage_DZEOCS", "BigGarage_DZEOCS", 
				"Bandit_Nest_Level_1_DZEOCS", "Bandit_Nest_Level_2_DZEOCS", "Bandit_Nest_Level_3_DZEOCS", 
				"Hero_Nest_Level_1_DZEOCS", "Hero_Nest_Level_2_DZEOCS", "Hero_Nest_Level_3_DZEOCS", 
				"BCrane", "CementMixer", "TentStorageR"];
	dayz_allowedObjects = dayz_allowedObjects + DZEOC_allowedObjects;
};
dayz_updateObjects = dayz_updateObjects + ["Land_A_tent"];