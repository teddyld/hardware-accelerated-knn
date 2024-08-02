// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : Control signals
//         bit 0  - ap_start (Read/Write/COH)
//         bit 1  - ap_done (Read/COR)
//         bit 2  - ap_idle (Read)
//         bit 3  - ap_ready (Read)
//         bit 7  - auto_restart (Read/Write)
//         others - reserved
// 0x004 : Global Interrupt Enable Register
//         bit 0  - Global Interrupt Enable (Read/Write)
//         others - reserved
// 0x008 : IP Interrupt Enable Register (Read/Write)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x00c : IP Interrupt Status Register (Read/TOW)
//         bit 0  - Channel 0 (ap_done)
//         bit 1  - Channel 1 (ap_ready)
//         others - reserved
// 0x010 : Data signal of input_0
//         bit 7~0 - input_0[7:0] (Read/Write)
//         others  - reserved
// 0x014 : reserved
// 0x018 : Data signal of input_1
//         bit 7~0 - input_1[7:0] (Read/Write)
//         others  - reserved
// 0x01c : reserved
// 0x020 : Data signal of input_2
//         bit 7~0 - input_2[7:0] (Read/Write)
//         others  - reserved
// 0x024 : reserved
// 0x028 : Data signal of input_3
//         bit 7~0 - input_3[7:0] (Read/Write)
//         others  - reserved
// 0x02c : reserved
// 0x030 : Data signal of input_4
//         bit 7~0 - input_4[7:0] (Read/Write)
//         others  - reserved
// 0x034 : reserved
// 0x038 : Data signal of input_5
//         bit 7~0 - input_5[7:0] (Read/Write)
//         others  - reserved
// 0x03c : reserved
// 0x040 : Data signal of input_6
//         bit 7~0 - input_6[7:0] (Read/Write)
//         others  - reserved
// 0x044 : reserved
// 0x048 : Data signal of input_7
//         bit 7~0 - input_7[7:0] (Read/Write)
//         others  - reserved
// 0x04c : reserved
// 0x050 : Data signal of input_8
//         bit 7~0 - input_8[7:0] (Read/Write)
//         others  - reserved
// 0x054 : reserved
// 0x058 : Data signal of input_9
//         bit 7~0 - input_9[7:0] (Read/Write)
//         others  - reserved
// 0x05c : reserved
// 0x060 : Data signal of input_10
//         bit 7~0 - input_10[7:0] (Read/Write)
//         others  - reserved
// 0x064 : reserved
// 0x068 : Data signal of input_11
//         bit 7~0 - input_11[7:0] (Read/Write)
//         others  - reserved
// 0x06c : reserved
// 0x070 : Data signal of input_12
//         bit 7~0 - input_12[7:0] (Read/Write)
//         others  - reserved
// 0x074 : reserved
// 0x078 : Data signal of input_13
//         bit 7~0 - input_13[7:0] (Read/Write)
//         others  - reserved
// 0x07c : reserved
// 0x080 : Data signal of input_14
//         bit 7~0 - input_14[7:0] (Read/Write)
//         others  - reserved
// 0x084 : reserved
// 0x088 : Data signal of input_15
//         bit 7~0 - input_15[7:0] (Read/Write)
//         others  - reserved
// 0x08c : reserved
// 0x090 : Data signal of input_16
//         bit 7~0 - input_16[7:0] (Read/Write)
//         others  - reserved
// 0x094 : reserved
// 0x098 : Data signal of input_17
//         bit 7~0 - input_17[7:0] (Read/Write)
//         others  - reserved
// 0x09c : reserved
// 0x0a0 : Data signal of input_18
//         bit 7~0 - input_18[7:0] (Read/Write)
//         others  - reserved
// 0x0a4 : reserved
// 0x0a8 : Data signal of input_19
//         bit 7~0 - input_19[7:0] (Read/Write)
//         others  - reserved
// 0x0ac : reserved
// 0x0b0 : Data signal of input_20
//         bit 7~0 - input_20[7:0] (Read/Write)
//         others  - reserved
// 0x0b4 : reserved
// 0x0b8 : Data signal of input_21
//         bit 7~0 - input_21[7:0] (Read/Write)
//         others  - reserved
// 0x0bc : reserved
// 0x0c0 : Data signal of input_22
//         bit 7~0 - input_22[7:0] (Read/Write)
//         others  - reserved
// 0x0c4 : reserved
// 0x0c8 : Data signal of input_23
//         bit 7~0 - input_23[7:0] (Read/Write)
//         others  - reserved
// 0x0cc : reserved
// 0x0d0 : Data signal of input_24
//         bit 7~0 - input_24[7:0] (Read/Write)
//         others  - reserved
// 0x0d4 : reserved
// 0x0d8 : Data signal of input_25
//         bit 7~0 - input_25[7:0] (Read/Write)
//         others  - reserved
// 0x0dc : reserved
// 0x0e0 : Data signal of input_26
//         bit 7~0 - input_26[7:0] (Read/Write)
//         others  - reserved
// 0x0e4 : reserved
// 0x0e8 : Data signal of input_27
//         bit 7~0 - input_27[7:0] (Read/Write)
//         others  - reserved
// 0x0ec : reserved
// 0x0f0 : Data signal of input_28
//         bit 7~0 - input_28[7:0] (Read/Write)
//         others  - reserved
// 0x0f4 : reserved
// 0x0f8 : Data signal of input_29
//         bit 7~0 - input_29[7:0] (Read/Write)
//         others  - reserved
// 0x0fc : reserved
// 0x100 : Data signal of input_30
//         bit 7~0 - input_30[7:0] (Read/Write)
//         others  - reserved
// 0x104 : reserved
// 0x108 : Data signal of input_31
//         bit 7~0 - input_31[7:0] (Read/Write)
//         others  - reserved
// 0x10c : reserved
// 0x110 : Data signal of input_32
//         bit 7~0 - input_32[7:0] (Read/Write)
//         others  - reserved
// 0x114 : reserved
// 0x118 : Data signal of input_33
//         bit 7~0 - input_33[7:0] (Read/Write)
//         others  - reserved
// 0x11c : reserved
// 0x120 : Data signal of input_34
//         bit 7~0 - input_34[7:0] (Read/Write)
//         others  - reserved
// 0x124 : reserved
// 0x128 : Data signal of input_35
//         bit 7~0 - input_35[7:0] (Read/Write)
//         others  - reserved
// 0x12c : reserved
// 0x130 : Data signal of input_36
//         bit 7~0 - input_36[7:0] (Read/Write)
//         others  - reserved
// 0x134 : reserved
// 0x138 : Data signal of input_37
//         bit 7~0 - input_37[7:0] (Read/Write)
//         others  - reserved
// 0x13c : reserved
// 0x140 : Data signal of input_38
//         bit 7~0 - input_38[7:0] (Read/Write)
//         others  - reserved
// 0x144 : reserved
// 0x148 : Data signal of input_39
//         bit 7~0 - input_39[7:0] (Read/Write)
//         others  - reserved
// 0x14c : reserved
// 0x150 : Data signal of input_40
//         bit 7~0 - input_40[7:0] (Read/Write)
//         others  - reserved
// 0x154 : reserved
// 0x158 : Data signal of input_41
//         bit 7~0 - input_41[7:0] (Read/Write)
//         others  - reserved
// 0x15c : reserved
// 0x160 : Data signal of input_42
//         bit 7~0 - input_42[7:0] (Read/Write)
//         others  - reserved
// 0x164 : reserved
// 0x168 : Data signal of input_43
//         bit 7~0 - input_43[7:0] (Read/Write)
//         others  - reserved
// 0x16c : reserved
// 0x170 : Data signal of input_44
//         bit 7~0 - input_44[7:0] (Read/Write)
//         others  - reserved
// 0x174 : reserved
// 0x178 : Data signal of input_45
//         bit 7~0 - input_45[7:0] (Read/Write)
//         others  - reserved
// 0x17c : reserved
// 0x180 : Data signal of input_46
//         bit 7~0 - input_46[7:0] (Read/Write)
//         others  - reserved
// 0x184 : reserved
// 0x188 : Data signal of input_47
//         bit 7~0 - input_47[7:0] (Read/Write)
//         others  - reserved
// 0x18c : reserved
// 0x190 : Data signal of input_48
//         bit 7~0 - input_48[7:0] (Read/Write)
//         others  - reserved
// 0x194 : reserved
// 0x198 : Data signal of input_49
//         bit 7~0 - input_49[7:0] (Read/Write)
//         others  - reserved
// 0x19c : reserved
// 0x1a0 : Data signal of input_50
//         bit 7~0 - input_50[7:0] (Read/Write)
//         others  - reserved
// 0x1a4 : reserved
// 0x1a8 : Data signal of output_V
//         bit 0  - output_V[0] (Read)
//         others - reserved
// 0x1ac : Control signal of output_V
//         bit 0  - output_V_ap_vld (Read/COR)
//         others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XKNN_AXILITES_ADDR_AP_CTRL       0x000
#define XKNN_AXILITES_ADDR_GIE           0x004
#define XKNN_AXILITES_ADDR_IER           0x008
#define XKNN_AXILITES_ADDR_ISR           0x00c
#define XKNN_AXILITES_ADDR_INPUT_0_DATA  0x010
#define XKNN_AXILITES_BITS_INPUT_0_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_1_DATA  0x018
#define XKNN_AXILITES_BITS_INPUT_1_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_2_DATA  0x020
#define XKNN_AXILITES_BITS_INPUT_2_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_3_DATA  0x028
#define XKNN_AXILITES_BITS_INPUT_3_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_4_DATA  0x030
#define XKNN_AXILITES_BITS_INPUT_4_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_5_DATA  0x038
#define XKNN_AXILITES_BITS_INPUT_5_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_6_DATA  0x040
#define XKNN_AXILITES_BITS_INPUT_6_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_7_DATA  0x048
#define XKNN_AXILITES_BITS_INPUT_7_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_8_DATA  0x050
#define XKNN_AXILITES_BITS_INPUT_8_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_9_DATA  0x058
#define XKNN_AXILITES_BITS_INPUT_9_DATA  8
#define XKNN_AXILITES_ADDR_INPUT_10_DATA 0x060
#define XKNN_AXILITES_BITS_INPUT_10_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_11_DATA 0x068
#define XKNN_AXILITES_BITS_INPUT_11_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_12_DATA 0x070
#define XKNN_AXILITES_BITS_INPUT_12_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_13_DATA 0x078
#define XKNN_AXILITES_BITS_INPUT_13_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_14_DATA 0x080
#define XKNN_AXILITES_BITS_INPUT_14_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_15_DATA 0x088
#define XKNN_AXILITES_BITS_INPUT_15_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_16_DATA 0x090
#define XKNN_AXILITES_BITS_INPUT_16_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_17_DATA 0x098
#define XKNN_AXILITES_BITS_INPUT_17_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_18_DATA 0x0a0
#define XKNN_AXILITES_BITS_INPUT_18_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_19_DATA 0x0a8
#define XKNN_AXILITES_BITS_INPUT_19_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_20_DATA 0x0b0
#define XKNN_AXILITES_BITS_INPUT_20_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_21_DATA 0x0b8
#define XKNN_AXILITES_BITS_INPUT_21_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_22_DATA 0x0c0
#define XKNN_AXILITES_BITS_INPUT_22_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_23_DATA 0x0c8
#define XKNN_AXILITES_BITS_INPUT_23_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_24_DATA 0x0d0
#define XKNN_AXILITES_BITS_INPUT_24_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_25_DATA 0x0d8
#define XKNN_AXILITES_BITS_INPUT_25_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_26_DATA 0x0e0
#define XKNN_AXILITES_BITS_INPUT_26_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_27_DATA 0x0e8
#define XKNN_AXILITES_BITS_INPUT_27_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_28_DATA 0x0f0
#define XKNN_AXILITES_BITS_INPUT_28_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_29_DATA 0x0f8
#define XKNN_AXILITES_BITS_INPUT_29_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_30_DATA 0x100
#define XKNN_AXILITES_BITS_INPUT_30_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_31_DATA 0x108
#define XKNN_AXILITES_BITS_INPUT_31_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_32_DATA 0x110
#define XKNN_AXILITES_BITS_INPUT_32_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_33_DATA 0x118
#define XKNN_AXILITES_BITS_INPUT_33_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_34_DATA 0x120
#define XKNN_AXILITES_BITS_INPUT_34_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_35_DATA 0x128
#define XKNN_AXILITES_BITS_INPUT_35_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_36_DATA 0x130
#define XKNN_AXILITES_BITS_INPUT_36_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_37_DATA 0x138
#define XKNN_AXILITES_BITS_INPUT_37_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_38_DATA 0x140
#define XKNN_AXILITES_BITS_INPUT_38_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_39_DATA 0x148
#define XKNN_AXILITES_BITS_INPUT_39_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_40_DATA 0x150
#define XKNN_AXILITES_BITS_INPUT_40_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_41_DATA 0x158
#define XKNN_AXILITES_BITS_INPUT_41_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_42_DATA 0x160
#define XKNN_AXILITES_BITS_INPUT_42_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_43_DATA 0x168
#define XKNN_AXILITES_BITS_INPUT_43_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_44_DATA 0x170
#define XKNN_AXILITES_BITS_INPUT_44_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_45_DATA 0x178
#define XKNN_AXILITES_BITS_INPUT_45_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_46_DATA 0x180
#define XKNN_AXILITES_BITS_INPUT_46_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_47_DATA 0x188
#define XKNN_AXILITES_BITS_INPUT_47_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_48_DATA 0x190
#define XKNN_AXILITES_BITS_INPUT_48_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_49_DATA 0x198
#define XKNN_AXILITES_BITS_INPUT_49_DATA 8
#define XKNN_AXILITES_ADDR_INPUT_50_DATA 0x1a0
#define XKNN_AXILITES_BITS_INPUT_50_DATA 8
#define XKNN_AXILITES_ADDR_OUTPUT_V_DATA 0x1a8
#define XKNN_AXILITES_BITS_OUTPUT_V_DATA 1
#define XKNN_AXILITES_ADDR_OUTPUT_V_CTRL 0x1ac

