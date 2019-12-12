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