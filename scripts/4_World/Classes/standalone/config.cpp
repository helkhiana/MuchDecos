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
	class MD_Kit;
	class MD_Large_Kit;
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
			"\MuchDecos\data\book\book_crafting_guide_texture.paa"
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

	class HouseNoDestruct;
	class MD_Grave: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures\specific\cemeteries\cemetery_grave4.p3d";
		storageCategory=1;
		lootCategory="Crafted";
		useEntityHierarchy="true";
		slopeTolerance=0.30000001;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={10,10,10};
		hologramMaterial="tile";
		hologramMaterialPath="dz\gear\cultivation\data";
	};

	class MD_Small_WoodBox: MD_Kit
	{
		
		displayName="Small Wooden Box";
		descriptionShort="Small box used to transport goods.";
		model="\MuchDecos\data\kitbox\kitbox_small.p3d";
		itemSize[]={8,6};
		physLayer="item_large";	
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_Large_WoodBox: MD_Large_Kit
	{
		
		displayName="Large Wooden Box";
		descriptionShort="Large box used to transport goods.";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";	
		itemSize[]={8,6};
		physLayer="item_large";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
};