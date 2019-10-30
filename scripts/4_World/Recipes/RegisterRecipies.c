modded class PluginRecipesManager 
{

 	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodTable_Indoor_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_One.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Two.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Three.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Four.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_GraveCross_Five.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_FeedRack_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileLarge_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileSmall_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodPileMossy_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodReserve_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_DogHouse_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodBlock.GetRecipeValues()));
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_Workbench_Kit.GetRecipeValues()));
	}			
}