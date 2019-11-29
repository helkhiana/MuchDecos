class MD_LeatherSofaNew_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_LeatherSofaNew";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -8, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 8,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlanks");
        recipeVals.SetIngredientItemTwo("TannedLeather");
		recipeVals.SetName("Craft Leather Sofa");
		recipeVals.SetResult("MD_LeatherSofaNew_Kit");  
        return recipeVals;
    } 
};

class MD_LeatherSofaNew : MD_Item
{
    override string Get_KitName()
	{
		return "MD_LeatherSofaNew_Kit";
	}   
};