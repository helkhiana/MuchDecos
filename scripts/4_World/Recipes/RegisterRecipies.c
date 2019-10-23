modded class PluginRecipesManager 
{

 	override void RegisterRecipies()
	{
		super.RegisterRecipies();
		
		RegisterRecipe(new CraftMD_CraftedItemBase(MD_WoodTable_Indoor.GetRecipeValues()));
		RegisterRecipe(new CraftWorkbench);			
	}			
}