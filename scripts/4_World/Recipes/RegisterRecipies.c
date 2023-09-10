modded class PluginRecipesManager 
{

 	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		RegisterRecipe(new CraftMD_Item(MD_WoodTable_Indoor_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_GraveCross_One.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_GraveCross_Two.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_GraveCross_Three.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_GraveCross_Four.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_GraveCross_Five.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_FeedRack_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WoodPileLarge_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WoodPileSmall_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WoodPileMossy_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WoodReserve_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_DogHouse_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WoodBlock.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_Workbench_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_CampBench.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_LogBench.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_BeigeCouch_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_LeatherSofaNew_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_LeatherSofaOld_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WhiteCouch_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_EvergreenFlowerPot.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_SnakePlantFlowerPot.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_LobbyTable_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WornTable_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_SquareTable_Kit.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_WornBench.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_Scarecrow.GetRecipeValues()));
		RegisterRecipe(new CraftMD_Item(MD_BarbedWireFence_Kit.GetRecipeValues()));		
	}			
}