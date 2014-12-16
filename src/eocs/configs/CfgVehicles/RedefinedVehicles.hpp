class Mi17_base;
class Mi17_DZ : Mi17_base { 
  displayname = "Mi-17"; 
  displaynameshort = "Mi17_DZ"; 
  scope = 2; 
  side = 2; 
  crew = ""; 
  typicalCargo[] = {}; 
  hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "Camo4"}; 
  hiddenSelectionsTextures[] = {"\ca\air\data\mi8_body_g_vsr_co.paa", "ca\air\data\mi8_det_g_co.paa", "ca\air\data\clear_empty.paa", "ca\air\data\mi8_decals_ca.paa"};
  commanderCanSee = "2+16+32"; 
  gunnerCanSee = "2+16+32"; 
  driverCanSee = "2+16+32"; 
  transportMaxWeapons = 10; 
  transportMaxMagazines = 50; 
  transportmaxbackpacks = 10; 
};

class An2_Base_EP1;
class AN2_DZ : An2_Base_EP1 { 
  displayname = "AN2 Cargo Plane"; 
  displaynameshort = "AN2_DZ"; 
  scope = 2; 
  side = 2; 
  crew = ""; 
  typicalCargo[] = {}; 
  weapons[] = {}; 
  magazines[] = {}; 
  gunnerHasFlares = 0; 
  hiddenSelections[] = {"Camo1", "Camo2", "Camo3"}; 
  hiddenSelectionsTextures[] = {"ca\Air_E\An2\Data\an2_1_CO", "ca\Air_E\An2\Data\an2_2_CO", "ca\Air_E\An2\Data\an2_wings_CO"}; 
  commanderCanSee = "2+16+32"; 
  gunnerCanSee = "2+16+32"; 
  driverCanSee = "2+16+32"; 
  transportMaxWeapons = 10; 
  transportMaxMagazines = 80; 
  transportmaxbackpacks = 15; 
};	

class ArmoredSUV_PMC_DZE;
class TESTCAR : ArmoredSUV_PMC_DZE { 
  displayName = "SUV Camo (Armored)"; 
  HiddenSelections[] = {"camo"}; 
  hiddenSelectionsTextures[] = {"\z\addons\dayz_epoch\textures\camo10.paa"}; 
};