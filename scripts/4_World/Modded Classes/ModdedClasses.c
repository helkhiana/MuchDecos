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
	
    string Get_KitName()
	{
		return "MD_Item_Kit";
	} 

    bool CanMakeMD_Grave()
    {
        return false;
    }
};