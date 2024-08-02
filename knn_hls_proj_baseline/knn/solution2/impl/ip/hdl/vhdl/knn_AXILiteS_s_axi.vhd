-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.NUMERIC_STD.all;

entity knn_AXILiteS_s_axi is
generic (
    C_S_AXI_ADDR_WIDTH    : INTEGER := 21;
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
    input_V               :out  STD_LOGIC_VECTOR(403 downto 0);
    train_samples_V_address0 :in   STD_LOGIC_VECTOR(12 downto 0);
    train_samples_V_ce0   :in   STD_LOGIC;
    train_samples_V_q0    :out  STD_LOGIC_VECTOR(403 downto 0);
    output_V              :in   STD_LOGIC_VECTOR(0 downto 0);
    output_V_ap_vld       :in   STD_LOGIC
);
end entity knn_AXILiteS_s_axi;

-- ------------------------Address Info-------------------
-- 0x000000 : Control signals
--            bit 0  - ap_start (Read/Write/COH)
--            bit 1  - ap_done (Read/COR)
--            bit 2  - ap_idle (Read)
--            bit 3  - ap_ready (Read)
--            bit 7  - auto_restart (Read/Write)
--            others - reserved
-- 0x000004 : Global Interrupt Enable Register
--            bit 0  - Global Interrupt Enable (Read/Write)
--            others - reserved
-- 0x000008 : IP Interrupt Enable Register (Read/Write)
--            bit 0  - Channel 0 (ap_done)
--            bit 1  - Channel 1 (ap_ready)
--            others - reserved
-- 0x00000c : IP Interrupt Status Register (Read/TOW)
--            bit 0  - Channel 0 (ap_done)
--            bit 1  - Channel 1 (ap_ready)
--            others - reserved
-- 0x000010 : Data signal of input_V
--            bit 31~0 - input_V[31:0] (Read/Write)
-- 0x000014 : Data signal of input_V
--            bit 31~0 - input_V[63:32] (Read/Write)
-- 0x000018 : Data signal of input_V
--            bit 31~0 - input_V[95:64] (Read/Write)
-- 0x00001c : Data signal of input_V
--            bit 31~0 - input_V[127:96] (Read/Write)
-- 0x000020 : Data signal of input_V
--            bit 31~0 - input_V[159:128] (Read/Write)
-- 0x000024 : Data signal of input_V
--            bit 31~0 - input_V[191:160] (Read/Write)
-- 0x000028 : Data signal of input_V
--            bit 31~0 - input_V[223:192] (Read/Write)
-- 0x00002c : Data signal of input_V
--            bit 31~0 - input_V[255:224] (Read/Write)
-- 0x000030 : Data signal of input_V
--            bit 31~0 - input_V[287:256] (Read/Write)
-- 0x000034 : Data signal of input_V
--            bit 31~0 - input_V[319:288] (Read/Write)
-- 0x000038 : Data signal of input_V
--            bit 31~0 - input_V[351:320] (Read/Write)
-- 0x00003c : Data signal of input_V
--            bit 31~0 - input_V[383:352] (Read/Write)
-- 0x000040 : Data signal of input_V
--            bit 19~0 - input_V[403:384] (Read/Write)
--            others   - reserved
-- 0x000044 : reserved
-- 0x100000 : Data signal of output_V
--            bit 0  - output_V[0] (Read)
--            others - reserved
-- 0x100004 : Control signal of output_V
--            bit 0  - output_V_ap_vld (Read/COR)
--            others - reserved
-- 0x080000 ~
-- 0x0fffff : Memory 'train_samples_V' (6000 * 404b)
--            Word 16n  : bit [31:0] - train_samples_V[n][31: 0]
--            Word 16n+1 : bit [31:0] - train_samples_V[n][63:32]
--            Word 16n+2 : bit [31:0] - train_samples_V[n][95:64]
--            Word 16n+3 : bit [31:0] - train_samples_V[n][127:96]
--            Word 16n+4 : bit [31:0] - train_samples_V[n][159:128]
--            Word 16n+5 : bit [31:0] - train_samples_V[n][191:160]
--            Word 16n+6 : bit [31:0] - train_samples_V[n][223:192]
--            Word 16n+7 : bit [31:0] - train_samples_V[n][255:224]
--            Word 16n+8 : bit [31:0] - train_samples_V[n][287:256]
--            Word 16n+9 : bit [31:0] - train_samples_V[n][319:288]
--            Word 16n+10 : bit [31:0] - train_samples_V[n][351:320]
--            Word 16n+11 : bit [31:0] - train_samples_V[n][383:352]
--            Word 16n+12 : bit [19:0] - train_samples_V[n][403:384]
--                        others     - reserved
--            Word 16n+13 : bit [31:0] - reserved
--            Word 16n+14 : bit [31:0] - reserved
--            Word 16n+15 : bit [31:0] - reserved
-- (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

architecture behave of knn_AXILiteS_s_axi is
    type states is (wridle, wrdata, wrresp, wrreset, rdidle, rddata, rdreset);  -- read and write fsm states
    signal wstate  : states := wrreset;
    signal rstate  : states := rdreset;
    signal wnext, rnext: states;
    constant ADDR_AP_CTRL              : INTEGER := 16#000000#;
    constant ADDR_GIE                  : INTEGER := 16#000004#;
    constant ADDR_IER                  : INTEGER := 16#000008#;
    constant ADDR_ISR                  : INTEGER := 16#00000c#;
    constant ADDR_INPUT_V_DATA_0       : INTEGER := 16#000010#;
    constant ADDR_INPUT_V_DATA_1       : INTEGER := 16#000014#;
    constant ADDR_INPUT_V_DATA_2       : INTEGER := 16#000018#;
    constant ADDR_INPUT_V_DATA_3       : INTEGER := 16#00001c#;
    constant ADDR_INPUT_V_DATA_4       : INTEGER := 16#000020#;
    constant ADDR_INPUT_V_DATA_5       : INTEGER := 16#000024#;
    constant ADDR_INPUT_V_DATA_6       : INTEGER := 16#000028#;
    constant ADDR_INPUT_V_DATA_7       : INTEGER := 16#00002c#;
    constant ADDR_INPUT_V_DATA_8       : INTEGER := 16#000030#;
    constant ADDR_INPUT_V_DATA_9       : INTEGER := 16#000034#;
    constant ADDR_INPUT_V_DATA_10      : INTEGER := 16#000038#;
    constant ADDR_INPUT_V_DATA_11      : INTEGER := 16#00003c#;
    constant ADDR_INPUT_V_DATA_12      : INTEGER := 16#000040#;
    constant ADDR_INPUT_V_CTRL         : INTEGER := 16#000044#;
    constant ADDR_OUTPUT_V_DATA_0      : INTEGER := 16#100000#;
    constant ADDR_OUTPUT_V_CTRL        : INTEGER := 16#100004#;
    constant ADDR_TRAIN_SAMPLES_V_BASE : INTEGER := 16#080000#;
    constant ADDR_TRAIN_SAMPLES_V_HIGH : INTEGER := 16#0fffff#;
    constant ADDR_BITS         : INTEGER := 21;

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
    signal int_input_V         : UNSIGNED(403 downto 0) := (others => '0');
    signal int_output_V        : UNSIGNED(0 downto 0) := (others => '0');
    signal int_output_V_ap_vld : STD_LOGIC;
    -- memory signals
    signal int_train_samples_V_address0 : UNSIGNED(12 downto 0);
    signal int_train_samples_V_ce0 : STD_LOGIC;
    signal int_train_samples_V_we0 : STD_LOGIC;
    signal int_train_samples_V_be0 : UNSIGNED(50 downto 0);
    signal int_train_samples_V_d0 : UNSIGNED(407 downto 0);
    signal int_train_samples_V_q0 : UNSIGNED(407 downto 0);
    signal int_train_samples_V_address1 : UNSIGNED(12 downto 0);
    signal int_train_samples_V_ce1 : STD_LOGIC;
    signal int_train_samples_V_we1 : STD_LOGIC;
    signal int_train_samples_V_be1 : UNSIGNED(50 downto 0);
    signal int_train_samples_V_d1 : UNSIGNED(407 downto 0);
    signal int_train_samples_V_q1 : UNSIGNED(407 downto 0);
    signal int_train_samples_V_read : STD_LOGIC;
    signal int_train_samples_V_write : STD_LOGIC;
    signal int_train_samples_V_shift : UNSIGNED(3 downto 0);

    component knn_AXILiteS_s_axi_ram is
        generic (
            BYTES   : INTEGER :=4;
            DEPTH   : INTEGER :=256;
            AWIDTH  : INTEGER :=8);
        port (
            clk0    : in  STD_LOGIC;
            address0: in  UNSIGNED(AWIDTH-1 downto 0);
            ce0     : in  STD_LOGIC;
            we0     : in  STD_LOGIC;
            be0     : in  UNSIGNED(BYTES-1 downto 0);
            d0      : in  UNSIGNED(BYTES*8-1 downto 0);
            q0      : out UNSIGNED(BYTES*8-1 downto 0);
            clk1    : in  STD_LOGIC;
            address1: in  UNSIGNED(AWIDTH-1 downto 0);
            ce1     : in  STD_LOGIC;
            we1     : in  STD_LOGIC;
            be1     : in  UNSIGNED(BYTES-1 downto 0);
            d1      : in  UNSIGNED(BYTES*8-1 downto 0);
            q1      : out UNSIGNED(BYTES*8-1 downto 0));
    end component knn_AXILiteS_s_axi_ram;

    function log2 (x : INTEGER) return INTEGER is
        variable n, m : INTEGER;
    begin
        n := 1;
        m := 2;
        while m < x loop
            n := n + 1;
            m := m * 2;
        end loop;
        return n;
    end function log2;

begin
-- ----------------------- Instantiation------------------
-- int_train_samples_V
int_train_samples_V : knn_AXILiteS_s_axi_ram
generic map (
     BYTES    => 51,
     DEPTH    => 6000,
     AWIDTH   => log2(6000))
port map (
     clk0     => ACLK,
     address0 => int_train_samples_V_address0,
     ce0      => int_train_samples_V_ce0,
     we0      => int_train_samples_V_we0,
     be0      => int_train_samples_V_be0,
     d0       => int_train_samples_V_d0,
     q0       => int_train_samples_V_q0,
     clk1     => ACLK,
     address1 => int_train_samples_V_address1,
     ce1      => int_train_samples_V_ce1,
     we1      => int_train_samples_V_we1,
     be1      => int_train_samples_V_be1,
     d1       => int_train_samples_V_d1,
     q1       => int_train_samples_V_q1);

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
    RVALID_t  <= '1' when (rstate = rddata) and (int_train_samples_V_read = '0') else '0';
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
                    when ADDR_INPUT_V_DATA_0 =>
                        rdata_data <= RESIZE(int_input_V(31 downto 0), 32);
                    when ADDR_INPUT_V_DATA_1 =>
                        rdata_data <= RESIZE(int_input_V(63 downto 32), 32);
                    when ADDR_INPUT_V_DATA_2 =>
                        rdata_data <= RESIZE(int_input_V(95 downto 64), 32);
                    when ADDR_INPUT_V_DATA_3 =>
                        rdata_data <= RESIZE(int_input_V(127 downto 96), 32);
                    when ADDR_INPUT_V_DATA_4 =>
                        rdata_data <= RESIZE(int_input_V(159 downto 128), 32);
                    when ADDR_INPUT_V_DATA_5 =>
                        rdata_data <= RESIZE(int_input_V(191 downto 160), 32);
                    when ADDR_INPUT_V_DATA_6 =>
                        rdata_data <= RESIZE(int_input_V(223 downto 192), 32);
                    when ADDR_INPUT_V_DATA_7 =>
                        rdata_data <= RESIZE(int_input_V(255 downto 224), 32);
                    when ADDR_INPUT_V_DATA_8 =>
                        rdata_data <= RESIZE(int_input_V(287 downto 256), 32);
                    when ADDR_INPUT_V_DATA_9 =>
                        rdata_data <= RESIZE(int_input_V(319 downto 288), 32);
                    when ADDR_INPUT_V_DATA_10 =>
                        rdata_data <= RESIZE(int_input_V(351 downto 320), 32);
                    when ADDR_INPUT_V_DATA_11 =>
                        rdata_data <= RESIZE(int_input_V(383 downto 352), 32);
                    when ADDR_INPUT_V_DATA_12 =>
                        rdata_data <= RESIZE(int_input_V(403 downto 384), 32);
                    when ADDR_OUTPUT_V_DATA_0 =>
                        rdata_data <= RESIZE(int_output_V(0 downto 0), 32);
                    when ADDR_OUTPUT_V_CTRL =>
                        rdata_data <= (0 => int_output_V_ap_vld, others => '0');
                    when others =>
                        rdata_data <= (others => '0');
                    end case;
                elsif (int_train_samples_V_read = '1') then
                    rdata_data <= RESIZE(SHIFT_RIGHT(int_train_samples_V_q1, TO_INTEGER(int_train_samples_V_shift)*32), 32);
                end if;
            end if;
        end if;
    end process;

-- ----------------------- Register logic ----------------
    interrupt            <= int_gie and (int_isr(0) or int_isr(1));
    ap_start             <= int_ap_start;
    input_V              <= STD_LOGIC_VECTOR(int_input_V);

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
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_0) then
                    int_input_V(31 downto 0) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(31 downto 0));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_1) then
                    int_input_V(63 downto 32) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(63 downto 32));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_2) then
                    int_input_V(95 downto 64) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(95 downto 64));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_3) then
                    int_input_V(127 downto 96) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(127 downto 96));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_4) then
                    int_input_V(159 downto 128) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(159 downto 128));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_5) then
                    int_input_V(191 downto 160) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(191 downto 160));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_6) then
                    int_input_V(223 downto 192) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(223 downto 192));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_7) then
                    int_input_V(255 downto 224) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(255 downto 224));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_8) then
                    int_input_V(287 downto 256) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(287 downto 256));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_9) then
                    int_input_V(319 downto 288) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(319 downto 288));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_10) then
                    int_input_V(351 downto 320) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(351 downto 320));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_11) then
                    int_input_V(383 downto 352) <= (UNSIGNED(WDATA(31 downto 0)) and wmask(31 downto 0)) or ((not wmask(31 downto 0)) and int_input_V(383 downto 352));
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (w_hs = '1' and waddr = ADDR_INPUT_V_DATA_12) then
                    int_input_V(403 downto 384) <= (UNSIGNED(WDATA(19 downto 0)) and wmask(19 downto 0)) or ((not wmask(19 downto 0)) and int_input_V(403 downto 384));
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
    -- train_samples_V
    int_train_samples_V_address0 <= UNSIGNED(train_samples_V_address0);
    int_train_samples_V_ce0 <= train_samples_V_ce0;
    int_train_samples_V_we0 <= '0';
    int_train_samples_V_be0 <= (others => '0');
    int_train_samples_V_d0 <= (others => '0');
    train_samples_V_q0   <= STD_LOGIC_VECTOR(RESIZE(int_train_samples_V_q0, 404));
    int_train_samples_V_address1 <= raddr(18 downto 6) when ar_hs = '1' else waddr(18 downto 6);
    int_train_samples_V_ce1 <= '1' when ar_hs = '1' or (int_train_samples_V_write = '1' and WVALID  = '1') else '0';
    int_train_samples_V_we1 <= '1' when int_train_samples_V_write = '1' and WVALID = '1' else '0';
    int_train_samples_V_be1 <= SHIFT_LEFT(RESIZE(UNSIGNED(WSTRB), 51), TO_INTEGER(waddr(5 downto 2)) * 4);
    int_train_samples_V_d1 <= RESIZE(UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA) & UNSIGNED(WDATA), 408);

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_train_samples_V_read <= '0';
            elsif (ACLK_EN = '1') then
                if (ar_hs = '1' and raddr >= ADDR_TRAIN_SAMPLES_V_BASE and raddr <= ADDR_TRAIN_SAMPLES_V_HIGH) then
                    int_train_samples_V_read <= '1';
                else
                    int_train_samples_V_read <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ARESET = '1') then
                int_train_samples_V_write <= '0';
            elsif (ACLK_EN = '1') then
                if (aw_hs = '1' and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) >= ADDR_TRAIN_SAMPLES_V_BASE and UNSIGNED(AWADDR(ADDR_BITS-1 downto 0)) <= ADDR_TRAIN_SAMPLES_V_HIGH) then
                    int_train_samples_V_write <= '1';
                elsif (WVALID = '1') then
                    int_train_samples_V_write <= '0';
                end if;
            end if;
        end if;
    end process;

    process (ACLK)
    begin
        if (ACLK'event and ACLK = '1') then
            if (ACLK_EN = '1') then
                if (ar_hs = '1') then
                    int_train_samples_V_shift <= raddr(5 downto 2);
                end if;
            end if;
        end if;
    end process;


end architecture behave;

library IEEE;
USE IEEE.std_logic_1164.all;
USE IEEE.numeric_std.all;

entity knn_AXILiteS_s_axi_ram is
    generic (
        BYTES   : INTEGER :=4;
        DEPTH   : INTEGER :=256;
        AWIDTH  : INTEGER :=8);
    port (
        clk0    : in  STD_LOGIC;
        address0: in  UNSIGNED(AWIDTH-1 downto 0);
        ce0     : in  STD_LOGIC;
        we0     : in  STD_LOGIC;
        be0     : in  UNSIGNED(BYTES-1 downto 0);
        d0      : in  UNSIGNED(BYTES*8-1 downto 0);
        q0      : out UNSIGNED(BYTES*8-1 downto 0);
        clk1    : in  STD_LOGIC;
        address1: in  UNSIGNED(AWIDTH-1 downto 0);
        ce1     : in  STD_LOGIC;
        we1     : in  STD_LOGIC;
        be1     : in  UNSIGNED(BYTES-1 downto 0);
        d1      : in  UNSIGNED(BYTES*8-1 downto 0);
        q1      : out UNSIGNED(BYTES*8-1 downto 0));

end entity knn_AXILiteS_s_axi_ram;

architecture behave of knn_AXILiteS_s_axi_ram is
    signal address0_tmp : UNSIGNED(AWIDTH-1 downto 0);
    signal address1_tmp : UNSIGNED(AWIDTH-1 downto 0);
    type RAM_T is array (0 to DEPTH - 1) of UNSIGNED(BYTES*8 - 1 downto 0);
    shared variable mem : RAM_T := (others => (others => '0'));
begin

    process (address0)
    begin
    address0_tmp <= address0;
    --synthesis translate_off
          if (address0 > DEPTH-1) then
              address0_tmp <= (others => '0');
          else
              address0_tmp <= address0;
          end if;
    --synthesis translate_on
    end process;

    process (address1)
    begin
    address1_tmp <= address1;
    --synthesis translate_off
          if (address1 > DEPTH-1) then
              address1_tmp <= (others => '0');
          else
              address1_tmp <= address1;
          end if;
    --synthesis translate_on
    end process;

    --read port 0
    process (clk0) begin
        if (clk0'event and clk0 = '1') then
            if (ce0 = '1') then
                q0 <= mem(to_integer(address0_tmp));
            end if;
        end if;
    end process;

    --read port 1
    process (clk1) begin
        if (clk1'event and clk1 = '1') then
            if (ce1 = '1') then
                q1 <= mem(to_integer(address1_tmp));
            end if;
        end if;
    end process;

    gen_write : for i in 0 to BYTES - 1 generate
    begin
        --write port 0
        process (clk0)
        begin
            if (clk0'event and clk0 = '1') then
                if (ce0 = '1' and we0 = '1' and be0(i) = '1') then
                    mem(to_integer(address0_tmp))(8*i+7 downto 8*i) := d0(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

        --write port 1
        process (clk1)
        begin
            if (clk1'event and clk1 = '1') then
                if (ce1 = '1' and we1 = '1' and be1(i) = '1') then
                    mem(to_integer(address1_tmp))(8*i+7 downto 8*i) := d1(8*i+7 downto 8*i);
                end if;
            end if;
        end process;

    end generate;

end architecture behave;


