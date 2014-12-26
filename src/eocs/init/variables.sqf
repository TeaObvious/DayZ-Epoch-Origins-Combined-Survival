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

if(isNil "DZEOCS_WalkingZ") then {
	DZEOCS_WalkingZ = false;
};

if(isNil "DZEOCS_DoctorIvanSpawnChance") then {
	DZEOCS_DoctorIvanSpawnChance = 0.05;
};

if(isNil "DZEOCS_SnapSys") then {
	DZEOCS_SnapSys = true;
};

if(isNil "DZEOCS_UseMissionSnapPoints") then {
	DZEOCS_UseMissionSnapPoints = false;
};

if(isNil "DZEOCS_AdminBuild") then {
	DZEOCS_AdminBuild = ["00000000000000000"];
};

if(isNil "DZE_noRotate") then {
	DZE_noRotate = ["ItemVault","ItemWoodStairs","ItemLockbox","ItemWoodStairsSupport","ItemWoodLadder","30m_plot_kit","workbench_kit"]; //Objects that cannot be rotated. Ex: DZE_noRotate = ["VaultStorageLocked"]
};

if(isNil "DZE_curPitch") then {
	DZE_curPitch = 45; //Starting value for pitch change valid values are 1, 5 and 45 E.G, use DZE_curPitch = 5; in your init.sqf to hardset it to 5 degrees at a time
};

if(isNil "DayZ_UseSteamID") then {
	DayZ_UseSteamID = true;
};

if(isNil "DZE_APlotforLife") then {
	DZE_APlotforLife = true;
};
