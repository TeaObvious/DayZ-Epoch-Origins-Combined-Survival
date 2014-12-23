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

if(isNil "DZEOCS_AdminBuild") then {
	DZEOCS_AdminBuild = [];
};

if(isNil "DZE_noRotate") then {
	DZE_noRotate = ["ItemVault","ItemWoodStairs","ItemLockbox","ItemWoodStairsSupport","ItemWoodLadder","30m_plot_kit","workbench_kit"]; //Objects that cannot be rotated. Ex: DZE_noRotate = ["VaultStorageLocked"]
};

if(isNil "DZEOCS_SnapSys") then {
	DZEOCS_SnapSys = true;
};

if(isNil "DayZ_UseSteamID") then {
	DayZ_UseSteamID = true;
};

dayz_updateObjects = dayz_updateObjects + ["Land_A_tent"];
