modded class PluginRecipesManager 
{

 	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodTable_Indoor.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_One.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Two.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Three.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Four.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Five.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_FeedRack.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileLarge.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileSmall.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileMossy.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodReserve.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_DogHouse.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodBlock.GetRecipeValues()));
		RegisterRecipe(new CraftWorkbench);			
	}			
}