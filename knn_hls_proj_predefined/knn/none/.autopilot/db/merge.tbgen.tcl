set moduleName merge
set isTopModule 0
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
set C_modelName {merge}
set C_modelType { void 0 }
set C_modelArgList {
	{ arr_0 int 32 regular {array 60000 { 2 3 } 1 1 }  }
	{ arr_1 int 32 regular {array 60000 { 2 3 } 1 1 }  }
	{ l int 32 regular  }
	{ m int 32 regular  }
	{ r int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "arr_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "arr_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "l", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "m", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "r", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ arr_0_address0 sc_out sc_lv 16 signal 0 } 
	{ arr_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ arr_0_we0 sc_out sc_logic 1 signal 0 } 
	{ arr_0_d0 sc_out sc_lv 32 signal 0 } 
	{ arr_0_q0 sc_in sc_lv 32 signal 0 } 
	{ arr_1_address0 sc_out sc_lv 16 signal 1 } 
	{ arr_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ arr_1_we0 sc_out sc_logic 1 signal 1 } 
	{ arr_1_d0 sc_out sc_lv 32 signal 1 } 
	{ arr_1_q0 sc_in sc_lv 32 signal 1 } 
	{ l sc_in sc_lv 32 signal 2 } 
	{ m sc_in sc_lv 32 signal 3 } 
	{ r sc_in sc_lv 32 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "arr_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "arr_0", "role": "address0" }} , 
 	{ "name": "arr_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "arr_0", "role": "ce0" }} , 
 	{ "name": "arr_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "arr_0", "role": "we0" }} , 
 	{ "name": "arr_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "arr_0", "role": "d0" }} , 
 	{ "name": "arr_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "arr_0", "role": "q0" }} , 
 	{ "name": "arr_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "arr_1", "role": "address0" }} , 
 	{ "name": "arr_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "arr_1", "role": "ce0" }} , 
 	{ "name": "arr_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "arr_1", "role": "we0" }} , 
 	{ "name": "arr_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "arr_1", "role": "d0" }} , 
 	{ "name": "arr_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "arr_1", "role": "q0" }} , 
 	{ "name": "l", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "l", "role": "default" }} , 
 	{ "name": "m", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "m", "role": "default" }} , 
 	{ "name": "r", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "r", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.L_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.R_1_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	merge {
		arr_0 {Type IO LastRead 2 FirstWrite 4}
		arr_1 {Type IO LastRead 2 FirstWrite 5}
		l {Type I LastRead 0 FirstWrite -1}
		m {Type I LastRead 0 FirstWrite -1}
		r {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	arr_0 { ap_memory {  { arr_0_address0 mem_address 1 16 }  { arr_0_ce0 mem_ce 1 1 }  { arr_0_we0 mem_we 1 1 }  { arr_0_d0 mem_din 1 32 }  { arr_0_q0 mem_dout 0 32 } } }
	arr_1 { ap_memory {  { arr_1_address0 mem_address 1 16 }  { arr_1_ce0 mem_ce 1 1 }  { arr_1_we0 mem_we 1 1 }  { arr_1_d0 mem_din 1 32 }  { arr_1_q0 mem_dout 0 32 } } }
	l { ap_none {  { l in_data 0 32 } } }
	m { ap_none {  { m in_data 0 32 } } }
	r { ap_none {  { r in_data 0 32 } } }
}
