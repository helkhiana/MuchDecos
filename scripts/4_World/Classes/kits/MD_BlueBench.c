class MD_BlueBench_Kit : MD_Item_Kit
{	
	override string Get_ItemNameMD()
	{
		return "MD_BlueBench";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.45 0";
	}  
};

class MD_BlueBench : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_BlueBench_Kit";
	}
};