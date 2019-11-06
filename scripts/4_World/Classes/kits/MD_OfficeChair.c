class MD_OfficeChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_OfficeChair";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}  
};


class MD_OfficeChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_OfficeChair_Kit";
	}
};