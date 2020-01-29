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
	string Get_KitName()
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
	
	// Generator is working
	override void OnWorkStart()
	{
	}

	// Turn off when this runs out of fuel
	override void OnWorkStop()
	{
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{			
			// particle
			if (m_Smoke)
				delete m_Smoke;
			
			// Fuel meter
			UpdateFuelMeter();
		}
	}
};