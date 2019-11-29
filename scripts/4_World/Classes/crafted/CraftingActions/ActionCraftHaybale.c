class ActionCraftHaybaleCB : ActionContinuousBaseCB
{
	PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( UATimeSpent.DEFAULT_CONSTRUCT );
	}
};

class ActionCraftHaybale: ActionContinuousBase
{
	void ActionCraftHaybale()
	{
		m_CallbackClass = ActionCraftHaybaleCB;
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
			return "Craft Haybale";
		}
		
		return "";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		MD_Workbench md_workbench = MD_Workbench.Cast( targetObject );
		if ( targetObject )
		{
			if ( md_workbench && md_workbench.HasWoodMaterials(1,3,0,0) )
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
			md_workbench.RemoveWoodMaterials(1,3,0,0);
		}		
	}
}