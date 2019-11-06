class ActionFertilizeHouseSlotCB : ActionContinuousBaseCB
{
	private const float QUANTITY_USED_PER_SEC = 10;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousFertilizeHouseSlot(QUANTITY_USED_PER_SEC);
	}
};

class ActionFertilizeHouseSlot: ActionContinuousBase
{
	void ActionFertilizeHouseSlot()
	{
		m_CallbackClass = ActionFertilizeHouseSlotCB;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionTarget = new CCTDummy;
		m_ConditionItem = new CCINonRuined;
	}
		
	override string GetText()
	{
		return "#fertilize_slot";
	}


	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		MD_GardenBase garden_base;
		if ( Class.CastTo(garden_base, target.GetObject()))
		{
			if ( garden_base.NeedsFertilization( target.GetComponentIndex() ) )
			{
				if ( item.GetQuantity() > 0 )
				{
					return true;
				}
			}
		}
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		// The functionality is in the Execute event of this user action's component.
	}
};