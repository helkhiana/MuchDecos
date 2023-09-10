//Parent Shed
class MD_Shed_Kit : MD_Item_Kit {};
class MD_OpenableDoorMetalSmall : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorMetalSmallOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorMetalSmallClose_SoundSet"; }
};
//M1
class MD_Shed_M1_Kit : MD_Shed_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_Shed_M1";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.1 0";
	}
};
class Land_MD_Shed_M1 : MD_OpenableDoorMetalSmall
{
	override string Get_KitNameMD()
	{
		return "MD_Shed_M1_Kit";
	}
};
//M3
class MD_Shed_M3_Kit : MD_Shed_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_Shed_M3";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.2 0";
	}
};
class Land_MD_Shed_M3 : MD_OpenableDoorMetalSmall
{
	override string Get_KitNameMD()
	{
		return "MD_Shed_M3_Kit";
	}
};
//M4
class MD_Shed_M4_Kit : MD_Shed_Kit
{
	override string Get_ItemNameMD()
	{
		return "Land_MD_Shed_M4";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.1 0";
	}
};
class Land_MD_Shed_M4 : MD_OpenableDoorMetalSmall
{
	override string Get_KitNameMD()
	{
		return "MD_Shed_M4_Kit";
	}
};