class MD_TrashCan : MD_StorageItem
{
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.5 0";
	}  

	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
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
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.5 0";
	}  
};