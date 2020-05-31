class MD_Power_Transformer_Kit : MD_Item_Kit
{
	override string Get_MDItemName()
	{
		return "MD_Power_Transformer";
	} 

	override vector Get_MDItemPos()
	{
		return "0 1.75 0";
	}  
};

class MD_Power_Transformer : PowerGenerator
{
	string Get_MDKitName()
	{
		return "MD_Power_Transformer_Kit";
	}
	
    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }
};