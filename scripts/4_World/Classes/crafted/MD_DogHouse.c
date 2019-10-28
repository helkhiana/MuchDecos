class MD_DogHouse : MD_CraftedItemBase
{	
	override string Get_MDCraftedItemName()
	{
		return "MD_DogHouse";
	}
    override vector Get_MDCraftedItemPos()
	{
		return "0 0.90 0";
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
		recipeVals.SetIngredientOne(0, -1, -1, false, false);
		recipeVals.SetIngredientTwo(0, -1, -3, false, false);
        recipeVals.SetMinMaxIngredientOne(-1, -1, 1,	-1);
        recipeVals.SetMinMaxIngredientTwo(-1, -1, 3,	-1);
        recipeVals.SetIngredientItemOne("MetalPlate");
        recipeVals.SetIngredientItemTwo("WoodenPlank");
		recipeVals.SetName("Craft Dog House");
		recipeVals.SetResult("MD_DogHouse");  
        return recipeVals;
    } 
}