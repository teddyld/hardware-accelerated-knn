-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity knn_train_46_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 13; 
             MEM_SIZE    : integer := 6000
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of knn_train_46_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "00000000", 2 => "00000001", 3 to 67=> "00000000", 68 => "10000000", 
    69 to 100=> "00000000", 101 => "00000001", 102 to 107=> "00000000", 108 => "10000000", 
    109 to 113=> "00000000", 114 => "10000000", 115 to 120=> "00000000", 121 => "10000000", 
    122 to 155=> "00000000", 156 => "10000000", 157 to 228=> "00000000", 229 => "10000000", 
    230 to 248=> "00000000", 249 => "10000000", 250 to 259=> "00000000", 260 => "10000000", 
    261 to 282=> "00000000", 283 => "10000000", 284 to 311=> "00000000", 312 => "10000000", 
    313 to 428=> "00000000", 429 => "10000000", 430 to 434=> "00000000", 435 => "10000000", 
    436 to 450=> "00000000", 451 => "01100000", 452 => "00000000", 453 => "10000000", 
    454 to 467=> "00000000", 468 => "00000001", 469 to 482=> "00000000", 483 => "10000000", 
    484 to 488=> "00000000", 489 => "10000000", 490 to 505=> "00000000", 506 => "11000000", 
    507 to 526=> "00000000", 527 => "00000010", 528 to 530=> "00000000", 531 => "10000000", 
    532 to 732=> "00000000", 733 => "10000000", 734 to 758=> "00000000", 759 => "10000000", 
    760 to 769=> "00000000", 770 => "10000000", 771 to 777=> "00000000", 778 => "10000000", 
    779 to 882=> "00000000", 883 => "00000001", 884 to 895=> "00000000", 896 => "10000000", 
    897 to 903=> "00000000", 904 => "00000001", 905 to 970=> "00000000", 971 => "00000010", 
    972 to 1022=> "00000000", 1023 => "00000011", 1024 to 1027=> "00000000", 1028 => "10000000", 
    1029 to 1046=> "00000000", 1047 => "10000000", 1048 to 1101=> "00000000", 1102 => "10000000", 
    1103 to 1189=> "00000000", 1190 => "10000000", 1191 to 1218=> "00000000", 1219 => "10000000", 
    1220 to 1310=> "00000000", 1311 => "11000000", 1312 to 1318=> "00000000", 1319 => "10000000", 
    1320 to 1362=> "00000000", 1363 => "10000000", 1364 to 1379=> "00000000", 1380 => "00000001", 
    1381 to 1385=> "00000000", 1386 => "10000000", 1387 to 1410=> "00000000", 1411 => "10000000", 
    1412 to 1415=> "00000000", 1416 => "00000111", 1417 to 1447=> "00000000", 1448 => "10000000", 
    1449 to 1460=> "00000000", 1461 => "10000000", 1462 to 1465=> "00000000", 1466 => "11000000", 
    1467 to 1476=> "00000000", 1477 => "11000000", 1478 to 1494=> "00000000", 1495 => "10000000", 
    1496 to 1521=> "00000000", 1522 => "00000001", 1523 to 1530=> "00000000", 1531 => "10000000", 
    1532 to 1536=> "00000000", 1537 to 1538=> "10000000", 1539 to 1589=> "00000000", 1590 => "10000000", 
    1591 to 1644=> "00000000", 1645 => "10000000", 1646 to 1661=> "00000000", 1662 => "10000000", 
    1663 to 1671=> "00000000", 1672 => "00000001", 1673 to 1677=> "00000000", 1678 => "10000000", 
    1679 to 1687=> "00000000", 1688 => "10000000", 1689 to 1722=> "00000000", 1723 => "10000000", 
    1724 => "00000000", 1725 => "10000000", 1726 to 1796=> "00000000", 1797 to 1798=> "10000000", 
    1799 to 1818=> "00000000", 1819 => "10000000", 1820 to 1827=> "00000000", 1828 => "10000000", 
    1829 to 1850=> "00000000", 1851 => "00000001", 1852 to 1867=> "00000000", 1868 => "10000000", 
    1869 to 1875=> "00000000", 1876 => "10000000", 1877 to 1915=> "00000000", 1916 => "10000000", 
    1917 to 1955=> "00000000", 1956 => "10000000", 1957 to 2008=> "00000000", 2009 => "10000000", 
    2010 to 2120=> "00000000", 2121 => "10000000", 2122 to 2125=> "00000000", 2126 => "11000000", 
    2127 to 2194=> "00000000", 2195 => "10000000", 2196 to 2252=> "00000000", 2253 => "10000000", 
    2254 to 2297=> "00000000", 2298 => "10000000", 2299 to 2323=> "00000000", 2324 to 2325=> "10000000", 
    2326 to 2351=> "00000000", 2352 to 2353=> "10000000", 2354 to 2372=> "00000000", 2373 => "10000000", 
    2374 to 2380=> "00000000", 2381 => "10000000", 2382 to 2402=> "00000000", 2403 => "10000000", 
    2404 to 2419=> "00000000", 2420 => "00000001", 2421 to 2424=> "00000000", 2425 => "10000000", 
    2426 to 2472=> "00000000", 2473 => "10000000", 2474 to 2482=> "00000000", 2483 => "10000000", 
    2484 to 2486=> "00000000", 2487 => "10000000", 2488 to 2531=> "00000000", 2532 to 2533=> "11000000", 
    2534 to 2547=> "00000000", 2548 => "00000111", 2549 to 2556=> "00000000", 2557 => "10000000", 
    2558 to 2587=> "00000000", 2588 => "10000000", 2589 to 2605=> "00000000", 2606 => "10000000", 
    2607 to 2649=> "00000000", 2650 => "00000011", 2651 to 2658=> "00000000", 2659 => "00000001", 
    2660 to 2692=> "00000000", 2693 => "10000000", 2694 to 2701=> "00000000", 2702 => "00000001", 
    2703 to 2735=> "00000000", 2736 => "10000000", 2737 to 2742=> "00000000", 2743 => "00000001", 
    2744 => "00000000", 2745 => "10000000", 2746 to 2760=> "00000000", 2761 => "10000000", 
    2762 to 2778=> "00000000", 2779 => "10000000", 2780 to 2797=> "00000000", 2798 => "00000001", 
    2799 to 2835=> "00000000", 2836 => "10000000", 2837 to 2841=> "00000000", 2842 => "11000000", 
    2843 to 2891=> "00000000", 2892 => "00000001", 2893 to 2896=> "00000000", 2897 => "10000000", 
    2898 => "00000000", 2899 => "10000000", 2900 => "00000000", 2901 => "10000000", 
    2902 to 2951=> "00000000", 2952 => "10000000", 2953 to 3014=> "00000000", 3015 to 3016=> "10000000", 
    3017 to 3034=> "00000000", 3035 => "10000000", 3036 to 3105=> "00000000", 3106 => "10000000", 
    3107 to 3156=> "00000000", 3157 => "10000000", 3158 to 3197=> "00000000", 3198 => "10000000", 
    3199 to 3249=> "00000000", 3250 => "00000001", 3251 to 3327=> "00000000", 3328 => "10000000", 
    3329 to 3333=> "00000000", 3334 => "10000000", 3335 to 3375=> "00000000", 3376 => "10000000", 
    3377 to 3380=> "00000000", 3381 => "11000000", 3382 => "00000000", 3383 => "00000001", 
    3384 to 3390=> "00000000", 3391 => "10000000", 3392 to 3408=> "00000000", 3409 => "10000000", 
    3410 to 3442=> "00000000", 3443 => "10000000", 3444 to 3491=> "00000000", 3492 => "10000000", 
    3493 to 3552=> "00000000", 3553 => "11000000", 3554 to 3564=> "00000000", 3565 => "10000000", 
    3566 to 3576=> "00000000", 3577 => "11000000", 3578 to 3584=> "00000000", 3585 => "10000000", 
    3586 to 3589=> "00000000", 3590 => "10000000", 3591 to 3602=> "00000000", 3603 => "10000000", 
    3604 to 3621=> "00000000", 3622 => "10000000", 3623 => "11000000", 3624 to 3667=> "00000000", 
    3668 => "10000000", 3669 to 3670=> "00000000", 3671 => "10000000", 3672 to 3676=> "00000000", 
    3677 => "10000000", 3678 to 3687=> "00000000", 3688 => "10000000", 3689 to 3697=> "00000000", 
    3698 => "10000000", 3699 => "00000000", 3700 => "10000000", 3701 to 3716=> "00000000", 
    3717 => "10000000", 3718 to 3733=> "00000000", 3734 => "10000000", 3735 to 3748=> "00000000", 
    3749 => "11000000", 3750 to 3756=> "00000000", 3757 => "10000000", 3758 to 3766=> "00000000", 
    3767 => "10000000", 3768 to 3775=> "00000000", 3776 => "10000000", 3777 => "11000000", 
    3778 to 3794=> "00000000", 3795 => "00000001", 3796 to 3817=> "00000000", 3818 => "00000001", 
    3819 to 3887=> "00000000", 3888 => "10000000", 3889 to 3942=> "00000000", 3943 => "10000000", 
    3944 to 3945=> "00000000", 3946 => "10000000", 3947 to 4040=> "00000000", 4041 => "00000001", 
    4042 to 4099=> "00000000", 4100 => "11110000", 4101 to 4110=> "00000000", 4111 => "11000000", 
    4112 to 4152=> "00000000", 4153 => "11000000", 4154 to 4172=> "00000000", 4173 => "00000001", 
    4174 to 4184=> "00000000", 4185 => "11100000", 4186 to 4202=> "00000000", 4203 => "10000000", 
    4204 to 4225=> "00000000", 4226 to 4228=> "00000001", 4229 to 4231=> "00000000", 4232 => "11000000", 
    4233 to 4244=> "00000000", 4245 => "10000000", 4246 to 4278=> "00000000", 4279 => "10000000", 
    4280 to 4300=> "00000000", 4301 => "10000000", 4302 to 4343=> "00000000", 4344 => "10000000", 
    4345 to 4346=> "00000000", 4347 => "10000000", 4348 to 4359=> "00000000", 4360 => "10000000", 
    4361 to 4443=> "00000000", 4444 => "10000000", 4445 to 4454=> "00000000", 4455 => "10000000", 
    4456 to 4462=> "00000000", 4463 => "10000000", 4464 to 4484=> "00000000", 4485 => "10000000", 
    4486 to 4492=> "00000000", 4493 => "10000000", 4494 to 4496=> "00000000", 4497 => "10000000", 
    4498 to 4499=> "00000000", 4500 => "10000000", 4501 to 4504=> "00000000", 4505 => "10000000", 
    4506 to 4532=> "00000000", 4533 => "11000000", 4534 => "00000000", 4535 => "10000000", 
    4536 to 4570=> "00000000", 4571 => "00000001", 4572 to 4575=> "00000000", 4576 => "10000000", 
    4577 to 4606=> "00000000", 4607 => "10000000", 4608 to 4641=> "00000000", 4642 => "10000000", 
    4643 to 4652=> "00000000", 4653 => "10000000", 4654 to 4681=> "00000000", 4682 to 4683=> "10000000", 
    4684 to 4712=> "00000000", 4713 => "10000000", 4714 to 4784=> "00000000", 4785 => "00000001", 
    4786 to 4793=> "00000000", 4794 => "00000001", 4795 to 4816=> "00000000", 4817 => "10000000", 
    4818 to 4836=> "00000000", 4837 => "00000001", 4838 to 4840=> "00000000", 4841 => "10000000", 
    4842 to 4851=> "00000000", 4852 => "10000000", 4853 to 4856=> "00000000", 4857 => "11000000", 
    4858 to 4887=> "00000000", 4888 => "00000001", 4889 to 4904=> "00000000", 4905 to 4906=> "10000000", 
    4907 to 4908=> "00000000", 4909 => "10000000", 4910 to 4925=> "00000000", 4926 => "10000000", 
    4927 => "11000000", 4928 to 4948=> "00000000", 4949 => "01000000", 4950 to 5044=> "00000000", 
    5045 => "10000000", 5046 to 5067=> "00000000", 5068 => "10000000", 5069 to 5073=> "00000000", 
    5074 => "10000000", 5075 to 5115=> "00000000", 5116 => "10000000", 5117 to 5130=> "00000000", 
    5131 => "10000000", 5132 to 5180=> "00000000", 5181 => "00000001", 5182 => "00000011", 
    5183 to 5186=> "00000000", 5187 => "10000000", 5188 to 5195=> "00000000", 5196 => "10000000", 
    5197 to 5201=> "00000000", 5202 => "10000000", 5203 to 5247=> "00000000", 5248 => "10000000", 
    5249 to 5297=> "00000000", 5298 => "10000000", 5299 to 5333=> "00000000", 5334 => "10000000", 
    5335 to 5352=> "00000000", 5353 => "10000000", 5354 to 5363=> "00000000", 5364 => "10000000", 
    5365 to 5372=> "00000000", 5373 => "10000000", 5374 to 5383=> "00000000", 5384 => "10000000", 
    5385 to 5392=> "00000000", 5393 => "10000000", 5394 to 5415=> "00000000", 5416 => "00000011", 
    5417 to 5429=> "00000000", 5430 => "11000000", 5431 to 5459=> "00000000", 5460 => "11000000", 
    5461 => "10000000", 5462 to 5504=> "00000000", 5505 => "10000000", 5506 to 5511=> "00000000", 
    5512 => "10000000", 5513 to 5584=> "00000000", 5585 => "10000000", 5586 to 5626=> "00000000", 
    5627 => "10000000", 5628 to 5633=> "00000000", 5634 => "10000000", 5635 to 5651=> "00000000", 
    5652 => "00000011", 5653 to 5691=> "00000000", 5692 => "10000000", 5693 => "00000000", 
    5694 => "10000000", 5695 to 5799=> "00000000", 5800 => "11000000", 5801 => "00000000", 
    5802 => "10000000", 5803 to 5807=> "00000000", 5808 => "10000000", 5809 to 5885=> "00000000", 
    5886 => "10000000", 5887 to 5967=> "00000000", 5968 => "00000001", 5969 to 5977=> "00000000", 
    5978 => "10000000", 5979 to 5999=> "00000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

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

entity knn_train_46 is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 6000;
        AddressWidth : INTEGER := 13);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of knn_train_46 is
    component knn_train_46_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    knn_train_46_rom_U :  component knn_train_46_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

