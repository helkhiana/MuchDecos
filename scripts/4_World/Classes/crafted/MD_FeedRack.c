class MD_FeedRack_Kit : MD_Item_Kit
{
    override string Get_MDItemName()
	{
		return "MD_FeedRack";
	} 
	
	override vector Get_MDItemPos()
	{
		return "0 0.70 0";
	}

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -1, false, false);
		recipeVals.SetIngredientTwo(0, -1, -4, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 6,	-1);
        recipeVals.SetIngredientItemOne("MetalPlate");
        recipeVals.SetIngredientItemTwo("Firewood");
		recipeVals.SetName("Craft Animal Feed Rack");
		recipeVals.SetResult("MD_FeedRack_Kit");  
        return recipeVals;
    }
}

class MD_FeedRack : MD_Item
{	
	override void Base_Destroy()
	{
		GetGame().ObjectDelete( this );
	} 

    override string Get_KitName()
	{
		return "MD_FeedRack_Kit";
	}   
}