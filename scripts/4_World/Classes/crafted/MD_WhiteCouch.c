class MD_WhiteCouch_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_WhiteCouch";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0 0";
	}

    static MD_ItemRecipeValues GetRecipeValues()
    {   
        MD_ItemRecipeValues recipeVals = new MD_ItemRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -2, false, false);
		recipeVals.SetIngredientTwo(0, -1, -8, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 2,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 8,	-1);
        recipeVals.SetIngredientItemOne("MetalPlate");
        recipeVals.SetIngredientItemTwo("TannedLeather");
		recipeVals.SetName("Craft White Couch");
		recipeVals.SetResult("MD_WhiteCouch_Kit");  
        return recipeVals;
    } 
};

class MD_WhiteCouch : MD_Item
{
    override string Get_KitName()
	{
		return "MD_WhiteCouch_Kit";
	}   
};