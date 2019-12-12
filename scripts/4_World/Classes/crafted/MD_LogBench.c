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
		recipeVals.Set_minQuantityIngredientOne(8);
		recipeVals.Set_minQuantityIngredientTwo(3);
        recipeVals.Set_addQuantOne(-8);
        recipeVals.Set_addQuantTwo(-3);
		array<string> ingredientsOne =
        {"Nail"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Log Bench");
		recipeVals.SetResult("MD_LogBench");  
        return recipeVals;
    } 
};