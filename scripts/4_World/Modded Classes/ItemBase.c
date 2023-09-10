modded class ItemBase
{	
	vector Get_ItemPlacingPosMD()
	{
		return "0 0 0";
	}

	vector Get_ItemPlacingOrientationMD()
	{		
		return "0 0 0";
	}
	
	string Get_ItemNameMD()
	{
		return GetType().Substring(0,GetType().Length() - 4);
	}

	string Get_KitNameMD()
	{
		return GetType() + "_Kit";
	}

	bool IsInvEmptyMD()
	{   
		if (GetNumberOfItems() < 1 &&  GetInventory().AttachmentCount() < 1)
		{
			return true;
		}
		return false;
	}

	bool IsMDWallOrGate()
	{
		return false;
	}
	
	bool IsMDFacingPlayer( PlayerBase player)
	{
		vector fence_pos = GetPosition();
		vector player_pos = player.GetPosition();
		vector ref_dir = GetDirection();
		
		//vector fence_player_dir = player_pos - fence_pos;
		vector fence_player_dir = player.GetDirection();
		fence_player_dir.Normalize();
		fence_player_dir[1] = 0; 	//ignore height
		
		ref_dir.Normalize();
		ref_dir[1] = 0;			//ignore height
		
		if ( ref_dir.Length() != 0 )
		{
			float angle = Math.Acos( fence_player_dir * ref_dir );
			
			if ( angle >= 1.3 )
			{
				return true;
			}
		}
		
		return false;
	}
};