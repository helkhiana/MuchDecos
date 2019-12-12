class MD_LeatherSofaOld_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_LeatherSofaOld";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.4 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(2);
		recipeVals.Set_minQuantityIngredientTwo(8);
        recipeVals.Set_addQuantOne(-2);
        recipeVals.Set_addQuantTwo(-8);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"TannedLeather"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Old Leather Sofa");
		recipeVals.SetResult("MD_LeatherSofaOld_Kit");  
        return recipeVals;
    } 
};

class MD_LeatherSofaOld : MD_Item
{
    override string Get_KitName()
	{
		return "MD_LeatherSofaOld_Kit";
	}   
};