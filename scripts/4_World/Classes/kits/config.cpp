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
	class MD_Lumber_Kit;

	class MD_Item: Inventory_Base
	{
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="This can be dismantled with a screwdriver.";
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
		descriptionShort="Wooden box used to transport small items. Place to deploy item inside. The items can be dismantled with a screwdriver after deployment.";
		model="\MuchDecos\data\kitbox\kitbox_small.p3d";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		itemSize[]={6,6};
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
	
	class MD_Large_Kit: MD_Kit
	{
		displayName="Large Kit";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";
		descriptionShort="Large wooden box used to transport enormous items. Place to deploy item inside. The items can be dismantled with a  screwdriver after deployment.";		
		itemSize[]={4,8};
	};
	
	class MD_Tent_Kit: MD_Kit
	{
		displayName="Tent Kit";
		model="\MuchDecos\data\kitbox\kitbox_tents.p3d";
		descriptionShort="Place to deploy item inside. The items can be dismantled by screwdriver after deployment.";		
		itemSize[]={8,2};
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
			energyUsagePerSecond=0.05;
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

	//camonets - needs fabric/camonet kit
	
	class MD_CamonetShelter_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_BE_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_BN_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_RE_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_RN_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_SE_Kit: MD_Lumber_Kit
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
	class MD_CamonetShelter_SN_Kit: MD_Lumber_Kit
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