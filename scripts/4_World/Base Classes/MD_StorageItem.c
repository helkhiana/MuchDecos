class MD_StorageItem : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return IsInvEmptyMD();
    }
    
    override bool CanPutIntoHands(EntityAI parent)
	{
		return IsInvEmptyMD();		
    }
    
    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);        
    }
    
    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);        
    }

    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
    }
};