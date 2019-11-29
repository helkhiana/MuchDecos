class CfgPatches
{
    class MuchDecos_Kits_OtherOpenables
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Cooking",
			"DZ_Vehicles_Parts",
			"DZ_Structures"
        };
    };
};


class CfgVehicles
{
	class MD_Item;
	class MD_Kit;
	class MD_OpenableBase;
	class MD_Large_Kit;

	//Stores
	class MD_NewsStand1_Kit: MD_Large_Kit
	{
		displayName="Red News Stand kit";
	};
	class Land_MD_NewsStand1: MD_OpenableBase
	{
		scope=2;
		displayName="Red News Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_news1.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_NewsStand2_Kit: MD_Large_Kit
	{
		displayName="Green News Stand kit";
	};
	class Land_MD_NewsStand2: MD_OpenableBase
	{
		scope=2;
		displayName="Green News Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_news2.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_FastFoodStand_Kit: MD_Large_Kit
	{
		displayName="Fast Food Stand kit";
	};
	class Land_MD_FastFoodStand: MD_OpenableBase
	{
		scope=2;
		displayName="Fast Food Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_fastfood.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	class MD_GroceryStand_Kit: MD_Large_Kit
	{
		displayName="Grocery Stand kit";
	};
	class Land_MD_GroceryStand: MD_OpenableBase
	{
		scope=2;
		displayName="Grocery Stand";
		model="\DZ\structures\Residential\Stores\City_Stand_Grocery.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	//Camp houses
	class MD_CampHouse_White_Kit: MD_Large_Kit
	{
		displayName="White Camp House kit";
	};
	class Land_MD_CampHouse_White: MD_OpenableBase
	{
		scope=2;
		displayName="White Camp House";
		model="\DZ\structures\specific\camps\camp_house_white.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_CampHouse_Brown_Kit: MD_Large_Kit
	{
		displayName="Brown Camp House kit";
	};
	class Land_MD_CampHouse_Brown: MD_OpenableBase
	{
		scope=2;
		displayName="Brown Camp House";
		model="\DZ\structures\specific\camps\camp_house_brown.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_CampHouse_Red_Kit: MD_Large_Kit
	{
		displayName="Red Camp House kit";
	};
	class Land_MD_CampHouse_Red: MD_OpenableBase
	{
		scope=2;
		displayName="Red Camp House";
		model="\DZ\structures\specific\camps\camp_house_red.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	//Caravans
	class MD_Caravan_WGreen_Kit: MD_Large_Kit
	{
		displayName="Green Wood Caravan kit";
	};
	class Land_MD_Caravan_WGreen: MD_OpenableBase
	{
		scope=2;
		displayName="Green Wood Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_wgreen.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_WBrown_Kit: MD_Large_Kit
	{
		displayName="Brown Wood Caravan kit";
	};
	class Land_MD_Caravan_WBrown: MD_OpenableBase
	{
		scope=2;
		displayName="Brown Wood Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_wbrown.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_MGreen_Kit: MD_Large_Kit
	{
		displayName="Green Metal Caravan kit";
	};
	class Land_MD_Caravan_MGreen: MD_OpenableBase
	{
		scope=2;
		displayName="Green Metal Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_mgreen.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_MRust_Kit: MD_Large_Kit
	{
		displayName="Rust Metal Caravan kit";
	};
	class Land_MD_Caravan_MRust: MD_OpenableBase
	{
		scope=2;
		displayName="Rust Metal Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_mrust.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

    

	class MD_Polytunnel_Kit: MD_Large_Kit
	{
		displayName="Polytunnel kit";
	};

	class Land_MD_Polytunnel: MD_OpenableBase
	{
		scope=2;
		displayName="Polytunnel";
		descriptionShort="A polytunnel with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Polytunnel.p3d";		
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.5;
				soundOpen="doorWoodGreenhouseOpen";
				soundClose="doorWoodGreenhouseClose";
				soundLocked="doorWoodGreenhouseRattle";
				soundOpenABit="doorWoodGreenhouseOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
				};
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};

	class MD_Greenhouse_Kit: MD_Large_Kit
	{
		displayName="Greenhouse kit";
	};

	class Land_MD_Greenhouse: MD_OpenableBase
	{
		scope=2;
		displayName="Greenhouse";
		descriptionShort="A greenhouse with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Greenhouse.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,25};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.5;
				soundOpen="doorWoodGreenhouseOpen";
				soundClose="doorWoodGreenhouseClose";
				soundLocked="doorWoodGreenhouseRattle";
				soundOpenABit="doorWoodGreenhouseOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class slotVisible
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class slotHidden: slotVisible
			{
				initPhase=1;
			};
			class SeedBase_01: slotVisible
			{
			};
			class SeedBase_02: slotVisible
			{
			};
			class SeedBase_03: slotVisible
			{
			};
			class SeedBase_04: slotVisible
			{
			};
			class SeedBase_05: slotVisible
			{
			};
			class SeedBase_06: slotVisible
			{
			};
			class SeedBase_07: slotVisible
			{
			};
			class SeedBase_08: slotVisible
			{
			};
			class SeedBase_09: slotVisible
			{
			};
			class slotCovered_01: slotHidden
			{
			};
			class slotCovered_02: slotHidden
			{
			};
			class slotCovered_03: slotHidden
			{
			};
			class slotCovered_04: slotHidden
			{
			};
			class slotCovered_05: slotHidden
			{
			};
			class slotCovered_06: slotHidden
			{
			};
			class slotCovered_07: slotHidden
			{
			};
			class slotCovered_08: slotHidden
			{
			};
			class slotCovered_09: slotHidden
			{
			};
		};
	};
};