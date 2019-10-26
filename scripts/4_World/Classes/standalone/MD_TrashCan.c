class MD_TrashCan : MD_Item_Kit
{
    void MD_TrashCan()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override string Get_MDItemName()
	{
		return "MD_TrashCan";
	} 

	override vector Get_Get_MDItemPos()
	{
		return "0 0.5 0";
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

	override bool IsHeavyBehaviour() 
    {
        return true;
    }
    
    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }

    void DestroyCargo()
	{
		int item_count = 0;
        ItemBase item;
        
        if ( GetInventory().GetCargo() != NULL )
        {
            item_count = GetInventory().GetCargo().GetItemCount();    
            Print("Cargo count is: " + item_count);
            for ( int i = 1; i <= item_count; i++ )
            {
                Print("Attempting to empty: " + i + "/" + item_count);
                //item = ItemBase.Cast(GetInventory().GetCargoFromIndex(i));
                Class.CastTo(item, GetInventory().GetCargo().GetItem(i));
                if(item){
                    Print("Attempting to empty trash item:" + item.GetType());
                    InventoryLocation myInvLoc = new InventoryLocation;
                    if (item.GetInventory().GetCurrentInventoryLocation(myInvLoc))
                    {
                        GetGame().ObjectDelete(myInvLoc.GetItem());
						GetInventory().ClearInventoryReservation( item, myInvLoc );
                    }
                }
            }
        }
	}	

     override void SetActions()
    {
        super.SetActions();        
        AddAction(ActionTrash);
    }
}