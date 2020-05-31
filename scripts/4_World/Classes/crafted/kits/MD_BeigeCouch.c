class MD_BeigeCouch_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_BeigeCouch";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.Set_minQuantityIngredientOne(3);
		recipeVals.Set_minQuantityIngredientTwo(8);
        recipeVals.Set_addQuantOne(-3);
        recipeVals.Set_addQuantTwo(-8);
		array<string> ingredientsOne =
        {"WoodenPlank"};
        recipeVals.SetIngredientItemOne(ingredientsOne);
        array<string> ingredientsTwo =
        {"TannedLeather"};
        recipeVals.SetIngredientItemTwo(ingredientsTwo);
		recipeVals.SetName("Craft Beige Couch");
		recipeVals.SetResult("MD_BeigeCouch_Kit");  
        return recipeVals;
    } 
};

class MD_BeigeCouch : MD_Item
{
    override string Get_MDKitName()
	{
		return "MD_BeigeCouch_Kit";
	}   
};