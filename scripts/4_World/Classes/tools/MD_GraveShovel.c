class MD_GraveShovel : FieldShovel
{
    override bool CanMakeMD_Grave()
    {
        return true;
    }
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDigGrave);
        RemoveAction(ActionDigGardenPlot);
        RemoveAction(ActionDigGardenPlot);//removing twice cause its registered twice for some damn reason
        RemoveAction(ActionDigWorms);
    }
};