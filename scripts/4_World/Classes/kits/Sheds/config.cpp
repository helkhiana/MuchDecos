class CfgPatches
{
    class MuchDecos_Kits_Sheds
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
	class MD_Large_Kit;
	class MD_OpenableBase;

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
};