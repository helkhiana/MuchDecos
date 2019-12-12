class MD_GraveShovel : ItemBase
{
    override bool CanMakeMD_Grave()
    {
        return true;
    }
    bool CanMakeDirtmound()
    {
        return false;
    }
    override bool CanMakeGardenplot()
	{
		return true;
	}
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDigGrave);
		AddAction(ActionTogglePlaceObject);
    }
};