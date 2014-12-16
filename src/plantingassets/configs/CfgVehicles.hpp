class CfgVehicles {
	class HouseBase;
	class plantables : HouseBase {
		scope=2;
		vehicleClass="Plantables";
		animated=0;
		armor=300;
		destrType = "DestructNo";
		class AnimationSources {};
	};
	#include "CfgVehicles\Plants\Hemp.hpp"
	#include "CfgVehicles\Plants\Poppy.hpp"
	#include "CfgVehicles\Plants\Pumpkin.hpp"
	#include "CfgVehicles\Plants\Wheat.hpp"
};
