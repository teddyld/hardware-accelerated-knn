############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project knn
set_top knn
add_files knn.hpp
add_files knn.cpp
add_files -tb train.bin -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb test.bin -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
add_files -tb main.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "none"
set_part {xqzu5ev-ffrb900-1-i}
create_clock -period 10 -name default
source "./knn/none/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
