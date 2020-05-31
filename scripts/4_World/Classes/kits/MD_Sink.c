class MD_Sink_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_Sink";
	} 

	override vector Get_MDItemPos()
	{
		return  "0 0.75 0";
	}  
};

class MD_Sink : MD_Item
{
	bool IsWell()
	{
		return true;
	}
	
	override string Get_MDKitName()
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