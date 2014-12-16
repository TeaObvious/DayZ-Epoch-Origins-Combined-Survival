class USMC_Soldier_Base;
class Soldier_Crew_PMC;
class BAF_Soldier_SniperH_W;
class GUE_Soldier_Base;
class SurvivorW2_DZ;

class SectorB_def : USMC_Soldier_Base {
	scope = 1;
	side = 0;
	accuracy = 0.2;
	camouflage = 0.1;
	armor = 6;
	backpack = "";
	displayName = "Sector B Guard";
	model = "\origins_pack\salvation\salvation_guard";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_co.paa"};
};
class SectorB_defA : SectorB_def {
	displayName = "Sector B Army";
	armor = 6;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_green_co.paa"};
};
class SectorB_defN : SectorB_def {
	displayName = "Sector B Navy";
	armor = 5;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_navy_co.paa"};
};
class SectorB_defS : SectorB_def {
	displayName = "Sector B Scientist";
	armor = 3;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_scientist_co.paa"};
};
class SectorB_defM : SectorB_def {
	displayName = "Sector B Medic";
	armor = 3;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_medic_co.paa"};
};
class SectorB_defGM : SectorB_def {
	displayName = "Sector B Paramedic";
	armor = 3;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_medic_green_co.paa"};
};
class SectorB_defGSp : SectorB_def {
	displayName = "Sector B Specnaz";
	armor = 6;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_special_green_co.paa"};
};
class SectorB_defSp : SectorB_def {
	displayName = "Sector B Special Op";
	armor = 6;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_special_co.paa"};
};
class SectorB_defGen : SectorB_def {
	displayName = "Sector B General";
	armor = 6;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_general_co.paa"};
};
class SectorB_defGenG : SectorB_def {
	displayName = "Sector B General";
	armor = 6;
	hiddenSelectionsTextures[] = {"\origins_pack\salvation\guard_general_green_co.paa"};
};


class SectorB_gov : Soldier_Crew_PMC {
	scope = 1;
	side = 0;
	accuracy = 0.2;
	camouflage = 0.1;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\ori_king.p3d";
	armor = 10;
	backpack = "";
	displayName = "Mayor George";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
};
class SectorZ_def : USMC_Soldier_Base {
	scope = 1;
	side = 0;
	accuracy = 0.2;
	camouflage = 0.1;
	identityTypes[] = {"Head_CIV", "Civ_Glasses", "Language_CZ"};
	armor = 10;
	backpack = "";
	displayName = "CDC Scientist";
	model = "\ca\characters2\civil\Doctor\Doctor";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\civil\doctor\data\doctor_co.paa"};
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat", "ca\characters2\civil\doctor\data\W1_doctor.rvmat", "ca\characters2\civil\doctor\data\W2_doctor.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};






//ghillie
class Sniper1_DZ: BAF_Soldier_SniperH_W {
	displayName = "Sniper 1";
	side = 1;
	weapons[] = {"Throw","Put"};
	backpack = "";
	magazines[] = {};
	respawnWeapons[] = {"Throw","Put"};
	respawnMagazines[] = {};
	weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
	canHideBodies = 1;
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\ca\characters_W_baf\data\Ghillie_Overall2_co.paa"};
};
class Sniper1_Snow: Sniper1_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_snow_top_ca.paa"};
	displayName = "Sniper 2";
};
class Sniper1_City: Sniper1_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_urban_top_ca.paa"};
	displayName = "Sniper 3";
};
class Sniper1_Wood: Sniper1_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_forest_top_ca.paa"};
	displayName = "Sniper 4";
};
//bandits ghillie
class Bandit_S_DZ : GUE_Soldier_Base {   //GUE_Soldier_Sniper
	displayName = "Bandit (ghillie) 1";
	side = 1;
	scope = 2;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	model = "\ca\characters2\Ghillie_Top";
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = 1;
	
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\ca\characters2\data\ghillie_top_co.paa"};
};
class BanditS_Snow : Bandit_S_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_snow_top_ca.paa"};
	displayName = "Bandit (ghillie) 2";
};
class BanditS_City : Bandit_S_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_urban_top_ca.paa"};
	displayName = "Bandit (ghillie) 3";
};
class BanditS_Wood : Bandit_S_DZ {
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_forest_top_ca.paa"};
	displayName = "Bandit (ghillie) 4";
};



class Hero_black : GUE_Soldier_Base {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE"};
	model = "\origins_pack\characters\vil_bdu_cap.p3d";
	displayName = "Heroe (Black)";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = 1;
};

class LastKing : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\ori_king.p3d";
	displayName = "KiNGHuNT";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = 1;
};

class vil_stskin1 : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_stskin1.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};
class vil_stskin2 : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_stskin2.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};
class vil_stskin4 : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_stskin4.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};
class vil_stskin5 : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_stskin5.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};
class vil_stskin6 : Soldier_Crew_PMC {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_stskin6.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};









class vil_woman_cop : SurvivorW2_DZ {
	vehicleClass = "Men";
	scope = 2;
	identityTypes[] = {"Head_GUE","Civ_Glasses", "Civ_SunGlasses"};
	model = "\origins_pack\characters\vil_woman_cop.p3d";
	displayName = "Clan Outfit";
	side = 1;
	canCarryBackPack = 1;
	accuracy = 0.02;
	camouflage = 2;
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {};
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1  +  4  + 12*  256  + 2* 4096  +  2  + 8* 16  + 12*131072;
	canHideBodies = 1;
};

// Bandit women
class ori_vil_woman_bandit_1 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_1.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_bandit_2 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_2.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_bandit_3 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_3.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_bandit_4 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_4.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_bandit_5 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_5.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_bandit_6 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_6.p3d";
	displayName = "Bandit girl";
};

// Heroe women
class ori_vil_woman_hero_1 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_1.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_hero_2 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_2.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_hero_3 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_3.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_hero_4 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_4.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_hero_5 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_5.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_hero_6 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_heroe_6.p3d";
	displayName = "Hero girl";
};

// Black girls
class vil_bdu_cap_woman : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\vil_bdu_cap_woman.p3d";
	displayName = "Hero girl (Black)";
};
class vil_bdu_hood_woman : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\vil_bdu_hood_woman.p3d";
	displayName = "Bandit girl (Black)";
};

// Survivor girls
class ori_vil_woman_survivor_1 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_1.p3d";
	displayName = "Surviver girl";
};
class ori_vil_woman_survivor_2 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_2.p3d";
	displayName = "Surviver girl";
};
class ori_vil_woman_survivor_3 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_3.p3d";
	displayName = "Surviver girl";
};
class ori_vil_woman_survivor_4 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_4.p3d";
	displayName = "Surviver girl";
};
class ori_vil_woman_survivor_5 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_5.p3d";
	displayName = "Surviver girl";
};
class ori_vil_woman_survivor_6 : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_6.p3d";
	displayName = "Surviver girl";
};

// Ghilly suit women
class ori_vil_bandit_ghilie : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_bandit_ghilie.p3d";
	displayName = "Ghilly Survivour Girl 1";
	hiddenSelections[] = {"Camo01","Camo02"};
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\ghillie_green_top_ca.paa","\origins_pack\characters\textures\bandit_girl_var1_1_camo_co.paa"};
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_green_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\bandit_girl_var1_1_camo_co.paa""];";
	};
};
class ori_bghilie_Snow : ori_vil_bandit_ghilie {
	displayName = "Ghilly Survivour Girl 2";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_snow_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_snow_bottom_co.paa""];";
	};
};
class ori_bghilie_City : ori_vil_bandit_ghilie {
	displayName = "Ghilly Survivour Girl 3";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_urban_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_urban_bottom_co.paa""];";
	};
};
class ori_bghilie_Wood : ori_vil_bandit_ghilie {
	displayName = "Ghilly Survivour Girl 4";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_forest_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_forest_bottom_co.paa""];";
	};
};

class ori_vil_hero_ghilie : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_ghilie.p3d";
	displayName = "Ghilly Survivour Girl 1h";
	hiddenSelections[] = {"camo01","camo02"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\ghillie_green_top_ca.paa","origins_pack\characters\textures\bandit_girl_var1_1_camo_co.paa"};
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_green_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_green_pants_co.paa""];";
	};
};
class ori_hghilie_Snow : ori_vil_hero_ghilie {
	displayName = "Ghilly Survivour Girl 2h";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_snow_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_snow_pants_co.paa""];";
	};
};
class ori_hghilie_City : ori_vil_hero_ghilie {
	displayName = "Ghilly Survivour Girl 3h";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_urban_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_urban_pants_co.paa""];";
	};
};
class ori_hghilie_Wood : ori_vil_hero_ghilie {
	displayName = "Ghilly Survivour Girl 4h";
	class EventHandlers
	{
		init = "(_this select 0) setObjectTexture [0,""origins_pack\characters\textures\ghillie_forest_top_ca.paa""]; (_this select 0) setObjectTexture [1,""origins_pack\characters\textures\ghillie_bandit_forest_pants_co.paa""];";
	};
};

class ori_vil_woman_ghilie : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_ghilie.p3d";
	displayName = "Ghilly Survivour Girl";
	hiddenSelections[] = {"camo01","camo02"};
	hiddenSelectionsTextures[] = {"ca\characters2\data\ghillie_top_co.paa","origins_pack\characters\textures\bandit_girl_var1_1_camo_co.paa"};
};

//new
class ori_vil_woman_vjt_1 : USMC_Soldier_Base {

	displayName = "Hero girl";
	side = TWest;
	weapons[] = {"Throw", "Put"};
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_usmc_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	magazines[] = {};
	accuracy = 0.02;
	camouflage = 2;
	respawnWeapons[] = {"Throw", "Put"};
	respawnMagazines[] = {};
	weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
	canHideBodies = true;
	identityTypes[] = {"Language_W_EN_EP1", "Woman"};
	languages[] = {"EN"};
	scope = 2;
	canCarryBackPack = 1;
	
	class TalkTopics {
		core = "Core_E";
		core_en = "Core_Full_E";
	};
	genericNames = "EnglishWomen";
	
	class SpeechVariants {
		class Default {
			speechSingular[] = {"veh_woman"};
			speechPlural[] = {"veh_women"};
		};
		
		class EN : Default {};
		
		class CZ {
			speechSingular[] = {"veh_woman_CZ"};
			speechPlural[] = {"veh_women_CZ"};
		};
		
		class CZ_Akuzativ {
			speechSingular[] = {"veh_woman_CZ4P"};
			speechPlural[] = {"veh_women_CZ4P"};
		};
		
		class RU {
			speechSingular[] = {"veh_woman_RU"};
			speechPlural[] = {"veh_women_RU"};
		};
	};
	TextPlural = "Women";
	TextSingular = "Woman";
	nameSound = "veh_woman";
	
	class HitDamage {
		class Group0 {
			hitSounds[] = {{{"ca\sounds\Characters\Noises\Damage\banz-hit-01", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-02", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-03", 0.177828, 1, 120}, 0.2}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-04", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-05", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-06", 0.177828, 1, 120}, 0.1}, {{"ca\sounds\Characters\Noises\Damage\banz-hit-07", 0.177828, 1, 120}, 0.1}};
			damageSounds[] = {{"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-01", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-02", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-03", 0.0562341, 1, 120, 0.25, 5, 6, 10}}, {"body", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-04", 0.0562341, 1, 120, 0.25, 5, 7.5, 10}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"hands", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm", 0.0562341, 1, 120, 0.5, 0, 2.5, 5}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}, {"legs", {"ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg", 0.0562341, 1, 120, 0.5, 0, 1, 2}}};
		};
	};
	
	class SoundBreath {
		breath0[] = {{{{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03", 0.0562341, 1, 8}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04", 0.125893, 1, 8}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03", 0.0562341, 1, 15}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04", 0.125893, 1, 15}, 0.25}}, {{{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03", 0.1, 1, 20}, 0.25}, {{"\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04", 0.1, 1, 20}, 0.25}}};
	};
	
	class SoundGear {
		primary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 15}}, {"sprint", {"", 0.00562341, 1, 20}}};
		secondary[] = {{"walk", {"", 0.00177828, 1, 10}}, {"run", {"", 0.00316228, 1, 10}}, {"sprint", {"", 0.00562341, 1, 10}}};
	};
	
	class SoundEquipment {
		soldier[] = {{"walk", {"", 0.00177828, 1, 13}}, {"run", {"", 0.00316228, 1, 20}}, {"sprint", {"", 0.00398107, 1, 25}}};
		civilian[] = {{"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07", 0.177828, 1, 8}}, {"walk", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08", 0.177828, 1, 8}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07", 0.1, 1, 15}}, {"run", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08", 0.1, 1, 15}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07", 0.0562341, 1, 20}}, {"sprint", {"\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08", 0.0562341, 1, 20}}};
	};
};
class ori_vil_woman_vjt_2 : ori_vil_woman_vjt_1 {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_rus_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_vjt_3 : ori_vil_woman_vjt_1 {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_pol_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_vjt_4 : ori_vil_woman_vjt_1 {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_usa_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_vjt_5 : ori_vil_woman_vjt_1 {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_grey_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	displayName = "Hero girl";
};
class ori_vil_woman_vjt_6 : ori_vil_woman_vjt_1 {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	hiddenSelections[] = {"Camo01"};
	hiddenSelectionsTextures[] = {"origins_pack\characters\textures\v_rusdig_co.paa"};
	model = "\origins_pack\characters\ori_vil_woman_vjt.p3d";
	displayName = "Hero girl";
};

class ori_vil_woman_bandit_cr : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_bandit_cr.p3d";
	displayName = "Bandit girl";
};
class ori_vil_woman_survivor_cr : SurvivorW2_DZ {
	side = TWest;
	accuracy = 0.02;
	camouflage = 2;
	model = "\origins_pack\characters\ori_vil_woman_survivor_cr.p3d";
	displayName = "Hero girl";
};