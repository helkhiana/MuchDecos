class MD_BlueBench_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_BlueBench";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.5 0";
	}  
};


class MD_BlueBench : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_BlueBench_Kit";
	}
};