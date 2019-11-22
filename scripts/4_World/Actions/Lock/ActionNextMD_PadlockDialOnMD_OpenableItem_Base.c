class ActionNextMD_PadlockDialOnMD_OpenableItem_Base: ActionInteractBase
{
	void ActionNextMD_PadlockDialOnMD_OpenableItem_Base()
	{
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}	

	override string GetText()
	{
		return "#next_combination_lock_dial";
	}

	override bool IsInstant()
	{
		return true;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject && targetObject.CanUseConstruction() )
		{
			MD_OpenableItem_Base baseItem = MD_OpenableItem_Base.Cast( targetObject );
			
			if ( baseItem && baseItem.IsLocked() && !player.GetItemInHands() && baseItem.GetAttachmentByType(MD_Padlock) )
			{
				ConstructionActionData construction_action_data = player.GetConstructionActionData();
				construction_action_data.MDSetLock( baseItem.GetMD_Padlock() );
				
				return true;
			}
		}
		
		return false;
	}
	
	override void Start( ActionData action_data )
	{
		super.Start( action_data );
		
		//set next dial
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		construction_action_data.MDSetNextLockDial();
	}
	
	override void OnStartServer( ActionData action_data )
	{
		MD_OpenableItem_Base baseItem = MD_OpenableItem_Base.Cast( action_data.m_Target.GetObject() );
		if ( baseItem )
		{
			MD_Padlock md_padlock = baseItem.GetMD_Padlock();
			md_padlock.SoundLockChangeDial();			
		}
	}	
	
	override void OnStartClient( ActionData action_data )
	{
		MD_OpenableItem_Base baseItem = MD_OpenableItem_Base.Cast( action_data.m_Target.GetObject() );
		if ( baseItem )
		{
			MD_Padlock md_padlock = baseItem.GetMD_Padlock();
			md_padlock.SoundLockChangeDial();			
		}
	}	
}