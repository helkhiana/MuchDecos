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
		recipeVals.SetIngredientOne(0, -1, 0, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, -1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1,  3,	-1);
        recipeVals.SetIngredientItemOne("WoodAxe");
        recipeVals.SetIngredientItemTwo("WoodenLog");
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