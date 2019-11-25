modded class Screwdriver
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDismantle);
    }
};

modded class ItemBase
{  	
	void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	}

    bool CanMakeMD_Grave()
    {
        return false;
    }
};