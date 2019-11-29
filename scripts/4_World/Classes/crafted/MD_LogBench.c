class MD_LogBench : MD_Item_Kit
{	
	override string Get_MDItemName()
	{
		return "MD_LogBench";
	}
    override vector Get_MDItemPos()
	{
		return "0 0.2 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
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