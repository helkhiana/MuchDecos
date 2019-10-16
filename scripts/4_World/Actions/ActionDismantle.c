class ActionDismantleCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_DECONSTRUCT / 2 );
	}
};

class ActionDismantle: ActionContinuousBase
{
	void ActionDismantle()
	{
		m_CallbackClass = ActionDismantleCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}

	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( player )
		{
			return "Dismantle";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject )
		{
			ItemBase md_item = ItemBase.Cast( targetObject );
            if ( md_item.IsInherited(MD_Sink) )
			{
                return false;            
			}
			if ( md_item.IsInherited(MD_Item) )
			{
                return true;            
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		vector pos = action_data.m_Player.GetPosition();
		MD_Item myItem = MD_Item.Cast( action_data.m_Target.GetObject() );
		if (myItem)
		{
			//delete existing model
			myItem.Base_Destroy();
			
			//add damage to tool
			action_data.m_MainItem.DecreaseHealth( UADamageApplied.DISMANTLE, false );
			
			//return materials			
			ItemBase.Cast( GetGame().CreateObject(myItem.Get_KitName(), pos) );
			return;
		}		
	}
	
}