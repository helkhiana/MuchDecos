class MD_LogBench : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_LogBench";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.2 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -8, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 8,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 3,	-1);
        recipeVals.SetIngredientItemOne("Nail");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Log Bench");
		recipeVals.SetResult("MD_LogBench");  
        return recipeVals;
    } 
};