class ActionSitChair: ActionInteractBase
{
	private Transport m_transport;
	private int       m_crewIdx;


	void ActionSitChair()
	{
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = "GetInDriver";
	}


	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Sit";
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override bool HasProgress()
	{
		return false;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			ItemBase md_item = ItemBase.Cast( targetObject );
            if ( md_item.IsInherited(MD_KitchenChair) )
			{
                return true;            
			}
		}
		return false;
	}

	override void Start( ActionData action_data )
	{
		super.Start( action_data );
        vector itemPos = action_data.m_Target.GetObject().GetPosition();        
        action_data.m_Player.SetPosition(itemPos);
        //action_data.m_Player.GetSymptomManager().PlayAnimation(DayZPlayerConstants.VEHICLESEAT_CODRIVER);
        action_data.m_Player.GetItemAccessor().HideItemInHands(true);       
        
	}

	override bool CanBeUsedInRestrain()
	{
		return true;
	}
	
	override void OnUpdate(ActionData action_data)
	{

		if(action_data.m_State == UA_START)
		{
			if( !action_data.m_Player.GetCommand_Vehicle().IsGettingIn() )
			{
				End(action_data);
			}
		}
	}
};
