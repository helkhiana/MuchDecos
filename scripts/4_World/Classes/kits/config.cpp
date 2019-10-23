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
		itemSize[]={5,3};
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
		displayName="A Kit";		
		descriptionShort="Dismantle with screwdriver.";
		model="\MuchDecos\data\amazonbox\amazonboxkit.p3d";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\amazonbox\textures\amazonboxkit.paa"
		};
		itemSize[]={8,6};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
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

	class MD_NewsStand2_Kit: MD_Kit
	{
		displayName="News stand green";
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
	class MD_Shed_M4_Kit: MD_Kit
	{
		displayName="Metal Shed";
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

};