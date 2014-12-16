class zZombie_Base;

class z_Mutant : zZombie_Base {
	model = "\origins_pack\characters\vil_alien.p3d";
	armor = 120;
	zombieLoot = "Mutated";
	displayName = "Mutated";
	class HitPoints {
		class HitHead {
			armor = 1.6;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead {
			armor = 1.6;
			name = "body";
			memoryPoint = "aimPoint";
		};
		
		class HitSpine : HitHead {
			armor = 1.6;
			name = "Spine2";
			memoryPoint = "aimPoint";
		};
		
		class HitHands : HitHead {
			armor = 1.6;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLArm : HitHands {
			name = "LeftArm";
			memoryPoint = "lelbow";
		};
		
		class HitRArm : HitHands {
			name = "RightArm";
			memoryPoint = "relbow";
		};
		
		class HitLForeArm : HitHands {
			name = "LeftForeArm";
			memoryPoint = "lwrist";
		};
		
		class HitRForeArm : HitHands {
			name = "RightForeArm";
			memoryPoint = "rwrist";
		};
		
		class HitLHand : HitHands {
			name = "LeftHand";
			memoryPoint = "LeftHandMiddle1";
		};
		
		class HitRHand : HitHands {
			name = "RightHand";
			memoryPoint = "RightHandMiddle1";
		};
		
		class HitLegs : HitHands {
			name = "legs";
			memoryPoint = "pelvis";
		};
		
		class HitLLeg : HitHands {
			name = "LeftLeg";
			memoryPoint = "lknee";
		};
		
		class HitLLegUp : HitHands {
			name = "LeftUpLeg";
			memoryPoint = "lfemur";
		};
		
		class HitRLeg : HitHands {
			name = "RightLeg";
			memoryPoint = "rknee";
		};
		
		class HitRLegUp : HitHands {
			name = "RightUpLeg";
			memoryPoint = "rfemur";
		};
	};
};

class z_Boss_zed : zZombie_Base {
	model = "\ca\characters2\civil\Doctor\Doctor";
	armor = 120;
	zombieLoot = "zBoss";
	displayName = "Doctor Ivan";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\origins_pack\characters\textures\doctorIVAN.paa"};
	class HitPoints {
		class HitHead {
			armor = 1.6;
			material = -1;
			name = "head_hit";
			passThrough = true;
			memoryPoint = "pilot";
		};
		
		class HitBody : HitHead {
			armor = 1.6;
			name = "body";
			memoryPoint = "aimPoint";
		};
		
		class HitSpine : HitHead {
			armor = 1.6;
			name = "Spine2";
			memoryPoint = "aimPoint";
		};
		
		class HitHands : HitHead {
			armor = 1.6;
			material = -1;
			name = "hands";
			passThrough = true;
		};
		
		class HitLArm : HitHands {
			name = "LeftArm";
			memoryPoint = "lelbow";
		};
		
		class HitRArm : HitHands {
			name = "RightArm";
			memoryPoint = "relbow";
		};
		
		class HitLForeArm : HitHands {
			name = "LeftForeArm";
			memoryPoint = "lwrist";
		};
		
		class HitRForeArm : HitHands {
			name = "RightForeArm";
			memoryPoint = "rwrist";
		};
		
		class HitLHand : HitHands {
			name = "LeftHand";
			memoryPoint = "LeftHandMiddle1";
		};
		
		class HitRHand : HitHands {
			name = "RightHand";
			memoryPoint = "RightHandMiddle1";
		};
		
		class HitLegs : HitHands {
			name = "legs";
			memoryPoint = "pelvis";
		};
		
		class HitLLeg : HitHands {
			name = "LeftLeg";
			memoryPoint = "lknee";
		};
		
		class HitLLegUp : HitHands {
			name = "LeftUpLeg";
			memoryPoint = "lfemur";
		};
		
		class HitRLeg : HitHands {
			name = "RightLeg";
			memoryPoint = "rknee";
		};
		
		class HitRLegUp : HitHands {
			name = "RightUpLeg";
			memoryPoint = "rfemur";
		};
	};
	
	class Wounds {
		tex[] = {};
		mat[] = {"ca\characters2\civil\doctor\data\doctor.rvmat", "ca\characters2\civil\doctor\data\W1_doctor.rvmat", "ca\characters2\civil\doctor\data\W2_doctor.rvmat", "ca\characters\heads\male\defaulthead\data\hhl.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat", "ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
	};
};

class ori_zombie1 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie1.p3d";
	zombieLoot = "generic";
};
class ori_zombie1n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie1n.p3d";
	zombieLoot = "generic";
};
class ori_zombie2 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie2.p3d";
	zombieLoot = "generic";
};
class ori_zombie2n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie2n.p3d";
	zombieLoot = "generic";
};
class ori_zombie3 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie3.p3d";
	zombieLoot = "generic";
};
class ori_zombie3n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie3n.p3d";
	zombieLoot = "generic";
};
class ori_zombie4 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie4.p3d";
	zombieLoot = "generic";
};
class ori_zombie4n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie4n.p3d";
	zombieLoot = "generic";
};
class ori_zombie5 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie5.p3d";
	zombieLoot = "generic";
};
class ori_zombie5n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie5n.p3d";
	zombieLoot = "generic";
};
class ori_zombie6 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie6.p3d";
	zombieLoot = "generic";
};
class ori_zombie6n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie6n.p3d";
	zombieLoot = "generic";
};
class ori_zombie7 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie7.p3d";
	zombieLoot = "generic";
};
class ori_zombie7n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie7n.p3d";
	zombieLoot = "generic";
};
class ori_zombie8 : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie8.p3d";
	zombieLoot = "generic";
};
class ori_zombie8n : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie8n.p3d";
	zombieLoot = "generic";
};
class ori_zombie1L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie1L.p3d";
	zombieLoot = "generic";
};
class ori_zombie1Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie1Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie2L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie2L.p3d";
	zombieLoot = "generic";
};
class ori_zombie2Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie2Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie3L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie3L.p3d";
	zombieLoot = "generic";
};
class ori_zombie3Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie3Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie4L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie4L.p3d";
	zombieLoot = "generic";
};
class ori_zombie4Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie4Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie5L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie5L.p3d";
	zombieLoot = "generic";
};
class ori_zombie5Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie5Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie6L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie6L.p3d";
	zombieLoot = "generic";
};
class ori_zombie6Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie6Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie7L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie7L.p3d";
	zombieLoot = "generic";
};
class ori_zombie7Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie7Ln.p3d";
	zombieLoot = "generic";
};
class ori_zombie8L : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie8L.p3d";
	zombieLoot = "generic";
};
class ori_zombie8Ln : zZombie_Base {
	model = "\origins_pack\characters\ori_zombie8Ln.p3d";
	zombieLoot = "generic";
};

class ori_pozarnik : zZombie_Base {
	model = "\origins_pack\characters\ori_pozarnik.p3d";
	zombieLoot = "generic";
};

class ori_vil_zombie_woman1 : zZombie_Base {
	displayName = "Zombie Babushka";
	zombieLoot = "generic";
	model = "origins_pack\characters\ori_vil_zombie_woman1.p3d";
};

class ori_vil_zombie_woman2 : zZombie_Base {
	displayName = "Zombie Babushka";
	zombieLoot = "generic";
	model = "origins_pack\characters\ori_vil_zombie_woman2.p3d";
};

class ori_vil_zombie_woman3 : zZombie_Base {
	displayName = "Zombie Babushka";
	zombieLoot = "generic";
	model = "origins_pack\characters\ori_vil_zombie_woman3.p3d";
};

class ori_vil_zombie_woman4 : zZombie_Base {
	displayName = "Zombie Babushka";
	zombieLoot = "generic";
	model = "origins_pack\characters\ori_vil_zombie_woman4.p3d";
};
