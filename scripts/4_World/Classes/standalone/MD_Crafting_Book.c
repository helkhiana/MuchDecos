class MD_Crafting_Book : ItemBase
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return true;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        return true;
    }

    override void SetActions()
    {
        super.SetActions();        
        AddAction(ActionCraftScarecrow);
        AddAction(ActionCraftHaybale);
    }
}