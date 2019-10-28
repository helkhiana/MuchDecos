modded class Slot
{
    private MD_GardenBase m_MD_Garden;
    
    void SetMDGarden(MD_GardenBase garden)
	{
		m_MD_Garden = garden;
	}
	
	MD_GardenBase GetMDGarden()
	{
		return m_MD_Garden;
	}


    override void GiveWater( float consumed_quantity )
	{
		bool needed_water = NeedsWater();
		m_WaterQuantity += consumed_quantity;
		
		if (m_WaterQuantity > GetWaterMax())
			m_WaterQuantity = GetWaterMax();
		
		if (m_WaterQuantity < 0)
			m_WaterQuantity = 0;
		
		if ( !NeedsWater() )
		{
			if ( !GetPlant() )
			{
				if ( GetSeed() )
				{
					GetGarden().CreatePlant(this);
                    GetMDGarden().CreatePlant(this);
				}
				
				// if there is no seed then do not create plant. Plant will be created when the seed is inserted into watered slot.
			}
		}
		
		if ( needed_water != NeedsWater() )
		{
			GetGarden().UpdateSlotTexture( GetSlotIndex() );
			GetMDGarden().UpdateSlotTexture( GetSlotIndex() );
		}
	}

};