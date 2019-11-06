class MD_BarbedWireFence_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_BarbedWireFence";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.60 0";
	}
}


class MD_BarbedWireFence : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_BarbedWireFence_Kit";
	}   
}