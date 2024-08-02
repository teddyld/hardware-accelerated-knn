// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1ns/1ps
module knn_AXILiteS_s_axi
#(parameter
    C_S_AXI_ADDR_WIDTH = 21,
    C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          ACLK,
    input  wire                          ARESET,
    input  wire                          ACLK_EN,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] AWADDR,
    input  wire                          AWVALID,
    output wire                          AWREADY,
    input  wire [C_S_AXI_DATA_WIDTH-1:0] WDATA,
    input  wire [C_S_AXI_DATA_WIDTH/8-1:0] WSTRB,
    input  wire                          WVALID,
    output wire                          WREADY,
    output wire [1:0]                    BRESP,
    output wire                          BVALID,
    input  wire                          BREADY,
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] ARADDR,
    input  wire                          ARVALID,
    output wire                          ARREADY,
    output wire [C_S_AXI_DATA_WIDTH-1:0] RDATA,
    output wire [1:0]                    RRESP,
    output wire                          RVALID,
    input  wire                          RREADY,
    output wire                          interrupt,
    output wire                          ap_start,
    input  wire                          ap_done,
    input  wire                          ap_ready,
    input  wire                          ap_idle,
    output wire [403:0]                  input_V,
    input  wire [12:0]                   train_samples_V_address0,
    input  wire                          train_samples_V_ce0,
    output wire [403:0]                  train_samples_V_q0,
    input  wire [0:0]                    output_V,
    input  wire                          output_V_ap_vld
);
//------------------------Address Info-------------------
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

//------------------------Parameter----------------------
localparam
    ADDR_AP_CTRL              = 21'h000000,
    ADDR_GIE                  = 21'h000004,
    ADDR_IER                  = 21'h000008,
    ADDR_ISR                  = 21'h00000c,
    ADDR_INPUT_V_DATA_0       = 21'h000010,
    ADDR_INPUT_V_DATA_1       = 21'h000014,
    ADDR_INPUT_V_DATA_2       = 21'h000018,
    ADDR_INPUT_V_DATA_3       = 21'h00001c,
    ADDR_INPUT_V_DATA_4       = 21'h000020,
    ADDR_INPUT_V_DATA_5       = 21'h000024,
    ADDR_INPUT_V_DATA_6       = 21'h000028,
    ADDR_INPUT_V_DATA_7       = 21'h00002c,
    ADDR_INPUT_V_DATA_8       = 21'h000030,
    ADDR_INPUT_V_DATA_9       = 21'h000034,
    ADDR_INPUT_V_DATA_10      = 21'h000038,
    ADDR_INPUT_V_DATA_11      = 21'h00003c,
    ADDR_INPUT_V_DATA_12      = 21'h000040,
    ADDR_INPUT_V_CTRL         = 21'h000044,
    ADDR_OUTPUT_V_DATA_0      = 21'h100000,
    ADDR_OUTPUT_V_CTRL        = 21'h100004,
    ADDR_TRAIN_SAMPLES_V_BASE = 21'h080000,
    ADDR_TRAIN_SAMPLES_V_HIGH = 21'h0fffff,
    WRIDLE                    = 2'd0,
    WRDATA                    = 2'd1,
    WRRESP                    = 2'd2,
    WRRESET                   = 2'd3,
    RDIDLE                    = 2'd0,
    RDDATA                    = 2'd1,
    RDRESET                   = 2'd2,
    ADDR_BITS         = 21;

//------------------------Local signal-------------------
    reg  [1:0]                    wstate = WRRESET;
    reg  [1:0]                    wnext;
    reg  [ADDR_BITS-1:0]          waddr;
    wire [31:0]                   wmask;
    wire                          aw_hs;
    wire                          w_hs;
    reg  [1:0]                    rstate = RDRESET;
    reg  [1:0]                    rnext;
    reg  [31:0]                   rdata;
    wire                          ar_hs;
    wire [ADDR_BITS-1:0]          raddr;
    // internal registers
    reg                           int_ap_idle;
    reg                           int_ap_ready;
    reg                           int_ap_done = 1'b0;
    reg                           int_ap_start = 1'b0;
    reg                           int_auto_restart = 1'b0;
    reg                           int_gie = 1'b0;
    reg  [1:0]                    int_ier = 2'b0;
    reg  [1:0]                    int_isr = 2'b0;
    reg  [403:0]                  int_input_V = 'b0;
    reg  [0:0]                    int_output_V = 'b0;
    reg                           int_output_V_ap_vld;
    // memory signals
    wire [12:0]                   int_train_samples_V_address0;
    wire                          int_train_samples_V_ce0;
    wire                          int_train_samples_V_we0;
    wire [50:0]                   int_train_samples_V_be0;
    wire [407:0]                  int_train_samples_V_d0;
    wire [407:0]                  int_train_samples_V_q0;
    wire [12:0]                   int_train_samples_V_address1;
    wire                          int_train_samples_V_ce1;
    wire                          int_train_samples_V_we1;
    wire [50:0]                   int_train_samples_V_be1;
    wire [407:0]                  int_train_samples_V_d1;
    wire [407:0]                  int_train_samples_V_q1;
    reg                           int_train_samples_V_read;
    reg                           int_train_samples_V_write;
    reg  [3:0]                    int_train_samples_V_shift;

//------------------------Instantiation------------------
// int_train_samples_V
knn_AXILiteS_s_axi_ram #(
    .BYTES    ( 51 ),
    .DEPTH    ( 6000 )
) int_train_samples_V (
    .clk0     ( ACLK ),
    .address0 ( int_train_samples_V_address0 ),
    .ce0      ( int_train_samples_V_ce0 ),
    .we0      ( int_train_samples_V_we0 ),
    .be0      ( int_train_samples_V_be0 ),
    .d0       ( int_train_samples_V_d0 ),
    .q0       ( int_train_samples_V_q0 ),
    .clk1     ( ACLK ),
    .address1 ( int_train_samples_V_address1 ),
    .ce1      ( int_train_samples_V_ce1 ),
    .we1      ( int_train_samples_V_we1 ),
    .be1      ( int_train_samples_V_be1 ),
    .d1       ( int_train_samples_V_d1 ),
    .q1       ( int_train_samples_V_q1 )
);

//------------------------AXI write fsm------------------
assign AWREADY = (wstate == WRIDLE);
assign WREADY  = (wstate == WRDATA);
assign BRESP   = 2'b00;  // OKAY
assign BVALID  = (wstate == WRRESP);
assign wmask   = { {8{WSTRB[3]}}, {8{WSTRB[2]}}, {8{WSTRB[1]}}, {8{WSTRB[0]}} };
assign aw_hs   = AWVALID & AWREADY;
assign w_hs    = WVALID & WREADY;

// wstate
always @(posedge ACLK) begin
    if (ARESET)
        wstate <= WRRESET;
    else if (ACLK_EN)
        wstate <= wnext;
end

// wnext
always @(*) begin
    case (wstate)
        WRIDLE:
            if (AWVALID)
                wnext = WRDATA;
            else
                wnext = WRIDLE;
        WRDATA:
            if (WVALID)
                wnext = WRRESP;
            else
                wnext = WRDATA;
        WRRESP:
            if (BREADY)
                wnext = WRIDLE;
            else
                wnext = WRRESP;
        default:
            wnext = WRIDLE;
    endcase
end

// waddr
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (aw_hs)
            waddr <= AWADDR[ADDR_BITS-1:0];
    end
end

//------------------------AXI read fsm-------------------
assign ARREADY = (rstate == RDIDLE);
assign RDATA   = rdata;
assign RRESP   = 2'b00;  // OKAY
assign RVALID  = (rstate == RDDATA) & !int_train_samples_V_read;
assign ar_hs   = ARVALID & ARREADY;
assign raddr   = ARADDR[ADDR_BITS-1:0];

// rstate
always @(posedge ACLK) begin
    if (ARESET)
        rstate <= RDRESET;
    else if (ACLK_EN)
        rstate <= rnext;
end

// rnext
always @(*) begin
    case (rstate)
        RDIDLE:
            if (ARVALID)
                rnext = RDDATA;
            else
                rnext = RDIDLE;
        RDDATA:
            if (RREADY & RVALID)
                rnext = RDIDLE;
            else
                rnext = RDDATA;
        default:
            rnext = RDIDLE;
    endcase
end

// rdata
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs) begin
            rdata <= 1'b0;
            case (raddr)
                ADDR_AP_CTRL: begin
                    rdata[0] <= int_ap_start;
                    rdata[1] <= int_ap_done;
                    rdata[2] <= int_ap_idle;
                    rdata[3] <= int_ap_ready;
                    rdata[7] <= int_auto_restart;
                end
                ADDR_GIE: begin
                    rdata <= int_gie;
                end
                ADDR_IER: begin
                    rdata <= int_ier;
                end
                ADDR_ISR: begin
                    rdata <= int_isr;
                end
                ADDR_INPUT_V_DATA_0: begin
                    rdata <= int_input_V[31:0];
                end
                ADDR_INPUT_V_DATA_1: begin
                    rdata <= int_input_V[63:32];
                end
                ADDR_INPUT_V_DATA_2: begin
                    rdata <= int_input_V[95:64];
                end
                ADDR_INPUT_V_DATA_3: begin
                    rdata <= int_input_V[127:96];
                end
                ADDR_INPUT_V_DATA_4: begin
                    rdata <= int_input_V[159:128];
                end
                ADDR_INPUT_V_DATA_5: begin
                    rdata <= int_input_V[191:160];
                end
                ADDR_INPUT_V_DATA_6: begin
                    rdata <= int_input_V[223:192];
                end
                ADDR_INPUT_V_DATA_7: begin
                    rdata <= int_input_V[255:224];
                end
                ADDR_INPUT_V_DATA_8: begin
                    rdata <= int_input_V[287:256];
                end
                ADDR_INPUT_V_DATA_9: begin
                    rdata <= int_input_V[319:288];
                end
                ADDR_INPUT_V_DATA_10: begin
                    rdata <= int_input_V[351:320];
                end
                ADDR_INPUT_V_DATA_11: begin
                    rdata <= int_input_V[383:352];
                end
                ADDR_INPUT_V_DATA_12: begin
                    rdata <= int_input_V[403:384];
                end
                ADDR_OUTPUT_V_DATA_0: begin
                    rdata <= int_output_V[0:0];
                end
                ADDR_OUTPUT_V_CTRL: begin
                    rdata[0] <= int_output_V_ap_vld;
                end
            endcase
        end
        else if (int_train_samples_V_read) begin
            rdata <= int_train_samples_V_q1 >> (int_train_samples_V_shift * 32);
        end
    end
end


//------------------------Register logic-----------------
assign interrupt = int_gie & (|int_isr);
assign ap_start  = int_ap_start;
assign input_V   = int_input_V;
// int_ap_start
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_start <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0] && WDATA[0])
            int_ap_start <= 1'b1;
        else if (ap_ready)
            int_ap_start <= int_auto_restart; // clear on handshake/auto restart
    end
end

// int_ap_done
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_done <= 1'b0;
    else if (ACLK_EN) begin
        if (ap_done)
            int_ap_done <= 1'b1;
        else if (ar_hs && raddr == ADDR_AP_CTRL)
            int_ap_done <= 1'b0; // clear on read
    end
end

// int_ap_idle
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_idle <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_idle <= ap_idle;
    end
end

// int_ap_ready
always @(posedge ACLK) begin
    if (ARESET)
        int_ap_ready <= 1'b0;
    else if (ACLK_EN) begin
            int_ap_ready <= ap_ready;
    end
end

// int_auto_restart
always @(posedge ACLK) begin
    if (ARESET)
        int_auto_restart <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_AP_CTRL && WSTRB[0])
            int_auto_restart <=  WDATA[7];
    end
end

// int_gie
always @(posedge ACLK) begin
    if (ARESET)
        int_gie <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_GIE && WSTRB[0])
            int_gie <= WDATA[0];
    end
end

// int_ier
always @(posedge ACLK) begin
    if (ARESET)
        int_ier <= 1'b0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_IER && WSTRB[0])
            int_ier <= WDATA[1:0];
    end
end

// int_isr[0]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[0] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[0] & ap_done)
            int_isr[0] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[0] <= int_isr[0] ^ WDATA[0]; // toggle on write
    end
end

// int_isr[1]
always @(posedge ACLK) begin
    if (ARESET)
        int_isr[1] <= 1'b0;
    else if (ACLK_EN) begin
        if (int_ier[1] & ap_ready)
            int_isr[1] <= 1'b1;
        else if (w_hs && waddr == ADDR_ISR && WSTRB[0])
            int_isr[1] <= int_isr[1] ^ WDATA[1]; // toggle on write
    end
end

// int_input_V[31:0]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[31:0] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_0)
            int_input_V[31:0] <= (WDATA[31:0] & wmask) | (int_input_V[31:0] & ~wmask);
    end
end

// int_input_V[63:32]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[63:32] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_1)
            int_input_V[63:32] <= (WDATA[31:0] & wmask) | (int_input_V[63:32] & ~wmask);
    end
end

// int_input_V[95:64]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[95:64] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_2)
            int_input_V[95:64] <= (WDATA[31:0] & wmask) | (int_input_V[95:64] & ~wmask);
    end
end

// int_input_V[127:96]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[127:96] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_3)
            int_input_V[127:96] <= (WDATA[31:0] & wmask) | (int_input_V[127:96] & ~wmask);
    end
end

// int_input_V[159:128]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[159:128] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_4)
            int_input_V[159:128] <= (WDATA[31:0] & wmask) | (int_input_V[159:128] & ~wmask);
    end
end

// int_input_V[191:160]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[191:160] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_5)
            int_input_V[191:160] <= (WDATA[31:0] & wmask) | (int_input_V[191:160] & ~wmask);
    end
end

// int_input_V[223:192]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[223:192] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_6)
            int_input_V[223:192] <= (WDATA[31:0] & wmask) | (int_input_V[223:192] & ~wmask);
    end
end

// int_input_V[255:224]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[255:224] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_7)
            int_input_V[255:224] <= (WDATA[31:0] & wmask) | (int_input_V[255:224] & ~wmask);
    end
end

// int_input_V[287:256]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[287:256] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_8)
            int_input_V[287:256] <= (WDATA[31:0] & wmask) | (int_input_V[287:256] & ~wmask);
    end
end

// int_input_V[319:288]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[319:288] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_9)
            int_input_V[319:288] <= (WDATA[31:0] & wmask) | (int_input_V[319:288] & ~wmask);
    end
end

// int_input_V[351:320]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[351:320] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_10)
            int_input_V[351:320] <= (WDATA[31:0] & wmask) | (int_input_V[351:320] & ~wmask);
    end
end

// int_input_V[383:352]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[383:352] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_11)
            int_input_V[383:352] <= (WDATA[31:0] & wmask) | (int_input_V[383:352] & ~wmask);
    end
end

// int_input_V[403:384]
always @(posedge ACLK) begin
    if (ARESET)
        int_input_V[403:384] <= 0;
    else if (ACLK_EN) begin
        if (w_hs && waddr == ADDR_INPUT_V_DATA_12)
            int_input_V[403:384] <= (WDATA[31:0] & wmask) | (int_input_V[403:384] & ~wmask);
    end
end

// int_output_V
always @(posedge ACLK) begin
    if (ARESET)
        int_output_V <= 0;
    else if (ACLK_EN) begin
        if (output_V_ap_vld)
            int_output_V <= output_V;
    end
end

// int_output_V_ap_vld
always @(posedge ACLK) begin
    if (ARESET)
        int_output_V_ap_vld <= 1'b0;
    else if (ACLK_EN) begin
        if (output_V_ap_vld)
            int_output_V_ap_vld <= 1'b1;
        else if (ar_hs && raddr == ADDR_OUTPUT_V_CTRL)
            int_output_V_ap_vld <= 1'b0; // clear on read
    end
end


//------------------------Memory logic-------------------
// train_samples_V
assign int_train_samples_V_address0 = train_samples_V_address0;
assign int_train_samples_V_ce0      = train_samples_V_ce0;
assign int_train_samples_V_we0      = 1'b0;
assign int_train_samples_V_be0      = 1'b0;
assign int_train_samples_V_d0       = 1'b0;
assign train_samples_V_q0           = int_train_samples_V_q0;
assign int_train_samples_V_address1 = ar_hs? raddr[18:6] : waddr[18:6];
assign int_train_samples_V_ce1      = ar_hs | (int_train_samples_V_write & WVALID);
assign int_train_samples_V_we1      = int_train_samples_V_write & WVALID;
assign int_train_samples_V_be1      = WSTRB << (waddr[5:2] * 4);
assign int_train_samples_V_d1       = {16{WDATA}};
// int_train_samples_V_read
always @(posedge ACLK) begin
    if (ARESET)
        int_train_samples_V_read <= 1'b0;
    else if (ACLK_EN) begin
        if (ar_hs && raddr >= ADDR_TRAIN_SAMPLES_V_BASE && raddr <= ADDR_TRAIN_SAMPLES_V_HIGH)
            int_train_samples_V_read <= 1'b1;
        else
            int_train_samples_V_read <= 1'b0;
    end
end

// int_train_samples_V_write
always @(posedge ACLK) begin
    if (ARESET)
        int_train_samples_V_write <= 1'b0;
    else if (ACLK_EN) begin
        if (aw_hs && AWADDR[ADDR_BITS-1:0] >= ADDR_TRAIN_SAMPLES_V_BASE && AWADDR[ADDR_BITS-1:0] <= ADDR_TRAIN_SAMPLES_V_HIGH)
            int_train_samples_V_write <= 1'b1;
        else if (WVALID)
            int_train_samples_V_write <= 1'b0;
    end
end

// int_train_samples_V_shift
always @(posedge ACLK) begin
    if (ACLK_EN) begin
        if (ar_hs)
            int_train_samples_V_shift <= raddr[5:2];
    end
end


endmodule


`timescale 1ns/1ps

module knn_AXILiteS_s_axi_ram
#(parameter
    BYTES  = 4,
    DEPTH  = 256,
    AWIDTH = log2(DEPTH)
) (
    input  wire               clk0,
    input  wire [AWIDTH-1:0]  address0,
    input  wire               ce0,
    input  wire               we0,
    input  wire [BYTES-1:0]   be0,
    input  wire [BYTES*8-1:0] d0,
    output reg  [BYTES*8-1:0] q0,
    input  wire               clk1,
    input  wire [AWIDTH-1:0]  address1,
    input  wire               ce1,
    input  wire               we1,
    input  wire [BYTES-1:0]   be1,
    input  wire [BYTES*8-1:0] d1,
    output reg  [BYTES*8-1:0] q1
);
//------------------------Local signal-------------------
reg  [BYTES*8-1:0] mem[0:DEPTH-1];
//------------------------Task and function--------------
function integer log2;
    input integer x;
    integer n, m;
begin
    n = 1;
    m = 2;
    while (m < x) begin
        n = n + 1;
        m = m * 2;
    end
    log2 = n;
end
endfunction
//------------------------Body---------------------------
// read port 0
always @(posedge clk0) begin
    if (ce0) q0 <= mem[address0];
end

// read port 1
always @(posedge clk1) begin
    if (ce1) q1 <= mem[address1];
end

genvar i;
generate
    for (i = 0; i < BYTES; i = i + 1) begin : gen_write
        // write port 0
        always @(posedge clk0) begin
            if (ce0 & we0 & be0[i]) begin
                mem[address0][8*i+7:8*i] <= d0[8*i+7:8*i];
            end
        end
        // write port 1
        always @(posedge clk1) begin
            if (ce1 & we1 & be1[i]) begin
                mem[address1][8*i+7:8*i] <= d1[8*i+7:8*i];
            end
        end
    end
endgenerate

endmodule

