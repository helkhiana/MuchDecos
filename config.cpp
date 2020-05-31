class CfgPatches
{
    class MuchDecos
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};

class CfgMods
{
    class MuchDecos
    {
        dir="MuchDecos";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MuchDecos";
        credits = "JestAJoke";
        author = "helkhiana";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";
        
        dependencies[] = {"Game", "World", "Mission"};
        
        class defs
        {
			class gameScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchDecos/Scripts/5_Mission"};
			};
		};
        
    };
};