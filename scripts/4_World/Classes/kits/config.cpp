class CfgPatches
{
    class MuchDecos_Kits
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
	class Inventory_Base;
	class Container_Base;
	class WoodenCrate;
	class HouseNoDestruct;

	class MD_Item: Inventory_Base
	{
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		bounding="BSphere";
		overrideDrawArea="3.0";
		visibilityModifier=0.94999999;
		canBeDigged=0;
		heavyItem=1;
		weight=10;
		itemSize[]={10,10};
		itemBehaviour=1;
		physLayer="item_large";
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
		class Cargo
		{
			itemsCargoSize[]={1,1};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
				};
			};
		};
	};

	class MD_Kit: WoodenCrate
	{
		scope=2;
		displayName="Wooden Box Kit";
		descriptionShort="Small wooden box used to transport small items.";
		model="\MuchDecos\data\kitbox\kitbox_small.p3d";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		itemSize[]={8,6};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_large";
		rotationFlags=2;
		InteractActions[]={};
		weight=300;
		itemBehaviour=2;		
		class Cargo
		{
		};
	};	
	
	class MD_Sink: Inventory_Base
	{		
		scope=2;
		displayName="Sink";
		descriptionShort="A working sink";
		model="\DZ\structures\furniture\Bathroom\SINK\sink.p3d";
		hiddenSelectionsTextures[]=
		{
			"\DZ\structures\furniture\Bathroom\SINK\Data\sink_co.paa"
		};
		itemSize[]={6,6};
		canBeDigged=0;
		bounding="BSphere";
		overrideDrawArea="3.0";
		physLayer="item_small";
		handheld="true";
		carveNavmesh=1;
		rotationFlags=2;
		visibilityModifier=0.94999999;
		InteractActions[]={};
		weight=50;
		itemBehaviour=2;
		class AnimationSources
		{
			class Arm
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
		};
	};

	class MD_Sink_Kit: MD_Kit
	{
		displayName="Sink Kit";
		descriptionShort="Can be deployed into a sink. Cannot be dismantled.";
	};	

	class MD_TentChair_Kit: MD_Kit
	{
		displayName="Tent Chair Kit";
		descriptionShort="Dismantle with a crowbar or hatchet.";
	};
	
	class MD_TentChair: MD_Item
	{		
		scope=2;
		displayName="Tent Chair";
		descriptionShort="A chair";
		model="\DZ\structures\military\Improvised\proxy\tent_chair.p3d";
	};

	class MD_WoodenChair_Kit: MD_Kit
	{
		displayName="Wooden Chair";
	};

	class MD_WoodenChair: MD_Item
	{		
		scope=2;
		displayName="Wooden Chair";
		descriptionShort="A chair";
		model="\DZ\structures\furniture\chairs\ch_mod_c\ch_mod_c.p3d";
	};

	class MD_PaddedWoodenChair_Kit: MD_Kit
	{
		displayName="Padded Wooden Chair";
	};
	class MD_PaddedWoodenChair: MD_Item
	{		
		scope=2;
		displayName="Padded Wooden Chair";
		descriptionShort="A chair";
		model="\DZ\structures\furniture\chairs\ch_mod_h\ch_mod_h.p3d";
	};

	
	class MD_OpenableBase: Container_Base
	{
		scope=2;
		displayName="Locker";
		model="\DZ\structures\furniture\cases\locker\locker_closed_v1.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		destroyOnEmpty=0;
		quantityBar=0;
		varQuantityMax=0;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		//simulation="house";
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		lootTag[]=
		{
			"Work"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};
	};
	
	class MD_Large_Kit: MD_Kit
	{
		displayName="Large Kit";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
	};

	class MD_NewsStand2_Kit: MD_Large_Kit
	{
		displayName="News stand green";
	};
	class Land_MD_NewsStand2: MD_OpenableBase
	{
		scope=2;
		displayName="News stand";
		descriptionShort="News stand";
		model="\DZ\structures\residential\stores\city_stand_news2.p3d";
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
		attachments[]=
		{
			"Body",
			"Headgear",
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{			
			class OtherMaterials
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Body",
					"Headgear"
				};
				icon="cat_common_cargo";
				view_index=3;
			};

			class Lock
			{
				name="Lock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
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
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";				
			};
		};
	};
	class MD_Shed_M4_Kit: MD_Large_Kit
	{
		displayName="Metal Shed kit";
	};
	class MD_Shed_M4: MD_Item
	{		
		scope=2;
		displayName="Shed";
		descriptionShort="A shed";
		model="\DZ\structures\residential\sheds\shed_m4.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
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
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9"
		};
		storageCategory=1;
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9"
				};
				icon="cat_gp_filling";
			};
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
		hiddenSelections[]=
		{
			"SeedBase_01",
			"SeedBase_02",
			"SeedBase_03",
			"SeedBase_04",
			"SeedBase_05",
			"SeedBase_06",
			"SeedBase_07",
			"SeedBase_08",
			"SeedBase_09",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"slotCovered_04",
			"slotCovered_05",
			"slotCovered_06",
			"slotCovered_07",
			"slotCovered_08",
			"slotCovered_09"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
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

	class MD_KitchenChair_Kit: MD_Kit
	{
		displayName="Kitchen Chair";
	};
	class MD_KitchenChair: MD_Item
	{		
		scope=2;
		displayName="Kitchen Chair";
		descriptionShort="A chair";
		model="\DZ\structures\furniture\chairs\kitchen_chair_a\kitchen_chair_a.p3d";
	};
	
	class MD_Power_Transformer_Kit: MD_Large_Kit
	{
		displayName="Power Transformer";
	};

	class MD_Power_Transformer: MD_Item
	{
		scope=2;
		displayName="Power Transformer";
		descriptionShort="A generator with a lot of power and silent";
		model="\DZ\structures\industrial\power\power_transformer_small.p3d";
		rotationFlags=2;
		slopeTolerance=0.30000001;
		weight=45000;
		itemSize[]={10,10};
		itemBehaviour=0;
		attachments[]=
		{
			"SparkPlug"
		};
		fuelTankCapacity=200000;
		carveNavmesh=1;
		heavyItem=1;
		hiddenSelections[]=
		{
			"socket_1_plugged",
			"socket_2_plugged",
			"socket_3_plugged",
			"socket_4_plugged",
			"sparkplug_installed",
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\camping\data\plug_black_CO.paa",
			"dz\gear\camping\data\plug_yellow_CO.paa",
			"dz\gear\camping\data\plug_white_CO.paa",
			"dz\gear\camping\data\plug_orange_CO.paa",
			"dz\gear\camping\data\power_generator_CO.paa",
			"dz\gear\camping\data\power_generator_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\plug.rvmat",
			"dz\gear\camping\data\power_generator.rvmat",
			"dz\gear\camping\data\power_generator.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;					
				};
			};
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyStorageMax=200000;
			energyUsagePerSecond=0.28;
			reduceMaxEnergyByDamageCoef=0.5;
			energyAtSpawn=200000;
			powerSocketsCount=4;
			compatiblePlugTypes[]={2,6};
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_2_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_3_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class socket_4_plugged
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class sparkplug
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class fuel_tank
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class sparkplug_installed
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class dial_fuel
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walk
				{
					soundSet="powergenerator_movement_walk_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpPowerGenerator_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="powergenerator_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class MD_Polytunnel_Kit: MD_Large_Kit
	{
		displayName="Polytunnel kit";
	};

	class MD_GardenBase: MD_OpenableBase
	{
		scope=2;
		displayName="Polytunnel";
		descriptionShort="A polytunnel with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Polytunnel.p3d";
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
		storageCategory=1;
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9",
					"SeedBase_10",
					"SeedBase_11",
					"SeedBase_12",
					"SeedBase_13"
				};
				icon="cat_gp_filling";
			};
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
		hiddenSelections[]=
		{
			"SeedBase_01",
			"SeedBase_02",
			"SeedBase_03",
			"SeedBase_04",
			"SeedBase_05",
			"SeedBase_06",
			"SeedBase_07",
			"SeedBase_08",
			"SeedBase_09",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"slotCovered_04",
			"slotCovered_05",
			"slotCovered_06",
			"slotCovered_07",
			"slotCovered_08",
			"slotCovered_09"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
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
			class SeedBase_1: slotVisible
			{
			};
			class SeedBase_2: slotVisible
			{
			};
			class SeedBase_3: slotVisible
			{
			};
			class SeedBase_4: slotVisible
			{
			};
			class SeedBase_5: slotVisible
			{
			};
			class SeedBase_6: slotVisible
			{
			};
			class SeedBase_7: slotVisible
			{
			};
			class SeedBase_8: slotVisible
			{
			};
			class SeedBase_9: slotVisible
			{
			};
			class SeedBase_10: slotVisible
			{
			};
			class SeedBase_11: slotVisible
			{
			};
			class SeedBase_12: slotVisible
			{
			};
			class SeedBase_13: slotVisible
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
			class slotCovered_10: slotHidden
			{
			};
			class slotCovered_11: slotHidden
			{
			};
			class slotCovered_12: slotHidden
			{
			};
			class slotCovered_13: slotHidden
			{
			};
		};
	};

	class Land_MD_Polytunnel: MD_GardenBase
	{
		scope=2;
		displayName="Polytunnel";
		descriptionShort="A polytunnel with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Polytunnel.p3d";
		attachments[]=
		{
			"SeedBase_1",
			"SeedBase_2",
			"SeedBase_3",
			"SeedBase_4",
			"SeedBase_5",
			"SeedBase_6",
			"SeedBase_7",
			"SeedBase_8",
			"SeedBase_9",
			"SeedBase_10",
			"SeedBase_11",
			"SeedBase_12",
			"SeedBase_13"
		};
		storageCategory=1;
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name="$STR_attachment_Filling0";
				description="";
				attachmentSlots[]=
				{
					"SeedBase_1",
					"SeedBase_2",
					"SeedBase_3",
					"SeedBase_4",
					"SeedBase_5",
					"SeedBase_6",
					"SeedBase_7",
					"SeedBase_8",
					"SeedBase_9",
					"SeedBase_10",
					"SeedBase_11",
					"SeedBase_12",
					"SeedBase_13"
				};
				icon="cat_gp_filling";
			};
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
		hiddenSelections[]=
		{
			"SeedBase_01",
			"SeedBase_02",
			"SeedBase_03",
			"SeedBase_04",
			"SeedBase_05",
			"SeedBase_06",
			"SeedBase_07",
			"SeedBase_08",
			"SeedBase_09",
			"slotCovered_01",
			"slotCovered_02",
			"slotCovered_03",
			"slotCovered_04",
			"slotCovered_05",
			"slotCovered_06",
			"slotCovered_07",
			"slotCovered_08",
			"slotCovered_09"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\cultivation\data\soil_cultivated_co.paa",
			"dz\gear\cultivation\data\soil_cultivated_limed_CO.paa",
			"dz\gear\cultivation\data\soil_cultivated_compost_CO.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
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
			class SeedBase_1: slotVisible
			{
			};
			class SeedBase_2: slotVisible
			{
			};
			class SeedBase_3: slotVisible
			{
			};
			class SeedBase_4: slotVisible
			{
			};
			class SeedBase_5: slotVisible
			{
			};
			class SeedBase_6: slotVisible
			{
			};
			class SeedBase_7: slotVisible
			{
			};
			class SeedBase_8: slotVisible
			{
			};
			class SeedBase_9: slotVisible
			{
			};
			class SeedBase_10: slotVisible
			{
			};
			class SeedBase_11: slotVisible
			{
			};
			class SeedBase_12: slotVisible
			{
			};
			class SeedBase_13: slotVisible
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
			class slotCovered_10: slotHidden
			{
			};
			class slotCovered_11: slotHidden
			{
			};
			class slotCovered_12: slotHidden
			{
			};
			class slotCovered_13: slotHidden
			{
			};
		};
	};


	class MD_Shed_W5_Kit: MD_Large_Kit
	{
		displayName="Man cave kit";
	};
	class Land_MD_Shed_W5: MD_OpenableBase
	{
		scope=2;
		displayName="Man cave";
		descriptionShort="";
		model="\DZ\structures\Residential\Sheds\Shed_W5.p3d";
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
		attachments[]=
		{
			"Body",
			"Headgear",
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{			
			class OtherMaterials
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Body",
					"Headgear"
				};
				icon="cat_common_cargo";
				view_index=3;
			};

			class Lock
			{
				name="Lock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
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
				initOpened=0;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};			
		};
	};


	class MD_Stand_Grocery_Kit: MD_Large_Kit
	{
		displayName="Grocery stand kit";
	};
	class Land_MD_Stand_Grocery: MD_OpenableBase
	{
		scope=2;
		displayName="Grocery stand";
		descriptionShort="Grocery stand";
		model="\DZ\structures\Residential\Stores\City_Stand_Grocery.p3d";
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
		attachments[]=
		{
			"Body",
			"Headgear",
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{			
			class OtherMaterials
			{
				name="Other";
				description="";
				attachmentSlots[]=
				{
					"Body",
					"Headgear"
				};
				icon="cat_common_cargo";
				view_index=3;
			};

			class Lock
			{
				name="Lock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
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
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";				
			};
		};
	};	
};