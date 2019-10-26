class ActionTrashCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT / 2 );
	}
};

class ActionTrash: ActionContinuousBase
{
	void ActionTrash()
	{
        m_CallbackClass = ActionTrashCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
        return "Throw away trash";
	}
    
    override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
        MD_TrashCan md_item = MD_TrashCan.Cast( targetObject );
        if ( md_item && !player.GetItemInHands())
        {    
            return true;            
        }
		return false;
	}
		
	override void OnStartServer( ActionData action_data )
	{
		MD_TrashCan myItem = MD_TrashCan.Cast( action_data.m_Target.GetObject() );
		if (myItem)
		{			
			if ( myItem.GetInventory().GetCargo() != NULL )
			{
				int item_count = myItem.GetInventory().GetCargo().GetItemCount();	
				while(item_count > 0)
				{
					CargoBase cargo = myItem.GetInventory().GetCargo();
					ItemBase item = ItemBase.Cast(cargo.GetItem(0));	
					if(item){
						InventoryLocation myInvLoc = new InventoryLocation;
						if (item.GetInventory().GetCurrentInventoryLocation(myInvLoc))
						{
							GetGame().ObjectDelete(myInvLoc.GetItem());
						}
					}					
					item_count = myItem.GetInventory().GetCargo().GetItemCount();
				}
			}
		}	
	}
};