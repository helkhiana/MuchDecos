class MD_Sunshade_Kit : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_Sunshade";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.2 0";
	}  
};


class MD_Sunshade : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

	override string Get_KitName()
	{
		return "MD_Sunshade_Kit";
	}
};