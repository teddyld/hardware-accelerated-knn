############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_loop_tripcount -min 177 -max 177 -avg 177 "mergeSort/start_point_loop"
set_directive_loop_tripcount -min 2 -max 2 -avg 2 "merge/copy_left"
set_directive_loop_tripcount -min 1 -max 1 -avg 1 "merge/copy_right"
set_directive_loop_tripcount -min 1 -max 1 -avg 1 "merge/merge_loop"
set_directive_loop_tripcount -min 0 -max 0 -avg 0 "merge/merge_left"
set_directive_loop_tripcount -min 1 -max 1 -avg 1 "merge/merge_right"
set_directive_resource -core ROM_nP_LUTRAM "knn" train
set_directive_array_partition -type complete -dim 1 "knn" input
set_directive_array_partition -type complete -dim 1 "knn" train
