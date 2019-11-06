class ActionHouseWaterSlotCB : ActionContinuousBaseCB
{
	private const float QUANTITY_USED_PER_SEC = 150;
	
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousHouseWaterSlot(QUANTITY_USED_PER_SEC);
	}
};

class ActionHouseWaterSlot: ActionContinuousBase
{
	void ActionHouseWaterSlot()
	{
		m_CallbackClass = ActionHouseWaterSlotCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_EMPTY_VESSEL;
		m_FullBody = true;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}
	
	override string GetText()
	{
		return "#water_slot";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{		
		if (item.GetQuantity() == 0)
			return false;
		
		// Get the liquid
		int liquid_type	= item.GetLiquidType();

		if (liquid_type != LIQUID_WATER)
		{
			return false; //  Forbid watering of plants with gasoline and other fluids
		}
		
		MD_GardenBase targetObject = MD_GardenBase.Cast( target.GetObject() );			
		if( targetObject )
		{	
			MD_Slot slot = targetObject.GetSlotBySelectionIndex( target.GetComponentIndex() );
			
			if ( slot  &&  !slot.GetPlant()  &&  slot.CanBeWatered() )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
        Print("Got shitall");
		return false;
	}
};