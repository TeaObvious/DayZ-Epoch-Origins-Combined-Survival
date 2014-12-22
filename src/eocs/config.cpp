#define private 0
#define protected 1
#define public 2

class CfgPatches {
	class eocs {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_code","dayz","originsassets","plantingassets"};
	};
};
class CfgAddons
{
	access = 1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz"};
		};
	};
};
#include "configs\CfgMagazines.hpp"
#include "configs\CfgVehicles.hpp"
//Snap Defines
#include "external\snap_build\snappoints.hpp"
