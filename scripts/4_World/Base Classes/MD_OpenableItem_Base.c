class MD_OpenableItem_Base : Container_Base
{
	private bool m_IsLocked = false;
	protected ref OpenableBehaviour m_Openable;
	
	void MD_OpenableItem_Base()
	{
		m_Openable = new OpenableBehaviour(false);

		RegisterNetSyncVariableBool("m_Openable.m_IsOpened");
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsPlaceSound");
	}
	
	override void EEInit()
	{
		super.EEInit();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Open()
	{
		m_Openable.Open();		
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		SoundSynchRemote();
		UpdateVisualState();
        SoundPlay();
	}

	override void Close()
	{
		m_Openable.Close();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		SoundSynchRemote();
		UpdateVisualState();
        SoundPlay();
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
		UpdateVisualState();
	}
	
	void SoundPlay()
	{		
        EffectSound sound = SEffectManager.PlaySoundOnObject( "DoorWoodTowerOpen_SoundSet", this, 0.1, 0.1, false );
		sound.SetSoundAutodestroy( true );
	}

    void Base_Destroy()
	{
		//delete object
		GetGame().ObjectDelete( this );
	}

    string Get_KitName()
	{
		return "MD_Item_Kit";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        }
        return false;
    }
    override bool CanPutIntoHands( EntityAI parent )
    {
        if( !super.CanPutIntoHands( parent ) )
        {
            return false;
        } 
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

 /*    override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached( item, slot_name );

        if ( item.IsKindOf ( "CamoNet" ) ) 
        {
            SetAnimationPhase( "Camonet", 0 );                
        }
        if (AliceBag_ColorBase.Cast(item))
        {
            HideSelection("MD_OpenableItem_Basebag");
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
                
        if ( item.IsKindOf ( "CamoNet" ) ) 
        {
            SetAnimationPhase( "Camonet", 1 );
        }
        if (AliceBag_ColorBase.Cast(item))
        {
            ShowSelection("MD_OpenableItem_Basebag");
        }
    } */
	
    bool IsLocked()
	{
		CombinationLock combination_lock = GetCombinationLock();
		if ( combination_lock && combination_lock.IsLocked() )
		{
			return true;
		}
		
		return false;
	}
		
	CombinationLock GetCombinationLock()
	{
		CombinationLock combination_lock = CombinationLock.Cast(FindAttachmentBySlotName("Att_CombinationLock"));
		return combination_lock;
	}

    override bool CanDisplayAttachmentSlot(string slot_name)
	{		
		return true;
	}



	override void SetActions()
	{
		super.SetActions();
	
		AddAction(ActionMdDialCombinationLock);
		AddAction(ActionMdNextCombinationLock);
        AddAction(ActionCloseMd_Item);
        AddAction(ActionOpenMd_Item);
	}
};