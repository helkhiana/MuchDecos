class ActionMdNextCombinationLock: ActionNextCombinationLockDialOnTarget
{
	void ActionMdNextCombinationLock()
	{
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}	

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if (targetObject)
		{
			MD_OpenableItem_Base md_item = MD_OpenableItem_Base.Cast( targetObject );
			
			if ( md_item && md_item.IsLocked() && !player.GetItemInHands() )
			{
                ConstructionActionData construction_action_data = player.GetConstructionActionData();
                construction_action_data.SetCombinationLock( md_item.GetCombinationLock() );
                
                return true;
			}
		}
		
		return false;
	}
}