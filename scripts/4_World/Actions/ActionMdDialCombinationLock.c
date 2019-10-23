class ActionMdDialCombinationLockCB : ActionDialCombinationLockOnTargetCB
{
}

class ActionMdDialCombinationLock: ActionDialCombinationLockOnTarget
{
	void ActionDialCombinationLock()
	{
		m_CallbackClass = ActionMdDialCombinationLockCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject && targetObject.CanUseConstruction() )
		{
			MD_OpenableItem_Base md_item = MD_OpenableItem_Base.Cast( targetObject );
			
			if ( md_item && md_item.IsLocked() )
			{
                ConstructionActionData construction_action_data = player.GetConstructionActionData();
                construction_action_data.SetCombinationLock( md_item.GetCombinationLock() );
                
                return true;
			}
		}
		
		return false;
	}
}