// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000000 : Control signals
//            bit 0  - ap_start (Read/Write/COH)
//            bit 1  - ap_done (Read/COR)
//            bit 2  - ap_idle (Read)
//            bit 3  - ap_ready (Read)
//            bit 7  - auto_restart (Read/Write)
//            others - reserved
// 0x000004 : Global Interrupt Enable Register
//            bit 0  - Global Interrupt Enable (Read/Write)
//            others - reserved
// 0x000008 : IP Interrupt Enable Register (Read/Write)
//            bit 0  - Channel 0 (ap_done)
//            bit 1  - Channel 1 (ap_ready)
//            others - reserved
// 0x00000c : IP Interrupt Status Register (Read/TOW)
//            bit 0  - Channel 0 (ap_done)
//            bit 1  - Channel 1 (ap_ready)
//            others - reserved
// 0x000010 : Data signal of input_V
//            bit 31~0 - input_V[31:0] (Read/Write)
// 0x000014 : Data signal of input_V
//            bit 31~0 - input_V[63:32] (Read/Write)
// 0x000018 : Data signal of input_V
//            bit 31~0 - input_V[95:64] (Read/Write)
// 0x00001c : Data signal of input_V
//            bit 31~0 - input_V[127:96] (Read/Write)
// 0x000020 : Data signal of input_V
//            bit 31~0 - input_V[159:128] (Read/Write)
// 0x000024 : Data signal of input_V
//            bit 31~0 - input_V[191:160] (Read/Write)
// 0x000028 : Data signal of input_V
//            bit 31~0 - input_V[223:192] (Read/Write)
// 0x00002c : Data signal of input_V
//            bit 31~0 - input_V[255:224] (Read/Write)
// 0x000030 : Data signal of input_V
//            bit 31~0 - input_V[287:256] (Read/Write)
// 0x000034 : Data signal of input_V
//            bit 31~0 - input_V[319:288] (Read/Write)
// 0x000038 : Data signal of input_V
//            bit 31~0 - input_V[351:320] (Read/Write)
// 0x00003c : Data signal of input_V
//            bit 31~0 - input_V[383:352] (Read/Write)
// 0x000040 : Data signal of input_V
//            bit 19~0 - input_V[403:384] (Read/Write)
//            others   - reserved
// 0x000044 : reserved
// 0x100000 : Data signal of output_V
//            bit 0  - output_V[0] (Read)
//            others - reserved
// 0x100004 : Control signal of output_V
//            bit 0  - output_V_ap_vld (Read/COR)
//            others - reserved
// 0x080000 ~
// 0x0fffff : Memory 'train_samples_V' (6000 * 404b)
//            Word 16n  : bit [31:0] - train_samples_V[n][31: 0]
//            Word 16n+1 : bit [31:0] - train_samples_V[n][63:32]
//            Word 16n+2 : bit [31:0] - train_samples_V[n][95:64]
//            Word 16n+3 : bit [31:0] - train_samples_V[n][127:96]
//            Word 16n+4 : bit [31:0] - train_samples_V[n][159:128]
//            Word 16n+5 : bit [31:0] - train_samples_V[n][191:160]
//            Word 16n+6 : bit [31:0] - train_samples_V[n][223:192]
//            Word 16n+7 : bit [31:0] - train_samples_V[n][255:224]
//            Word 16n+8 : bit [31:0] - train_samples_V[n][287:256]
//            Word 16n+9 : bit [31:0] - train_samples_V[n][319:288]
//            Word 16n+10 : bit [31:0] - train_samples_V[n][351:320]
//            Word 16n+11 : bit [31:0] - train_samples_V[n][383:352]
//            Word 16n+12 : bit [19:0] - train_samples_V[n][403:384]
//                        others     - reserved
//            Word 16n+13 : bit [31:0] - reserved
//            Word 16n+14 : bit [31:0] - reserved
//            Word 16n+15 : bit [31:0] - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XKNN_AXILITES_ADDR_AP_CTRL              0x000000
#define XKNN_AXILITES_ADDR_GIE                  0x000004
#define XKNN_AXILITES_ADDR_IER                  0x000008
#define XKNN_AXILITES_ADDR_ISR                  0x00000c
#define XKNN_AXILITES_ADDR_INPUT_V_DATA         0x000010
#define XKNN_AXILITES_BITS_INPUT_V_DATA         404
#define XKNN_AXILITES_ADDR_INPUT_V_DATA_        0x000038
#define XKNN_AXILITES_BITS_INPUT_V_DATA         404
#define XKNN_AXILITES_ADDR_OUTPUT_V_DATA        0x100000
#define XKNN_AXILITES_BITS_OUTPUT_V_DATA        1
#define XKNN_AXILITES_ADDR_OUTPUT_V_CTRL        0x100004
#define XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE 0x080000
#define XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH 0x0fffff
#define XKNN_AXILITES_WIDTH_TRAIN_SAMPLES_V     404
#define XKNN_AXILITES_DEPTH_TRAIN_SAMPLES_V     6000

