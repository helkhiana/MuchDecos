class MD_OpenableItem_Base : ItemBase
{
	private bool m_IsLocked = false;
	protected ref OpenableBehaviour m_Openable;

	string GetOpenSoundSet(){ return "DoorWoodTowerOpen_SoundSet"; }
	string GetCloseSoundSet(){ return "DoorWoodTowerOpen_SoundSet"; }

	override bool IsBuilding()
	{
		return true;
	}
	
	void MD_OpenableItem_Base()
	{
		m_Openable = new OpenableBehaviour(false);
	}

	override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached( item, slot_name );
        
        if ( item.IsInherited( MD_Padlock ) )
        {
            MD_Padlock md_padlock = MD_Padlock.Cast( item );
            md_padlock.Lock( this );
            Close();
        }
    }

	override void Open()
	{
		m_Openable.Open();
		SoundSynchRemote();
		UpdateVisualState();
	}

	override void Close()
	{
		m_Openable.Close();
		SoundSynchRemote();
		UpdateVisualState();		
	}

	override bool IsOpen()
	{
		return m_Openable.IsOpened();
	}

	protected void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);
        }
        else
        {
            SetAnimationPhase("Doors1",0);
        }
    }

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
		{
			OpenSoundPlay();
		}
		
		if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
		{
			CloseSoundPlay();
		}
		
		UpdateVisualState();
	}
	
	void OpenSoundPlay()
	{		
        EffectSound sound = SEffectManager.PlaySound( GetOpenSoundSet() , GetPosition() );
		sound.SetSoundAutodestroy( true );
	}

	void CloseSoundPlay()
	{		
        EffectSound sound = SEffectManager.PlaySound( GetCloseSoundSet() , GetPosition() );
		sound.SetSoundAutodestroy( true );
	}	

    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        return false;
    }
	override bool CanReceiveItemIntoCargo(EntityAI cargo)
	{
		return IsOpen();
	}
	
	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen();
	}

    override bool CanDisplayAttachmentSlot(string slot_name)
	{		
		return true;
	}

	bool IsLocked()
    {
        MD_Padlock padlock = GetMD_Padlock();
        if ( padlock && padlock.IsLockedOnMD_OpenableItem_Base() )
        {            
            return true;
        }
        
        return false;
    }

	MD_Padlock GetMD_Padlock()
    {
        MD_Padlock padlock = MD_Padlock.Cast( FindAttachmentBySlotName( "Att_CombinationLock" ) );
        return padlock;
    }
	
    override bool CanUseConstruction()
    {
        return true;
    }
	
	override bool DisableVicinityIcon()
	{
		return true;
	}
	
	override bool IsInventoryVisible()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		vector playerPos = player.GetPosition();
		float distanceToLocation = vector.Distance(playerPos, this.GetPosition());
		return distanceToLocation < 3.0 && !IsLocked();
	}

	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionOpenBuildingDoors);
        AddAction(ActionCloseBuildingDoors);
        AddAction(ActionDialMD_PadlockOnMD_OpenableItem_Base);
        AddAction(ActionNextMD_PadlockDialOnMD_OpenableItem_Base);
	}
};


class MD_OpenableDoorWoodSmall : MD_OpenableItem_Base
{
	override string GetOpenSoundSet(){ return "MD_doorWoodSmallOpen_SoundSet"; }
	override string GetCloseSoundSet(){ return "MD_doorWoodSmallClose_SoundSet"; }
};