class MD_Box_C : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_Box_C";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.3 0";
	}  

	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
     override bool CanPutIntoHands(EntityAI parent)
	{
		if( !super.CanPutIntoHands( parent ) )
		{
			return false;
		}
		return IsInvEmpty();
		
    }

    bool IsInvEmpty()
	{   
		if (GetNumberOfItems() < 1 )
		{
			return true;
		}
		return false;
	}
};