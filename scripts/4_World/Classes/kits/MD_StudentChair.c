class MD_StudentChair_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_StudentChair";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}  
};


class MD_StudentChair : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_StudentChair_Kit";
	}
};