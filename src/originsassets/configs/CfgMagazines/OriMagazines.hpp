class 10x_303;
class Ori_mosin_clip: 10x_303 {
	scope = 2;
	displayName = "Mosin clip";
	count = 5;
};

class Ori_35Rnd_smg : CA_Magazine {
	scope = 2;
	displayName = "35 rounds PPS mag";
	model = "\origins_pack\weapons\ammo_30Rnd_9x19_MP5.p3d";
	initSpeed = 425;
	count = 35;
	ammo = "Ori_PARA_Ball";
	picture = "\origins_pack\weapons\textures\m_fnfal.paa";
};

class Ori_10Rnd_SKS : CA_Magazine {
	scope = 2;
	displayName = "SKS rounds";
	ammo = "Ori_762x43_Ball";
	count = 10;
	initSpeed = 735;
	picture = "\origins_pack\weapons\textures\m_sks.paa";
};
class 8Rnd_9x18_Makarov;
class Ori_12Rnd_maka : 8Rnd_9x18_Makarov {
	scope = 2;
	displayName = "CZ83 magazine";
	type = 16;
	count = 12;
	initSpeed = 340;
	picture = "\origins_pack\weapons\textures\m_pistol.paa";
};
class Ori_8Rnd_TT : 8Rnd_9x18_Makarov {
	scope = 2;
	displayName = "TT magazine";
	type = 16;
	ammo = "Ori_PARA_Ball";
	count = 8;
	initSpeed = 420;
	picture = "\origins_pack\weapons\textures\m_pistol.paa";
};
class 15Rnd_9x19_M9;
class Ori_20Rnd_APS : 15Rnd_9x19_M9 {
	scope = 2;
	displayName = "APS magazine";
	initSpeed = 350;
	type = 16;
	count = 20;
	picture = "\origins_pack\weapons\textures\m_pistol.paa";
	descriptionShort = "APS magazine";
};

class Ori_20Rnd_APS_SD : 15Rnd_9x19_M9 {
	scope = 2;
	initSpeed = 320;
	displayName = "APS SD magazine";
	type = 16;
	count = 20;
	ammo = "B_9x18_SD";
	picture = "\origins_pack\weapons\textures\m_pistol.paa";
	descriptionShort = "APS SD magazine";
};

class ori_crossbow_mag : CA_Magazine {
	scope = 2;
	displayName = "Steel Bolts VH20";
	ammo = "ori_crossbowbolt";
	count = 20;
	initSpeed = 300;
	tracersEvery = 1;
	model = "\origins_pack\weapons\crossbowcylinder";
	picture = "\origins_pack\weapons\icons\bolts_ca.paa";
};

class ori_hcrossbow_mag : CA_Magazine {
	scope = 2;
	type=16;
	displayName = "Steel Bolts MiniVH";
	ammo = "ori_hcrossbowbolt";
	count = 8;
	initSpeed = 255;
	tracersEvery = 1;
	model = "\origins_pack\weapons\crossbowcylinderh";
	picture = "\origins_pack\weapons\textures\boltsH_ca.paa";
};

class ori_hcrossbow_mage : CA_Magazine {
	scope = 2;
	type=16;
	displayName = "Epi Bolts MiniVH";
	ammo = "ori_crossbowbolt_epi";
	count = 8;
	initSpeed = 255;
	tracersEvery = 1;
	model = "\origins_pack\weapons\crossbowcylinderh";
	picture = "\origins_pack\weapons\textures\boltsE_ca.paa";
};

class ori_hcrossbow_magt : CA_Magazine {
	scope = 2;
	type=16;
	displayName = "Tranquilizer Bolts MiniVH";
	ammo = "ori_crossbowbolt_stu";
	count = 8;
	initSpeed = 235;
	tracersEvery = 1;
	model = "\origins_pack\weapons\crossbowcylinderh";
	picture = "\origins_pack\weapons\textures\boltsT_ca.paa";
};
