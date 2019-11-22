modded class ConstructionActionData
{
	MD_Padlock			 			m_MD_Padlock;
	int 						m_MDDialIndex;

	int MDGetDialIndex()
	{
		return m_MDDialIndex;
	}
	
	MD_Padlock GetMD_Padlock()
	{
		return m_MD_Padlock;
	}
	
	void MDSetLock( MD_Padlock op_lock )
	{
		m_MD_Padlock = MD_Padlock.Cast( op_lock );
	}
		
	void MDSetNextLockDial()
	{
		m_MD_Padlock.MDSetNextDial( m_MDDialIndex );
	}

	string MDGetDialNumberText()
	{
		string dial_text;
		string combination_text = m_MD_Padlock.m_MDCombination.ToString();
		
		//insert zeros to dials with 0 value
		int length_diff = m_MD_Padlock.m_MD_PadlockDigits - combination_text.Length();
		for ( int i = 0; i < length_diff; ++i )
		{
			combination_text = "0" + combination_text;
		}
		
		//assemble the whole combination with selected part
		for ( int j = 0; j < m_MD_Padlock.m_MD_PadlockDigits; ++j )
		{
			if ( j == m_MDDialIndex )
			{
				dial_text += string.Format( "[%1]", combination_text.Get( j ) );
			}
			else
			{
				dial_text += string.Format( " %1 ", combination_text.Get( j ) );
			}
		}
		
		return dial_text;
	}
}