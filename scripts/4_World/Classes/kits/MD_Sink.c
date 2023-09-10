class MD_Sink_Kit : MD_Item_Kit
{
	override string Get_ItemNameMD()
	{
		return "MD_Sink";
	} 

	override vector Get_ItemPlacingPosMD()
	{
		return  "0 0.75 0";
	}  
};

class MD_Sink : MD_Item
{
	override bool IsWell()
	{
		return GetWaterSourceObjectType();
	}
	
	override EWaterSourceObjectType GetWaterSourceObjectType()
	{
		return EWaterSourceObjectType.WELL;
	}
	
	override float GetLiquidThroughputCoef()
	{
		return LIQUID_THROUGHPUT_WELL;
	}

	override string Get_KitNameMD()
	{
		return "MD_Sink_Kit";
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWashHandsWell);
		AddAction(ActionDrinkWellContinuous);
	}
};