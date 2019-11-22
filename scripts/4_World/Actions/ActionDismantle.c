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
			if ( md_item.IsInherited(MD_Item) || md_item.IsInherited(MD_OpenableItem_Base))
			{
                return true;            
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		vector pos = action_data.m_Player.GetPosition();
		string name = "";
		MD_Item myItem = MD_Item.Cast( action_data.m_Target.GetObject() );
		if(myItem)
		{
			name = myItem.Get_KitName();
			myItem.Base_Destroy();
		}

		MD_OpenableItem_Base openable_Base = MD_OpenableItem_Base.Cast( action_data.m_Target.GetObject() );
		if(openable_Base)
		{
			name = openable_Base.Get_KitName();
			openable_Base.Base_Destroy();
		}
		
		//add damage to tool
		action_data.m_MainItem.DecreaseHealth( UADamageApplied.DISMANTLE, false );
		
		//return materials			
		ItemBase.Cast( GetGame().CreateObject(name, pos) );
		return;	
	}
	
}