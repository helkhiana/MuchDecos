class MD_PostBoxWall_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_PostBoxWall";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};

class MD_PostBoxWall : MD_Item
{
	override string Get_KitName()
	{
		return "MD_PostBoxWall_Kit";
	}
};