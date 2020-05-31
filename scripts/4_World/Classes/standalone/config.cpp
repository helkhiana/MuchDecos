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
	class Pot;
	class CanisterGasoline;
	
	class MD_Crafting_Book: BookDeadSouls
	{
		scope=2;
		title="Basic Crafting Guide";
		author="Captain Hel";
		simulation="inventoryItem";
		displayName="Basic Crafting Guide";
		descriptionShort="With this you can craft items at the MD Craftbench. Hold book in hand and look at the craftbench to get the prompt to craft. The prompt will show only if you have the required items inside the craftbench.";
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

	class MD_Box_C: MD_Item
	{		
		scope=2;
		displayName="Box";
		descriptionShort="A box that's pretty sturdy";
		model="\DZ\structures\furniture\decoration\box_c\box_c.p3d";		
		itemSize[]={10,7};
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
		itemBehaviour=2;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_GreenTrashCan: MD_TrashCan
	{		
		scope=2;
		displayName="Green Trash can";
		model="\DZ\structures_bliss\residential\Misc\Garbage_Bin2.p3d";
	};
	class MD_StaticTrashCan : MD_TrashCan {};

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
		scope=2;
		displayName="Small Wooden Box";
		descriptionShort="Small box used to transport goods.";
		model="\MuchDecos\data\kitbox\kitbox_small.p3d";
		itemSize[]={7,5};
		physLayer="item_large";	
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,20};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_Large_WoodBox: MD_Large_Kit
	{
		scope=2;
		displayName="Large Wooden Box";
		descriptionShort="Large box used to transport goods.";
		model="\MuchDecos\data\kitbox\kitbox_large.p3d";	
		itemSize[]={5,9};
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

	class MD_Flat_WoodBox: MD_Kit
	{
		scope=2;
		displayName="Flat Wooden Box";
		descriptionShort="Flat box used to transport goods.";
		model="\MuchDecos\data\kitbox\kitbox_flat.p3d";	
		itemSize[]={5,3};
		physLayer="item_large";		
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\kitbox\woodbox_o.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_Bucket: Pot
	{
		scope=2;
		displayName="Bucket";
		descriptionShort="Bucket used to store water or other small items. Can be used to craft flower pots.";
		model="\DZ\structures\furniture\decoration\bucket\bucket.p3d";
	};

	class CombinationLock;
	class MD_Padlock: CombinationLock
	{
		scope=2;
		displayName="Padlock";
		descriptionShort="Used to lock MuchDecos buildings";
		model="\MuchDecos\data\padlock\Padlock.p3d";
		hiddenSelectionsTextures[]=
		{
			"\MuchDecos\data\padlock\Padlock_co.paa"
		};
		hiddenSelections[]=
		{
			"zbytek"
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

	class MD_WhiteFridge: MD_Item
	{		
		scope=2;
		displayName="White Fridge";
		descriptionShort="A fridge to store your food";
		model="\DZ\structures\furniture\kitchen\fridge\fridge.p3d";
		itemSize[]={10,15};
		itemBehaviour=0;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_DoubleFridge: MD_Item
	{		
		scope=2;
		displayName="Fridge";
		descriptionShort="A fridge to store your food";
		model="\DZ\gear\containers\fridge.p3d";
		itemSize[]={10,10};
		itemBehaviour=0;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_DarkWoodenCrate: MD_Item
	{		
		scope=2;
		displayName="Dark Wooden Crate";
		descriptionShort="";
		model="\DZ\structures_bliss\residential\Misc\Misc_WoodenCrate.p3d";
		itemSize[]={10,10};
		itemBehaviour=0;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	
	class MD_DeskGlobe: MD_Item
	{		
		scope=2;
		displayName="Desk Globe";
		descriptionShort="";
		model="\DZ\structures\furniture\school_equipment\desk_globe.p3d";
		itemSize[]={5,5};
		itemBehaviour=2;
		physLayer="item_small";
	};
	
	class MD_TV: MD_Item
	{		
		scope=2;
		displayName="TV";
		descriptionShort="";
		model="\DZ\structures\furniture\eletrical_appliances\tv_a\tv_a.p3d";
		itemSize[]={5,5};
		itemBehaviour=2;
		physLayer="item_small";
	};
	class MD_OldRadio: MD_Item
	{		
		scope=2;
		displayName="Old Radio";
		descriptionShort="";
		model="\DZ\structures\furniture\eletrical_appliances\radio_b\radio_b.p3d";
		itemSize[]={5,5};
		itemBehaviour=1;
		physLayer="item_small";
	};
	class MD_Radio: MD_Item
	{		
		scope=2;
		displayName="Radio";
		descriptionShort="";
		model="\dz\gear\radio\unitra_wilga.p3d";
		itemSize[]={5,5};
		itemBehaviour=1;
		physLayer="item_small";
	};
	class MD_Scale: MD_Item
	{		
		scope=2;
		displayName="Scale";
		descriptionShort="";
		model="\DZ\structures\furniture\generalstore\scale.p3d";
		itemSize[]={5,5};
		itemBehaviour=2;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	class MD_Cashier: MD_Item
	{		
		scope=2;
		displayName="Cashier";
		descriptionShort="";
		model="\DZ\structures\furniture\generalstore\cashier.p3d";
		itemSize[]={5,5};
		itemBehaviour=2;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={5,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	class MD_Clock: MD_Item
	{		
		scope=2;
		displayName="Clock";
		descriptionShort="";
		model="\DZ\structures\furniture\school_equipment\school_clock.p3d";
		itemSize[]={5,5};
		itemBehaviour=1;
		physLayer="item_small";
	};	
	class MD_ClothBag: MD_Item
	{		
		scope=2;
		displayName="Cloth Bag";
		descriptionShort="";
		model="\DZ\structures\furniture\various\bag_dz.p3d";
		itemSize[]={5,5};
		itemBehaviour=2;
		physLayer="item_small";
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Canister: CanisterGasoline
	{
		scope=2;
		displayName="Canister";
		descriptionShort="A plastic canister, useful for storing large volumes of gasoline or other liquids.";		
		model="\DZ\structures\furniture\various\canister_dz.p3d";
		varQuantityInit=10000;
		varQuantityMin=0;
		varQuantityMax=10000;
	};
};