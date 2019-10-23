class CfgPatches
{
    class MuchDecos_Craftables
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

	class MD_CraftedItemBase: Inventory_Base
	{
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		bounding="BSphere";
		overrideDrawArea="3.0";
		canBeDigged=0;
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
    
	class MD_Haybale: MD_CraftedItemBase
	{
		scope=2;
		displayName="Haybale";
		descriptionShort="A haybale to stash your things";
		model="\DZ\structures\industrial\misc\misc_haybale.p3d";
		weight=500;
		itemSize[]={10,7};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_WoodTable_Indoor: MD_CraftedItemBase
	{
		scope=2;
		displayName="Wood Table Indoor";
		descriptionShort="A camping wood table for indoor purposes.";
		model="\DZ\structures\residential\misc\misc_woodtable_indoor.p3d";
		weight=5000;
		itemSize[]={10,7};		
	};
};