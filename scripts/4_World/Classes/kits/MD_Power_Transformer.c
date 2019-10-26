class MD_Power_Transformer_Kit : MD_Item_Kit
{		
	void MD_Power_Transformer_Kit()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
	}
	
	override string Get_MDItemName()
	{
		return "MD_Power_Transformer";
	} 

	override vector Get_Get_MDItemPos()
	{
		return "0 1.75 0";
	}  
}

class MD_Power_Transformer_Holo : MD_Item_Holo
{}

class MD_Power_Transformer : PowerGenerator
{	
	void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}  

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
	
	override void SetActions()
	{
		super.SetActions();
	}
}

