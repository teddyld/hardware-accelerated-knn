# This script segment is generated automatically by AutoPilot

set axilite_register_dict [dict create]
set port_AXILiteS {
ap_start { }
ap_done { }
ap_ready { }
ap_idle { }
input_V { 
	dir I
	width 404
	depth 1
	mode ap_none
	offset 16
	offset_end 71
}
train_samples_V { 
	dir I
	width 404
	depth 6000
	mode ap_memory
	offset 524288
	offset_end 1048575
}
output_V { 
	dir O
	width 1
	depth 1
	mode ap_vld
	offset 1048576
	offset_end 1048583
}
}
dict set axilite_register_dict AXILiteS $port_AXILiteS


