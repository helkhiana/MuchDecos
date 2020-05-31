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

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(4);
		recipeVals.Set_minQuantityIngredientTwo(4);
        recipeVals.Set_addQuantOne(-4);
        recipeVals.Set_addQuantTwo(-4);
		array<string> ingredientsOne =
        {"WoodenLog"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Pile Large");
		recipeVals.SetResult("MD_WoodPileLarge_Kit");  
        return recipeVals;
    }
};

class MD_WoodPileLarge : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_WoodPileLarge_Kit";
	}   
};