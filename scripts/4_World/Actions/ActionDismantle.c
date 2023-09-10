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
		return "Dismantle";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject )
		{	
			ItemBase md_item = ItemBase.Cast( targetObject );
			if(md_item){
				if(!md_item.IsInvEmptyMD()) return false;
				if(md_item.IsMDWallOrGate() && !md_item.IsMDFacingPlayer(player)) return false;
				if (md_item.IsInherited(MD_Item) || md_item.IsInherited(MD_OpenableItem_Base) || md_item.IsKindOf("MD_Power_Transformer"))
				{
					MD_OpenableItem_Base openableItem = MD_OpenableItem_Base.Cast(targetObject);
					if(openableItem && openableItem.IsLocked()) return false;
					
					return true;            
				}
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		vector pos = action_data.m_Player.GetPosition();
		string name = "";
		ItemBase myItem = ItemBase.Cast( action_data.m_Target.GetObject() );
		if(myItem)
		{
			name = myItem.Get_KitNameMD();
			myItem.Delete();
		}
		//add damage to tool
		action_data.m_MainItem.DecreaseHealth( 5, false );
		
		//return materials			
		GetGame().CreateObjectEx(name, pos, ECE_PLACE_ON_SURFACE);
	}	
}