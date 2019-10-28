class MD_OpenableItem_Base : Container_Base
{
	private bool m_IsLocked = false;
	protected ref OpenableBehaviour m_Openable;

	override bool IsBuilding()
	{
		return true;
	}

	override bool IsInventoryVisible()
	{
		return true;
	}
	
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
	}

	override void Open()
	{
		m_Openable.Open();
		SoundSynchRemote();
		UpdateVisualState();
        SoundPlay();
	}

	override void Close()
	{
		m_Openable.Close();
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

    override bool CanDisplayAttachmentSlot(string slot_name)
	{		
		return true;
	}

	override void OnPlacementStarted( Man player ) 
	{
		super.OnPlacementStarted( player );
		
		SetTakeable(true);
	}


	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionOpenBuildingDoors);
        AddAction(ActionCloseBuildingDoors);
	}
};