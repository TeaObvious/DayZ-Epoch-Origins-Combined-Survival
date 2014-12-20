private ["_object","_skinNumberFound","_skinFiles"];

_object = (_this select 0);
_skinNumber = (_this select 1);
_skinFiles = [];

if (!isNull _object) then {

	if (_object isKindOf "UAZ_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["UAZ\uaz_black_co.paa"]; };
				case 2: { _skinFiles = ["UAZ\uaz_blue_co.paa"]; };
				case 3: { _skinFiles = ["UAZ\uaz_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["UAZ\uaz_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["UAZ\uaz_pink_co.paa"]; };
				case 6: { _skinFiles = ["UAZ\uaz_red_co.paa"]; };
				case 7: { _skinFiles = ["UAZ\uaz_yellow_co.paa"]; };
				default { _skinFiles = ["UAZ\uaz_black_co.paa"]; };
		};
	};

	if (_object isKindOf "AH6_Base_EP1") then {
		switch (_skinNumber) do {
			case 1: { _skinFiles = ["AH6X_Ori\AH6X_Ori_black_co.paa"]; };
			case 2: { _skinFiles = ["AH6X_Ori\AH6X_Ori_blue_co.paa"]; };
			case 3: { _skinFiles = ["AH6X_Ori\AH6X_Ori_camo_u_co.paa"]; };
			case 4: { _skinFiles = ["AH6X_Ori\AH6X_Ori_camo_w_co.paa"]; };
			case 5: { _skinFiles = ["AH6X_Ori\AH6X_Ori_pink_co.paa"]; };
			case 6: { _skinFiles = ["AH6X_Ori\AH6X_Ori_red_co.paa"]; };
			case 7: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special1_co.paa"]; };
			case 8: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special2_co.paa"]; };
			case 9: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special3_co.paa"]; };
			case 10: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special4_co.paa"]; };
			case 11: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special5_co.paa"]; };
			case 12: { _skinFiles = ["AH6X_Ori\AH6X_Ori_special6_co.paa"]; };
			case 13: { _skinFiles = ["AH6X_Ori\AH6X_Ori_yellow_co.paa"]; };
			default { _skinFiles = ["AH6X_Ori\AH6X_Ori_special5_co.paa"]; };
		};
	};

	if (_object isKindOf "An2_Base_EP1") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["AN2_Ori\AN2_Ori_1_black_co.paa","AN2_Ori\AN2_Ori_2_black_co.paa","AN2_Ori\AN2_Ori_3_black_co.paa"]; };
				case 2: { _skinFiles = ["AN2_Ori\AN2_Ori_1_blue_co.paa","AN2_Ori\AN2_Ori_2_blue_co.paa","AN2_Ori\AN2_Ori_3_blue_co.paa"]; };
				case 3: { _skinFiles = ["AN2_Ori\AN2_Ori_1_camo_u_co.paa","AN2_Ori\AN2_Ori_2_camo_u_co.paa","AN2_Ori\AN2_Ori_3_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["AN2_Ori\AN2_Ori_1_camo_w_co.paa","AN2_Ori\AN2_Ori_2_camo_w_co.paa","AN2_Ori\AN2_Ori_3_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["AN2_Ori\AN2_Ori_1_pink_co.paa","AN2_Ori\AN2_Ori_2_pink_co.paa","AN2_Ori\AN2_Ori_3_pink_co.paa"]; };
				case 6: { _skinFiles = ["AN2_Ori\AN2_Ori_1_red_co.paa","AN2_Ori\AN2_Ori_2_red_co.paa","AN2_Ori\AN2_Ori_3_red_co.paa"];};
				case 7: { _skinFiles = ["AN2_Ori\AN2_Ori_1_special1_co.paa","AN2_Ori\AN2_Ori_2_special1_co.paa","AN2_Ori\AN2_Ori_3_special1_co.paa"]; };
				case 8: { _skinFiles = ["AN2_Ori\AN2_Ori_1_special2_co.paa","AN2_Ori\AN2_Ori_2_special2_co.paa","AN2_Ori\AN2_Ori_3_special2_co.paa"]; };
				case 9: { _skinFiles = ["AN2_Ori\AN2_Ori_1_special3_co.paa","AN2_Ori\AN2_Ori_2_special3_co.paa","AN2_Ori\AN2_Ori_3_special3_co.paa"]; };
				case 10: { _skinFiles = ["AN2_Ori\AN2_Ori_1_yellow_co.paa","AN2_Ori\AN2_Ori_2_yellow_co.paa","AN2_Ori\AN2_Ori_3_yellow_co.paa"]; };
				default {_skinFiles = ["AN2_Ori\AN2_Ori_1_special3_co.paa","AN2_Ori\AN2_Ori_2_special3_co.paa","AN2_Ori\AN2_Ori_3_special3_co.paa"]; };
		};
	};

	if (_object isKindOf "ATV_Base_EP1") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["ATV_Ori\ATV_Ori_black_co.paa"]; };
				case 2: { _skinFiles = ["ATV_Ori\ATV_Ori_blue_co.paa"]; };
				case 3: { _skinFiles = ["ATV_Ori\ATV_Ori_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["ATV_Ori\ATV_Ori_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["ATV_Ori\ATV_Ori_pink_co.paa"]; };
				case 6: { _skinFiles = ["ATV_Ori\ATV_Ori_red_co.paa"]; };
				case 7: { _skinFiles = ["ATV_Ori\ATV_Ori_yellow_co.paa"]; };
				default { _skinFiles = ["ATV_Ori\ATV_Ori_camo_w_co.paa"]; };
		};
	};

	if (_object isKindOf "hilux1_civil_1_open") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Hilux\Hilux_black_co.paa"]; };
				case 2: { _skinFiles = ["Hilux\Hilux_blue_co.paa"]; };
				case 3: { _skinFiles = ["Hilux\Hilux_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Hilux\Hilux_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Hilux\Hilux_pink_co.paa"]; };
				case 6: { _skinFiles = ["Hilux\Hilux_red_co.paa"]; };
				case 7: { _skinFiles = ["Hilux\Hilux_special1_co.paa"]; };
				case 8: { _skinFiles = ["Hilux\Hilux_special2_co.paa"]; };
				case 9: { _skinFiles = ["Hilux\Hilux_special3_co.paa"]; };
				case 10: { _skinFiles = ["Hilux\Hilux_special4_co.paa"]; };
				case 11: { _skinFiles = ["Hilux\Hilux_yellow_co.paa"]; };
				default { _skinFiles = ["Hilux\Hilux_special4_co.paa"]; };
		};
	};

	if (_object isKindOf "Lada_base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Lada1\lada1_black_co.paa"]; };
				case 2: { _skinFiles = ["Lada1\lada1_blue_co.paa"]; };
				case 3: { _skinFiles = ["Lada1\lada1_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Lada1\lada1_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Lada1\lada1_pink_co.paa"]; };
				case 6: { _skinFiles = ["Lada1\lada1_red_co.paa"]; };
				case 7: { _skinFiles = ["Lada1\lada1_special1_co.paa"]; };
				case 8: { _skinFiles = ["Lada1\lada1_white_co.paa"]; };
				case 9: { _skinFiles = ["Lada1\lada1_yellow_co.paa"]; };
				default { _skinFiles = ["Lada1\lada1_special1_co.paa"]; };
		};
	};

	if (_object isKindOf "Lada2015") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Lada2015\Lada2015_black_co.paa"]; };
				case 2: { _skinFiles = ["Lada2015\Lada2015_blue_co.paa"]; };
				case 3: { _skinFiles = ["Lada2015\Lada2015_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Lada2015\Lada2015_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Lada2015\Lada2015_pink_co.paa"]; };
				case 6: { _skinFiles = ["Lada2015\Lada2015_red_co.paa"]; };
				case 7: { _skinFiles = ["Lada2015\Lada2015_special1_co.paa"]; };
				case 8: { _skinFiles = ["Lada2015\Lada2015_yellow_co.paa"]; };
				default { _skinFiles = ["Lada2015\Lada2015_special1_co.paa"]; };
		};
	};

	if (_object isKindOf "LandRover_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["LandRover\LandRover_black_co.paa"]; };
				case 2: { _skinFiles = ["LandRover\LandRover_blue_co.paa"]; };
				case 3: { _skinFiles = ["LandRover\LandRover_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["LandRover\LandRover_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["LandRover\LandRover_pink_co.paa"]; };
				case 6: { _skinFiles = ["LandRover\LandRover_red_co.paa"]; };
				case 7: { _skinFiles = ["LandRover\LandRover_special1_co.paa"]; };
				case 8: { _skinFiles = ["LandRover\LandRover_special2_co.paa"]; };
				case 9: { _skinFiles = ["LandRover\LandRover_special3_co.paa"]; };
				case 10: { _skinFiles = ["LandRover\LandRover_yellow_co.paa"]; };
				default { _skinFiles = ["LandRover\LandRover_special3_co.paa"]; };
		};
	};	

	if (_object isKindOf "ori_vil_originsmod_lublin_truck") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Lublin\lublin_camo_u_co.paa"]; };
				case 2: { _skinFiles = ["Lublin\lublin_camo_w_co.paa"]; };
				default { _skinFiles = ["Lublin\lublin_camo_w_co.paa"]; };
		};
	};

	if (_object isKindOf "UH60_Base") then {
		switch (_skinNumber) do {	
				case 1: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_black_co.paa","MH60S_Ori\MH60S_Ori_2_black_co.paa"]; };
				case 2: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_blue_co.paa","MH60S_Ori\MH60S_Ori_2_blue_co.paa"]; };
				case 3: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_camo_u_co.paa","MH60S_Ori\MH60S_Ori_2_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_camo_w_co.paa","MH60S_Ori\MH60S_Ori_2_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_pink_co.paa","MH60S_Ori\MH60S_Ori_2_pink_co.paa"]; };
				case 6: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_red_co.paa","MH60S_Ori\MH60S_Ori_2_red_co.paa"]; };
				case 7: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special1_co.paa","MH60S_Ori\MH60S_Ori_2_special1_co.paa"]; };
				case 8: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special2_co.paa","MH60S_Ori\MH60S_Ori_2_special2_co.paa"]; };
				case 9: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special3_co.paa","MH60S_Ori\MH60S_Ori_2_special3_co.paa"]; };
				case 10: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special4_co.paa","MH60S_Ori\MH60S_Ori_2_special4_co.paa"]; };
				case 11: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special5_co.paa","MH60S_Ori\MH60S_Ori_2_special5_co.paa"]; };
				case 12: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special6_co.paa","MH60S_Ori\MH60S_Ori_2_special6_co.paa"]; };
				case 13: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special7_co.paa","MH60S_Ori\MH60S_Ori_2_special7_co.paa"]; };
				case 14: { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_yellow_co.paa","MH60S_Ori\MH60S_Ori_2_yellow_co.paa"]; };
				default { _skinFiles = ["MH60S_Ori\MH60S_Ori_1_special5_co.paa","MH60S_Ori\MH60S_Ori_2_special5_co.paa"]; };
		};
	};

	if (_object isKindOf "Mi17_base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Mi17_Ori\Mi17_Ori_black_co.paa"]; };
				case 2: { _skinFiles = ["Mi17_Ori\Mi17_Ori_blue_co.paa"]; };
				case 3: { _skinFiles = ["Mi17_Ori\Mi17_Ori_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Mi17_Ori\Mi17_Ori_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Mi17_Ori\Mi17_Ori_pink_co.paa"]; };
				case 6: { _skinFiles = ["Mi17_Ori\Mi17_Ori_red_co.paa"]; };
				case 7: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special10_co.paa"]; };
				case 8: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special11_co.paa"]; };
				case 9: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special12_co.paa"]; };
				case 10: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special13_co.paa"]; };
				case 11: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special1_co.paa"]; };
				case 12: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special2_co.paa"]; };
				case 13: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special3_co.paa"]; };
				case 14: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special4_co.paa"]; };
				case 15: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special5_co.paa"]; };
				case 16: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special6_co.paa"]; };
				case 17: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special7_co.paa"]; };
				case 18: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special8_co.paa"]; };
				case 19: { _skinFiles = ["Mi17_Ori\Mi17_Ori_special9_co.paa"]; };
				case 20: { _skinFiles = ["Mi17_Ori\Mi17_Ori_yellow_co.paa"]; };
				default { _skinFiles = ["Mi17_Ori\Mi17_Ori_special5_co.paa"]; };
		};
	};

	if (_object isKindOf "Polonez") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Polonez\polonez_black_co.paa"]; };
				case 2: { _skinFiles = ["Polonez\polonez_blue_co.paa"]; };
				case 3: { _skinFiles = ["Polonez\polonez_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Polonez\polonez_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Polonez\polonez_pink_co.paa"]; };
				case 6: { _skinFiles = ["Polonez\polonez_red_co.paa"]; };
				case 7: { _skinFiles = ["Polonez\polonez_yellow_co.paa"]; };
				default { _skinFiles = ["Polonez\polonez_pink_co.paa"]; };
		};
	};

	if (_object isKindOf "ori_pragaCopter_green" || _object isKindOf "ori_pragaCopter_yellow") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Praga\Praga_black_co.paa"]; };
				case 2: { _skinFiles = ["Praga\Praga_blue_co.paa"]; };
				case 3: { _skinFiles = ["Praga\Praga_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Praga\Praga_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Praga\Praga_pink_co.paa"]; };
				case 6: { _skinFiles = ["Praga\Praga_red_co.paa"]; };
				case 7: { _skinFiles = ["Praga\Praga_special1_co.paa"]; };
				case 8: { _skinFiles = ["Praga\Praga_special2_co.paa"]; };
				case 9: { _skinFiles = ["Praga\Praga_yellow_co.paa"]; };
				default { _skinFiles = ["Praga\Praga_special1_co.paa"]; };
		};
	};

	if (_object isKindOf "S1203_TK_CIV_EP1") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["S1203\s1203_black_co.paa"]; };
				case 2: { _skinFiles = ["S1203\s1203_blue_co.paa"]; };
				case 3: { _skinFiles = ["S1203\s1203_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["S1203\s1203_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["S1203\s1203_pink_co.paa"]; };
				case 6: { _skinFiles = ["S1203\s1203_red_co.paa"]; };
				case 7: { _skinFiles = ["S1203\s1203_special1_co.paa"]; };
				case 8: { _skinFiles = ["S1203\s1203_special2_co.paa"]; };
				case 9: { _skinFiles = ["S1203\s1203_special3_co.paa"]; };
				case 10: { _skinFiles = ["S1203\s1203_yellow_co.paa"]; };
				default { _skinFiles = ["S1203\s1203_special2_co.paa"]; };
		};
	};

	if (_object isKindOf "SUV_Base_EP1") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["SUV_Special\SUV_Special_black_co.paa"]; };
				case 2: { _skinFiles = ["SUV_Special\SUV_Special_blue_co.paa"]; };
				case 3: { _skinFiles = ["SUV_Special\SUV_Special_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["SUV_Special\SUV_Special_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["SUV_Special\SUV_Special_pink_co.paa"]; };
				case 6: { _skinFiles = ["SUV_Special\SUV_Special_red_co.paa"]; };
				case 7: { _skinFiles = ["SUV_Special\SUV_Special_special1_co.paa"]; };
				case 8: { _skinFiles = ["SUV_Special\SUV_Special_special2_co.paa"]; };
				case 9: { _skinFiles = ["SUV_Special\SUV_Special_special3_co.paa"]; };
				case 10: { _skinFiles = ["SUV_Special\SUV_Special_special4_co.paa"]; };
				case 11: { _skinFiles = ["SUV_Special\SUV_Special_special5_co.paa"]; };
				case 12: { _skinFiles = ["SUV_Special\SUV_Special_special6_co.paa"]; };
				case 13: { _skinFiles = ["SUV_Special\SUV_Special_special7_co.paa"]; };
				case 14: { _skinFiles = ["SUV_Special\SUV_Special_special8_co.paa"]; };
				case 15: { _skinFiles = ["SUV_Special\SUV_Special_yellow_co.paa"]; };
				default { _skinFiles = ["SUV_Special\SUV_Special_special5_co.paa"]; };
		};
	};

	if (_object isKindOf "ori_survivorBus") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["ScrapBus\ScrapBus_black_co.paa"]; };
				case 2: { _skinFiles = ["ScrapBus\ScrapBus_blue_co.paa"]; };
				case 3: { _skinFiles = ["ScrapBus\ScrapBus_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["ScrapBus\ScrapBus_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["ScrapBus\ScrapBus_nemo_co.paa"]; };
				case 6: { _skinFiles = ["ScrapBus\ScrapBus_pink_co.paa"]; };
				case 7: { _skinFiles = ["ScrapBus\ScrapBus_red_co.paa"]; };
				case 8: { _skinFiles = ["ScrapBus\ScrapBus_yellow_co.paa"]; };
				default { _skinFiles = ["ScrapBus\ScrapBus_nemo_co.paa"]; };
		};
	};

	if (_object isKindOf "UH1H_base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_black_co.paa","UH1H_Ori\UH1H_Ori_2_black_co.paa"]; };
				case 2: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_blue_co.paa","UH1H_Ori\UH1H_Ori_2_blue_co.paa"]; };
				case 3: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_camo_u_co.paa","UH1H_Ori\UH1H_Ori_2_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_camo_w_co.paa","UH1H_Ori\UH1H_Ori_2_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_pink_co.paa","UH1H_Ori\UH1H_Ori_2_pink_co.paa"]; };
				case 6: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_red_co.paa","UH1H_Ori\UH1H_Ori_2_red_co.paa"]; };
				case 7: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_special1_co.paa","UH1H_Ori\UH1H_Ori_2_special1_co.paa"]; };
				case 8: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_special2_co.paa","UH1H_Ori\UH1H_Ori_2_special2_co.paa"]; };
				case 9: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_special3_co.paa","UH1H_Ori\UH1H_Ori_2_special3_co.paa"]; };
				case 10: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_special4_co.paa","UH1H_Ori\UH1H_Ori_2_special4_co.paa"]; };
				case 11: { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_yellow_co.paa","UH1H_Ori\UH1H_Ori_2_yellow_co.paa"]; };
				default { _skinFiles = ["UH1H_Ori\UH1H_Ori_1_special3_co.paa","UH1H_Ori\UH1H_Ori_2_special3_co.paa"]; };
		};
	};

	if (_object isKindOf "Ural_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Ural\ural_kabina_black_co.paa","Ural\ural_back_black_co.paa"]; };
				case 2: { _skinFiles = ["Ural\ural_kabina_blue_co.paa","Ural\ural_back_blue_co.paa"]; };
				case 3: { _skinFiles = ["Ural\ural_kabina_camo_u_co.paa","Ural\ural_back_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Ural\ural_kabina_camo_w_co.paa","Ural\ural_back_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Ural\ural_kabina_pink_co.paa","Ural\ural_back_pink_co.paa"]; };
				case 6: { _skinFiles = ["Ural\ural_kabina_red_co.paa","Ural\ural_back_red_co.paa"]; };
				case 7: { _skinFiles = ["Ural\ural_kabina_yellow_co.paa","Ural\ural_back_yellow_co.paa"]; };
				case 8: { _skinFiles = ["Ural\ural_kabina_special1_co.paa","Ural\ural_back_special1_co.paa"]; };
				case 9: { _skinFiles = ["Ural\ural_kabina_special2_co.paa","Ural\ural_back_special2_co.paa"]; };
				case 10: { _skinFiles = ["Ural\ural_kabina_special3_co.paa"]; };
				case 11: { _skinFiles = ["Ural\ural_kabina_special4_co.paa"]; };
				case 12: { _skinFiles = ["Ural\ural_kabina_special5_co.paa"]; };
				case 13: { _skinFiles = ["Ural\ural_kabina_special6_co.paa"]; };
				case 14: { _skinFiles = ["Ural\ural_kabina_special2_co.paa","Ural\ural_back_special1_co.paa"]; };
				case 15: { _skinFiles = ["Ural\ural_kabina_special1_co.paa","Ural\ural_back_special2_co.paa"]; };
				default { hint "default" };
		};
	};
	if (_object isKindOf "UralOpen_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["Ural\ural_kabina_black_co.paa","Ural\ural_back2_black_co.paa"]; };
				case 2: { _skinFiles = ["Ural\ural_kabina_blue_co.paa","Ural\ural_back2_blue_co.paa"]; };
				case 3: { _skinFiles = ["Ural\ural_kabina_camo_u_co.paa","Ural\ural_back2_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["Ural\ural_kabina_camo_w_co.paa","Ural\ural_back2_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["Ural\ural_kabina_pink_co.paa","Ural\ural_back2_pink_co.paa"]; };
				case 6: { _skinFiles = ["Ural\ural_kabina_red_co.paa","Ural\ural_back2_red_co.paa"]; };
				case 7: { _skinFiles = ["Ural\ural_kabina_yellow_co.paa","Ural\ural_back2_yellow_co.paa"]; };
				case 8: { _skinFiles = ["Ural\ural_kabina_special1_co.paa"]; };
				case 9: { _skinFiles = ["Ural\ural_kabina_special2_co.paa"]; };
				case 10: { _skinFiles = ["Ural\ural_kabina_special3_co.paa"]; };
				case 11: { _skinFiles = ["Ural\ural_kabina_special4_co.paa"]; };
				case 12: { _skinFiles = ["Ural\ural_kabina_special5_co.paa"]; };
				case 13: { _skinFiles = ["Ural\ural_kabina_special6_co.paa"]; };
				default { hint "default" };
		};
	};
	/*	
				case 17: { _skinFiles = ["Ural\ural_kabina_black_co.paa"]; };
				case 18: { _skinFiles = ["Ural\ural_kabina_blue_co.paa"]; };
				case 19: { _skinFiles = ["Ural\ural_kabina_camo_u_co.paa"]; };
				case 20: { _skinFiles = ["Ural\ural_kabina_camo_w_co.paa"]; };
				case 21: { _skinFiles = ["Ural\ural_kabina_pink_co.paa"]; };
				case 22: { _skinFiles = ["Ural\ural_kabina_red_co.paa"]; };
				case 23: { _skinFiles = ["Ural\ural_kabina_special1_co.paa"]; };
				case 24: { _skinFiles = ["Ural\ural_kabina_special2_co.paa"]; };
				case 25: { _skinFiles = ["Ural\ural_kabina_special3_co.paa"]; };
				case 26: { _skinFiles = ["Ural\ural_kabina_special4_co.paa"]; };
				case 27: { _skinFiles = ["Ural\ural_kabina_special5_co.paa"]; };
				case 28: { _skinFiles = ["Ural\ural_kabina_special6_co.paa"]; };
				case 29: { _skinFiles = ["Ural\ural_kabina_yellow_co.paa"]; };
				default { hint "default" };
		};
	};
	*/

	if (_object isKindOf "V3S_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["V3S\v3s_kabpar_black_co.paa","V3S\v3s_intkor_black_co.paa"]; };
				case 2: { _skinFiles = ["V3S\v3s_kabpar_blue_co.paa","V3S\v3s_intkor_blue_co.paa"]; };
				case 3: { _skinFiles = ["V3S\v3s_kabpar_camo_u_co.paa","V3S\v3s_intkor_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["V3S\v3s_kabpar_camo_w_co.paa","V3S\v3s_intkor_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["V3S\v3s_kabpar_pink_co.paa","V3S\v3s_intkor_pink_co.paa"]; };
				case 6: { _skinFiles = ["V3S\v3s_kabpar_red_co.paa","V3S\v3s_intkor_red_co.paa"]; };
				case 7: { _skinFiles = ["V3S\v3s_kabpar_yellow_co.paa","V3S\v3s_intkor_yellow_co.paa"]; };
				case 8: { _skinFiles = ["V3S\v3s_kabpar_special1_co.paa"]; };
				default { ["V3S\v3s_kabpar_special1_co.paa"]};
		};
	};


	if (_object isKindOf "VWGOLF") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["VWGOLF\vwgolf_black_co.paa"]; };
				case 2: { _skinFiles = ["VWGOLF\vwgolf_blue_co.paa"]; };
				case 3: { _skinFiles = ["VWGOLF\vwgolf_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["VWGOLF\vwgolf_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["VWGOLF\vwgolf_pink_co.paa"]; };
				case 6: { _skinFiles = ["VWGOLF\vwgolf_red_co.paa"]; };
				case 7: { _skinFiles = ["VWGOLF\vwgolf_special1_co.paa"]; };
				case 8: { _skinFiles = ["VWGOLF\vwgolf_special2_co.paa"]; };
				case 9: { _skinFiles = ["VWGOLF\vwgolf_special3_co.paa"]; };
				case 10: { _skinFiles = ["VWGOLF\vwgolf_yellow_co.paa"]; };
				default { _skinFiles = ["VWGOLF\vwgolf_special2_co.paa"]; };
		};
	};

	if (_object isKindOf "car_hatchback") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["car_hatchback\car_hatchback_black_co.paa"]; };
				case 2: { _skinFiles = ["car_hatchback\car_hatchback_blue_co.paa"]; };
				case 3: { _skinFiles = ["car_hatchback\car_hatchback_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["car_hatchback\car_hatchback_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["car_hatchback\car_hatchback_pink_co.paa"]; };
				case 6: { _skinFiles = ["car_hatchback\car_hatchback_red_co.paa"]; };
				case 7: { _skinFiles = ["car_hatchback\car_hatchback_special1_co.paa"]; };
				case 8: { _skinFiles = ["car_hatchback\car_hatchback_yellow_co.paa"]; };
				default { _skinFiles = ["car_hatchback\car_hatchback_special1_co.paa"]; };
		};
	};

	if (_object isKindOf "car_sedan") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["car_sedan\car_sedan_black_co.paa"]; };
				case 2: { _skinFiles = ["car_sedan\car_sedan_blue_co.paa"]; };
				case 3: { _skinFiles = ["car_sedan\car_sedan_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["car_sedan\car_sedan_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["car_sedan\car_sedan_pink_co.paa"]; };
				case 6: { _skinFiles = ["car_sedan\car_sedan_red_co.paa"]; };
				case 7: { _skinFiles = ["car_sedan\car_sedan_yellow_co.paa"]; };
				default { _skinFiles = ["car_sedan\car_sedan_camo_u_co.paa"]; };
		};
	};

	if (_object isKindOf "HMMWV_Base") then {
		_skinFiles = ["hmmwv\hmmwv_telo_co.paa"];
	};

	/*
	if (_object isKindOf "Kamaz_Base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["kamaz\kamaz_back_camo_u_co.paa"]; };
				case 2: { _skinFiles = ["kamaz\kamaz_back_camo_w_co.paa"]; };
				case 3: { _skinFiles = ["kamaz\kamaz_back_white_co.paa"]; };
				case 4: { _skinFiles = ["kamaz\kamaz_black_co.paa"]; };
				case 5: { _skinFiles = ["kamaz\kamaz_blue_co.paa"]; };
				case 6: { _skinFiles = ["kamaz\kamaz_camo_u_co.paa"]; };
				case 7: { _skinFiles = ["kamaz\kamaz_camo_w_co.paa"]; };
				case 8: { _skinFiles = ["kamaz\kamaz_pink_co.paa"]; };
				case 9: { _skinFiles = ["kamaz\kamaz_red_co.paa"]; };
				case 10: { _skinFiles = ["kamaz\kamaz_yellow_co.paa"]; };
				default { hint "default" };
		};
	};
	*/

	if (_object isKindOf "Old_moto_base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["old_moto\old_moto_black_co.paa"]; };
				case 2: { _skinFiles = ["old_moto\old_moto_blue_co.paa"]; };
				case 3: { _skinFiles = ["old_moto\old_moto_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["old_moto\old_moto_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["old_moto\old_moto_pink_co.paa"]; };
				case 6: { _skinFiles = ["old_moto\old_moto_red_co.paa"]; };
				case 7: { _skinFiles = ["old_moto\old_moto_special1_co.paa"]; };
				case 8: { _skinFiles = ["old_moto\old_moto_special2_co.paa"]; };
				case 9: { _skinFiles = ["old_moto\old_moto_yellow_co.paa"]; };
				default { _skinFiles = ["old_moto\old_moto_special2_co.paa"]; };
		};
	};

	if (_object isKindOf "Pickup_PK_base") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["pickup\pickup_black_co.paa"]; };
				case 2: { _skinFiles = ["pickup\pickup_blue_co.paa"]; };
				case 3: { _skinFiles = ["pickup\pickup_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["pickup\pickup_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["pickup\pickup_pink_co.paa"]; };
				case 6: { _skinFiles = ["pickup\pickup_red_co.paa"]; };
				case 7: { _skinFiles = ["pickup\pickup_special1_co.paa"]; };
				case 8: { _skinFiles = ["pickup\pickup_special2_co.paa"]; };
				case 9: { _skinFiles = ["pickup\pickup_special3_co.paa"]; };
				case 10: { _skinFiles = ["pickup\pickup_yellow_co.paa"]; };
				default { _skinFiles = ["pickup\pickup_special2_co.paa"]; };
		};
	};
	
	if (_object isKindOf "ori_scrapTank") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["scrapAPC\apc_camo_u_co.paa","scrapAPC\apc_camo_u_co.paa","scrapAPC\apc_camo_u_co.paa"]; };
				case 2: { _skinFiles = ["scrapAPC\apc_camo_w_co.paa","scrapAPC\apc_camo_w_co.paa","scrapAPC\apc_camo_w_co.paa"]; };		
				default { _skinFiles = ["scrapAPC\apc_camo_u_co.paa"]; };
		};
	};

	if (_object isKindOf "ori_transit") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["transit\transit_black_co.paa"]; };
				case 2: { _skinFiles = ["transit\transit_blue_co.paa"]; };
				case 3: { _skinFiles = ["transit\transit_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["transit\transit_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["transit\transit_pink_co.paa"]; };
				case 6: { _skinFiles = ["transit\transit_red_co.paa"]; };
				case 7: { _skinFiles = ["transit\transit_yellow_co.paa"]; };
				default { _skinFiles = ["transit\transit_pink_co.paa"]; };
		};
	};

	/*
	if (_object isKindOf "vilTruck") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["vilTruck\truck_w_co.paa"]; };
				case 2: { _skinFiles = ["vilTruck\vilTruck_back_camo_u_co.paa"]; };
				case 3: { _skinFiles = ["vilTruck\vilTruck_back_camo_w_co.paa"]; };
				case 4: { _skinFiles = ["vilTruck\vilTruck_back_special1_co.paa"]; };
				case 5: { _skinFiles = ["vilTruck\vilTruck_back_special2_co.paa"]; };
				case 6: { _skinFiles = ["vilTruck\vilTruck_black_co.paa"]; };
				case 7: { _skinFiles = ["vilTruck\vilTruck_blue_co.paa"]; };
				case 8: { _skinFiles = ["vilTruck\vilTruck_camo_u_co.paa"]; };
				case 9: { _skinFiles = ["vilTruck\vilTruck_camo_w_co.paa"]; };
				case 10: { _skinFiles = ["vilTruck\vilTruck_pink_co.paa"]; };
				case 11: { _skinFiles = ["vilTruck\vilTruck_red_co.paa"]; };
				case 12: { _skinFiles = ["vilTruck\vilTruck_yellow_co.paa"]; };
				default { hint "default" };
		};
	};
	*/

	if (_object isKindOf "Volha_TK_CIV_Base_EP1") then {
		switch (_skinNumber) do {
				case 1: { _skinFiles = ["volha\volha_black_co.paa"]; };
				case 2: { _skinFiles = ["volha\volha_blue_co.paa"]; };
				case 3: { _skinFiles = ["volha\volha_camo_u_co.paa"]; };
				case 4: { _skinFiles = ["volha\volha_camo_w_co.paa"]; };
				case 5: { _skinFiles = ["volha\volha_pink_co.paa"]; };
				case 6: { _skinFiles = ["volha\volha_red_co.paa"]; };
				case 7: { _skinFiles = ["volha\volha_special1_co.paa"]; };
				case 8: { _skinFiles = ["volha\volha_special2_co.paa"]; };
				case 9: { _skinFiles = ["volha\volha_yellow_co.paa"]; };
				default { _skinFiles = ["volha\volha_special1_co.paa"]; };
		};
	};
};

_skinFiles