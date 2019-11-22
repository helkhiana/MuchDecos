class MD_Padlock extends ItemBase
{
	int m_MD_PadlockDigits;					//how many digits will the combination contain
	int m_MDCombination;					//actual combination that is dialed on lock
	int m_MDCombinationLocked;			//combination that was dialed on lock before the shuffle
	
	bool m_MDIsLockAttached;				//for storing to db
	
	//client only
	int m_MDCombinationClient;
	bool m_MDIsLockAttachedClient;
	
	//Sounds
	//build
	const string SOUND_LOCK_OPEN 			= "combinationlock_open_SoundSet";
	const string SOUND_LOCK_CLOSE 			= "combinationlock_close_SoundSet";
	const string SOUND_LOCK_CHANGE_NUMBER	= "combinationlock_changenumber_SoundSet";
	const string SOUND_LOCK_CHANGE_DIAL		= "combinationlock_changedial_SoundSet";

	protected EffectSound m_Sound;
		
	void MD_Padlock()
	{
		SetBaseLockValues();
		
		//synchronized variables
		int combination_text = Math.Pow( 10, m_MD_PadlockDigits );
		
		RegisterNetSyncVariableInt( "m_MDCombination", 		0, combination_text - 1 );
		RegisterNetSyncVariableInt( "m_MDCombinationLocked", 	0, combination_text - 1 );
		RegisterNetSyncVariableBool( "m_MDIsLockAttached" );	
	}
	
	protected void SetBaseLockValues()
	{
		//set lock init values
		m_MD_PadlockDigits 			= 4;
		m_MDCombination		 	= 1111;
		m_MDCombinationLocked 	= 9999;		
	}

	override void EEInit()
	{
		super.EEInit();
		UpdateVisuals();
	}	

	void SetLockAttachedState( bool state )
	{
		m_MDIsLockAttached = state;		
		Synchronize();
	}
	
	bool IsLockAttached()
	{
		return m_MDIsLockAttached;
	}	

	void UpdateVisuals()
	{
		if ( IsLockedOnMD_OpenableItem_Base() )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( HideItem, 		0, false );
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( ShowAttached, 	0, false );
		}
		else
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( ShowItem, 		0, false );
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( HideAttached, 	0, false );
		}
	}
	
	void UpdateSound()
	{
		if ( m_MDCombinationClient != m_MDCombination )
		{
			SoundLockChangeNumber();
		}

		if ( !m_MDIsLockAttachedClient && m_MDIsLockAttached )
		{
			SoundLockClose();
		}
		else if ( m_MDIsLockAttachedClient && !m_MDIsLockAttached )
		{
			SoundLockOpen();
		}
	}
	
	protected void ShowItem()
	{
		SetAnimationPhase( "Combination_Lock_Item", 0 );
		SetAnimationPhase( "Lock_Item_1", 			0 );
		SetAnimationPhase( "Lock_Item_2", 			0 );
	}
	
	protected void HideItem()
	{
		SetAnimationPhase( "Combination_Lock_Item", 1 );
		SetAnimationPhase( "Lock_Item_1", 			1 );
		SetAnimationPhase( "Lock_Item_2", 			1 );
	}
	
	protected void ShowAttached()
	{
		SetAnimationPhase( "Combination_Lock_Attached", 0 );
		SetAnimationPhase( "Lock_Attached_1", 			0 );
		SetAnimationPhase( "Lock_Attached_2", 			0 );
	}
	
	protected void HideAttached()
	{
		SetAnimationPhase( "Combination_Lock_Attached", 1 );
		SetAnimationPhase( "Lock_Attached_1", 			1 );
		SetAnimationPhase( "Lock_Attached_2", 			1 );
	}	
	// ---
	
	// --- EVENTS
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );
		
		//write data
		ctx.Write( m_MDCombination );
		ctx.Write( m_MDCombinationLocked );
		ctx.Write( m_MDIsLockAttached );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;

		if ( !ctx.Read( m_MDCombination ) )
		{
			m_MDCombination = 0;
			return false;
		}

		if ( !ctx.Read( m_MDCombinationLocked ) )
		{
			m_MDCombinationLocked = 0;
			return false;
		}

		if ( !ctx.Read( m_MDIsLockAttached ) )
		{
			m_MDIsLockAttached = false;
			return false;
		}
		
		return true;
	}
	
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();		

		m_MDIsLockAttached = false;
		
		MD_OpenableItem_Base itemBase = MD_OpenableItem_Base.Cast( GetHierarchyParent() );
		if ( itemBase )
		{
			m_MDIsLockAttached = itemBase.IsLocked();
			
			if ( m_MDIsLockAttached )
			{
				InventoryLocation inventory_location = new InventoryLocation;
				GetInventory().GetCurrentInventoryLocation( inventory_location );				
			}
		}
		Synchronize();
	}
	
	void Synchronize()
	{
		if ( GetGame().IsServer() )
		{
			SetSynchDirty();
			
			UpdateVisuals();
		}
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		UpdateVisuals();
		UpdateSound();
		m_MDCombinationClient = m_MDCombination;
		m_MDIsLockAttachedClient = m_MDIsLockAttached;	
	}
	
	void SetCombination( int combination )
	{
		m_MDCombination = combination;
		
		Synchronize();
	}
	
	void SetCombinationLocked( int combination )
	{
		m_MDCombinationLocked = combination;
		
		Synchronize();
	}
	
	int GetCombination()
	{
		return m_MDCombination;
	}
	
	void MDDialNextNumber( int dial_index )
	{
		string combination_text = m_MDCombination.ToString();
		string dialed_text;

		int length_diff = m_MD_PadlockDigits - combination_text.Length();
		for ( int i = 0; i < length_diff; ++i )
		{
			combination_text = "0" + combination_text;
		}
		
		for ( int j = 0; j < combination_text.Length(); ++j )
		{
			if ( j == dial_index )
			{
				int next_dialed_number = combination_text.Get( j ).ToInt() + 1;
				if ( next_dialed_number > 9 )
				{
					next_dialed_number = 0;
				}
				
				dialed_text += next_dialed_number.ToString();
			}
			else
			{
				dialed_text += combination_text.Get( j );
			}
		}
		
		SetCombination( dialed_text.ToInt() );
	}
	
	void MDSetNextDial( out int dial_index )
	{
		if ( m_MD_PadlockDigits > 1 )
		{
			if ( dial_index <= m_MD_PadlockDigits - 2 )
			{
				dial_index++;
			}
			else if ( dial_index >= m_MD_PadlockDigits >  - 1 )
			{
				dial_index = 0;
			}
		}
		else
		{
			dial_index = 0;
		}
	}	

	void Lock( EntityAI parent )
	{
		if ( !IsLockAttached() )
		{
			SetCombinationLocked( m_MDCombination );
			ShuffleLock();
			
			InventoryLocation inventory_location = new InventoryLocation;
			GetInventory().GetCurrentInventoryLocation( inventory_location );		
			SetLockAttachedState( true );
		}
	}
	
	void ServerUnlock( notnull EntityAI entity, EntityAI parent )
	{
		InventoryLocation inventory_location = new InventoryLocation;
		GetInventory().GetCurrentInventoryLocation( inventory_location )
		
		entity.ServerDropEntity( this );
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if ( GetGame().IsMultiplayer() )
        {
            player.ServerTakeEntityToHands(this);
        }else{
            player.LocalTakeEntityToHands(this);
        }

		SetLockAttachedState( false );
	}
		
	void ShuffleLock()
	{
		string combination_text = m_MDCombination.ToString();
		string shuffled_text;
		int length_diff = m_MD_PadlockDigits - combination_text.Length();

		for ( int i = 0; i < length_diff; ++i )
		{
			combination_text = "0" + combination_text;
		}

		for ( int j = 0; j < combination_text.Length(); ++j )
		{
			int dial_number = combination_text.Get( j ).ToInt();
			dial_number = ( dial_number + Math.RandomInt( 1, 9 ) ) % 10;
			shuffled_text = shuffled_text + dial_number.ToString();
		}
		
		SetCombination( shuffled_text.ToInt() );
	}
	
	bool IsLockedOnMD_OpenableItem_Base()
	{
		MD_OpenableItem_Base itemBase = MD_OpenableItem_Base.Cast( GetHierarchyParent() );
		if ( itemBase )
		{
			if ( m_MDCombination != m_MDCombinationLocked )
			{
				return true;
			}
		}
		
		return false;
	}

	protected void SoundLockOpen()
	{
		PlaySoundSet( m_Sound, SOUND_LOCK_OPEN, 0, 0 );
	}

	protected void SoundLockClose()
	{
		PlaySoundSet( m_Sound, SOUND_LOCK_CLOSE, 0, 0 );
	}
	
	void SoundLockChangeNumber()
	{
		PlaySoundSet( m_Sound, SOUND_LOCK_CHANGE_NUMBER, 0, 0 );
	}

	void SoundLockChangeDial()
	{
		PlaySoundSet( m_Sound, SOUND_LOCK_CHANGE_DIAL, 0, 0 );
	}	
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionNextMD_PadlockDial);
		AddAction(ActionDialMD_Padlock);
	}
}


