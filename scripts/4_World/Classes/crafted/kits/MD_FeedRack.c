class MD_FeedRack_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_FeedRack";
	} 
	
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.70 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(6);
        recipeVals.Set_addQuantOne(-1);
        recipeVals.Set_addQuantTwo(-6);
		array<string> ingredientsOne =
        {"MetalPlate"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"Firewood"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Animal Feed Rack");
		recipeVals.SetResult("MD_FeedRack_Kit");  
        return recipeVals;
    }
};

class MD_FeedRack : MD_Item
{
    override string Get_KitNameMD()
	{
		return "MD_FeedRack_Kit";
	}   
};