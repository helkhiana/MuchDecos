class MD_Sunshade_Kit : MD_Item_Kit
{	
	override string Get_ItemNameMD()
	{
		return "MD_Sunshade";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 1.2 0";
	}  
};


class MD_Sunshade : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_Sunshade_Kit";
	}
};