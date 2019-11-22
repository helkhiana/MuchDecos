class MD_WoodPileLarge_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WoodPileLarge";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.60 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -4, false, false);
		recipeVals.SetIngredientTwo(0, -1, -4, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 4,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  4,	-1);
        recipeVals.SetIngredientItemOne("WoodenLog");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Wood Pile Large");
		recipeVals.SetResult("MD_WoodPileLarge_Kit");  
        return recipeVals;
    }
};

class MD_WoodPileLarge : MD_Item
{
    override string Get_KitName()
	{
		return "MD_WoodPileLarge_Kit";
	}   
};