class CfgPatches
{
    class MuchDecos_Kits_Beds
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
	class MD_Item;
	class MD_Kit;
    
	class MD_Bed_Double_Kit: MD_Kit
	{
		scope=2;
		displayName="Double Bed kit";
	};
	class MD_Bed_Double: MD_Item
	{		
		scope=2;
		displayName="Double Bed";
		model="\DZ\structures\furniture\chairs\postel_manz_kov\postel_manz_kov.p3d";
	};
	class MD_Bed_Folding_Kit: MD_Kit
	{
		scope=2;
		displayName="Folding Bed kit";
	};
	class MD_Bed_Folding: MD_Item
	{		
		scope=2;
		displayName="Folding Bed";
		model="\DZ\structures\furniture\folding_beds\foldingbed_open.p3d";	
	};	
	class MD_Bed_Wood_Kit: MD_Kit
	{
		scope=2;
		displayName="Wood Bed kit";
	};
	class MD_Bed_Wood: MD_Item
	{		
		scope=2;
		displayName="Wood Bed";
		model="\DZ\structures\furniture\chairs\postel_panelak1\postel_panelak1.p3d";
	};
};