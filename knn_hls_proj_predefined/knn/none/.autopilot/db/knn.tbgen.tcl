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
set C_modelType { int 32 }
set C_modelArgList {
	{ k int 32 regular  }
	{ test_samples_label int 8 regular {array 10000 { 1 3 } 1 1 }  }
	{ test_samples_data int 8 regular {array 980000 { 1 1 } 1 1 }  }
	{ train_samples_label int 8 regular {array 60000 { 1 3 } 1 1 }  }
	{ train_samples_data int 8 regular {array 5880000 { 1 1 } 3 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "k", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "k","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "test_samples_label", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "test_samples.label","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 9999,"step" : 1}]}]}]} , 
 	{ "Name" : "test_samples_data", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "test_samples.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 9999,"step" : 1},{"low" : 0,"up" : 97,"step" : 1}]}]}]} , 
 	{ "Name" : "train_samples_label", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "train_samples.label","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 59999,"step" : 1}]}]}]} , 
 	{ "Name" : "train_samples_data", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "train_samples.data","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 59999,"step" : 1},{"low" : 0,"up" : 97,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ k sc_in sc_lv 32 signal 0 } 
	{ test_samples_label_address0 sc_out sc_lv 14 signal 1 } 
	{ test_samples_label_ce0 sc_out sc_logic 1 signal 1 } 
	{ test_samples_label_q0 sc_in sc_lv 8 signal 1 } 
	{ test_samples_data_address0 sc_out sc_lv 20 signal 2 } 
	{ test_samples_data_ce0 sc_out sc_logic 1 signal 2 } 
	{ test_samples_data_q0 sc_in sc_lv 8 signal 2 } 
	{ test_samples_data_address1 sc_out sc_lv 20 signal 2 } 
	{ test_samples_data_ce1 sc_out sc_logic 1 signal 2 } 
	{ test_samples_data_q1 sc_in sc_lv 8 signal 2 } 
	{ train_samples_label_address0 sc_out sc_lv 16 signal 3 } 
	{ train_samples_label_ce0 sc_out sc_logic 1 signal 3 } 
	{ train_samples_label_q0 sc_in sc_lv 8 signal 3 } 
	{ train_samples_data_address0 sc_out sc_lv 23 signal 4 } 
	{ train_samples_data_ce0 sc_out sc_logic 1 signal 4 } 
	{ train_samples_data_q0 sc_in sc_lv 8 signal 4 } 
	{ train_samples_data_address1 sc_out sc_lv 23 signal 4 } 
	{ train_samples_data_ce1 sc_out sc_logic 1 signal 4 } 
	{ train_samples_data_q1 sc_in sc_lv 8 signal 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "k", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "k", "role": "default" }} , 
 	{ "name": "test_samples_label_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "test_samples_label", "role": "address0" }} , 
 	{ "name": "test_samples_label_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "test_samples_label", "role": "ce0" }} , 
 	{ "name": "test_samples_label_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "test_samples_label", "role": "q0" }} , 
 	{ "name": "test_samples_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "test_samples_data", "role": "address0" }} , 
 	{ "name": "test_samples_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "test_samples_data", "role": "ce0" }} , 
 	{ "name": "test_samples_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "test_samples_data", "role": "q0" }} , 
 	{ "name": "test_samples_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "test_samples_data", "role": "address1" }} , 
 	{ "name": "test_samples_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "test_samples_data", "role": "ce1" }} , 
 	{ "name": "test_samples_data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "test_samples_data", "role": "q1" }} , 
 	{ "name": "train_samples_label_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "train_samples_label", "role": "address0" }} , 
 	{ "name": "train_samples_label_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "train_samples_label", "role": "ce0" }} , 
 	{ "name": "train_samples_label_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "train_samples_label", "role": "q0" }} , 
 	{ "name": "train_samples_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "train_samples_data", "role": "address0" }} , 
 	{ "name": "train_samples_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "train_samples_data", "role": "ce0" }} , 
 	{ "name": "train_samples_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "train_samples_data", "role": "q0" }} , 
 	{ "name": "train_samples_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "train_samples_data", "role": "address1" }} , 
 	{ "name": "train_samples_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "train_samples_data", "role": "ce1" }} , 
 	{ "name": "train_samples_data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "train_samples_data", "role": "q1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7"],
		"CDFG" : "knn",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_merge_fu_4136"}],
		"Port" : [
			{"Name" : "k", "Type" : "None", "Direction" : "I"},
			{"Name" : "test_samples_label", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "test_samples_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_samples_label", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "train_samples_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bitcount", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bitcount_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.distances_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.distances_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.a_data_assign_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.b_data_assign_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freq_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_merge_fu_4136", "Parent" : "0", "Child" : ["8", "9", "10", "11"],
		"CDFG" : "merge",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "arr_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "arr_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "l", "Type" : "None", "Direction" : "I"},
			{"Name" : "m", "Type" : "None", "Direction" : "I"},
			{"Name" : "r", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_merge_fu_4136.L_0_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_merge_fu_4136.L_1_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_merge_fu_4136.R_0_U", "Parent" : "7"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_merge_fu_4136.R_1_U", "Parent" : "7"}]}


set ArgLastReadFirstWriteLatency {
	knn {
		k {Type I LastRead 0 FirstWrite -1}
		test_samples_label {Type I LastRead 1 FirstWrite -1}
		test_samples_data {Type I LastRead 50 FirstWrite -1}
		train_samples_label {Type I LastRead 101 FirstWrite -1}
		train_samples_data {Type I LastRead 102 FirstWrite -1}
		bitcount {Type I LastRead -1 FirstWrite -1}}
	merge {
		arr_0 {Type IO LastRead 2 FirstWrite 4}
		arr_1 {Type IO LastRead 2 FirstWrite 5}
		l {Type I LastRead 0 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}
		r {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	k { ap_none {  { k in_data 0 32 } } }
	test_samples_label { ap_memory {  { test_samples_label_address0 mem_address 1 14 }  { test_samples_label_ce0 mem_ce 1 1 }  { test_samples_label_q0 mem_dout 0 8 } } }
	test_samples_data { ap_memory {  { test_samples_data_address0 mem_address 1 20 }  { test_samples_data_ce0 mem_ce 1 1 }  { test_samples_data_q0 mem_dout 0 8 }  { test_samples_data_address1 MemPortADDR2 1 20 }  { test_samples_data_ce1 MemPortCE2 1 1 }  { test_samples_data_q1 MemPortDOUT2 0 8 } } }
	train_samples_label { ap_memory {  { train_samples_label_address0 mem_address 1 16 }  { train_samples_label_ce0 mem_ce 1 1 }  { train_samples_label_q0 mem_dout 0 8 } } }
	train_samples_data { ap_memory {  { train_samples_data_address0 mem_address 1 23 }  { train_samples_data_ce0 mem_ce 1 1 }  { train_samples_data_q0 mem_dout 0 8 }  { train_samples_data_address1 MemPortADDR2 1 23 }  { train_samples_data_ce1 MemPortCE2 1 1 }  { train_samples_data_q1 MemPortDOUT2 0 8 } } }
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
	{ train_samples_data 3 }
}
