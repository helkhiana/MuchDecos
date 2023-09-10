//Parent MD_SlumShelter_Kit
class MD_SlumShelter_Kit : MD_Item_Kit
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 2 0";
	}
};
//MD_SlumShelter_LightBlue_Kit
class MD_SlumShelter_LightBlue_Kit : MD_SlumShelter_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_SlumShelter_LightBlue";
	}
};
class MD_SlumShelter_LightBlue : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_SlumShelter_LightBlue_Kit";
	}
};
//MD_SlumShelter_DarkBlue_Kit
class MD_SlumShelter_DarkBlue_Kit : MD_SlumShelter_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_SlumShelter_DarkBlue";
	}
};
class MD_SlumShelter_DarkBlue : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_SlumShelter_DarkBlue_Kit";
	}
};
//MD_SlumShelter_ThinBlue_Kit
class MD_SlumShelter_ThinBlue_Kit : MD_SlumShelter_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_SlumShelter_ThinBlue";
	}
};
class MD_SlumShelter_ThinBlue : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_SlumShelter_ThinBlue_Kit";
	}
};
//MD_SlumShelter_SmallMetal_Kit
class MD_SlumShelter_SmallMetal_Kit : MD_SlumShelter_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_SlumShelter_SmallMetal";
	}
};
class MD_SlumShelter_SmallMetal : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_SlumShelter_SmallMetal_Kit";
	}
};
//MD_SlumShelter_LargeMetal_Kit
class MD_SlumShelter_LargeMetal_Kit : MD_SlumShelter_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_SlumShelter_LargeMetal";
	}
};
class MD_SlumShelter_LargeMetal : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_SlumShelter_LargeMetal_Kit";
	}
};