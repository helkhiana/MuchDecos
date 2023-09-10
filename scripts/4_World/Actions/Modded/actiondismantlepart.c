modded class ActionDismantlePart: ActionContinuousBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( player.IsPlacingLocal() )
			return false;
		
		//Action not allowed if player has broken legs
		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
			return false;

		if(target.GetObject() && target.GetObject().IsAnyInherited({MD_Item, MD_OpenableItem_Base, MD_StorageItem}))	
		{
			return false;
		}

		return super.ActionCondition(player, target, item);
	}	
}