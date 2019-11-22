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
        RemoveAction(ActionDigWorms);
    }
};