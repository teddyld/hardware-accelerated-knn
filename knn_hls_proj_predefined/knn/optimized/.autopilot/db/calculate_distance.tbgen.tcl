set moduleName calculate_distance
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {calculate_distance}
set C_modelType { int 9 }
set C_modelArgList {
	{ a_V int 392 regular  }
	{ b_V int 400 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_V", "interface" : "wire", "bitwidth" : 392, "direction" : "READONLY"} , 
 	{ "Name" : "b_V", "interface" : "wire", "bitwidth" : 400, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 9} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ a_V sc_in sc_lv 392 signal 0 } 
	{ b_V sc_in sc_lv 400 signal 1 } 
	{ ap_return sc_out sc_lv 9 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "a_V", "direction": "in", "datatype": "sc_lv", "bitwidth":392, "type": "signal", "bundle":{"name": "a_V", "role": "default" }} , 
 	{ "name": "b_V", "direction": "in", "datatype": "sc_lv", "bitwidth":400, "type": "signal", "bundle":{"name": "b_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	calculate_distance {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "66", "Max" : "66"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_V { ap_none {  { a_V in_data 0 392 } } }
	b_V { ap_none {  { b_V in_data 0 400 } } }
}
