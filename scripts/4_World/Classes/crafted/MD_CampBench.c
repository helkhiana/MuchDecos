class MD_CampBench : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_CampBench";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.2 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -1, false, false);
		recipeVals.SetIngredientTwo(0, -1, -1, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 1,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("WoodenLog");
		recipeVals.SetName("Craft Camp Bench");
		recipeVals.SetResult("MD_CampBench");  
        return recipeVals;
    } 
};