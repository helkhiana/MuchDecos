class MD_TrashCan : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_TrashCan";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  

	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
      override bool CanPutIntoHands(EntityAI parent)
	{
		return IsInvEmpty();		
    }
    
    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }

    override void SetActions()
    {
        super.SetActions();        
        AddAction(ActionTrash);
    }
};

class MD_StaticTrashCan : MD_TrashCan
{
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
      override bool CanPutIntoHands(EntityAI parent)
	{
		return false;		
    }
};

class MD_GreenTrashCan : MD_TrashCan
{
	override string Get_MDItemName()
	{
		return "MD_GreenTrashCan";
	} 

	override vector Get_MDItemPos()
	{
		return "0 0.5 0";
	}  
};