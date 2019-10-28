class ActionCraftHayStackCB : ActionContinuousBaseCB
{
	PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT ); // use +,-,*,/ to adjust the time.  //BBP_BASE_TIME
	}
};

class ActionCraftHayStack: ActionContinuousBase
{
	void ActionCraftHayStack()
	{
		m_CallbackClass = ActionCraftHayStackCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
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
			return "Craft Haystack";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		MD_Workbench md_workbench = MD_Workbench.Cast( targetObject );
		if ( targetObject )
		{
			if ( md_workbench && md_workbench.HasWoodMaterials(2,4,0,0) && md_workbench.HasOtherMaterials(10,0,0) )
			{
				return true;
			}
		}
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data ) 
	{
		//target existing model
        MD_Workbench md_workbench = MD_Workbench.Cast(action_data.m_Target.GetObject());
		
		if ( md_workbench ) 
		{
			vector position = md_workbench.GetPosition();
			vector orientation = md_workbench.GetOrientation();
			Object myItem = GetGame().CreateObject("MD_Haybale", md_workbench.GetPosition(), false );
			myItem.SetPosition( position + "0 1 0" );
			myItem.SetOrientation( orientation + "0 -90 90" );
            //delete attachments
			md_workbench.RemoveWoodMaterials(2,4,0,0);
			md_workbench.RemoveOtherMaterials(10,0,0);
		}		
	}
}