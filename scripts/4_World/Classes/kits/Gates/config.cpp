class CfgPatches
{
    class MuchDecos_Kits_Gates
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
	class MD_Lumber_Kit;
	class MD_OpenableBase;

	class MD_Double_Gate: MD_OpenableBase
	{
		scope=2;
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
			};
		};
		class AnimationSources
		{
			class DoorsTwin1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};	
	};
    
	class MD_Fence_Gate_Forest_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Gate Forest Fence Kit";
	};
	class MD_Fence_Gate_Forest: MD_OpenableBase
	{
		scope=2;
		displayName="Gate Forest Fence";
		model="\DZ\structures_bliss\Walls\Wall_FenForest_Gate.p3d";
	};

	class MD_Gate_TallSliding_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Tall Sliding Gate Kit";
	};
	class MD_Gate_TallSliding: MD_OpenableBase
	{
		scope=2;
		displayName="Tall Sliding Gate";
		model="\DZ\structures_bliss\Walls\Wall_Gate_IndCnc4.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.1;
				soundOpen="doorMetalSlideLargeOpen";
				soundClose="doorMetalSlideLargeClose";
				soundLocked="doorMetalSlideLargeRattle";
				soundOpenABit="doorMetalSlideLargeOpenABit";
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
		};			
	};

	class MD_Gate_ShortSliding_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Short Sliding Gate Kit";
	};
	class MD_Gate_ShortSliding: MD_Gate_TallSliding
	{
		scope=2;
		displayName="Short Sliding Gate";
		model="\DZ\structures_bliss\Walls\Wall_Gate_IndCnc4_Low.p3d";			
	};
	
	class MD_Double_Gate_MetalFence1_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Metal Gate 1 Kit";
	};

	class MD_Double_Gate_MetalFence1: MD_Double_Gate
	{
		scope=2;
		displayName="Metal Gate 1";
		model="\DZ\structures_bliss\Walls\Wall_Gate_Fen3.p3d";	
	};

	class MD_Double_Gate_MetalFence2_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Metal Gate 2 Kit";
	};

	class MD_Double_Gate_MetalFence2: MD_Double_Gate
	{
		scope=2;
		displayName="Metal Gate 2";
		model="\DZ\structures_bliss\Walls\Wall_Gate_Fen4.p3d";
	};
	
	class MD_Double_Gate_TinFence1_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Tin Gate 1 Kit";
	};

	class MD_Double_Gate_TinFence1: MD_Double_Gate
	{
		scope=2;
		displayName="Tin Gate 1";
		model="\DZ\structures_bliss\Walls\Wall_Gate_Tin6_1.p3d";
	};
	
	class MD_Double_Gate_TinFence2_Kit: MD_Lumber_Kit
	{
		scope=2;
		displayName="Tin Gate 2 Kit";
	};

	class MD_Double_Gate_TinFence2: MD_Double_Gate
	{
		scope=2;
		displayName="Tin Gate 2";
		model="\DZ\structures_bliss\Walls\Wall_Gate_Tin6_2.p3d";
	};
};