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
		recipeVals.SetIngredientOne(0, -1, -1, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 3,	-1);
        recipeVals.SetIngredientItemOne("MetalPlate");
        recipeVals.SetIngredientItemTwo("WoodenPlank");
		recipeVals.SetName("Craft Dog House kit");
		recipeVals.SetResult("MD_DogHouse_Kit");  
        return recipeVals;
    }
};

class MD_DogHouse : MD_Item
{
    override string Get_KitName()
	{
		return "MD_DogHouse_Kit";
	}   
};