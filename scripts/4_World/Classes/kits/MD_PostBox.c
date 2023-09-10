class MD_PostBox_Kit : MD_Item_Kit
{	
	override string Get_ItemNameMD()
	{
		return "MD_PostBox";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return "0 0 0";
	}  
};

class MD_PostBox : MD_Item
{
	override string Get_KitNameMD()
	{
		return "MD_PostBox_Kit";
	}
};