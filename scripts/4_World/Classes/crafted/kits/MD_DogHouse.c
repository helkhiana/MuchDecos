class MD_DogHouse_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_DogHouse";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.90 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(1);
		recipeVals.Set_minQuantityIngredientTwo(3);
        recipeVals.Set_addQuantOne(-1);
        recipeVals.Set_addQuantTwo(-3);
		array<string> ingredientsOne =
        {"MetalPlate"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Dog House kit");
		recipeVals.SetResult("MD_DogHouse_Kit");  
        return recipeVals;
    }
};

class MD_DogHouse : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_DogHouse_Kit";
	}   
};