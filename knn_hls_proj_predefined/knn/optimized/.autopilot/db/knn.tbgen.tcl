set moduleName knn
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {knn}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_0 int 8 regular {axi_slave 0}  }
	{ input_1 int 8 regular {axi_slave 0}  }
	{ input_2 int 8 regular {axi_slave 0}  }
	{ input_3 int 8 regular {axi_slave 0}  }
	{ input_4 int 8 regular {axi_slave 0}  }
	{ input_5 int 8 regular {axi_slave 0}  }
	{ input_6 int 8 regular {axi_slave 0}  }
	{ input_7 int 8 regular {axi_slave 0}  }
	{ input_8 int 8 regular {axi_slave 0}  }
	{ input_9 int 8 regular {axi_slave 0}  }
	{ input_10 int 8 regular {axi_slave 0}  }
	{ input_11 int 8 regular {axi_slave 0}  }
	{ input_12 int 8 regular {axi_slave 0}  }
	{ input_13 int 8 regular {axi_slave 0}  }
	{ input_14 int 8 regular {axi_slave 0}  }
	{ input_15 int 8 regular {axi_slave 0}  }
	{ input_16 int 8 regular {axi_slave 0}  }
	{ input_17 int 8 regular {axi_slave 0}  }
	{ input_18 int 8 regular {axi_slave 0}  }
	{ input_19 int 8 regular {axi_slave 0}  }
	{ input_20 int 8 regular {axi_slave 0}  }
	{ input_21 int 8 regular {axi_slave 0}  }
	{ input_22 int 8 regular {axi_slave 0}  }
	{ input_23 int 8 regular {axi_slave 0}  }
	{ input_24 int 8 regular {axi_slave 0}  }
	{ input_25 int 8 regular {axi_slave 0}  }
	{ input_26 int 8 regular {axi_slave 0}  }
	{ input_27 int 8 regular {axi_slave 0}  }
	{ input_28 int 8 regular {axi_slave 0}  }
	{ input_29 int 8 regular {axi_slave 0}  }
	{ input_30 int 8 regular {axi_slave 0}  }
	{ input_31 int 8 regular {axi_slave 0}  }
	{ input_32 int 8 regular {axi_slave 0}  }
	{ input_33 int 8 regular {axi_slave 0}  }
	{ input_34 int 8 regular {axi_slave 0}  }
	{ input_35 int 8 regular {axi_slave 0}  }
	{ input_36 int 8 regular {axi_slave 0}  }
	{ input_37 int 8 regular {axi_slave 0}  }
	{ input_38 int 8 regular {axi_slave 0}  }
	{ input_39 int 8 regular {axi_slave 0}  }
	{ input_40 int 8 regular {axi_slave 0}  }
	{ input_41 int 8 regular {axi_slave 0}  }
	{ input_42 int 8 regular {axi_slave 0}  }
	{ input_43 int 8 regular {axi_slave 0}  }
	{ input_44 int 8 regular {axi_slave 0}  }
	{ input_45 int 8 regular {axi_slave 0}  }
	{ input_46 int 8 regular {axi_slave 0}  }
	{ input_47 int 8 regular {axi_slave 0}  }
	{ input_48 int 8 regular {axi_slave 0}  }
	{ input_49 int 8 regular {axi_slave 0}  }
	{ input_50 int 8 unused {axi_slave 0}  }
	{ output_V int 1 regular {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}], "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "input_1", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}], "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "input_2", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}], "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "input_3", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}], "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "input_4", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}], "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "input_5", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}], "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "input_6", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "input_7", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "input_8", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}], "offset" : {"in":80}, "offset_end" : {"in":87}} , 
 	{ "Name" : "input_9", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}], "offset" : {"in":88}, "offset_end" : {"in":95}} , 
 	{ "Name" : "input_10", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}], "offset" : {"in":96}, "offset_end" : {"in":103}} , 
 	{ "Name" : "input_11", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}], "offset" : {"in":104}, "offset_end" : {"in":111}} , 
 	{ "Name" : "input_12", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}], "offset" : {"in":112}, "offset_end" : {"in":119}} , 
 	{ "Name" : "input_13", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}], "offset" : {"in":120}, "offset_end" : {"in":127}} , 
 	{ "Name" : "input_14", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}], "offset" : {"in":128}, "offset_end" : {"in":135}} , 
 	{ "Name" : "input_15", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}], "offset" : {"in":136}, "offset_end" : {"in":143}} , 
 	{ "Name" : "input_16", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]}], "offset" : {"in":144}, "offset_end" : {"in":151}} , 
 	{ "Name" : "input_17", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]}], "offset" : {"in":152}, "offset_end" : {"in":159}} , 
 	{ "Name" : "input_18", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]}], "offset" : {"in":160}, "offset_end" : {"in":167}} , 
 	{ "Name" : "input_19", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]}], "offset" : {"in":168}, "offset_end" : {"in":175}} , 
 	{ "Name" : "input_20", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 20,"up" : 20,"step" : 2}]}]}], "offset" : {"in":176}, "offset_end" : {"in":183}} , 
 	{ "Name" : "input_21", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 21,"up" : 21,"step" : 2}]}]}], "offset" : {"in":184}, "offset_end" : {"in":191}} , 
 	{ "Name" : "input_22", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 22,"up" : 22,"step" : 2}]}]}], "offset" : {"in":192}, "offset_end" : {"in":199}} , 
 	{ "Name" : "input_23", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 23,"up" : 23,"step" : 2}]}]}], "offset" : {"in":200}, "offset_end" : {"in":207}} , 
 	{ "Name" : "input_24", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 24,"up" : 24,"step" : 2}]}]}], "offset" : {"in":208}, "offset_end" : {"in":215}} , 
 	{ "Name" : "input_25", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 25,"up" : 25,"step" : 2}]}]}], "offset" : {"in":216}, "offset_end" : {"in":223}} , 
 	{ "Name" : "input_26", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 26,"up" : 26,"step" : 2}]}]}], "offset" : {"in":224}, "offset_end" : {"in":231}} , 
 	{ "Name" : "input_27", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 27,"up" : 27,"step" : 2}]}]}], "offset" : {"in":232}, "offset_end" : {"in":239}} , 
 	{ "Name" : "input_28", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 28,"up" : 28,"step" : 2}]}]}], "offset" : {"in":240}, "offset_end" : {"in":247}} , 
 	{ "Name" : "input_29", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 29,"up" : 29,"step" : 2}]}]}], "offset" : {"in":248}, "offset_end" : {"in":255}} , 
 	{ "Name" : "input_30", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 30,"up" : 30,"step" : 2}]}]}], "offset" : {"in":256}, "offset_end" : {"in":263}} , 
 	{ "Name" : "input_31", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 31,"up" : 31,"step" : 2}]}]}], "offset" : {"in":264}, "offset_end" : {"in":271}} , 
 	{ "Name" : "input_32", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 32,"up" : 32,"step" : 2}]}]}], "offset" : {"in":272}, "offset_end" : {"in":279}} , 
 	{ "Name" : "input_33", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 33,"up" : 33,"step" : 2}]}]}], "offset" : {"in":280}, "offset_end" : {"in":287}} , 
 	{ "Name" : "input_34", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 34,"up" : 34,"step" : 2}]}]}], "offset" : {"in":288}, "offset_end" : {"in":295}} , 
 	{ "Name" : "input_35", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 35,"up" : 35,"step" : 2}]}]}], "offset" : {"in":296}, "offset_end" : {"in":303}} , 
 	{ "Name" : "input_36", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 36,"up" : 36,"step" : 2}]}]}], "offset" : {"in":304}, "offset_end" : {"in":311}} , 
 	{ "Name" : "input_37", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 37,"up" : 37,"step" : 2}]}]}], "offset" : {"in":312}, "offset_end" : {"in":319}} , 
 	{ "Name" : "input_38", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 38,"up" : 38,"step" : 2}]}]}], "offset" : {"in":320}, "offset_end" : {"in":327}} , 
 	{ "Name" : "input_39", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 39,"up" : 39,"step" : 2}]}]}], "offset" : {"in":328}, "offset_end" : {"in":335}} , 
 	{ "Name" : "input_40", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 40,"up" : 40,"step" : 2}]}]}], "offset" : {"in":336}, "offset_end" : {"in":343}} , 
 	{ "Name" : "input_41", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 41,"up" : 41,"step" : 2}]}]}], "offset" : {"in":344}, "offset_end" : {"in":351}} , 
 	{ "Name" : "input_42", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 42,"up" : 42,"step" : 2}]}]}], "offset" : {"in":352}, "offset_end" : {"in":359}} , 
 	{ "Name" : "input_43", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 43,"up" : 43,"step" : 2}]}]}], "offset" : {"in":360}, "offset_end" : {"in":367}} , 
 	{ "Name" : "input_44", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 44,"up" : 44,"step" : 2}]}]}], "offset" : {"in":368}, "offset_end" : {"in":375}} , 
 	{ "Name" : "input_45", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 45,"up" : 45,"step" : 2}]}]}], "offset" : {"in":376}, "offset_end" : {"in":383}} , 
 	{ "Name" : "input_46", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 46,"up" : 46,"step" : 2}]}]}], "offset" : {"in":384}, "offset_end" : {"in":391}} , 
 	{ "Name" : "input_47", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 47,"up" : 47,"step" : 2}]}]}], "offset" : {"in":392}, "offset_end" : {"in":399}} , 
 	{ "Name" : "input_48", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 48,"up" : 48,"step" : 2}]}]}], "offset" : {"in":400}, "offset_end" : {"in":407}} , 
 	{ "Name" : "input_49", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 49,"up" : 49,"step" : 2}]}]}], "offset" : {"in":408}, "offset_end" : {"in":415}} , 
 	{ "Name" : "input_50", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "input","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 50,"up" : 50,"step" : 2}]}]}], "offset" : {"in":416}, "offset_end" : {"in":423}} , 
 	{ "Name" : "output_V", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_vld","bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "output.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}], "offset" : {"out":424}, "offset_end" : {"out":431}} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 9 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 9 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"knn","role":"start","value":"0","valid_bit":"0"},{"name":"knn","role":"continue","value":"0","valid_bit":"4"},{"name":"knn","role":"auto_start","value":"0","valid_bit":"7"},{"name":"input_0","role":"data","value":"16"},{"name":"input_1","role":"data","value":"24"},{"name":"input_2","role":"data","value":"32"},{"name":"input_3","role":"data","value":"40"},{"name":"input_4","role":"data","value":"48"},{"name":"input_5","role":"data","value":"56"},{"name":"input_6","role":"data","value":"64"},{"name":"input_7","role":"data","value":"72"},{"name":"input_8","role":"data","value":"80"},{"name":"input_9","role":"data","value":"88"},{"name":"input_10","role":"data","value":"96"},{"name":"input_11","role":"data","value":"104"},{"name":"input_12","role":"data","value":"112"},{"name":"input_13","role":"data","value":"120"},{"name":"input_14","role":"data","value":"128"},{"name":"input_15","role":"data","value":"136"},{"name":"input_16","role":"data","value":"144"},{"name":"input_17","role":"data","value":"152"},{"name":"input_18","role":"data","value":"160"},{"name":"input_19","role":"data","value":"168"},{"name":"input_20","role":"data","value":"176"},{"name":"input_21","role":"data","value":"184"},{"name":"input_22","role":"data","value":"192"},{"name":"input_23","role":"data","value":"200"},{"name":"input_24","role":"data","value":"208"},{"name":"input_25","role":"data","value":"216"},{"name":"input_26","role":"data","value":"224"},{"name":"input_27","role":"data","value":"232"},{"name":"input_28","role":"data","value":"240"},{"name":"input_29","role":"data","value":"248"},{"name":"input_30","role":"data","value":"256"},{"name":"input_31","role":"data","value":"264"},{"name":"input_32","role":"data","value":"272"},{"name":"input_33","role":"data","value":"280"},{"name":"input_34","role":"data","value":"288"},{"name":"input_35","role":"data","value":"296"},{"name":"input_36","role":"data","value":"304"},{"name":"input_37","role":"data","value":"312"},{"name":"input_38","role":"data","value":"320"},{"name":"input_39","role":"data","value":"328"},{"name":"input_40","role":"data","value":"336"},{"name":"input_41","role":"data","value":"344"},{"name":"input_42","role":"data","value":"352"},{"name":"input_43","role":"data","value":"360"},{"name":"input_44","role":"data","value":"368"},{"name":"input_45","role":"data","value":"376"},{"name":"input_46","role":"data","value":"384"},{"name":"input_47","role":"data","value":"392"},{"name":"input_48","role":"data","value":"400"},{"name":"input_49","role":"data","value":"408"},{"name":"input_50","role":"data","value":"416"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[{"name":"knn","role":"start","value":"0","valid_bit":"0"},{"name":"knn","role":"done","value":"0","valid_bit":"1"},{"name":"knn","role":"idle","value":"0","valid_bit":"2"},{"name":"knn","role":"ready","value":"0","valid_bit":"3"},{"name":"knn","role":"auto_start","value":"0","valid_bit":"7"},{"name":"output_V","role":"data","value":"424"}, {"name":"output_V","role":"valid","value":"428","valid_bit":"0"}] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55"],
		"CDFG" : "knn",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6085", "EstimateLatencyMax" : "6085",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_10", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_11", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_12", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_13", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_14", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_15", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_16", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_17", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_18", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_19", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_21", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_22", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_23", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_24", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_25", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_26", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_27", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_28", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_29", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_30", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_31", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_32", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_33", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_34", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_35", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_36", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_37", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_38", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_39", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_40", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_41", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_42", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_43", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_44", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_45", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_46", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_47", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_48", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_49", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_50", "Type" : "None", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "train_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_0", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_1_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_2_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_3_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_6_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_7_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_8_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_9_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_10_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_11_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_12_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_13_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_14_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_15_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_16_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_17_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_18_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_19_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_20_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_21_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_22_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_23_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_24_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_25_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_26_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_27_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_28_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_29_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_30_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_31_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_32_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_33_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_34_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_35_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_36_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_37_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_38_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_39_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_40_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_41_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_42_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_43_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_44_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_45_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_46_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_47_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_48_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_49_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_50_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.train_0_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.knn_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freq_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_calculate_distance_fu_1730", "Parent" : "0",
		"CDFG" : "calculate_distance",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "66", "EstimateLatencyMin" : "66", "EstimateLatencyMax" : "66",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.knn_mux_53_16_1_1_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	knn {
		input_0 {Type I LastRead 0 FirstWrite -1}
		input_1 {Type I LastRead 0 FirstWrite -1}
		input_2 {Type I LastRead 0 FirstWrite -1}
		input_3 {Type I LastRead 0 FirstWrite -1}
		input_4 {Type I LastRead 0 FirstWrite -1}
		input_5 {Type I LastRead 0 FirstWrite -1}
		input_6 {Type I LastRead 0 FirstWrite -1}
		input_7 {Type I LastRead 0 FirstWrite -1}
		input_8 {Type I LastRead 0 FirstWrite -1}
		input_9 {Type I LastRead 0 FirstWrite -1}
		input_10 {Type I LastRead 0 FirstWrite -1}
		input_11 {Type I LastRead 0 FirstWrite -1}
		input_12 {Type I LastRead 0 FirstWrite -1}
		input_13 {Type I LastRead 0 FirstWrite -1}
		input_14 {Type I LastRead 0 FirstWrite -1}
		input_15 {Type I LastRead 0 FirstWrite -1}
		input_16 {Type I LastRead 0 FirstWrite -1}
		input_17 {Type I LastRead 0 FirstWrite -1}
		input_18 {Type I LastRead 0 FirstWrite -1}
		input_19 {Type I LastRead 0 FirstWrite -1}
		input_20 {Type I LastRead 0 FirstWrite -1}
		input_21 {Type I LastRead 0 FirstWrite -1}
		input_22 {Type I LastRead 0 FirstWrite -1}
		input_23 {Type I LastRead 0 FirstWrite -1}
		input_24 {Type I LastRead 0 FirstWrite -1}
		input_25 {Type I LastRead 0 FirstWrite -1}
		input_26 {Type I LastRead 0 FirstWrite -1}
		input_27 {Type I LastRead 0 FirstWrite -1}
		input_28 {Type I LastRead 0 FirstWrite -1}
		input_29 {Type I LastRead 0 FirstWrite -1}
		input_30 {Type I LastRead 0 FirstWrite -1}
		input_31 {Type I LastRead 0 FirstWrite -1}
		input_32 {Type I LastRead 0 FirstWrite -1}
		input_33 {Type I LastRead 0 FirstWrite -1}
		input_34 {Type I LastRead 0 FirstWrite -1}
		input_35 {Type I LastRead 0 FirstWrite -1}
		input_36 {Type I LastRead 0 FirstWrite -1}
		input_37 {Type I LastRead 0 FirstWrite -1}
		input_38 {Type I LastRead 0 FirstWrite -1}
		input_39 {Type I LastRead 0 FirstWrite -1}
		input_40 {Type I LastRead 0 FirstWrite -1}
		input_41 {Type I LastRead 0 FirstWrite -1}
		input_42 {Type I LastRead 0 FirstWrite -1}
		input_43 {Type I LastRead 0 FirstWrite -1}
		input_44 {Type I LastRead 0 FirstWrite -1}
		input_45 {Type I LastRead 0 FirstWrite -1}
		input_46 {Type I LastRead 0 FirstWrite -1}
		input_47 {Type I LastRead 0 FirstWrite -1}
		input_48 {Type I LastRead 0 FirstWrite -1}
		input_49 {Type I LastRead 0 FirstWrite -1}
		input_50 {Type I LastRead -1 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 7}
		train_1 {Type I LastRead -1 FirstWrite -1}
		train_2 {Type I LastRead -1 FirstWrite -1}
		train_3 {Type I LastRead -1 FirstWrite -1}
		train_4 {Type I LastRead -1 FirstWrite -1}
		train_5 {Type I LastRead -1 FirstWrite -1}
		train_6 {Type I LastRead -1 FirstWrite -1}
		train_7 {Type I LastRead -1 FirstWrite -1}
		train_8 {Type I LastRead -1 FirstWrite -1}
		train_9 {Type I LastRead -1 FirstWrite -1}
		train_10 {Type I LastRead -1 FirstWrite -1}
		train_11 {Type I LastRead -1 FirstWrite -1}
		train_12 {Type I LastRead -1 FirstWrite -1}
		train_13 {Type I LastRead -1 FirstWrite -1}
		train_14 {Type I LastRead -1 FirstWrite -1}
		train_15 {Type I LastRead -1 FirstWrite -1}
		train_16 {Type I LastRead -1 FirstWrite -1}
		train_17 {Type I LastRead -1 FirstWrite -1}
		train_18 {Type I LastRead -1 FirstWrite -1}
		train_19 {Type I LastRead -1 FirstWrite -1}
		train_20 {Type I LastRead -1 FirstWrite -1}
		train_21 {Type I LastRead -1 FirstWrite -1}
		train_22 {Type I LastRead -1 FirstWrite -1}
		train_23 {Type I LastRead -1 FirstWrite -1}
		train_24 {Type I LastRead -1 FirstWrite -1}
		train_25 {Type I LastRead -1 FirstWrite -1}
		train_26 {Type I LastRead -1 FirstWrite -1}
		train_27 {Type I LastRead -1 FirstWrite -1}
		train_28 {Type I LastRead -1 FirstWrite -1}
		train_29 {Type I LastRead -1 FirstWrite -1}
		train_30 {Type I LastRead -1 FirstWrite -1}
		train_31 {Type I LastRead -1 FirstWrite -1}
		train_32 {Type I LastRead -1 FirstWrite -1}
		train_33 {Type I LastRead -1 FirstWrite -1}
		train_34 {Type I LastRead -1 FirstWrite -1}
		train_35 {Type I LastRead -1 FirstWrite -1}
		train_36 {Type I LastRead -1 FirstWrite -1}
		train_37 {Type I LastRead -1 FirstWrite -1}
		train_38 {Type I LastRead -1 FirstWrite -1}
		train_39 {Type I LastRead -1 FirstWrite -1}
		train_40 {Type I LastRead -1 FirstWrite -1}
		train_41 {Type I LastRead -1 FirstWrite -1}
		train_42 {Type I LastRead -1 FirstWrite -1}
		train_43 {Type I LastRead -1 FirstWrite -1}
		train_44 {Type I LastRead -1 FirstWrite -1}
		train_45 {Type I LastRead -1 FirstWrite -1}
		train_46 {Type I LastRead -1 FirstWrite -1}
		train_47 {Type I LastRead -1 FirstWrite -1}
		train_48 {Type I LastRead -1 FirstWrite -1}
		train_49 {Type I LastRead -1 FirstWrite -1}
		train_50 {Type I LastRead -1 FirstWrite -1}
		train_0 {Type I LastRead -1 FirstWrite -1}}
	calculate_distance {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6085", "Max" : "6085"}
	, {"Name" : "Interval", "Min" : "6086", "Max" : "6086"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
