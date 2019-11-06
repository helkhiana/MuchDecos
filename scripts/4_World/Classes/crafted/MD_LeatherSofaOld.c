class MD_LeatherSofaOld_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_LeatherSofaOld";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -8, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 8,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlanks");
        recipeVals.SetIngredientItemTwo("TannedLeather");
		recipeVals.SetName("Craft Old Leather Sofa");
		recipeVals.SetResult("MD_LeatherSofaOld_Kit");  
        return recipeVals;
    } 
}

class MD_LeatherSofaOld : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_LeatherSofaOld_Kit";
	}   
}