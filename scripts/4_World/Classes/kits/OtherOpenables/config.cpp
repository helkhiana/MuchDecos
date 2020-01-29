class CfgPatches
{
    class MuchDecos_Kits_OtherOpenables
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
	class MD_OpenableBase;
	class MD_Large_Kit;

	//Stores
	class MD_NewsStand1_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Red News Stand kit";
	};
	class Land_MD_NewsStand1: MD_OpenableBase
	{
		scope=2;
		displayName="Red News Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_news1.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_NewsStand2_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Green News Stand kit";
	};
	class Land_MD_NewsStand2: MD_OpenableBase
	{
		scope=2;
		displayName="Green News Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_news2.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_FastFoodStand_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Fast Food Stand kit";
	};
	class Land_MD_FastFoodStand: MD_OpenableBase
	{
		scope=2;
		displayName="Fast Food Stand";
		alignHologramToTerain=1;
		model="\DZ\structures\residential\stores\city_stand_fastfood.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};	
	class MD_GroceryStand_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Grocery Stand kit";
	};
	class Land_MD_GroceryStand: MD_OpenableBase
	{
		scope=2;
		displayName="Grocery Stand";
		model="\DZ\structures\Residential\Stores\City_Stand_Grocery.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	//Camp houses
	class MD_CampHouse_White_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="White Camp House kit";
	};
	class Land_MD_CampHouse_White: MD_OpenableBase
	{
		scope=2;
		displayName="White Camp House";
		model="\DZ\structures\specific\camps\camp_house_white.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_CampHouse_Brown_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Brown Camp House kit";
	};
	class Land_MD_CampHouse_Brown: MD_OpenableBase
	{
		scope=2;
		displayName="Brown Camp House";
		model="\DZ\structures\specific\camps\camp_house_brown.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_CampHouse_Red_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Red Camp House kit";
	};
	class Land_MD_CampHouse_Red: MD_OpenableBase
	{
		scope=2;
		displayName="Red Camp House";
		model="\DZ\structures\specific\camps\camp_house_red.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,50};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	//Caravans
	class MD_Caravan_WGreen_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Green Wood Caravan kit";
	};
	class Land_MD_Caravan_WGreen: MD_OpenableBase
	{
		scope=2;
		displayName="Green Wood Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_wgreen.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_WBrown_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Brown Wood Caravan kit";
	};
	class Land_MD_Caravan_WBrown: MD_OpenableBase
	{
		scope=2;
		displayName="Brown Wood Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_wbrown.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_MGreen_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Green Metal Caravan kit";
	};
	class Land_MD_Caravan_MGreen: MD_OpenableBase
	{
		scope=2;
		displayName="Green Metal Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_mgreen.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class MD_Caravan_MRust_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Rust Metal Caravan kit";
	};
	class Land_MD_Caravan_MRust: MD_OpenableBase
	{
		scope=2;
		displayName="Rust Metal Caravan";
		model="\DZ\structures\wrecks\vehicles\wreck_caravan_mrust.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,40};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

    

	class MD_Polytunnel_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Polytunnel kit";
	};

	class Land_MD_Polytunnel: MD_OpenableBase
	{
		scope=2;
		displayName="Polytunnel";
		descriptionShort="A polytunnel with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Polytunnel.p3d";		
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class MD_Greenhouse_Kit: MD_Large_Kit
	{
		scope=2;
		displayName="Greenhouse kit";
	};

	class Land_MD_Greenhouse: MD_OpenableBase
	{
		scope=2;
		displayName="Greenhouse";
		descriptionShort="A greenhouse with fertile soil";
		model="\DZ\structures\Residential\Misc\Misc_Greenhouse.p3d";
		class Cargo
		{
			itemsCargoSize[]={10,25};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};