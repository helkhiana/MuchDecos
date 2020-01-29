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
        return IsInvEmpty();
    }
    
     override bool CanPutIntoHands(EntityAI parent)
	{
		return IsInvEmpty();
		
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
};