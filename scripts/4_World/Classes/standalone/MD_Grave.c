class MD_Grave : GardenBase
{	
    Object 	m_ClutterCutter;
	protected ref array<string> COMPATIBLE_SURFACES = {"cp_dirt", "cp_broadleaf_dense1", "cp_broadleaf_dense2", "cp_broadleaf_sparse1", "cp_broadleaf_sparse2", "cp_conifer_common1", "cp_conifer_common2", "cp_conifer_moss1", "cp_conifer_moss2", "cp_grass", "cp_grass_tall"};
		
	bool CanBeDigged()
	{
		string surface_type;
		vector position = GetPosition();
		GetGame().SurfaceGetType( position[0], position[2], surface_type );
		
		if (COMPATIBLE_SURFACES.Find(surface_type) > -1)
		{
			return true;
		}
		
		return false;
    }
};