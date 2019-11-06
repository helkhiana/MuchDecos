class MD_RedChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_RedChair";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}  
};


class MD_RedChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_RedChair_Kit";
	}
};