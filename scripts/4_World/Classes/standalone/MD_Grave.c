class MD_Grave : GardenBase
{	
    Object 	m_ClutterCutter;
	const string COMPATIBLE_SURFACES[] = {"cp_dirt", "cp_broadleaf_dense1", "cp_broadleaf_dense2", "cp_broadleaf_sparse1", "cp_broadleaf_sparse2", "cp_conifer_common1", "cp_conifer_common2", "cp_conifer_moss1", "cp_conifer_moss2", "cp_grass", "cp_grass_tall", "cp_gravel", "cp_rock", "textile_carpet_int"};
	static const int COMPATIBLE_SURFACES_COUNT = 14; // Count if elements of COMPATIBLE_SURFACES array

	
	override bool CanBePlaced( Man player, vector position )
	{
		string surface_type;
		GetGame().SurfaceGetType( position[0], position[2], surface_type );
		
		for (int i=0; i < COMPATIBLE_SURFACES_COUNT; i++)
		{
			if (COMPATIBLE_SURFACES[i] == surface_type)
			{
				return true;
			}
		}
		
		return false;
    }
}