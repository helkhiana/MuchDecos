class MD_PostBox_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_PostBox";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}  
};

class MD_PostBox : MD_Item
{
	override string Get_KitName()
	{
		return "MD_PostBox_Kit";
	}
};