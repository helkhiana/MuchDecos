class MD_TentChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_TentChair";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};


class MD_TentChair : MD_Item
{
	override string Get_KitName()
	{
		return "MD_TentChair_Kit";
	}
};