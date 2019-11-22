class ActionDialMD_PadlockOnMD_OpenableItem_BaseCB : ActionContinuousBaseCB
{
	private const float REPEAT_AFTER_SEC = 0.5;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousRepeat(REPEAT_AFTER_SEC);
	}
}

class ActionDialMD_PadlockOnMD_OpenableItem_Base: ActionContinuousBase
{
	void ActionDialMD_PadlockOnMD_OpenableItem_Base()
	{
		m_CallbackClass = ActionDialMD_PadlockOnMD_OpenableItem_BaseCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONMOD_OPENITEM;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINotPresent;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}
	
	override bool HasProneException()
	{
		return true;
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

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if ( targetObject && targetObject.CanUseConstruction() )
		{
			MD_OpenableItem_Base baseItem = MD_OpenableItem_Base.Cast( targetObject );
			
			if ( baseItem && baseItem.IsLocked() && baseItem.GetAttachmentByType(MD_Padlock) )
			{
					ConstructionActionData construction_action_data = player.GetConstructionActionData();
					construction_action_data.MDSetLock( baseItem.GetMD_Padlock() );
					
					return true;
			}
		}
		
		return false;
	}

	override void OnFinishProgressServer( ActionData action_data )
	{	
		//set dialed number
		ConstructionActionData construction_action_data = action_data.m_Player.GetConstructionActionData();
		MD_Padlock md_padlock =  construction_action_data.GetMD_Padlock();
		md_padlock.MDDialNextNumber( construction_action_data.MDGetDialIndex() );		

		//check for unlock state
		if ( !md_padlock.IsLockedOnMD_OpenableItem_Base() )
		{
			EntityAI target_entity = EntityAI.Cast( action_data.m_Target.GetObject() );
			md_padlock.ServerUnlock( action_data.m_Player, target_entity );
		}
	}
}