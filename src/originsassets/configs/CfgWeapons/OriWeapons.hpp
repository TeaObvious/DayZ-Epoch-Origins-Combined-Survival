class Mode_Burst;
class Mode_SemiAuto;
class Mode_FullAuto;

class LeeEnfield;
class Ori_mosin: LeeEnfield {
	picture = "\origins_pack\weapons\textures\ico_mosin38_ca.paa";
	minRange = 10;
	minRangeProbab = 0.1;
	midRange = 400;
	midRangeProbab = 0.7;
	maxRange = 500;
	maxRangeProbab = 0.05;

	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_mosin_38.p3d";
	displayName = "Mosin 38";
	magazines[] = {"Ori_mosin_clip"};
	class Library {libTextDesc = "Mosin Rifle";};
};

class MP5A5;
class Ori_PPS43 : MP5A5 {
	scope = 2;
	handAnim[] = {"OFP2_ManSkeleton", "\origins_pack\weapons\anim\vil_anim_pps.rtm"};
	model = "\origins_pack\weapons\ori_vil_pps43.p3d";
	displayName = "PPS-43";
	picture = "\origins_pack\weapons\textures\ico_pps43_ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	magazines[] = {"Ori_35Rnd_smg"};
	modes[] = {"FullAuto"};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		dispersion = 0.0045;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.6;
		maxRange = 100;
		maxRangeProbab = 0.005;
		reloadTime = 0.08;
		sound[] = {"\origins_pack\weapons\sounds\xfal.wav", 4, 1, 900};
	};
	class Library { libtextdesc = "The PPS-43 is an automatic blowback-operated firearm, and is fired from an open bolt. It is chambered in the 7.62x25mm Tokarev M1930 pistol cartridge. The PPS features a striker firing mechanism (that is located inside the bolt assembly, which contains a fixed firing pin that is supported by the weapon's recoil spring), trigger assembly (that enables fully automatic fire only) and an external, lever-type safety that prevents accidental firing. In its 'safe' position (the safety lever is engaged by sliding it forward of the trigger guard) both the bolt and trigger are disabled. The bolt also contains a spring-loaded extractor, which pulls the empty case out of the chamber and passes it to the fixed ejector. The weapon is fed from an arch-shaped 35-round box magazine that is not interchangeable with box magazines used with the PPSh-41 and the gun will not accept a drum magazine."; };
};

class ori_vil_uzi_rozkl : MP5A5 {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_uzi_rozkl";
	picture = "\origins_pack\weapons\textures\uzi.paa";
	displayName = "UZI/MP2 (Open)";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	
	magazines[] = {"30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","30Rnd_9x19_UZI"};
	modes[] = {"Single", "burst", "FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.003;
		sound[] = {"\origins_pack\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.02;
	};
	class burst : Mode_Burst {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.005;
		ffCount = 3;
		soundBurst = 0;
		burst = 3;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.01;
		sound[] = {"\origins_pack\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		reloadTime = 0.065;
		sound[] = {"\origins_pack\weapons\sounds\mp5_fire.wav", 3.16228, 1, 900};
	};
};

class ori_vil_uzi_sd : ori_vil_uzi_rozkl {
	scope = 2;
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	model = "\origins_pack\weapons\ori_vil_uzi_sd";
	picture = "\origins_pack\weapons\textures\uzisd.paa";
	displayName = "UZI/MP2 Silenced";
	magazines[] = {"30Rnd_9x19_MP5SD"};
	modes[] = {"Single", "burst", "FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.003;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.02;
	};
	class burst : Mode_Burst {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.005;
		ffCount = 3;
		soundBurst = 0;
		burst = 3;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.01;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		reloadTime = 0.065;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
	};
};

class ori_vil_uzimini : ori_vil_uzi_rozkl {
	scope = 2;
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	model = "\origins_pack\weapons\ori_vil_uzimini";
	picture = "\origins_pack\weapons\textures\uzi.paa";
	displayName = "Mini UZI";
	magazines[] = {"30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","30Rnd_9x19_UZI"};
	modes[] = {"Single", "burst", "FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_5outof10";
		dispersion = 0.003;
		sound[] = {"\origins_pack\weapons\sounds\fire.wav", 3.5, 0.95, 900};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.02;
	};
	class burst : Mode_Burst {
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_5outof10";
		dispersion = 0.005;
		ffCount = 3;
		soundBurst = 0;
		burst = 3;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.01;
		sound[] = {"\origins_pack\weapons\sounds\fire.wav", 3.5, 0.95, 900};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_5outof10";
		reloadTime = 0.065;
		sound[] = {"\origins_pack\weapons\sounds\fire.wav", 3.5, 0.95, 900};
	};
	class Library { libtextdesc = "The Uzi is a family of guns that started with a compact, boxy, and lightweight submachine gun. Smaller and newer variants are considered machine pistols. The first Uzi submachine gun was designed by Uziel Gal in the late 1940s. It was manufactured by Israel Military Industries, FN Herstal, and others."; };
};

class ori_vil_uzimini_SD : ori_vil_uzi_rozkl {
	scope = 2;
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	model = "\origins_pack\weapons\ori_vil_uzimini_sd";
	picture = "\origins_pack\weapons\textures\uzisd.paa";
	displayName = "Mini UZI Silenced";
	magazines[] = {"30Rnd_9x19_MP5SD"};
	modes[] = {"Single", "burst", "FullAuto"};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.003;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 100;
		maxRangeProbab = 0.02;
	};
	class burst : Mode_Burst {
		recoil = "recoil_single_primary_4outof10";
		recoilProne = "recoil_single_primary_4outof10";
		dispersion = 0.005;
		ffCount = 3;
		soundBurst = 0;
		burst = 3;
		minRange = 10;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 40;
		maxRangeProbab = 0.01;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		reloadTime = 0.065;
		sound[] = {"\ca\Weapons\Data\Sound\MP5_silenced_SS", 0.01, 1, 300};
	};
	
	class Library { libtextdesc = "UZI Mini submachinegun silenced"; };
};

class Ori_Sa48SMG : MP5A5 {
	scope = 2;
	handAnim[] = {"OFP2_ManSkeleton", "\origins_pack\weapons\anim\vil_anim_sa25.rtm"};
	model = "\origins_pack\weapons\ori_vil_sa25";
	displayName = "Sa Vz. 48";
	picture = "\origins_pack\weapons\icons\ori_vil_sa25_ca.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	magazines[] = {"30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","30Rnd_9x19_UZI"};
	modes[] = {"FullAuto"};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_auto_primary_4outof10";
		recoilProne = "recoil_auto_primary_prone_4outof10";
		dispersion = 0.0045;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 50;
		midRangeProbab = 0.6;
		maxRange = 100;
		maxRangeProbab = 0.005;
		reloadTime = 0.08;
		sound[] = {"\origins_pack\weapons\sounds\xfal.wav", 4, 1, 900};
	};
	class Library { libtextdesc = "Sa submachinegun, different variant"; };
};

class AK_74;
class Ori_SKS : AK_74 {
	scope = 2;
	value = 0;
	model = "\origins_pack\weapons\ori_vil_sks";
	displayName = "SKS";
	picture = "\origins_pack\weapons\textures\ui_sks.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	optics = 1;
	drySound[] = {"\ca\Weapons\Data\Sound\AK47_dry_v1", 0.000316228, 1, 10};
	reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\AK47_fill_v3", 0.00562341, 1, 20};
	modes[] = {"Single"};
	magazines[] = {"Ori_10Rnd_SKS"};
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M24.rtm"};
	selectionFireAnim = "zasleh";
	nameSound = "rifle";
	class Single : Mode_SemiAuto {
		sound[] = {"\origins_pack\weapons\sounds\sks.wav", 10, 0.95, 1000};
		//begin1[] = {"Ca\Sounds_E\Weapons_E\Enfield\Enfield_4",1.77828,1,1500};
		//soundBegin[] = {"begin1",1};
		reloadTime = 0.1;
		recoil = "recoil_single_primary_5outof10";
		recoilProne = "recoil_single_primary_prone_5outof10";
		dispersion = 0.0025;
		aiRateOfFire = 5;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 250;
		midRangeProbab = 0.5;
		maxRange = 400;
		maxRangeProbab = 0.04;
	};
	class Library { libtextdesc = "The SKS is a Russian 7.62x39mm caliber semi-automatic carbine, designed in 1945 by Sergei Gavrilovich Simonov. SKS is an acronym for Samozaryadniy Karabin sistemi Simonova, 1945 (Self-loading Carbine, Simonov's system, 1945), or SKS 45. The SKS carbine was rather quickly phased out of first-line service, replaced by the AK-47, but remained in second-line service for decades afterwards."; };
};

class Makarov;
class Ori_Tt33 : Makarov {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_tetetka";
	displayName = "TT";
	dispersion = 0.005;
	magazines[] = {"Ori_8Rnd_TT"};
	class Library { libtextdesc = "The TT-30 (7,62 mm) is a semi-automatic pistol developed by Fedor Tokarev as a service pistol for the Soviet military to replace the Nagant M1895 revolvers in use since tsarist times."; };
};

class Ori_APS : Makarov {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_aps";
	magazines[] = {"Ori_20Rnd_APS"};
	displayName = "APS";
	modes[] = {"Single", "FullAuto"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_pistol_1outof3";
		recoilProne = "recoil_single_pistol_prone_1outof3";
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.015;
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v1_A", 1, 1, 900};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		reloadTime = 0.09;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.1;
		maxRange = 40;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v1_A", 1, 1, 900};
	};
	class Library { libtextdesc = "The Stechkin was intended as a sidearm for artillery soldiers and tank crews. The Stechkin APS was eventually replaced by the AKS-74U compact assault rifle."; };
};

class Ori_APS_SD : Ori_APS {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_apsSD.p3d";
	magazines[] = {"Ori_20Rnd_APS_SD"};
	displayName = "APSSD";
	modes[] = {"Single", "FullAuto"};
	class Single : Mode_SemiAuto {
		recoil = "recoil_single_pistol_1outof3";
		recoilProne = "recoil_single_pistol_prone_1outof3";
		dispersion = 0.0025;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.015;
		sound[] = {"\ca\Weapons\Data\Sound\Glock_Silenced_final", 0.0251189, 1, 300};
	};
	class FullAuto : Mode_FullAuto {
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		reloadTime = 0.09;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.1;
		maxRange = 30;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Weapons\Data\Sound\Glock_Silenced_final", 0.0251189, 1, 300};
	};
};

class M9;
class Ori_cz75 : M9 {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_cz_75";
	dispersion = 0.002;
	displayName = "CZ-75";
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.5;
	maxRange = 30;
	maxRangeProbab = 0.01;
	class Library { libtextdesc = "CZ-75"; };
};

class Ori_cz83 : Makarov {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_cz_83";
	magazines[] = {"Ori_12Rnd_maka"};
	dispersion = 0.0025;
	displayName = "CZ-83";
	minRange = 2;
	minRangeProbab = 0.1;
	midRange = 25;
	midRangeProbab = 0.5;
	maxRange = 50;
	maxRangeProbab = 0.01;
	class Library { libtextdesc = "CZ-83"; };
};

class M1014;
class Ori_mossberg : M1014 {
	scope = 2;
	model = "\origins_pack\weapons\ori_vil_mossberg";
	displayName = "Mossberg";
	class Library { libtextdesc = "Mossberg"; };
};

class ak_47_m;
class ori_ak_camo : ak_47_m {
	model = "\origins_pack\weapons\vil_akm_str";
	displayName = "AK Customized";
	picture = "\origins_pack\weapons\ico_akcamo_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\Mk48.rtm"};
};
class ori_shotgun2 : M1014
{
	model = "\origins_pack\weapons\VIL_shotgun";
	displayName = "Shotgun ZX76";
	picture = "\origins_pack\weapons\ico_shot_CA.paa";
	handAnim[] = {"OFP2_ManSkeleton", "\origins_pack\weapons\vil_anim_shotgun.rtm"};
};
class MP5SD;
class ori_autocrossbow : MP5SD {
	scope = 2;
	model = "\origins_pack\weapons\ori_crossbowauto";
	handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
	picture = "\origins_pack\weapons\ico_cross_CA.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	optics = 1;
	dexterity = 1.64;
	
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	displayName = "VH20";
	drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.000316228, 1};
	magazines[] = {"ori_crossbow_mag"};
	modes[] = {"Single"};

	class Single : Mode_SemiAuto {
		begin1[] = {"dayz_weapons\sounds\crossbow_fire_0", 0.177828, 1, 15};
		begin2[] = {"dayz_weapons\sounds\crossbow_fire_1", 0.177828, 1, 15};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadTime = 0.2;
		recoil = "recoil_single_primary_1outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.002;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 25;
		midRangeProbab = 0.4;
		maxRange = 50;
		maxRangeProbab = 0.01;
		autofire=0;
	};

	class Library {
		libTextDesc = "Automatic Crossbow";
	};
};
class M9SD;
class ori_autocrossbowH : M9SD {
	scope = 2;
	model = "\origins_pack\weapons\ori_crossbowautohand";
	picture = "\origins_pack\weapons\ico_crossh_CA.paa";
	UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	optics = 1;
	dexterity = 1.64;
	opticsZoomMin = 0.27;
	opticsZoomMax = 0.42;
	distanceZoomMin = 50;
	distanceZoomMax = 50;
	displayName = "MiniVH";
	drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1", 0.000316228, 1};
	magazines[] = {"ori_hcrossbow_mag","ori_hcrossbow_mage","ori_hcrossbow_magt"};
	modes[] = {"Single"};
	class Single : Mode_SemiAuto {
		begin1[] = {"dayz_weapons\sounds\crossbow_fire_0", 0.177828, 1, 15};
		begin2[] = {"dayz_weapons\sounds\crossbow_fire_1", 0.177828, 1, 15};
		soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
		reloadTime = 0.2;
		recoil = "recoil_single_primary_1outof10";
		recoilProne = "recoil_single_primary_prone_1outof10";
		dispersion = 0.002;
		minRange = 2;
		minRangeProbab = 0.1;
		midRange = 20;
		midRangeProbab = 0.4;
		maxRange = 30;
		maxRangeProbab = 0.01;
		autofire=0;
	};
	class Library {
		libTextDesc = "Automatic Crossbow";
	};
};