class ActionDialMD_PadlockCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 0.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
}

class ActionDialMD_Padlock: ActionContinuousBase
{
	void ActionDialMD_Padlock()
	{
		m_CallbackClass = ActionDialMD_PadlockCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNone;
		m_ConditionItem = new CCINonRuined;
	}
	
	override bool HasProneException()
	{
		return true;
	}
	
	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		string combination_lock_text;
		
		if ( player )
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();
			combination_lock_text = construction_action_data.MDGetDialNumberText();
		}		
		
		return "#dial_combination_lock" + " " + combination_lock_text;
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		if ( item.IsInherited( MD_Padlock ) )
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();
			construction_action_data.MDSetLock( MD_Padlock.Cast( item ) );
	
			return true;
		}
		
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		MD_Padlock md_padlock =  construction_action_data.GetMD_Padlock();
		md_padlock.MDDialNextNumber( construction_action_data.MDGetDialIndex() );
	}
}
class ActionNextMD_PadlockDial: ActionSingleUseBase
{
	void ActionNextMD_PadlockDial()
	{
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem		= new CCINonRuined;
		m_ConditionTarget 	= new CCTNone;
	}

	override bool HasTarget()
	{
		return false;
	}
	
	override bool IsInstant()
	{
		return true;
	}
	
	override bool RemoveForceTargetAfterUse()
	{
		return false;
	}
	
	
	override string GetText()
	{
		return "Next dial";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited( MD_Padlock ) )
		{
			ConstructionActionData construction_action_data = player.GetConstructionActionData();
			construction_action_data.MDSetLock( MD_Padlock.Cast( item ) );

			return true;
		}
		
		return false;
	}

	override void Start( ActionData action_data )
	{
		super.Start( action_data );
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		construction_action_data.MDSetNextLockDial();
	}
	
	override void OnStartServer( ActionData action_data )
	{
		MD_Padlock md_padlock = MD_Padlock.Cast( action_data.m_MainItem );
		md_padlock.SoundLockChangeDial();
	}
	
	override void OnStartClient( ActionData action_data )
	{
		MD_Padlock md_padlock = MD_Padlock.Cast( action_data.m_MainItem );
		md_padlock.SoundLockChangeDial();
	}
}