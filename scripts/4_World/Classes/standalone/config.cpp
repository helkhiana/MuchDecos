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
			"DZ_Structures"
        };
    };
};


class CfgVehicles
{
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