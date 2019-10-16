class MD_Haybale : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_Haybale";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.75 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    }    
}