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
		alignHologramToTerain=1;
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
		descriptionShort="Wooden box used to transport small items. Place to deploy item inside. The items can be dismantled by screwdriver after deployment.";
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
	
	class MD_OpenableBase: Container_Base
	{
		scope=2;
		overrideDrawArea="8.0";
		forceFarBubble="true";
		destroyOnEmpty=0;
		quantityBar=0;
		varQuantityMax=0;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		weight=10000;
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		attachments[]=
		{
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{	
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
	
	class MD_Large_Kit: MD_Kit
	{
		displayName="Large Kit";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";
		descriptionShort="Large wooden box used to transport enormous items. Place to deploy item inside. The items can be dismantled by screwdriver after deployment.";
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
			reduceMaxEnergyByDamageCoef=0;
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

	class Land_MD_Polytunnel: MD_OpenableBase
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
			"\MuchDecos\data\Misc_Greenhouse\data\Lod3_Misc_Greenhouse.rvmat",
			"\MuchDecos\data\Misc_Greenhouse\data\Misc_Greenhouse_concrete.rvmat",
			"\MuchDecos\data\Misc_Greenhouse\data\Misc_Greenhouse_ground.rvmat",
			"\MuchDecos\data\Misc_Greenhouse\data\Misc_Greenhouse_metal.rvmat",
			"\MuchDecos\data\Misc_Greenhouse\data\misc_greenhouse_multi.rvmat",
			"\MuchDecos\data\Misc_Greenhouse\data\Misc_Greenhouse_windows.rvmat",
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

	class MD_PostBox_Kit: MD_Kit
	{
		displayName="Postbox kit";
	};
	class MD_PostBox: MD_Item
	{		
		scope=2;
		displayName="Postbox";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_postbox1.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_PostBoxWall_Kit: MD_Kit
	{
		displayName="Wall Postbox kit";
	};
	class MD_PostBoxWall: MD_Item
	{		
		scope=2;
		displayName="Wall Postbox";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_postbox2.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_BlueBench_Kit: MD_Kit
	{
		displayName="Blue Bench kit";
	};
	class MD_BlueBench: MD_Item
	{		
		scope=2;
		displayName="Blue Bench";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_bench1.p3d";
	};
	
	class MD_Sunshade_Kit: MD_Kit
	{
		displayName="Sunshade kit";
	};
	class MD_Sunshade: MD_Item
	{		
		scope=2;
		displayName="Sunshade";
		descriptionShort="";
		model="\DZ\structures\residential\misc\misc_sunshade.p3d";
	};
	
	//Tables
	class MD_KitchenTable_Kit: MD_Kit
	{
		displayName="Kitchen Table kit";
	};
	class MD_KitchenTable: MD_Item
	{		
		scope=2;
		displayName="Kitchen Table";
		descriptionShort="";
		model="\DZ\structures\furniture\tables\kitchen_table_a\kitchen_table_a.p3d";
	};

	//Chairs
	class MD_OfficeChair_Kit: MD_Kit
	{
		displayName="Office chair kit";
	};
	class MD_OfficeChair: MD_Item
	{		
		scope=2;
		displayName="Office chair";
		descriptionShort="";
		model="\DZ\structures\furniture\chairs\ch_office_b\ch_office_b.p3d";
	};
	
	class MD_StudentChair_Kit: MD_Kit
	{
		displayName="Student chair kit";
	};
	class MD_StudentChair: MD_Item
	{		
		scope=2;
		displayName="Student chair";
		descriptionShort="";
		model="\DZ\structures\furniture\school_equipment\student_chair.p3d";
	};	
	class MD_RedChair_Kit: MD_Kit
	{
		displayName="Red chair kit";
	};
	class MD_RedChair: MD_Item
	{		
		scope=2;
		displayName="Red chair";
		model="\DZ\structures\furniture\chairs\office_chair\office_chair.p3d";
	};	
	class MD_LobbyChair_Kit: MD_Kit
	{
		displayName="Lobby chair kit";
	};
	class MD_LobbyChair: MD_Item
	{		
		scope=2;
		displayName="Lobby chair";
		model="\DZ\structures\furniture\chairs\lobby_chair\lobby_chair.p3d";
	};class MD_TentChair_Kit: MD_Kit
	{
		displayName="Tent Chair Kit";
	};	
	class MD_TentChair: MD_Item
	{		
		scope=2;
		displayName="Tent Chair";
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
		model="\DZ\structures\furniture\chairs\ch_mod_h\ch_mod_h.p3d";
	};
	class MD_KitchenChair_Kit: MD_Kit
	{
		displayName="Kitchen Chair";
	};
	class MD_KitchenChair: MD_Item
	{		
		scope=2;
		displayName="Kitchen Chair";
		model="\DZ\structures\furniture\chairs\kitchen_chair_a\kitchen_chair_a.p3d";
	};

	//Sheds metal
	class MD_Shed_M1_Kit: MD_Large_Kit
	{
		displayName="M1 Metal Shed kit";
	};
	class Land_MD_Shed_M1: MD_OpenableBase
	{		
		scope=2;
		displayName="M1 Metal Shed";
		model="\DZ\structures\residential\sheds\shed_m1.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_M3_Kit: MD_Large_Kit
	{
		displayName="M3 Metal Shed kit";
	};
	class Land_MD_Shed_M3: MD_OpenableBase
	{		
		scope=2;
		displayName="M3 Metal Shed";
		model="\DZ\structures\residential\sheds\shed_m3.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_M4_Kit: MD_Large_Kit
	{
		displayName="M4 Metal Shed kit";
	};
	class Land_MD_Shed_M4: MD_OpenableBase
	{		
		scope=2;
		displayName="M4 Metal Shed";
		model="\DZ\structures\residential\sheds\shed_m4.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	//sheds wood
	class MD_Shed_W1_Kit: MD_Large_Kit
	{
		displayName="W1 Wooden Shed kit";
	};
	class Land_MD_Shed_W1: MD_OpenableBase
	{		
		scope=2;
		displayName="W1 Wooden Shed";
		model="\DZ\structures\residential\sheds\shed_w1.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_W2_Kit: MD_Large_Kit
	{
		displayName="W2 Wooden Shed kit";
	};
	class Land_MD_Shed_W2: MD_OpenableBase
	{		
		scope=2;
		displayName="W2 Wooden Shed";
		model="\DZ\structures\residential\sheds\shed_w2.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_W3_Kit: MD_Large_Kit
	{
		displayName="W3 Wooden Shed kit";
	};
	class Land_MD_Shed_W3: MD_OpenableBase
	{		
		scope=2;
		displayName="W3 Wooden Shed";
		model="\DZ\structures\residential\sheds\shed_w3.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_W4_Kit: MD_Large_Kit
	{
		displayName="W4 Wooden Shed kit";
	};
	class Land_MD_Shed_W4: MD_OpenableBase
	{		
		scope=2;
		displayName="W4 Wooden Shed";
		model="\DZ\structures\residential\sheds\shed_w4.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Shed_W5_Kit: MD_Large_Kit
	{
		displayName="W5 Wooden Shed kit";
	};
	class Land_MD_Shed_W5: MD_OpenableBase
	{
		scope=2;
		displayName="W5 Wooden Shed";
		model="\DZ\structures\Residential\Sheds\Shed_W5.p3d";		
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

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

	//camonets - needs fabric/camonet kit
	
	class MD_CamonetShelter_Kit: MD_Kit
	{
		displayName="Camonet Shelter kit";
		descriptionShort="Deploys into a camonet shelter";
	};
	class Land_MD_CamonetShelter: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter";
		model="\DZ\gear\camping\camo_net_shelter.p3d";
	};
	class MD_CamonetShelter_BE_Kit: MD_Kit
	{
		displayName="Camonet Shelter BE kit";
		descriptionShort="Deploys into a camonet shelter, big east variant";
	};
	class Land_MD_CamonetShelter_BE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter BE";
		model="\DZ\structures\military\improvised\mil_camonet_big_east.p3d";
	};
	class MD_CamonetShelter_BN_Kit: MD_Kit
	{
		displayName="Camonet Shelter BN kit";
		descriptionShort="Deploys into a camonet shelter, big nato variant";
	};
	class Land_MD_CamonetShelter_BN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter BN";
		model="\DZ\structures\military\improvised\mil_camonet_big_nato.p3d";
	};
	class MD_CamonetShelter_RE_Kit: MD_Kit
	{
		displayName="Camonet Shelter RE kit";
		descriptionShort="Deploys into a camonet shelter, roof east variant";
	};
	class Land_MD_CamonetShelter_RE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter RE";
		model="\DZ\structures\military\improvised\mil_camonet_roof_east.p3d";
	};
	class MD_CamonetShelter_RN_Kit: MD_Kit
	{
		displayName="Camonet Shelter RN kit";
		descriptionShort="Deploys into a camonet shelter, roof nato variant";
	};
	class Land_MD_CamonetShelter_RN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter RN";
		model="\DZ\structures\military\improvised\mil_camonet_roof_nato.p3d";
	};
	class MD_CamonetShelter_SE_Kit: MD_Kit
	{
		displayName="Camonet Shelter SE kit";
		descriptionShort="Deploys into a camonet shelter, side east variant";
	};
	class Land_MD_CamonetShelter_SE: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter SE";
		model="\DZ\structures\military\improvised\mil_camonet_side_east.p3d";
	};
	class MD_CamonetShelter_SN_Kit: MD_Kit
	{
		displayName="Camonet Shelter SN kit";
		descriptionShort="Deploys into a camonet shelter, side nato variant";
	};
	class Land_MD_CamonetShelter_SN: MD_Item
	{
		scope=2;
		displayName="Camonet Shelter SN";
		model="\DZ\structures\military\improvised\mil_camonet_side_nato.p3d";
	};

};