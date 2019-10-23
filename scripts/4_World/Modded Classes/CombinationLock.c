modded class CombinationLock
{    
	
	override bool IsLockedOnGate()
	{
		Fence fence = Fence.Cast( GetHierarchyParent() );
		MD_OpenableItem_Base openableItem = MD_OpenableItem_Base.Cast( GetHierarchyParent() );
		if ( fence || openableItem)
		{
			if ( IsLocked() )
			{
				return true;
			}
		}
		
		return false;
	}


}