-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity knn_bitcount_rom is 
    generic(
             DWIDTH     : integer := 4; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 256
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of knn_bitcount_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000", 1 to 2=> "0001", 3 => "0010", 4 => "0001", 5 to 6=> "0010", 
    7 => "0011", 8 => "0001", 9 to 10=> "0010", 11 => "0011", 12 => "0010", 
    13 to 14=> "0011", 15 => "0100", 16 => "0001", 17 to 18=> "0010", 19 => "0011", 
    20 => "0010", 21 to 22=> "0011", 23 => "0100", 24 => "0010", 25 to 26=> "0011", 
    27 => "0100", 28 => "0011", 29 to 30=> "0100", 31 => "0101", 32 => "0001", 
    33 to 34=> "0010", 35 => "0011", 36 => "0010", 37 to 38=> "0011", 39 => "0100", 
    40 => "0010", 41 to 42=> "0011", 43 => "0100", 44 => "0011", 45 to 46=> "0100", 
    47 => "0101", 48 => "0010", 49 to 50=> "0011", 51 => "0100", 52 => "0011", 
    53 to 54=> "0100", 55 => "0101", 56 => "0011", 57 to 58=> "0100", 59 => "0101", 
    60 => "0100", 61 to 62=> "0101", 63 => "0110", 64 => "0001", 65 to 66=> "0010", 
    67 => "0011", 68 => "0010", 69 to 70=> "0011", 71 => "0100", 72 => "0010", 
    73 to 74=> "0011", 75 => "0100", 76 => "0011", 77 to 78=> "0100", 79 => "0101", 
    80 => "0010", 81 to 82=> "0011", 83 => "0100", 84 => "0011", 85 to 86=> "0100", 
    87 => "0101", 88 => "0011", 89 to 90=> "0100", 91 => "0101", 92 => "0100", 
    93 to 94=> "0101", 95 => "0110", 96 => "0010", 97 to 98=> "0011", 99 => "0100", 
    100 => "0011", 101 to 102=> "0100", 103 => "0101", 104 => "0011", 105 to 106=> "0100", 
    107 => "0101", 108 => "0100", 109 to 110=> "0101", 111 => "0110", 112 => "0011", 
    113 to 114=> "0100", 115 => "0101", 116 => "0100", 117 to 118=> "0101", 119 => "0110", 
    120 => "0100", 121 to 122=> "0101", 123 => "0110", 124 => "0101", 125 to 126=> "0110", 
    127 => "0111", 128 => "0001", 129 to 130=> "0010", 131 => "0011", 132 => "0010", 
    133 to 134=> "0011", 135 => "0100", 136 => "0010", 137 to 138=> "0011", 139 => "0100", 
    140 => "0011", 141 to 142=> "0100", 143 => "0101", 144 => "0010", 145 to 146=> "0011", 
    147 => "0100", 148 => "0011", 149 to 150=> "0100", 151 => "0101", 152 => "0011", 
    153 to 154=> "0100", 155 => "0101", 156 => "0100", 157 to 158=> "0101", 159 => "0110", 
    160 => "0010", 161 to 162=> "0011", 163 => "0100", 164 => "0011", 165 to 166=> "0100", 
    167 => "0101", 168 => "0011", 169 to 170=> "0100", 171 => "0101", 172 => "0100", 
    173 to 174=> "0101", 175 => "0110", 176 => "0011", 177 to 178=> "0100", 179 => "0101", 
    180 => "0100", 181 to 182=> "0101", 183 => "0110", 184 => "0100", 185 to 186=> "0101", 
    187 => "0110", 188 => "0101", 189 to 190=> "0110", 191 => "0111", 192 => "0010", 
    193 to 194=> "0011", 195 => "0100", 196 => "0011", 197 to 198=> "0100", 199 => "0101", 
    200 => "0011", 201 to 202=> "0100", 203 => "0101", 204 => "0100", 205 to 206=> "0101", 
    207 => "0110", 208 => "0011", 209 to 210=> "0100", 211 => "0101", 212 => "0100", 
    213 to 214=> "0101", 215 => "0110", 216 => "0100", 217 to 218=> "0101", 219 => "0110", 
    220 => "0101", 221 to 222=> "0110", 223 => "0111", 224 => "0011", 225 to 226=> "0100", 
    227 => "0101", 228 => "0100", 229 to 230=> "0101", 231 => "0110", 232 => "0100", 
    233 to 234=> "0101", 235 => "0110", 236 => "0101", 237 to 238=> "0110", 239 => "0111", 
    240 => "0100", 241 to 242=> "0101", 243 => "0110", 244 => "0101", 245 to 246=> "0110", 
    247 => "0111", 248 => "0101", 249 to 250=> "0110", 251 => "0111", 252 => "0110", 
    253 to 254=> "0111", 255 => "1000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity knn_bitcount is
    generic (
        DataWidth : INTEGER := 4;
        AddressRange : INTEGER := 256;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of knn_bitcount is
    component knn_bitcount_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    knn_bitcount_rom_U :  component knn_bitcount_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


