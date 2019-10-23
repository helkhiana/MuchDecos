class MD_WoodTable_Indoor : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_WoodTable_Indoor";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0 0";
	}

    override bool CanPutInCargo( EntityAI parent )
    {
        if( !super.CanPutInCargo(parent) ) {return false;}        
        if ( GetNumberOfItems() == 0)
        {
            return false;
        }
        return false;
    } 

    static MD_CraftedItemBaseRecipeValues GetRecipeValues()
    {   
        MD_CraftedItemBaseRecipeValues recipeVals = new MD_CraftedItemBaseRecipeValues;
		recipeVals.SetIngredientOne(0, -1, -20, false, false);
		recipeVals.SetIngredientTwo(0, -1, -50, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 20,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 50,	-1);
        recipeVals.SetIngredientItemOne("WoodenPlank");
        recipeVals.SetIngredientItemTwo("Nail");
		recipeVals.SetName("Craft Wood Table Indoor");
		recipeVals.SetResult("MD_WoodTable_Indoor");  
        return recipeVals;
    } 
}