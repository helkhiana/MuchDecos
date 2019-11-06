class ActionHousePlantSeed: ActionSingleUseBase
{
	void ActionHousePlantSeed()
	{
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DROPITEM_HANDS;
		m_FullBody = false;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#plant_seed";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		MD_GardenBase targetObject = MD_GardenBase.Cast( target.GetObject() );			
		if( targetObject  )
		{	
			if ( item != NULL && item.GetQuantity() > 0 && targetObject.CanPlantSeed( target.GetComponentIndex() ) )
			{
				return true;
			}
		}
		
		return false;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		Process(action_data);
	}
	
	override void OnExecuteClient( ActionData action_data )
	{
		//Process(action_data);
	}

	void Process( ActionData action_data )
	{
		Object targetObject = action_data.m_Target.GetObject();
		
		if ( targetObject != NULL && targetObject.IsInherited(MD_GardenBase) )
		{
			MD_GardenBase garden_base = MD_GardenBase.Cast( targetObject );
			MD_Slot slot = garden_base.GetSlotBySelectionIndex(action_data.m_Target.GetComponentIndex());
			int slot_ID = slot.GetSlotId();
			
			ItemBase seed_IB = ItemBase.Cast( action_data.m_MainItem );
			
			seed_IB.SplitIntoStackMax( garden_base, slot_ID, action_data.m_Player );
		}

		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
	}
};