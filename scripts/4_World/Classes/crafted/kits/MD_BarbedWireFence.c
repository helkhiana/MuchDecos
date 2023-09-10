class MD_BarbedWireFence_Kit : MD_Item_Kit
{
    override string Get_ItemNameMD()
	{
		return "MD_BarbedWireFence";
	} 
	
	override vector Get_ItemPlacingPosMD()
	{
		return "0 0.60 0";
	}	

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(1);
        recipeVals.Set_destroyOne(true);
        recipeVals.Set_destroyTwo(true);
		array<string> ingredientsOne =
        {"BarbedWire"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"MetalWire"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Barbed Wire Fence");
		recipeVals.SetResult("MD_BarbedWireFence_Kit");  
        return recipeVals;
    }
};


class MD_BarbedWireFence : MD_Item
{
    override string Get_KitNameMD()
	{
		return "MD_BarbedWireFence_Kit";
	}   
};