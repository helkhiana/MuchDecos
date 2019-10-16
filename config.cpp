class CfgPatches
{
    class MuchDecos
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

class CfgMods
{
    class MuchDecos
    {
        dir="MuchDecos";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MuchDecos";
        credits = "";
        author = "helkhiana";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";
        
        dependencies[] = {"Game", "World", "Mission"};
        
        class defs
        {
			class gameScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/5_Mission"};
			};
		};
        
    };
};


class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WoodenCrate;
	
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
	class MD_NewsStand2: MD_Item
	{		
		scope=2;
		displayName="News stand";
		descriptionShort="A chair";
		model="\DZ\structures\residential\stores\city_stand_news2.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
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

	class MD_CraftedItemBase: Inventory_Base
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

	class MD_Workbench: MD_CraftedItemBase
	{		
		scope=2;
		displayName="Workbench";
		descriptionShort="Workbench used to craft various items.";
		model="\DZ\structures\furniture\various\workbench_dz.p3d";
		itemSize[]={11,5};		
		itemBehaviour=0;
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Firewood",
			"WoodenStick",
			"Material_Nails",
			"Material_WoodenPlanks",
			"Material_L1_WoodenPlanks",
			"Material_L2_WoodenLogs",
			"Material_L1_WoodenLogs",
			"Material_MetalSheets",
			"MetalWire",
			"Material_MetalWire",
			"Wall_Barbedwire_1",
			"Wall_Barbedwire_2",			
			"Stones",
			"Body",
			"Headgear"
		};
		class GUIInventoryAttachmentsProps
		{
			class WoodMaterials
			{
				name="Wood Materials";
				description="";
				attachmentSlots[]=
				{
					"Firewood",
					"WoodenStick",
					"Material_Nails",
					"Material_WoodenPlanks",
					"Material_L1_WoodenPlanks",
					"Material_L2_WoodenLogs",
					"Material_L1_WoodenLogs"
				};
				icon="cat_common_cargo";
				view_index=1;
			};
			class MetalMaterials
			{
				name="Metal Materials";
				description="";
				attachmentSlots[]=
				{
					"Material_MetalSheets",
					"MetalWire",
					"Material_MetalWire",
					"Wall_Barbedwire_1",
					"Wall_Barbedwire_2"
				};
				icon="cat_common_cargo";
				view_index=4;
			};
			class OtherMaterials
			{
				name="Other Materials";
				description="";
				attachmentSlots[]=
				{
					"Stones",
					"Body",
					"Headgear"
				};
				icon="cat_common_cargo";
				view_index=3;
			};
		};
	};

	class MD_Scarecrow: MD_CraftedItemBase
	{		
		scope=2;
		displayName="Scarecrow";
		descriptionShort="A scarecrow to scare those pesty crows.";
		model="\DZ\structures\residential\misc\misc_boogieman.p3d";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class BookDeadSouls;
	class MD_Crafting_Book: BookDeadSouls
	{
		scope=2;
		title="Basic Crafting Guide";
		author="Captain Hel";
		simulation="inventoryItem";
		displayName="Basic Crafting Guide";
		descriptionShort="Your crafting guide. With this you can craft many items at the MD Workbench.";
		model="\DZ\gear\books\Book_kniga.p3d";
		itemSize[]={1,2};
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\book_crafting_guide_texture.paa"
		};
		hiddenSelections[]=
		{
			"camoGround"
		};	
	};
};