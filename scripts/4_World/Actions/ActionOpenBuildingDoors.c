class ActionOpenBuildingDoors: ActionInteractBase
{
	void ActionOpenBuildingDoors()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		MD_OpenableItem_Base building;
		if(Class.CastTo(building, target.GetObject()))
		{
			if(!IsInReach(player, target, UAMaxDistances.DEFAULT) || building.IsLocked() ) return false;			
			
			return !building.IsOpen();
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		MD_OpenableItem_Base building;
		if( Class.CastTo(building, action_data.m_Target.GetObject()) )
		{
			building.Open();
		}
	}
};