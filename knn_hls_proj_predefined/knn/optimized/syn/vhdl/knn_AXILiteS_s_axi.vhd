-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity knn_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 9;
    C_S_AXI_DATA_WIDTH    : INTEGER := 32);
port (
    ACLK                  :in   STD_LOGIC;
    ARESET                :in   STD_LOGIC;
    ACLK_EN               :in   STD_LOGIC;
    AWADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    AWVALID               :in   STD_LOGIC;
    AWREADY               :out  STD_LOGIC;
    WDATA                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    WSTRB                 :in   STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH/8-1 downto 0);
    WVALID                :in   STD_LOGIC;
    WREADY                :out  STD_LOGIC;
    BRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    BVALID                :out  STD_LOGIC;
    BREADY                :in   STD_LOGIC;
    ARADDR                :in   STD_LOGIC_VECTOR(C_S_AXI_ADDR_WIDTH-1 downto 0);
    ARVALID               :in   STD_LOGIC;
    ARREADY               :out  STD_LOGIC;
    RDATA                 :out  STD_LOGIC_VECTOR(C_S_AXI_DATA_WIDTH-1 downto 0);
    RRESP                 :out  STD_LOGIC_VECTOR(1 downto 0);
    RVALID                :out  STD_LOGIC;
    RREADY                :in   STD_LOGIC;
    interrupt             :out  STD_LOGIC;
    ap_start              :out  STD_LOGIC;
    ap_done               :in   STD_LOGIC;
    ap_ready              :in   STD_LOGIC;
    ap_idle               :in   STD_LOGIC;
    input_0               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_1               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_2               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_3               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_4               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_5               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_6               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_7               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_8               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_9               :out  STD_LOGIC_VECTOR(7 downto 0);
    input_10              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_11              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_12              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_13              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_14              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_15              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_16              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_17              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_18              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_19              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_20              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_21              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_22              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_23              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_24              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_25              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_26              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_27              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_28              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_29              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_30              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_31              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_32              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_33              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_34              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_35              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_36              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_37              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_38              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_39              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_40              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_41              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_42              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_43              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_44              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_45              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_46              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_47              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_48              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_49              :out  STD_LOGIC_VECTOR(7 downto 0);
    input_50              :out  STD_LOGIC_VECTOR(7 downto 0);
    output_V              :in   STD_LOGIC_VECTOR(0 downto 0);
    output_V_ap_vld       :in   STD_LOGIC
);
end entity knn_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x000 : Control signals
--         bit 0  - ap_start (Read/Write/COH)
--         bit 1  - ap_done (Read/COR)
--         bit 2  - ap_idle (Read)
--         bit 3  - ap_ready (Read)
--         bit 7  - auto_restart (Read/Write)
--         others - reserved
-- 0x004 : Global Interrupt Enable Register
--         bit 0  - Global Interrupt Enable (Read/Write)
--         others - reserved
-- 0x008 : IP Interrupt Enable Register (Read/Write)
--         bit 0  - Channel 0 (ap_done)
--         bit 1  - Channel 1 (ap_ready)
--         others - reserved
-- 0x00c : IP Interrupt Status Register (Read/TOW)
--         bit 0  - Channel 0 (ap_done)
--         bit 1  - Channel 1 (ap_ready)
--         others - reserved
-- 0x010 : Data signal of input_0
--         bit 7~0 - input_0[7:0] (Read/Write)
--         others  - reserved
-- 0x014 : reserved
-- 0x018 : Data signal of input_1
--         bit 7~0 - input_1[7:0] (Read/Write)
--         others  - reserved
-- 0x01c : reserved
-- 0x020 : Data signal of input_2
--         bit 7~0 - input_2[7:0] (Read/Write)
--         others  - reserved
-- 0x024 : reserved
-- 0x028 : Data signal of input_3
--         bit 7~0 - input_3[7:0] (Read/Write)
--         others  - reserved
-- 0x02c : reserved
-- 0x030 : Data signal of input_4
--         bit 7~0 - input_4[7:0] (Read/Write)
--         others  - reserved
-- 0x034 : reserved
-- 0x038 : Data signal of input_5
--         bit 7~0 - input_5[7:0] (Read/Write)
--         others  - reserved
-- 0x03c : reserved
-- 0x040 : Data signal of input_6
--         bit 7~0 - input_6[7:0] (Read/Write)
--         others  - reserved
-- 0x044 : reserved
-- 0x048 : Data signal of input_7
--         bit 7~0 - input_7[7:0] (Read/Write)
--         others  - reserved
-- 0x04c : reserved
-- 0x050 : Data signal of input_8
--         bit 7~0 - input_8[7:0] (Read/Write)
--         others  - reserved
-- 0x054 : reserved
-- 0x058 : Data signal of input_9
--         bit 7~0 - input_9[7:0] (Read/Write)
--         others  - reserved
-- 0x05c : reserved
-- 0x060 : Data signal of input_10
--         bit 7~0 - input_10[7:0] (Read/Write)
--         others  - reserved
-- 0x064 : reserved
-- 0x068 : Data signal of input_11
--         bit 7~0 - input_11[7:0] (Read/Write)
--         others  - reserved
-- 0x06c : reserved
-- 0x070 : Data signal of input_12
--         bit 7~0 - input_12[7:0] (Read/Write)
--         others  - reserved
-- 0x074 : reserved
-- 0x078 : Data signal of input_13
--         bit 7~0 - input_13[7:0] (Read/Write)
--         others  - reserved
-- 0x07c : reserved
-- 0x080 : Data signal of input_14
--         bit 7~0 - input_14[7:0] (Read/Write)
--         others  - reserved
-- 0x084 : reserved
-- 0x088 : Data signal of input_15
--         bit 7~0 - input_15[7:0] (Read/Write)
--         others  - reserved
-- 0x08c : reserved
-- 0x090 : Data signal of input_16
--         bit 7~0 - input_16[7:0] (Read/Write)
--         others  - reserved
-- 0x094 : reserved
-- 0x098 : Data signal of input_17
--         bit 7~0 - input_17[7:0] (Read/Write)
--         others  - reserved
-- 0x09c : reserved
-- 0x0a0 : Data signal of input_18
--         bit 7~0 - input_18[7:0] (Read/Write)
--         others  - reserved
-- 0x0a4 : reserved
-- 0x0a8 : Data signal of input_19
--         bit 7~0 - input_19[7:0] (Read/Write)
--         others  - reserved
-- 0x0ac : reserved
-- 0x0b0 : Data signal of input_20
--         bit 7~0 - input_20[7:0] (Read/Write)
--         others  - reserved
-- 0x0b4 : reserved
-- 0x0b8 : Data signal of input_21
--         bit 7~0 - input_21[7:0] (Read/Write)
--         others  - reserved
-- 0x0bc : reserved
-- 0x0c0 : Data signal of input_22
--         bit 7~0 - input_22[7:0] (Read/Write)
--         others  - reserved
-- 0x0c4 : reserved
-- 0x0c8 : Data signal of input_23
--         bit 7~0 - input_23[7:0] (Read/Write)
--         others  - reserved
-- 0x0cc : reserved
-- 0x0d0 : Data signal of input_24
--         bit 7~0 - input_24[7:0] (Read/Write)
--         others  - reserved
-- 0x0d4 : reserved
-- 0x0d8 : Data signal of input_25
--         bit 7~0 - input_25[7:0] (Read/Write)
--         others  - reserved
-- 0x0dc : reserved
-- 0x0e0 : Data signal of input_26
--         bit 7~0 - input_26[7:0] (Read/Write)
--         others  - reserved
-- 0x0e4 : reserved
-- 0x0e8 : Data signal of input_27
--         bit 7~0 - input_27[7:0] (Read/Write)
--         others  - reserved
-- 0x0ec : reserved
-- 0x0f0 : Data signal of input_28
--         bit 7~0 - input_28[7:0] (Read/Write)
--         others  - reserved
-- 0x0f4 : reserved
-- 0x0f8 : Data signal of input_29
--         bit 7~0 - input_29[7:0] (Read/Write)
--         others  - reserved
-- 0x0fc : reserved
-- 0x100 : Data signal of input_30
--         bit 7~0 - input_30[7:0] (Read/Write)
--         others  - reserved
-- 0x104 : reserved
-- 0x108 : Data signal of input_31
--         bit 7~0 - input_31[7:0] (Read/Write)
--         others  - reserved
-- 0x10c : reserved
-- 0x110 : Data signal of input_32
--         bit 7~0 - input_32[7:0] (Read/Write)
--         others  - reserved
-- 0x114 : reserved
-- 0x118 : Data signal of input_33
--         bit 7~0 - input_33[7:0] (Read/Write)
--         others  - reserved
-- 0x11c : reserved
-- 0x120 : Data signal of input_34
--         bit 7~0 - input_34[7:0] (Read/Write)
--         others  - reserved
-- 0x124 : reserved
-- 0x128 : Data signal of input_35
--         bit 7~0 - input_35[7:0] (Read/Write)
--         others  - reserved
-- 0x12c : reserved
-- 0x130 : Data signal of input_36
--         bit 7~0 - input_36[7:0] (Read/Write)
--         others  - reserved
-- 0x134 : reserved
-- 0x138 : Data signal of input_37
--         bit 7~0 - input_37[7:0] (Read/Write)
--         others  - reserved
-- 0x13c : reserved
-- 0x140 : Data signal of input_38
--         bit 7~0 - input_38[7:0] (Read/Write)
--         others  - reserved
-- 0x144 : reserved
-- 0x148 : Data signal of input_39
--         bit 7~0 - input_39[7:0] (Read/Write)
--         others  - reserved
-- 0x14c : reserved
-- 0x150 : Data signal of input_40
--         bit 7~0 - input_40[7:0] (Read/Write)
--         others  - reserved
-- 0x154 : reserved
-- 0x158 : Data signal of input_41
--         bit 7~0 - input_41[7:0] (Read/Write)
--         others  - reserved
-- 0x15c : reserved
-- 0x160 : Data signal of input_42
--         bit 7~0 - input_42[7:0] (Read/Write)
--         others  - reserved
-- 0x164 : reserved
-- 0x168 : Data signal of input_43
--         bit 7~0 - input_43[7:0] (Read/Write)
--         others  - reserved
-- 0x16c : reserved
-- 0x170 : Data signal of input_44
--         bit 7~0 - input_44[7:0] (Read/Write)
--         others  - reserved
-- 0x174 : reserved
-- 0x178 : Data signal of input_45
--         bit 7~0 - input_45[7:0] (Read/Write)
--         others  - reserved
-- 0x17c : reserved
-- 0x180 : Data signal of input_46
--         bit 7~0 - input_46[7:0] (Read/Write)
--         others  - reserved
-- 0x184 : reserved
-- 0x188 : Data signal of input_47
--         bit 7~0 - input_47[7:0] (Read/Write)
--         others  - reserved
-- 0x18c : reserved
-- 0x190 : Data signal of input_48
--         bit 7~0 - input_48[7:0] (Read/Write)
--         others  - reserved
-- 0x194 : reserved
-- 0x198 : Data signal of input_49
--         bit 7~0 - input_49[7:0] (Read/Write)
--         others  - reserved
-- 0x19c : reserved
-- 0x1a0 : Data signal of input_50
--         bit 7~0 - input_50[7:0] (Read/Write)
--         others  - reserved
-- 0x1a4 : reserved
-- 0x1a8 : Data signal of output_V
--         bit 0  - output_V[0] (Read)
--         others - reserved
-- 0x1ac : Control signal of output_V
--         bit 0  - output_V_ap_vld (Read/COR)
--         others - reserved
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of knn_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL         : INTEGER := 16#000#;
    constant ADDR_GIE             : INTEGER := 16#004#;
    constant ADDR_IER             : INTEGER := 16#008#;
    constant ADDR_ISR             : INTEGER := 16#00c#;
    constant ADDR_INPUT_0_DATA_0  : INTEGER := 16#010#;
    constant ADDR_INPUT_0_CTRL    : INTEGER := 16#014#;
    constant ADDR_INPUT_1_DATA_0  : INTEGER := 16#018#;
    constant ADDR_INPUT_1_CTRL    : INTEGER := 16#01c#;
    constant ADDR_INPUT_2_DATA_0  : INTEGER := 16#020#;
    constant ADDR_INPUT_2_CTRL    : INTEGER := 16#024#;
    constant ADDR_INPUT_3_DATA_0  : INTEGER := 16#028#;
    constant ADDR_INPUT_3_CTRL    : INTEGER := 16#02c#;
    constant ADDR_INPUT_4_DATA_0  : INTEGER := 16#030#;
    constant ADDR_INPUT_4_CTRL    : INTEGER := 16#034#;
    constant ADDR_INPUT_5_DATA_0  : INTEGER := 16#038#;
    constant ADDR_INPUT_5_CTRL    : INTEGER := 16#03c#;
    constant ADDR_INPUT_6_DATA_0  : INTEGER := 16#040#;
    constant ADDR_INPUT_6_CTRL    : INTEGER := 16#044#;
    constant ADDR_INPUT_7_DATA_0  : INTEGER := 16#048#;
    constant ADDR_INPUT_7_CTRL    : INTEGER := 16#04c#;
    constant ADDR_INPUT_8_DATA_0  : INTEGER := 16#050#;
    constant ADDR_INPUT_8_CTRL    : INTEGER := 16#054#;
    constant ADDR_INPUT_9_DATA_0  : INTEGER := 16#058#;
    constant ADDR_INPUT_9_CTRL    : INTEGER := 16#05c#;
    constant ADDR_INPUT_10_DATA_0 : INTEGER := 16#060#;
    constant ADDR_INPUT_10_CTRL   : INTEGER := 16#064#;
    constant ADDR_INPUT_11_DATA_0 : INTEGER := 16#068#;
    constant ADDR_INPUT_11_CTRL   : INTEGER := 16#06c#;
    constant ADDR_INPUT_12_DATA_0 : INTEGER := 16#070#;
    constant ADDR_INPUT_12_CTRL   : INTEGER := 16#074#;
    constant ADDR_INPUT_13_DATA_0 : INTEGER := 16#078#;
    constant ADDR_INPUT_13_CTRL   : INTEGER := 16#07c#;
    constant ADDR_INPUT_14_DATA_0 : INTEGER := 16#080#;
    constant ADDR_INPUT_14_CTRL   : INTEGER := 16#084#;
    constant ADDR_INPUT_15_DATA_0 : INTEGER := 16#088#;
    constant ADDR_INPUT_15_CTRL   : INTEGER := 16#08c#;
    constant ADDR_INPUT_16_DATA_0 : INTEGER := 16#090#;
    constant ADDR_INPUT_16_CTRL   : INTEGER := 16#094#;
    constant ADDR_INPUT_17_DATA_0 : INTEGER := 16#098#;
    constant ADDR_INPUT_17_CTRL   : INTEGER := 16#09c#;
    constant ADDR_INPUT_18_DATA_0 : INTEGER := 16#0a0#;
    constant ADDR_INPUT_18_CTRL   : INTEGER := 16#0a4#;
    constant ADDR_INPUT_19_DATA_0 : INTEGER := 16#0a8#;
    constant ADDR_INPUT_19_CTRL   : INTEGER := 16#0ac#;
    constant ADDR_INPUT_20_DATA_0 : INTEGER := 16#0b0#;
    constant ADDR_INPUT_20_CTRL   : INTEGER := 16#0b4#;
    constant ADDR_INPUT_21_DATA_0 : INTEGER := 16#0b8#;
    constant ADDR_INPUT_21_CTRL   : INTEGER := 16#0bc#;
    constant ADDR_INPUT_22_DATA_0 : INTEGER := 16#0c0#;
    constant ADDR_INPUT_22_CTRL   : INTEGER := 16#0c4#;
    constant ADDR_INPUT_23_DATA_0 : INTEGER := 16#0c8#;
    constant ADDR_INPUT_23_CTRL   : INTEGER := 16#0cc#;
    constant ADDR_INPUT_24_DATA_0 : INTEGER := 16#0d0#;
    constant ADDR_INPUT_24_CTRL   : INTEGER := 16#0d4#;
    constant ADDR_INPUT_25_DATA_0 : INTEGER := 16#0d8#;
    constant ADDR_INPUT_25_CTRL   : INTEGER := 16#0dc#;
    constant ADDR_INPUT_26_DATA_0 : INTEGER := 16#0e0#;
    constant ADDR_INPUT_26_CTRL   : INTEGER := 16#0e4#;
    constant ADDR_INPUT_27_DATA_0 : INTEGER := 16#0e8#;
    constant ADDR_INPUT_27_CTRL   : INTEGER := 16#0ec#;
    constant ADDR_INPUT_28_DATA_0 : INTEGER := 16#0f0#;
    constant ADDR_INPUT_28_CTRL   : INTEGER := 16#0f4#;
    constant ADDR_INPUT_29_DATA_0 : INTEGER := 16#0f8#;
    constant ADDR_INPUT_29_CTRL   : INTEGER := 16#0fc#;
    constant ADDR_INPUT_30_DATA_0 : INTEGER := 16#100#;
    constant ADDR_INPUT_30_CTRL   : INTEGER := 16#104#;
    constant ADDR_INPUT_31_DATA_0 : INTEGER := 16#108#;
    constant ADDR_INPUT_31_CTRL   : INTEGER := 16#10c#;
    constant ADDR_INPUT_32_DATA_0 : INTEGER := 16#110#;
    constant ADDR_INPUT_32_CTRL   : INTEGER := 16#114#;
    constant ADDR_INPUT_33_DATA_0 : INTEGER := 16#118#;
    constant ADDR_INPUT_33_CTRL   : INTEGER := 16#11c#;
    constant ADDR_INPUT_34_DATA_0 : INTEGER := 16#120#;
    constant ADDR_INPUT_34_CTRL   : INTEGER := 16#124#;
    constant ADDR_INPUT_35_DATA_0 : INTEGER := 16#128#;
    constant ADDR_INPUT_35_CTRL   : INTEGER := 16#12c#;
    constant ADDR_INPUT_36_DATA_0 : INTEGER := 16#130#;
    constant ADDR_INPUT_36_CTRL   : INTEGER := 16#134#;
    constant ADDR_INPUT_37_DATA_0 : INTEGER := 16#138#;
    constant ADDR_INPUT_37_CTRL   : INTEGER := 16#13c#;
    constant ADDR_INPUT_38_DATA_0 : INTEGER := 16#140#;
    constant ADDR_INPUT_38_CTRL   : INTEGER := 16#144#;
    constant ADDR_INPUT_39_DATA_0 : INTEGER := 16#148#;
    constant ADDR_INPUT_39_CTRL   : INTEGER := 16#14c#;
    constant ADDR_INPUT_40_DATA_0 : INTEGER := 16#150#;
    constant ADDR_INPUT_40_CTRL   : INTEGER := 16#154#;
    constant ADDR_INPUT_41_DATA_0 : INTEGER := 16#158#;
    constant ADDR_INPUT_41_CTRL   : INTEGER := 16#15c#;
    constant ADDR_INPUT_42_DATA_0 : INTEGER := 16#160#;
    constant ADDR_INPUT_42_CTRL   : INTEGER := 16#164#;
    constant ADDR_INPUT_43_DATA_0 : INTEGER := 16#168#;
    constant ADDR_INPUT_43_CTRL   : INTEGER := 16#16c#;
    constant ADDR_INPUT_44_DATA_0 : INTEGER := 16#170#;
    constant ADDR_INPUT_44_CTRL   : INTEGER := 16#174#;
    constant ADDR_INPUT_45_DATA_0 : INTEGER := 16#178#;
    constant ADDR_INPUT_45_CTRL   : INTEGER := 16#17c#;
    constant ADDR_INPUT_46_DATA_0 : INTEGER := 16#180#;
    constant ADDR_INPUT_46_CTRL   : INTEGER := 16#184#;
    constant ADDR_INPUT_47_DATA_0 : INTEGER := 16#188#;
    constant ADDR_INPUT_47_CTRL   : INTEGER := 16#18c#;
    constant ADDR_INPUT_48_DATA_0 : INTEGER := 16#190#;
    constant ADDR_INPUT_48_CTRL   : INTEGER := 16#194#;
    constant ADDR_INPUT_49_DATA_0 : INTEGER := 16#198#;
    constant ADDR_INPUT_49_CTRL   : INTEGER := 16#19c#;
    constant ADDR_INPUT_50_DATA_0 : INTEGER := 16#1a0#;
    constant ADDR_INPUT_50_CTRL   : INTEGER := 16#1a4#;
    constant ADDR_OUTPUT_V_DATA_0 : INTEGER := 16#1a8#;
    constant ADDR_OUTPUT_V_CTRL   : INTEGER := 16#1ac#;
    constant ADDR_BITS         : INTEGER := 9;

    signal waddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal wmask               : UNSIGNED(31 downto 0);
    signal aw_hs               : STD_LOGIC;
    signal w_hs                : STD_LOGIC;
    signal rdata_data          : UNSIGNED(31 downto 0);
    signal ar_hs               : STD_LOGIC;
    signal raddr               : UNSIGNED(ADDR_BITS-1 downto 0);
    signal AWREADY_t           : STD_LOGIC;
    signal WREADY_t            : STD_LOGIC;
    signal ARREADY_t           : STD_LOGIC;
    signal RVALID_t            : STD_LOGIC;
    -- internal registers
    signal int_ap_idle         : STD_LOGIC;
    signal int_ap_ready        : STD_LOGIC;
    signal int_ap_done         : STD_LOGIC := '0';
    signal int_ap_start        : STD_LOGIC := '0';
    signal int_auto_restart    : STD_LOGIC := '0';
    signal int_gie             : STD_LOGIC := '0';
    signal int_ier             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_isr             : UNSIGNED(1 downto 0) := (others => '0');
    signal int_input_0         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_1         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_2         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_3         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_4         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_5         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_6         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_7         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_8         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_9         : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_10        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_11        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_12        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_13        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_14        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_15        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_16        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_17        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_18        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_19        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_20        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_21        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_22        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_23        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_24        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_25        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_26        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_27        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_28        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_29        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_30        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_31        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_32        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_33        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_34        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_35        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_36        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_37        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_38        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_39        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_40        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_41        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_42        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_43        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_44        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_45        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_46        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_47        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_48        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_49        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_input_50        : UNSIGNED(7 downto 0) := (others => '0');
    signal int_output_V        : UNSIGNED(0 downto 0) := (others => '0');
    signal int_output_V_ap_vld : STD_LOGIC;


begin
-- ----------------------- Instantiation------------------

-- ----------------------- AXI WRITE ---------------------
    AWREADY_t <=  '1' when wstate = wridle else '0';
    AWREADY   <=  AWREADY_t;
    WREADY_t  <=  '1' when wstate = wrdata else '0';
    WREADY    <=  WREADY_t;
    BRESP     <=  "00";  -- OKAY
    BVALID    <=  '1' when wstate = wrresp else '0';
    wmask     <=  (31 downto 24 => WSTRB(3), 23 downto 16 => WSTRB(2), 15 downto 8 => WSTRB(1), 7 downto 0 => WSTRB(0));
    aw_hs     <=  AWVALID and AWREADY_t;
    w_hs      <=  WVALID and WREADY_t;

    -- write FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                wstate <= wrreset;
            elsif (ACLK_EN = '1') then
                wstate <= wnext;
            end if;
        end if;
    end process;

    process (wstate, AWVALID, WVALID, BREADY)
    begin
        case (wstate) is
        when wridle =>
            if (AWVALID = '1') then
                wnext <= wrdata;
            else
                wnext <= wridle;
            end if;
        when wrdata =>
            if (WVALID = '1') then
                wnext <= wrresp;
            else
                wnext <= wrdata;
            end if;
        when wrresp =>
            if (BREADY = '1') then
                wnext <= wridle;
            else
                wnext <= wrresp;
            end if;
        when others =>
            wnext <= wridle;
        end case;
    end process;

    waddr_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (aw_hs = '1') then
                    waddr <= UNSIGNED(AWADDR(ADDR_BITS-1 downto 0));
                end if;
            end if;
        end if;
    end process;

-- ----------------------- AXI READ ----------------------
    ARREADY_t <= '1' when (rstate = rdidle) else '0';
    ARREADY <= ARREADY_t;
    RDATA   <= STD_LOGIC_VECTOR(rdata_data);
    RRESP   <= "00";  -- OKAY
    RVALID_t  <= '1' when (rstate = rddata) else '0';
    RVALID    <= RVALID_t;
    ar_hs   <= ARVALID and ARREADY_t;
    raddr   <= UNSIGNED(ARADDR(ADDR_BITS-1 downto 0));

    -- read FSM
    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                rstate <= rdreset;
            elsif (ACLK_EN = '1') then
                rstate <= rnext;
            end if;
        end if;
    end process;

    process (rstate, ARVALID, RREADY, RVALID_t)
    begin
        case (rstate) is
        when rdidle =>
            if (ARVALID = '1') then
                rnext <= rddata;
            else
                rnext <= rdidle;
            end if;
        when rddata =>
            if (RREADY = '1' and RVALID_t = '1') then
                rnext <= rdidle;
            else
                rnext <= rddata;
            end if;
        when others =>
            rnext <= rdidle;
        end case;
    end process;

    rdata_proc : process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    case (TO_INTEGER(raddr)) is
                    when ADDR_AP_CTRL =>
                        rdata_data <= (7 => int_auto_restart, 3 => int_ap_ready, 2 => int_ap_idle, 1 => int_ap_done, 0 => int_ap_start, others => '0');
                    when ADDR_GIE =>
                        rdata_data <= (0 => int_gie, others => '0');
                    when ADDR_IER =>
                        rdata_data <= (1 => int_ier(1), 0 => int_ier(0), others => '0');
                    when ADDR_ISR =>
                        rdata_data <= (1 => int_isr(1), 0 => int_isr(0), others => '0');
                    when ADDR_INPUT_0_DATA_0 =>
                        rdata_data <= RESIZE(int_input_0(7 downto 0), 32);
                    when ADDR_INPUT_1_DATA_0 =>
                        rdata_data <= RESIZE(int_input_1(7 downto 0), 32);
                    when ADDR_INPUT_2_DATA_0 =>
                        rdata_data <= RESIZE(int_input_2(7 downto 0), 32);
                    when ADDR_INPUT_3_DATA_0 =>
                        rdata_data <= RESIZE(int_input_3(7 downto 0), 32);
                    when ADDR_INPUT_4_DATA_0 =>
                        rdata_data <= RESIZE(int_input_4(7 downto 0), 32);
                    when ADDR_INPUT_5_DATA_0 =>
                        rdata_data <= RESIZE(int_input_5(7 downto 0), 32);
                    when ADDR_INPUT_6_DATA_0 =>
                        rdata_data <= RESIZE(int_input_6(7 downto 0), 32);
                    when ADDR_INPUT_7_DATA_0 =>
                        rdata_data <= RESIZE(int_input_7(7 downto 0), 32);
                    when ADDR_INPUT_8_DATA_0 =>
                        rdata_data <= RESIZE(int_input_8(7 downto 0), 32);
                    when ADDR_INPUT_9_DATA_0 =>
                        rdata_data <= RESIZE(int_input_9(7 downto 0), 32);
                    when ADDR_INPUT_10_DATA_0 =>
                        rdata_data <= RESIZE(int_input_10(7 downto 0), 32);
                    when ADDR_INPUT_11_DATA_0 =>
                        rdata_data <= RESIZE(int_input_11(7 downto 0), 32);
                    when ADDR_INPUT_12_DATA_0 =>
                        rdata_data <= RESIZE(int_input_12(7 downto 0), 32);
                    when ADDR_INPUT_13_DATA_0 =>
                        rdata_data <= RESIZE(int_input_13(7 downto 0), 32);
                    when ADDR_INPUT_14_DATA_0 =>
                        rdata_data <= RESIZE(int_input_14(7 downto 0), 32);
                    when ADDR_INPUT_15_DATA_0 =>
                        rdata_data <= RESIZE(int_input_15(7 downto 0), 32);
                    when ADDR_INPUT_16_DATA_0 =>
                        rdata_data <= RESIZE(int_input_16(7 downto 0), 32);
                    when ADDR_INPUT_17_DATA_0 =>
                        rdata_data <= RESIZE(int_input_17(7 downto 0), 32);
                    when ADDR_INPUT_18_DATA_0 =>
                        rdata_data <= RESIZE(int_input_18(7 downto 0), 32);
                    when ADDR_INPUT_19_DATA_0 =>
                        rdata_data <= RESIZE(int_input_19(7 downto 0), 32);
                    when ADDR_INPUT_20_DATA_0 =>
                        rdata_data <= RESIZE(int_input_20(7 downto 0), 32);
                    when ADDR_INPUT_21_DATA_0 =>
                        rdata_data <= RESIZE(int_input_21(7 downto 0), 32);
                    when ADDR_INPUT_22_DATA_0 =>
                        rdata_data <= RESIZE(int_input_22(7 downto 0), 32);
                    when ADDR_INPUT_23_DATA_0 =>
                        rdata_data <= RESIZE(int_input_23(7 downto 0), 32);
                    when ADDR_INPUT_24_DATA_0 =>
                        rdata_data <= RESIZE(int_input_24(7 downto 0), 32);
                    when ADDR_INPUT_25_DATA_0 =>
                        rdata_data <= RESIZE(int_input_25(7 downto 0), 32);
                    when ADDR_INPUT_26_DATA_0 =>
                        rdata_data <= RESIZE(int_input_26(7 downto 0), 32);
                    when ADDR_INPUT_27_DATA_0 =>
                        rdata_data <= RESIZE(int_input_27(7 downto 0), 32);
                    when ADDR_INPUT_28_DATA_0 =>
                        rdata_data <= RESIZE(int_input_28(7 downto 0), 32);
                    when ADDR_INPUT_29_DATA_0 =>
                        rdata_data <= RESIZE(int_input_29(7 downto 0), 32);
                    when ADDR_INPUT_30_DATA_0 =>
                        rdata_data <= RESIZE(int_input_30(7 downto 0), 32);
                    when ADDR_INPUT_31_DATA_0 =>
                        rdata_data <= RESIZE(int_input_31(7 downto 0), 32);
                    when ADDR_INPUT_32_DATA_0 =>
                        rdata_data <= RESIZE(int_input_32(7 downto 0), 32);
                    when ADDR_INPUT_33_DATA_0 =>
                        rdata_data <= RESIZE(int_input_33(7 downto 0), 32);
                    when ADDR_INPUT_34_DATA_0 =>
                        rdata_data <= RESIZE(int_input_34(7 downto 0), 32);
                    when ADDR_INPUT_35_DATA_0 =>
                        rdata_data <= RESIZE(int_input_35(7 downto 0), 32);
                    when ADDR_INPUT_36_DATA_0 =>
                        rdata_data <= RESIZE(int_input_36(7 downto 0), 32);
                    when ADDR_INPUT_37_DATA_0 =>
                        rdata_data <= RESIZE(int_input_37(7 downto 0), 32);
                    when ADDR_INPUT_38_DATA_0 =>
                        rdata_data <= RESIZE(int_input_38(7 downto 0), 32);
                    when ADDR_INPUT_39_DATA_0 =>
                        rdata_data <= RESIZE(int_input_39(7 downto 0), 32);
                    when ADDR_INPUT_40_DATA_0 =>
                        rdata_data <= RESIZE(int_input_40(7 downto 0), 32);
                    when ADDR_INPUT_41_DATA_0 =>
                        rdata_data <= RESIZE(int_input_41(7 downto 0), 32);
                    when ADDR_INPUT_42_DATA_0 =>
                        rdata_data <= RESIZE(int_input_42(7 downto 0), 32);
                    when ADDR_INPUT_43_DATA_0 =>
                        rdata_data <= RESIZE(int_input_43(7 downto 0), 32);
                    when ADDR_INPUT_44_DATA_0 =>
                        rdata_data <= RESIZE(int_input_44(7 downto 0), 32);
                    when ADDR_INPUT_45_DATA_0 =>
                        rdata_data <= RESIZE(int_input_45(7 downto 0), 32);
                    when ADDR_INPUT_46_DATA_0 =>
                        rdata_data <= RESIZE(int_input_46(7 downto 0), 32);
                    when ADDR_INPUT_47_DATA_0 =>
                        rdata_data <= RESIZE(int_input_47(7 downto 0), 32);
                    when ADDR_INPUT_48_DATA_0 =>
                        rdata_data <= RESIZE(int_input_48(7 downto 0), 32);
                    when ADDR_INPUT_49_DATA_0 =>
                        rdata_data <= RESIZE(int_input_49(7 downto 0), 32);
                    when ADDR_INPUT_50_DATA_0 =>
                        rdata_data <= RESIZE(int_input_50(7 downto 0), 32);
                    when ADDR_OUTPUT_V_DATA_0 =>
                        rdata_data <= RESIZE(int_output_V(0 downto 0), 32);
                    when ADDR_OUTPUT_V_CTRL =>
                        rdata_data <= (0 => int_output_V_ap_vld, others => '0');
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;
    input_0              <= STD_LOGIC_VECTOR(int_input_0);
    input_1              <= STD_LOGIC_VECTOR(int_input_1);
    input_2              <= STD_LOGIC_VECTOR(int_input_2);
    input_3              <= STD_LOGIC_VECTOR(int_input_3);
    input_4              <= STD_LOGIC_VECTOR(int_input_4);
    input_5              <= STD_LOGIC_VECTOR(int_input_5);
    input_6              <= STD_LOGIC_VECTOR(int_input_6);
    input_7              <= STD_LOGIC_VECTOR(int_input_7);
    input_8              <= STD_LOGIC_VECTOR(int_input_8);
    input_9              <= STD_LOGIC_VECTOR(int_input_9);
    input_10             <= STD_LOGIC_VECTOR(int_input_10);
    input_11             <= STD_LOGIC_VECTOR(int_input_11);
    input_12             <= STD_LOGIC_VECTOR(int_input_12);
    input_13             <= STD_LOGIC_VECTOR(int_input_13);
    input_14             <= STD_LOGIC_VECTOR(int_input_14);
    input_15             <= STD_LOGIC_VECTOR(int_input_15);
    input_16             <= STD_LOGIC_VECTOR(int_input_16);
    input_17             <= STD_LOGIC_VECTOR(int_input_17);
    input_18             <= STD_LOGIC_VECTOR(int_input_18);
    input_19             <= STD_LOGIC_VECTOR(int_input_19);
    input_20             <= STD_LOGIC_VECTOR(int_input_20);
    input_21             <= STD_LOGIC_VECTOR(int_input_21);
    input_22             <= STD_LOGIC_VECTOR(int_input_22);
    input_23             <= STD_LOGIC_VECTOR(int_input_23);
    input_24             <= STD_LOGIC_VECTOR(int_input_24);
    input_25             <= STD_LOGIC_VECTOR(int_input_25);
    input_26             <= STD_LOGIC_VECTOR(int_input_26);
    input_27             <= STD_LOGIC_VECTOR(int_input_27);
    input_28             <= STD_LOGIC_VECTOR(int_input_28);
    input_29             <= STD_LOGIC_VECTOR(int_input_29);
    input_30             <= STD_LOGIC_VECTOR(int_input_30);
    input_31             <= STD_LOGIC_VECTOR(int_input_31);
    input_32             <= STD_LOGIC_VECTOR(int_input_32);
    input_33             <= STD_LOGIC_VECTOR(int_input_33);
    input_34             <= STD_LOGIC_VECTOR(int_input_34);
    input_35             <= STD_LOGIC_VECTOR(int_input_35);
    input_36             <= STD_LOGIC_VECTOR(int_input_36);
    input_37             <= STD_LOGIC_VECTOR(int_input_37);
    input_38             <= STD_LOGIC_VECTOR(int_input_38);
    input_39             <= STD_LOGIC_VECTOR(int_input_39);
    input_40             <= STD_LOGIC_VECTOR(int_input_40);
    input_41             <= STD_LOGIC_VECTOR(int_input_41);
    input_42             <= STD_LOGIC_VECTOR(int_input_42);
    input_43             <= STD_LOGIC_VECTOR(int_input_43);
    input_44             <= STD_LOGIC_VECTOR(int_input_44);
    input_45             <= STD_LOGIC_VECTOR(int_input_45);
    input_46             <= STD_LOGIC_VECTOR(int_input_46);
    input_47             <= STD_LOGIC_VECTOR(int_input_47);
    input_48             <= STD_LOGIC_VECTOR(int_input_48);
    input_49             <= STD_LOGIC_VECTOR(int_input_49);
    input_50             <= STD_LOGIC_VECTOR(int_input_50);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_start <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1' and WDATA(0) = '1') then
                    int_ap_start <= '1';
                elsif (ap_ready = '1') then
                    int_ap_start <= int_auto_restart; -- clear on handshake/auto restart
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_done <= '0';
            elsif (ACLK_EN = '1') then
                if (ap_done = '1') then
                    int_ap_done <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_AP_CTRL) then
                    int_ap_done <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_idle <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_idle <= ap_idle;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ap_ready <= '0';
            elsif (ACLK_EN = '1') then
                if (true) then
                    int_ap_ready <= ap_ready;
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_auto_restart <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_AP_CTRL and WSTRB(0) = '1') then
                    int_auto_restart <= WDATA(7);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_gie <= '0';
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_GIE and WSTRB(0) = '1') then
                    int_gie <= WDATA(0);
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_ier <= "00";
            elsif (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_IER and WSTRB(0) = '1') then
                    int_ier <= UNSIGNED(WDATA(1 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(0) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(0) = '1' and ap_done = '1') then
                    int_isr(0) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(0) <= int_isr(0) xor WDATA(0); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_isr(1) <= '0';
            elsif (ACLK_EN = '1') then
                if (int_ier(1) = '1' and ap_ready = '1') then
                    int_isr(1) <= '1';
                elsif (w_hs = '1' and waddr = ADDR_ISR and WSTRB(0) = '1') then
                    int_isr(1) <= int_isr(1) xor WDATA(1); -- toggle on write
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_0_DATA_0) then
                    int_input_0(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_0(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_1_DATA_0) then
                    int_input_1(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_1(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_2_DATA_0) then
                    int_input_2(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_2(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_3_DATA_0) then
                    int_input_3(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_3(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_4_DATA_0) then
                    int_input_4(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_4(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_5_DATA_0) then
                    int_input_5(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_5(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_6_DATA_0) then
                    int_input_6(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_6(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_7_DATA_0) then
                    int_input_7(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_7(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_8_DATA_0) then
                    int_input_8(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_8(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_9_DATA_0) then
                    int_input_9(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_9(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_10_DATA_0) then
                    int_input_10(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_10(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_11_DATA_0) then
                    int_input_11(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_11(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_12_DATA_0) then
                    int_input_12(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_12(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_13_DATA_0) then
                    int_input_13(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_13(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_14_DATA_0) then
                    int_input_14(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_14(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_15_DATA_0) then
                    int_input_15(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_15(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_16_DATA_0) then
                    int_input_16(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_16(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_17_DATA_0) then
                    int_input_17(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_17(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_18_DATA_0) then
                    int_input_18(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_18(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_19_DATA_0) then
                    int_input_19(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_19(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_20_DATA_0) then
                    int_input_20(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_20(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_21_DATA_0) then
                    int_input_21(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_21(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_22_DATA_0) then
                    int_input_22(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_22(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_23_DATA_0) then
                    int_input_23(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_23(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_24_DATA_0) then
                    int_input_24(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_24(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_25_DATA_0) then
                    int_input_25(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_25(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_26_DATA_0) then
                    int_input_26(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_26(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_27_DATA_0) then
                    int_input_27(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_27(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_28_DATA_0) then
                    int_input_28(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_28(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_29_DATA_0) then
                    int_input_29(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_29(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_30_DATA_0) then
                    int_input_30(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_30(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_31_DATA_0) then
                    int_input_31(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_31(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_32_DATA_0) then
                    int_input_32(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_32(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_33_DATA_0) then
                    int_input_33(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_33(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_34_DATA_0) then
                    int_input_34(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_34(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_35_DATA_0) then
                    int_input_35(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_35(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_36_DATA_0) then
                    int_input_36(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_36(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_37_DATA_0) then
                    int_input_37(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_37(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_38_DATA_0) then
                    int_input_38(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_38(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_39_DATA_0) then
                    int_input_39(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_39(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_40_DATA_0) then
                    int_input_40(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_40(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_41_DATA_0) then
                    int_input_41(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_41(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_42_DATA_0) then
                    int_input_42(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_42(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_43_DATA_0) then
                    int_input_43(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_43(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_44_DATA_0) then
                    int_input_44(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_44(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_45_DATA_0) then
                    int_input_45(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_45(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_46_DATA_0) then
                    int_input_46(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_46(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_47_DATA_0) then
                    int_input_47(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_47(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_48_DATA_0) then
                    int_input_48(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_48(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_49_DATA_0) then
                    int_input_49(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_49(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_50_DATA_0) then
                    int_input_50(7 downto 0) <= (UNSIGNED(WDATA(7 downto 0)) and wmask(7 downto 0)) or ((not wmask(7 downto 0)) and int_input_50(7 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_V <= (others => '0');
            elsif (ACLK_EN = '1') then
                if (output_V_ap_vld = '1') then
                    int_output_V <= UNSIGNED(output_V); -- clear on read
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_output_V_ap_vld <= '0';
            elsif (ACLK_EN = '1') then
                if (output_V_ap_vld = '1') then
                    int_output_V_ap_vld <= '1';
                elsif (ar_hs = '1' and raddr = ADDR_OUTPUT_V_CTRL) then
                    int_output_V_ap_vld <= '0'; -- clear on read
                end if;
            end if;
        end if;
    end process;


-- ----------------------- Memory logic ------------------

end architecture behave;
