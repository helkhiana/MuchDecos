class MD_LogBench : MD_StorageItem
{	
    override vector Get_ItemPlacingPosMD()
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