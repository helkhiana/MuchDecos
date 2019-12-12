class MD_WoodPileSmall_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WoodPileSmall";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.30 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {  
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientTwo(3);
        recipeVals.Set_addHealthOne(-5);
        recipeVals.Set_addQuantTwo(-3);
		array<string> ingredientsOne =
        {"WoodAxe", "FirefighterAxe"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"WoodenLog"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Wood Pile Small");
		recipeVals.SetResult("MD_WoodPileSmall_Kit");  
        return recipeVals;
    }
};

class MD_WoodPileSmall : MD_Item
{
    override string Get_KitName()
	{
		return "MD_WoodPileSmall_Kit";
	}   
};