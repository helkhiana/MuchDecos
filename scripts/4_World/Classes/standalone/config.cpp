class CfgPatches
{
    class MuchDecos_Standalone
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
			"DZ_Structures",
			"MuchDecos_Kits"
        };
    };
};


class CfgVehicles
{
	class BookDeadSouls;
	class MD_Item;
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

	class MD_Box_C: MD_Item
	{		
		scope=2;
		displayName="Box";
		descriptionShort="A box that's pretty sturdy";
		model="\DZ\structures\furniture\decoration\box_c\box_c.p3d";		
		itemSize[]={11,30};
		physLayer="item_large";
		class Cargo
		{
			itemsCargoSize[]={10,7};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	

	class MD_TrashCan: MD_Item
	{		
		scope=2;
		displayName="Trash can";
		descriptionShort="Place items inside then throw away the trash to dispose of items.";
		model="\DZ\structures\residential\Misc\Garbage_Bin.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
};