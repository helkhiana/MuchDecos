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

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -3, false, false);
		recipeVals.SetIngredientTwo(0, -1, -8, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 3,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 8,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("TannedLeather");
		recipeVals.SetName("Craft Beige Couch");
		recipeVals.SetResult("MD_BeigeCouch_Kit");  
        return recipeVals;
    } 
};

class MD_BeigeCouch : MD_Item
{
    override string Get_KitName()
	{
		return "MD_BeigeCouch_Kit";
	}   
};