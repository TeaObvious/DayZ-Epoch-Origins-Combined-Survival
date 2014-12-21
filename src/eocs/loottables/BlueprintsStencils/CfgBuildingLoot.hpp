#include "\z\addons\eocs\loottables\CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_policeman","z_Boss_zed","ori_zombie1","ori_zombie1n","ori_zombie2","ori_zombie2n","ori_zombie3","ori_zombie3n","ori_zombie4","ori_zombie4n","ori_zombie5","ori_zombie5n","ori_zombie6","ori_zombie6n","ori_zombie7","ori_zombie7n","ori_zombie8","ori_zombie8n","ori_zombie1L","ori_zombie1Ln","ori_zombie2L","ori_zombie2Ln","ori_zombie3L","ori_zombie3Ln","ori_zombie4L","ori_zombie4Ln","ori_zombie5L","ori_zombie5Ln","ori_zombie6L","ori_zombie6Ln","ori_zombie7L","ori_zombie7Ln","ori_zombie8L","ori_zombie8Ln","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_doctor","z_teacher","z_hunter","z_villager1","z_villager2","z_villager3","z_priest","z_soldier","z_soldier_pilot","z_soldier_heavy","ori_pozarnik"};
		lootChance = 0;
		lootPos[] = {};

		lootPosSmall[] = {};
		lootPosZombie[] = {};
		
		itemType[] = {};

		itemChance[] = {};
		lootTypeSmall[] = {};
		itemChanceSmall[] = {};

		hangPos[] = {};
		vehPos[] = {};
	};
	
	class Castle: Default {
		lootChance = 0.2;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			//{"ItemMatchbox","weapon",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMap","generic",0.01},
			{"ItemCompass","weapon",0.01},
			{"ItemFlashlight","weapon",0.01},
		//weapons
			{"WeaponHolder_ItemHatchet","object",0.01},
		//special
			{"WeaponHolder_ItemTent","object",0.01},
			//{"WeaponHolder_DomeTentStorage","object",0.01},
		//mags special
			{"PartWoodPile","magazine",0.04},
		//bags
			//{"DZ_Patrol_Pack_EP1","object",0.01},
		//Multiple spawns
			//{"","Residential",0.60},
			{"","generic",0.40}
		};
	};
	class Residential: Default {
		zombieChance = 0.5;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3","ori_zombie1","ori_zombie2","ori_zombie3","ori_zombie4","ori_zombie5","ori_zombie6","ori_zombie7","ori_zombie8","ori_zombie1L","ori_zombie2L","ori_zombie3L","ori_zombie4L","ori_zombie5L","ori_zombie6L","ori_zombie7L","ori_zombie8L","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie1Ln","ori_zombie2n","ori_zombie3n","ori_zombie3Ln","ori_zombie7Ln","ori_zombie8n"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.04},
			{"ItemCompass","generic",0.03},
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.04},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.32},
			{"backpacks","backpacks",0.04},
			{"tents","tents",0.01},
			{"","military",0.02},
			{"","trash",0.13},
			{"Binocular","weapon",0.02},
			{"PartPlywoodPack","magazine",0.02},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.03},
			{"pistols","cfglootweapon",0.04},
			{"shotgunsingleshot","cfglootweapon", 0.04},
			{"ItemBattery","magazine",0.02},
			{"ItemPin","magazine",0.02},
			{ "","bptlvl1",0.05},
			{"ItemRestTent","magazine",0.02},
			{"","spraycan",0.01}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01},
			{ "ItemSodaRbull","magazine",0.01},
			{ "ItemSodaOrangeSherbet","magazine",0.02},
			{ "ItemWatch","weapon",0.05},
			{ "ItemCompass","weapon",0.04},
			{ "ItemMap","weapon",0.03},
			{ "pistols","cfglootweapon",0.12},
			{ "ItemFlashlight","weapon",0.02},
			{ "ItemKnife","weapon",0.04},
			{ "ItemMatchbox_DZE","weapon",0.03},
			{ "","generic",0.38},
			{ "","military",0.04},
			{ "","trash",0.17},
			{ "Binocular","weapon",0.02},
			{ "clothes","single",0.01},
			{ "specialclothes","single",0.01}
		};
	};
	class Office: Default {
		maxRoaming = 5;
		zombieClass[] = {"z_suit1","z_suit2","ori_zombie2Ln","ori_zombie5n","ori_zombie3n","ori_zombie3Ln"};
		zombieChance = 0.5;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.04},
			{"ItemCompass","generic",0.03},
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.04},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.31},
			{"backpacks","backpacks",0.04},
			{"tents","tents",0.01},
			{"","military",0.02},
			{"","trash",0.12},
			{"Binocular","weapon",0.02},
			{"PartPlywoodPack","magazine",0.02},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.03},
			{"ItemBriefcaseEmpty","magazine",0.01},
			{ "shotgunsingleshot", "cfglootweapon", 0.05},
			{"ItemBattery","magazine",0.02},
			{"ItemPin","magazine",0.02},
			{ "","bptlvl1",0.05}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.02},
			{ "ItemWatch","weapon",0.05},
			{ "ItemCompass","weapon",0.04},
			{ "ItemMap","weapon",0.03},
			{ "pistols","cfglootweapon",0.15},
			{ "ItemFlashlight","weapon",0.02},
			{ "ItemKnife","weapon",0.05},
			{ "ItemMatchbox_DZE","weapon",0.03},
			{ "","generic",0.31},			
			{ "","military",0.04},
			{ "","trash",0.03},
			{ "Binocular","weapon",0.02},
			{ "clothes","single",0.16},
			{ "specialclothes","single",0.02},
			{ "ItemDocument","magazine",0.01}
		};
	};
	class Industrial: Default {
		zombieChance = 0.8;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","ori_zombie7n","ori_zombie8Ln","ori_pozarnik"};
		maxRoaming = 4;
		lootChance = 0.9;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.03},
			{"ItemFuelBarrelEmpty","magazine",0.03},
			{"","generic",0.27},
			{"","trash",0.10},
			{"","military",0.04},
			{"PartGeneric","magazine",0.04},
			{"PartWheel","magazine",0.06},
			{"PartFueltank","magazine",0.04},
			{"PartEngine","magazine",0.03},
			{"PartGlass","magazine",0.05},
			{"PartVRotor","magazine",0.02},
			{"ItemJerrycan","magazine",0.04},
			{"WeaponHolder_ItemHatchet_DZE","object",0.07},
			{"ItemKnife","military",0.07},
			{"ItemToolbox","weapon",0.03},
			{"ItemWire","magazine",0.06},
			{"ItemTankTrap","magazine",0.06},
			{"ItemKeyKit","weapon",0.02},
			{"CinderBlocks","magazine",0.05},
			{"MortarBucket","magazine",0.03},
			{"ItemJerrycanB","magazine",0.03},
			{"ItemCementBag","magazine",0.05},
			{"PartScrap","magazine",0.05},
			{"ItemCrane","magazine",0.02},
			{"ItemCeMix","magazine",0.03},
			{"","bptgarage",0.03},
			{"","allstencils",0.01},
			{"","spraycan",0.02}
		};
		lootTypeSmall[] = {
			{"","generic",0.5},
			{"","trash",0.18},
			{"","military",0.14},
			{"ItemKnife","weapon",0.07},
			{"ItemKeyKit","weapon",0.02},
			{"ItemPickaxe","weapon",0.03},
			{"ItemSaw","weapon",0.03},
			{"ItemHammer","weapon",0.03},
			{"ItemPliers","weapon",0.03}
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.5;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3","ori_zombie7n","ori_zombie8Ln","ori_pozarnik"};
		maxRoaming = 2;
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.01},
			{"fuel_pump_kit","magazine",0.01},
			{"","generic",0.18},
			{"","trash",0.10},
			{"","military",0.04},
			{"PartGeneric","magazine",0.04},
			{"PartWheel","magazine",0.05},
			{"PartFueltank","magazine",0.02},
			{"PartEngine","magazine",0.02},
			{"PartGlass","magazine",0.04},
			{"PartVRotor","magazine",0.01},
			{"ItemJerrycan","magazine",0.04},
			{"WeaponHolder_ItemHatchet_DZE","object",0.07},
			{"ItemKnife","military",0.07},
			{"ItemToolbox","weapon",0.06},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.04},
			{"ItemKeyKit","weapon",0.01},
			{"ItemJerrycanB","magazine",0.04}
		};
		lootTypeSmall[] = {
			{ "","generic",0.5 },
			{ "","trash",0.28 },
			{ "","military",0.14 },
			{ "ItemKnife","weapon",0.07 },
			{ "ItemKeyKit","weapon",0.01 }
		};
	};
	class Farm: Default {
		zombieChance = 0.4;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie4Ln","ori_zombie5Ln"};
		lootChance = 0.7;
		lootPos[] = {};
		lootType[] = {
			{"ItemJerrycan","magazine",0.05},
			{"","generic",0.3},
			{"","trash",0.11},
			{"PartPlankPack","magazine",0.06},
			{"WeaponHolder_ItemHatchet_DZE","object",0.05},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"WeaponHolder_ItemMachete","object",0.03},
			{"ItemFishingPole","weapon",0.02},
			{"ItemLightBulb","magazine",0.02},
			{"ItemSledgeHandle","magazine",0.02},
			{ "farmweapons", "cfglootweapon", 0.15},
			{"ItemJerrycanB","magazine",0.04},
			{"ItemCementBag","magazine",0.03}
		};
		lootTypeSmall[] = {
			{ "","generic", 0.79},
			{ "","trash",0.14 },
			{ "","military",0.05},
			{ "ItemLightBulb","magazine",0.01},
			{ "ItemSledgeHead","magazine",0.01},
			{"ItemPickaxe","weapon",0.03},
			{"ItemSaw","weapon",0.03},
			{"ItemHammer","weapon",0.03},
			{"ItemPliers","weapon",0.03}
		};
	};
	class Supermarket: Default {
		lootChance = 0.7;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4"};
		lootType[] = {
			{"ItemSodaMdew","magazine",0.01},
			{"ItemSodaRbull","magazine",0.01},
			{"ItemSodaOrangeSherbet","magazine",0.03},
			{"ItemWatch","generic",0.07},
			{"ItemCompass","generic",0.02},
			{"ItemMap","weapon",0.04},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.02},
			{"ItemMatchbox_DZE","generic",0.04},
			{"","generic",0.04},
			{"backpacks","backpacks",0.07},
			{"tents","tents",0.01},
			{"","food",0.3},
			{"","trash",0.13},
			{"Binocular","weapon",0.05},
			{"PartPlywoodPack","magazine",0.02},
			{ "pistols", "cfglootweapon", 0.04},
			{ "shotgunsingleshot", "cfglootweapon", 0.04},
			{"ItemCementBag","magazine",0.03},
			{"ItemBattery","magazine",0.04},
			{"ItemPin","magazine",0.04},
			{"ItemRestTent","magazine",0.02}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.03 },
			{ "ItemWatch","weapon",0.07 },
			{ "ItemCompass","weapon",0.03 },
			{ "ItemMap","weapon",0.05 },
			{ "pistols","cfglootweapon",0.08 },
			{ "ItemFlashlight","weapon",0.01 },
			{ "ItemKnife","weapon",0.02 },
			{ "ItemMatchbox_DZE","weapon",0.04 },
			{ "","generic",0.21 },
			{ "","food",0.24 },
			{ "","trash",0.16 },
			{ "Binocular","weapon",0.02 },
			{ "ItemMixOil", "magazine",0.02},
			{"ItemBattery","magazine",0.01}
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.8;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot","z_soldier","z_soldier_heavy","ori_zombie6n"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.10 },
			{ "submachinegun", "cfglootweapon", 0.04 },
			{ "sniperrifles", "cfglootweapon", 0.07 },
			{ "machineguns", "cfglootweapon", 0.06 },
			{"","military",0.3},
			{"","medical",0.18},
			{"MAAWS","weapon",0.02},
			{"MedBox0","object",0.05},
			{"NVGoggles","weapon",0.01},
			{"AmmoBoxSmall_556","object",0.03},
			{"AmmoBoxSmall_762","object",0.03},
			{"militaryclothes","militaryclothes",0.05},
			{"militaryammo","militaryammo",0.06},
			{"","bptwt",0.01},
			{"","bptlvl3",0.02}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.8;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot","z_soldier","z_soldier_heavy","ori_zombie6n"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.10 },
			{ "submachinegun", "cfglootweapon", 0.04 },
			{ "sniperrifles", "cfglootweapon", 0.07 },
			{ "machineguns", "cfglootweapon", 0.06 },
			{ "", "military", 0.3 },
			{ "", "medical", 0.18 },
			{ "MAAWS", "weapon", 0.02 },
			{ "MedBox0", "object", 0.05 },
			{ "NVGoggles", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.03 },
			{ "AmmoBoxSmall_762", "object", 0.03 },
			{ "militaryclothes", "militaryclothes", 0.05 },
			{ "militaryammo", "militaryammo", 0.06 },
			{"","bptwt",0.01},
			{"","bptlvl3",0.02}
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor","ori_vil_zombie_woman1","ori_vil_zombie_woman2","ori_vil_zombie_woman3","ori_vil_zombie_woman4","ori_zombie1n","ori_zombie4n","ori_zombie1n","ori_zombie4n"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"","trash",0.1},
			{"","hospital",0.7},
			{"MedBox0","object",0.2}
		};
		lootTypeSmall[] = {
			{ "","trash",0.1 },
			{ "","hospital",0.9 }
		};
	};
	class Military: Default {
		zombieChance = 0.5;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","ori_zombie6Ln"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.04},
			{ "assaultrifles","cfglootweapon",0.13},
			{ "sniperrifles","cfglootweapon",0.04},
			{ "shotgunsingleshot","cfglootweapon",0.06},
			{ "submachinegun","cfglootweapon",0.07},
			{"Binocular","weapon",0.03},
			{"ItemFlashlightRed","military",0.04},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","military",0.02},
			{"militarybackpacks","militarybackpacks",0.05},
			{"","medical",0.03},
			{"","generic",0.1},
			{"","military",0.3},
			{"ItemEtool","weapon",0.02},
			{"ItemSandbag","magazine",0.02},
			{"machineguns","cfglootweapon",0.03}
		};
		lootTypeSmall[] = {
			{"pistols","cfglootweapon",0.14},
			{"Binocular","weapon", 0.05},
			{"ItemFlashlightRed","weapon",0.03},
			{"ItemKnife", "weapon",0.04},
			{"ItemGPS", "weapon", 0.02},
			{"", "medical",0.12},
			{"", "generic",0.22},
			{"", "military",0.35},
			{"ItemEtool","weapon",0.03}
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.5;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3","ori_zombie6Ln"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.02 },
			{ "assaultrifles", "cfglootweapon", 0.05 },
			{ "PartGeneric", "magazine", 0.03 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.05 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.05 },
			{"PartGeneric","magazine",0.03},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.03},
			{"ItemKnife","military",0.04},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"militarybackpacks","militarybackpacks",0.03},
			{"","medical",0.05},
			{"","generic",0.35},
			{"","military",0.07},
			{"ItemEtool","weapon",0.03},
			{"ItemSandbag","magazine",0.02},
			{"ItemFuelBarrelEmpty","magazine",0.03},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.14 },
			{ "Binocular", "weapon", 0.05 },
			{ "ItemFlashlightRed", "weapon", 0.03 },
			{ "ItemKnife", "weapon", 0.04 },
			{ "ItemGPS", "weapon", 0.02 },
			{ "", "medical", 0.12 },
			{ "", "generic", 0.22 },
			{ "", "military", 0.35 },
			{ "ItemEtool", "weapon", 0.03 },
			{"ItemPickaxe","weapon",0.03},
			{"ItemSaw","weapon",0.03},
			{"ItemHammer","weapon",0.03},
			{"ItemPliers","weapon",0.03}
		};
	};
	class IndustrialMilitary: Default {
		zombieChance = 0.5;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3","ori_zombie6Ln"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.02 },
			{ "assaultrifles", "cfglootweapon", 0.05 },
			{ "PartGeneric", "magazine", 0.03 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.05 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.05 },
			{"PartGeneric","magazine",0.03},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.03},
			{"ItemKnife","military",0.04},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"PartFueltank","magazine",0.03},
			{"PartEngine","magazine",0.04},
			{"PartGlass","magazine",0.05},
			{"militarybackpacks","militarybackpacks",0.03},
			{"","medical",0.05},
			{"","generic",0.25},
			{"","military",0.07},
			{"ItemEtool","weapon",0.03},
			
			{"ItemSandbag","magazine",0.02},

			{"ItemFuelBarrelEmpty","magazine",0.03},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.14 },
			{ "Binocular", "weapon", 0.05 },
			{ "ItemFlashlightRed", "weapon", 0.03 },
			{ "ItemKnife", "weapon", 0.04 },
			{ "ItemGPS", "weapon", 0.02 },
			{ "", "medical", 0.12 },
			{ "", "generic", 0.22 },
			{ "", "military", 0.35 },
			{ "ItemEtool", "weapon", 0.03 }
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.5;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy","ori_zombie6Ln"};
		lootChance = 0.5;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.1 },
			{ "machineguns", "cfglootweapon", 0.04 },
			{ "pistols", "cfglootweapon", 0.08 },
			{ "sniperrifles", "cfglootweapon", 0.03 },
			{ "militaryshotguns", "cfglootweapon", 0.05 },
			{ "submachinegun", "cfglootweapon", 0.06 },
			{"AmmoBoxSmall_556","object",0.01},
			{"AmmoBoxSmall_762","object",0.02},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.02},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","military",0.01},
			{"Binocular_Vector","military",0.01},
			{"militarybackpacks","militarybackpacks",0.04},
			{"","medical",0.08},
			{"","generic",0.3},
			{"","military",0.01},
			{"machinegunammo","machinegunammo",0.05},
			{"militaryclothes","militaryclothes",0.05},
			{"NVGoggles","weapon",0.01},
			{"","bptwt",0.01},
			{"","bptlvl2",0.02}
		};
		lootTypeSmall[] = {
			{ "pistols","cfglootweapon",0.10 },
			{ "AmmoBoxSmall_556","object",0.02 },
			{ "AmmoBoxSmall_762","object",0.02 },
			{ "Binocular","weapon",0.02 },
			{ "ItemFlashlightRed","military",0.01 },
			{ "ItemKnife","military",0.02 },
			{ "ItemGPS","weapon",0.02 },
			{ "ItemMap","weapon",0.01 },
			{ "Binocular_Vector","weapon",0.03},
			{ "","medical",0.08},
			{ "","generic",0.15},
			{ "","military",0.33 },
			//{ "5Rnd_86x70_L115A1","magazine",0.03},
			//{ "10Rnd_127x99_m107","magazine",0.02},
			{ "machinegunammoexpl","single",0.02 },
			{ "militaryclothes","single",0.05 },
			{ "NVGoggles","weapon",0.04 },
			{ "100Rnd_762x54_PK","magazine",0.02 }
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.03},
			{ "farmweapons", "cfglootweapon", 0.03 },
			{"","military",0.38},
			{"WeaponHolder_ItemMachete","object",0.02},
			{"","hunter",0.5}
		};
		lootTypeSmall[] =	{
			{"ItemMap","weapon",0.02},
			{"ItemFlashlight","weapon",0.02},
			{"ItemKnife","weapon",0.02},
			{"ItemMatchbox_DZE","weapon",0.04},
			{"","military",0.4},
			{"","hunter",0.5}
		};
	};
	class DynamicDebris: Default
	{
		lootChance = 0.7;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.6;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootType[] = {
			{ "ItemWatch", "generic", 0.19 },
			{ "ItemCompass", "generic", 0.01 },
			{ "ItemMap", "weapon", 0.06 },
			{ "Makarov", "weapon", 0.02 },
			{ "Colt1911", "weapon", 0.02 },
			{ "ItemFlashlight", "generic", 0.06 },
			{ "ItemKnife", "generic", 0.06 },
			{ "ItemMatchbox_DZE", "generic", 0.06 },
			{ "ItemToolbox", "weapon", 0.02 },
			{ "", "generic", 0.17 },
			{ "", "food", 0.06 },
			{ "PartGeneric", "magazine", 0.07 },
			{ "PartWheel", "magazine", 0.06 },
			{ "PartFueltank", "magazine", 0.03 },
			{ "PartEngine", "magazine", 0.01 },
			{ "PartGlass", "magazine", 0.08 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.03 }
		};
	};
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.8;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","ori_zombie6Ln"};
		lootType[] = {
			{ "ItemEtool", "weapon", 0.05 },
			{ "ItemSandbag", "magazine", 0.1 },
			{ "", "military", 0.08 },
			{ "ItemWatch", "generic", 0.1 },
			{ "ItemCompass", "generic", 0.02 },
			{ "ItemMap", "weapon", 0.05 },
			{ "MakarovSD", "weapon", 0.01 },
			{ "Colt1911", "weapon", 0.02 },
			{ "ItemFlashlight", "generic", 0.01 },
			{ "ItemKnife", "generic", 0.05 },
			{ "ItemMatchbox_DZE", "generic", 0.05 },
			{ "ItemToolbox", "weapon", 0.02 },
			{ "", "generic", 0.15 },
			{ "", "food", 0.05 },
			{ "PartGeneric", "magazine", 0.06 },
			{ "PartWheel", "magazine", 0.05 },
			{ "PartFueltank", "magazine", 0.03 },
			{ "PartEngine", "magazine", 0.02 },
			{ "PartGlass", "magazine", 0.03 },
			{ "PartVRotor", "magazine", 0.02 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.03 }
		};
	};
	class SupplyDrop: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "PartPlywoodPack", "magazine", 0.1 },
			{ "PartPlankPack", "magazine", 0.2 },
			{ "CinderBlocks", "magazine", 0.1 },
			{ "MortarBucket", "magazine", 0.1 },
			{ "bulk_PartGeneric", "magazine", 0.2 },
			{ "bulk_ItemSandbag", "magazine", 0.1 },
			{ "bulk_ItemTankTrap", "magazine", 0.1 },
			{ "ItemSledge", "weapon", 0.1 }
		};
	};
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy","z_policeman","ori_zombie6Ln"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "M16A2", "weapon", 0.03 },
			{ "M16A2GL", "weapon", 0.01 },
			{ "M249_EP1_DZ", "weapon", 0.01 },
			{ "M9SD", "weapon", 0.02 },
			{ "Pecheneg_DZ", "weapon", 0.02 },
			{ "PK_DZ", "weapon", 0.01 },
			{ "AK_74", "weapon", 0.02 },
			{ "M4A1_Aim", "weapon", 0.01 },
			{ "AKS_74_kobra", "weapon", 0.01 },
			{ "AKS_74_U", "weapon", 0.02 },
			{ "AK_47_M", "weapon", 0.02 },
			{ "M24", "weapon", 0.01 },
			{ "SVD_CAMO", "weapon", 0.01 },
			{ "M1014", "weapon", 0.02 },
			//{ "BAF_LRR_scoped", "weapon", 0.01 },
			{ "M4SPR", "weapon", 0.01 },
			{ "M4A1", "weapon", 0.01 },
			{ "M14_EP1", "weapon", 0.02 },
			{ "UZI_EP1", "weapon", 0.03 },
			{ "Remington870_lamp", "weapon", 0.01 },
			{ "glock17_EP1", "weapon", 0.02 },
			{ "M240_DZ", "weapon", 0.02 },
			{ "M4A1_AIM_SD_camo", "weapon", 0.01 },
			{ "M16A4_ACG", "weapon", 0.01 },
			{ "M4A1_HWS_GL_camo", "weapon", 0.01 },
			{ "Mk_48_DZ", "weapon", 0.01 },
			{ "M4A3_CCO_EP1", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.03 },
			{ "AmmoBoxSmall_762", "object", 0.03 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "military", 0.02 },
			{ "ItemKnife", "military", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "ItemMap", "military", 0.01 },
			{ "Binocular_Vector", "military", 0.01 },
			{ "DZ_ALICE_Pack_EP1", "object", 0.03 },
			{ "DZ_TK_Assault_Pack_EP1", "object", 0.02 },
			{ "DZ_British_ACU", "object", 0.02 },
			{ "DZ_CivilBackpack_EP1", "object", 0.02 },
			{ "DZ_Backpack_EP1", "object", 0.01 },
			{ "DZ_LargeGunBag_EP1", "object", 0.01 },
			{ "", "medical", 0.05 },
			{ "", "generic", 0.05 },
			{ "", "military", 0.13 },
			//{ "PipeBomb", "magazine", 0.01 },
			{ "Sa58V_RCO_EP1", "weapon", 0.01 },
			{ "Sa58V_CCO_EP1", "weapon", 0.01 },
			{ "G36_C_SD_camo", "weapon", 0.01 },
			{ "M40A3", "weapon", 0.01 },
			{ "100Rnd_762x54_PK", "magazine", 0.01 },
			{ "", "militaryclothes", 0.05 },
			{ "WeaponHolder_ItemMachete", "object", 0.02 },
			{ "SCAR_H_LNG_Sniper_SD", "weapon", 0.01 },
			{ "2000Rnd_762x51_M134", "magazine", 0.01 },
			//{ "KSVK_DZE", "weapon", 0.01 },
			{ "m240_scoped_EP1_DZE", "weapon", 0.01 }
		};
	};

	#include "\z\addons\eocs\loottables\CfgBuildingPos.hpp"
};
