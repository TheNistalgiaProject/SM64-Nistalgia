// 0x0F0007B8
const GeoLayout black_bobomb_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 4, 0, bobomb_root_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 15, 33, 0, bobomb_foot_L_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -15, 33, 0, bobomb_foot_R_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

// 0x0F0008F4
const GeoLayout bobomb_buddy_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 4, 0, bobomb_root_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 15, 33, 0, bobomb_foot_L_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -15, 33, 0, bobomb_foot_R_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
