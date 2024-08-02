// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_train_19_H__
#define __knn_train_19_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_train_19_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 6000;
  static const unsigned AddressWidth = 13;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(knn_train_19_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b00000000";
        ram[2] = "0b00000001";
        for (unsigned i = 3; i < 65 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[65] = "0b10000000";
        for (unsigned i = 66; i < 114 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[114] = "0b10000000";
        for (unsigned i = 115; i < 121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[121] = "0b10000000";
        for (unsigned i = 122; i < 146 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[146] = "0b10000000";
        for (unsigned i = 147; i < 156 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[156] = "0b10000000";
        for (unsigned i = 157; i < 185 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[185] = "0b00000001";
        for (unsigned i = 186; i < 214 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[214] = "0b00000001";
        for (unsigned i = 215; i < 250 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[250] = "0b00000001";
        for (unsigned i = 251; i < 260 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[260] = "0b10000000";
        for (unsigned i = 261; i < 283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[283] = "0b10000000";
        for (unsigned i = 284; i < 417 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[417] = "0b10000000";
        for (unsigned i = 418; i < 426 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[426] = "0b00000001";
        for (unsigned i = 427; i < 453 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[453] = "0b10000000";
        for (unsigned i = 454; i < 463 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[463] = "0b10000000";
        ram[464] = "0b00000000";
        ram[465] = "0b00000000";
        ram[466] = "0b00000000";
        ram[467] = "0b00000000";
        ram[468] = "0b00000001";
        for (unsigned i = 469; i < 483 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[483] = "0b10000000";
        ram[484] = "0b00000000";
        ram[485] = "0b11000000";
        ram[486] = "0b00000000";
        ram[487] = "0b00000000";
        ram[488] = "0b00000000";
        ram[489] = "0b10000000";
        for (unsigned i = 490; i < 499 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[499] = "0b11100000";
        for (unsigned i = 500; i < 523 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[523] = "0b10000000";
        for (unsigned i = 524; i < 531 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[531] = "0b11000000";
        for (unsigned i = 532; i < 571 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[571] = "0b10000000";
        for (unsigned i = 572; i < 605 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[605] = "0b10000000";
        ram[606] = "0b00000001";
        for (unsigned i = 607; i < 615 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[615] = "0b10000000";
        for (unsigned i = 616; i < 632 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[632] = "0b00000001";
        for (unsigned i = 633; i < 640 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[640] = "0b00000001";
        for (unsigned i = 641; i < 667 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[667] = "0b10000000";
        for (unsigned i = 668; i < 729 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[729] = "0b10000000";
        ram[730] = "0b00000000";
        ram[731] = "0b00000000";
        ram[732] = "0b00000000";
        ram[733] = "0b10000000";
        for (unsigned i = 734; i < 756 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[756] = "0b10000000";
        for (unsigned i = 757; i < 770 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[770] = "0b10000000";
        for (unsigned i = 771; i < 831 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[831] = "0b10000000";
        for (unsigned i = 832; i < 879 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[879] = "0b11000000";
        ram[880] = "0b00000000";
        ram[881] = "0b00000000";
        ram[882] = "0b00000000";
        ram[883] = "0b00000001";
        for (unsigned i = 884; i < 896 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[896] = "0b11000000";
        for (unsigned i = 897; i < 904 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[904] = "0b00000001";
        ram[905] = "0b00000000";
        ram[906] = "0b00000000";
        ram[907] = "0b00000000";
        ram[908] = "0b00000001";
        ram[909] = "0b00000000";
        ram[910] = "0b00000000";
        ram[911] = "0b00000000";
        ram[912] = "0b00000000";
        ram[913] = "0b10000000";
        ram[914] = "0b00000000";
        ram[915] = "0b11000000";
        for (unsigned i = 916; i < 921 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[921] = "0b11000000";
        ram[922] = "0b00000000";
        ram[923] = "0b10000000";
        for (unsigned i = 924; i < 933 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[933] = "0b00000011";
        ram[934] = "0b00000000";
        ram[935] = "0b10000000";
        for (unsigned i = 936; i < 947 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[947] = "0b11000000";
        for (unsigned i = 948; i < 971 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[971] = "0b00000010";
        for (unsigned i = 972; i < 994 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[994] = "0b00000001";
        ram[995] = "0b10000000";
        for (unsigned i = 996; i < 1023 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1023] = "0b00000001";
        for (unsigned i = 1024; i < 1043 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1043] = "0b10000000";
        ram[1044] = "0b00000000";
        ram[1045] = "0b00000000";
        ram[1046] = "0b00000000";
        ram[1047] = "0b11000000";
        for (unsigned i = 1048; i < 1054 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1054] = "0b00000001";
        for (unsigned i = 1055; i < 1102 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1102] = "0b10000000";
        for (unsigned i = 1103; i < 1140 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1140] = "0b10000000";
        for (unsigned i = 1141; i < 1190 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1190] = "0b10000000";
        for (unsigned i = 1191; i < 1215 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1215] = "0b10000000";
        ram[1216] = "0b00000000";
        ram[1217] = "0b00000000";
        ram[1218] = "0b00000000";
        ram[1219] = "0b10000000";
        for (unsigned i = 1220; i < 1245 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1245] = "0b11000000";
        for (unsigned i = 1246; i < 1265 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1265] = "0b10000000";
        ram[1266] = "0b00000000";
        ram[1267] = "0b10000000";
        for (unsigned i = 1268; i < 1283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1283] = "0b10000000";
        ram[1284] = "0b00000000";
        ram[1285] = "0b10000000";
        for (unsigned i = 1286; i < 1311 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1311] = "0b11000000";
        ram[1312] = "0b00000000";
        ram[1313] = "0b11000000";
        for (unsigned i = 1314; i < 1319 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1319] = "0b11000000";
        for (unsigned i = 1320; i < 1346 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1346] = "0b10000000";
        for (unsigned i = 1347; i < 1363 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1363] = "0b10000000";
        for (unsigned i = 1364; i < 1380 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1380] = "0b00000001";
        ram[1381] = "0b00000000";
        ram[1382] = "0b00000000";
        ram[1383] = "0b00000000";
        ram[1384] = "0b11000000";
        ram[1385] = "0b00000000";
        ram[1386] = "0b10000000";
        for (unsigned i = 1387; i < 1416 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1416] = "0b00000111";
        for (unsigned i = 1417; i < 1433 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1433] = "0b11000000";
        for (unsigned i = 1434; i < 1479 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1479] = "0b10000000";
        ram[1480] = "0b00000000";
        ram[1481] = "0b11100000";
        for (unsigned i = 1482; i < 1489 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1489] = "0b10000000";
        for (unsigned i = 1490; i < 1495 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1495] = "0b10000000";
        for (unsigned i = 1496; i < 1501 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1501] = "0b10000000";
        ram[1502] = "0b00000000";
        ram[1503] = "0b00000000";
        ram[1504] = "0b00000000";
        ram[1505] = "0b10000000";
        for (unsigned i = 1506; i < 1535 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1535] = "0b01000000";
        for (unsigned i = 1536; i < 1590 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1590] = "0b10000000";
        ram[1591] = "0b00000000";
        ram[1592] = "0b00000000";
        ram[1593] = "0b10000000";
        for (unsigned i = 1594; i < 1616 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1616] = "0b10000000";
        for (unsigned i = 1617; i < 1652 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1652] = "0b00000001";
        for (unsigned i = 1653; i < 1662 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1662] = "0b10000000";
        for (unsigned i = 1663; i < 1678 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1678] = "0b10000000";
        for (unsigned i = 1679; i < 1690 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1690] = "0b11000000";
        for (unsigned i = 1691; i < 1702 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1702] = "0b11000000";
        for (unsigned i = 1703; i < 1723 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1723] = "0b10000000";
        ram[1724] = "0b00000000";
        ram[1725] = "0b10000000";
        for (unsigned i = 1726; i < 1759 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1759] = "0b10000000";
        for (unsigned i = 1760; i < 1776 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1776] = "0b10000000";
        for (unsigned i = 1777; i < 1793 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1793] = "0b10000000";
        ram[1794] = "0b00000000";
        ram[1795] = "0b00000000";
        ram[1796] = "0b00000000";
        ram[1797] = "0b10000000";
        ram[1798] = "0b10000000";
        for (unsigned i = 1799; i < 1804 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1804] = "0b10000000";
        for (unsigned i = 1805; i < 1819 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1819] = "0b10000000";
        for (unsigned i = 1820; i < 1840 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1840] = "0b00000001";
        for (unsigned i = 1841; i < 1851 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1851] = "0b00000001";
        for (unsigned i = 1852; i < 1865 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1865] = "0b00000001";
        ram[1866] = "0b00000000";
        ram[1867] = "0b00000000";
        ram[1868] = "0b10000000";
        ram[1869] = "0b00000000";
        ram[1870] = "0b00000000";
        ram[1871] = "0b00000000";
        ram[1872] = "0b00000000";
        ram[1873] = "0b10000000";
        ram[1874] = "0b00000000";
        ram[1875] = "0b00000000";
        ram[1876] = "0b10000000";
        for (unsigned i = 1877; i < 1956 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1956] = "0b10000000";
        for (unsigned i = 1957; i < 2009 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2009] = "0b10000000";
        for (unsigned i = 2010; i < 2077 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2077] = "0b11000000";
        for (unsigned i = 2078; i < 2126 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2126] = "0b11000000";
        for (unsigned i = 2127; i < 2133 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2133] = "0b00000011";
        for (unsigned i = 2134; i < 2244 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2244] = "0b00000001";
        for (unsigned i = 2245; i < 2349 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2349] = "0b10000000";
        ram[2350] = "0b00000000";
        ram[2351] = "0b00000000";
        ram[2352] = "0b00000000";
        ram[2353] = "0b10000000";
        for (unsigned i = 2354; i < 2367 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2367] = "0b10000000";
        for (unsigned i = 2368; i < 2373 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2373] = "0b10000000";
        for (unsigned i = 2374; i < 2380 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2380] = "0b00000001";
        ram[2381] = "0b10000000";
        for (unsigned i = 2382; i < 2400 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2400] = "0b10000000";
        ram[2401] = "0b00000000";
        ram[2402] = "0b00000000";
        ram[2403] = "0b10000000";
        for (unsigned i = 2404; i < 2413 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2413] = "0b10000000";
        ram[2414] = "0b00000000";
        ram[2415] = "0b00000000";
        ram[2416] = "0b00000000";
        ram[2417] = "0b10000000";
        ram[2418] = "0b00000000";
        ram[2419] = "0b00000000";
        ram[2420] = "0b00000000";
        ram[2421] = "0b10000000";
        ram[2422] = "0b00000000";
        ram[2423] = "0b00000000";
        ram[2424] = "0b00000000";
        ram[2425] = "0b11000000";
        for (unsigned i = 2426; i < 2473 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2473] = "0b10000000";
        for (unsigned i = 2474; i < 2483 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2483] = "0b10000000";
        ram[2484] = "0b10000000";
        for (unsigned i = 2485; i < 2532 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2532] = "0b10000000";
        for (unsigned i = 2533; i < 2540 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2540] = "0b00000001";
        for (unsigned i = 2541; i < 2548 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2548] = "0b00000111";
        for (unsigned i = 2549; i < 2557 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2557] = "0b10000000";
        for (unsigned i = 2558; i < 2588 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2588] = "0b10000000";
        for (unsigned i = 2589; i < 2606 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2606] = "0b10000000";
        for (unsigned i = 2607; i < 2639 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2639] = "0b10000000";
        for (unsigned i = 2640; i < 2650 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2650] = "0b00000011";
        for (unsigned i = 2651; i < 2713 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2713] = "0b11000000";
        for (unsigned i = 2714; i < 2743 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2743] = "0b00000011";
        for (unsigned i = 2744; i < 2750 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2750] = "0b00000111";
        ram[2751] = "0b00000000";
        ram[2752] = "0b00000000";
        ram[2753] = "0b00000000";
        ram[2754] = "0b00000001";
        for (unsigned i = 2755; i < 2779 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2779] = "0b10000000";
        for (unsigned i = 2780; i < 2814 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2814] = "0b00000001";
        ram[2815] = "0b00000000";
        ram[2816] = "0b00000000";
        ram[2817] = "0b10000000";
        ram[2818] = "0b00000000";
        ram[2819] = "0b10000000";
        for (unsigned i = 2820; i < 2835 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2835] = "0b00000001";
        for (unsigned i = 2836; i < 2842 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2842] = "0b11000000";
        for (unsigned i = 2843; i < 2859 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2859] = "0b10000000";
        for (unsigned i = 2860; i < 2867 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2867] = "0b00000001";
        for (unsigned i = 2868; i < 2881 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2881] = "0b00000011";
        for (unsigned i = 2882; i < 2899 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2899] = "0b10000000";
        ram[2900] = "0b00000000";
        ram[2901] = "0b10000000";
        for (unsigned i = 2902; i < 3015 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3015] = "0b10000000";
        for (unsigned i = 3016; i < 3025 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3025] = "0b10000000";
        for (unsigned i = 3026; i < 3035 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3035] = "0b10000000";
        for (unsigned i = 3036; i < 3066 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3066] = "0b10000000";
        ram[3067] = "0b10000000";
        for (unsigned i = 3068; i < 3095 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3095] = "0b11000000";
        for (unsigned i = 3096; i < 3106 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3106] = "0b10000000";
        for (unsigned i = 3107; i < 3173 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3173] = "0b10000000";
        for (unsigned i = 3174; i < 3184 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3184] = "0b11000000";
        for (unsigned i = 3185; i < 3198 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3198] = "0b10000000";
        for (unsigned i = 3199; i < 3246 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3246] = "0b00000011";
        for (unsigned i = 3247; i < 3326 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3326] = "0b11000000";
        ram[3327] = "0b00000000";
        ram[3328] = "0b10000000";
        for (unsigned i = 3329; i < 3356 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3356] = "0b10000000";
        for (unsigned i = 3357; i < 3376 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3376] = "0b10000000";
        for (unsigned i = 3377; i < 3391 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3391] = "0b10000000";
        for (unsigned i = 3392; i < 3409 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3409] = "0b10000000";
        for (unsigned i = 3410; i < 3442 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3442] = "0b00000111";
        for (unsigned i = 3443; i < 3453 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3453] = "0b11000000";
        for (unsigned i = 3454; i < 3563 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3563] = "0b10000000";
        ram[3564] = "0b00000000";
        ram[3565] = "0b10000000";
        for (unsigned i = 3566; i < 3575 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3575] = "0b10000000";
        for (unsigned i = 3576; i < 3585 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3585] = "0b10000000";
        for (unsigned i = 3586; i < 3603 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3603] = "0b10000000";
        for (unsigned i = 3604; i < 3620 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3620] = "0b00000001";
        for (unsigned i = 3621; i < 3630 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3630] = "0b10000000";
        for (unsigned i = 3631; i < 3658 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3658] = "0b10000000";
        for (unsigned i = 3659; i < 3668 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3668] = "0b11000000";
        for (unsigned i = 3669; i < 3688 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3688] = "0b10000000";
        for (unsigned i = 3689; i < 3700 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3700] = "0b10000000";
        for (unsigned i = 3701; i < 3724 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3724] = "0b10000000";
        for (unsigned i = 3725; i < 3757 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3757] = "0b10000000";
        for (unsigned i = 3758; i < 3776 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3776] = "0b10000000";
        ram[3777] = "0b10000000";
        for (unsigned i = 3778; i < 3795 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3795] = "0b00000001";
        for (unsigned i = 3796; i < 3864 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3864] = "0b11100000";
        for (unsigned i = 3865; i < 3872 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3872] = "0b10000000";
        for (unsigned i = 3873; i < 3888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3888] = "0b10000000";
        for (unsigned i = 3889; i < 3894 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3894] = "0b00000001";
        for (unsigned i = 3895; i < 3951 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3951] = "0b10000000";
        for (unsigned i = 3952; i < 4075 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4075] = "0b10000000";
        ram[4076] = "0b00000000";
        ram[4077] = "0b11000000";
        for (unsigned i = 4078; i < 4083 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4083] = "0b10000000";
        for (unsigned i = 4084; i < 4104 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4104] = "0b11000000";
        for (unsigned i = 4105; i < 4165 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4165] = "0b10000000";
        for (unsigned i = 4166; i < 4200 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4200] = "0b00000001";
        ram[4201] = "0b00000000";
        ram[4202] = "0b00000000";
        ram[4203] = "0b00000000";
        ram[4204] = "0b00000000";
        ram[4205] = "0b10000000";
        for (unsigned i = 4206; i < 4226 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4226] = "0b00000001";
        ram[4227] = "0b00000000";
        ram[4228] = "0b00000001";
        for (unsigned i = 4229; i < 4254 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4254] = "0b00000001";
        for (unsigned i = 4255; i < 4270 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4270] = "0b10000000";
        for (unsigned i = 4271; i < 4279 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4279] = "0b10000000";
        for (unsigned i = 4280; i < 4347 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4347] = "0b10000000";
        for (unsigned i = 4348; i < 4354 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4354] = "0b00000110";
        for (unsigned i = 4355; i < 4360 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4360] = "0b10000000";
        for (unsigned i = 4361; i < 4444 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4444] = "0b10000000";
        for (unsigned i = 4445; i < 4452 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4452] = "0b00000001";
        ram[4453] = "0b00000000";
        ram[4454] = "0b00000000";
        ram[4455] = "0b10000000";
        for (unsigned i = 4456; i < 4485 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4485] = "0b10000000";
        for (unsigned i = 4486; i < 4505 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4505] = "0b10000000";
        for (unsigned i = 4506; i < 4528 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4528] = "0b10000000";
        for (unsigned i = 4529; i < 4535 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4535] = "0b10000000";
        for (unsigned i = 4536; i < 4571 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4571] = "0b00000001";
        for (unsigned i = 4572; i < 4580 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4580] = "0b10000000";
        for (unsigned i = 4581; i < 4597 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4597] = "0b10000000";
        for (unsigned i = 4598; i < 4653 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4653] = "0b10000000";
        for (unsigned i = 4654; i < 4682 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4682] = "0b10000000";
        for (unsigned i = 4683; i < 4695 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4695] = "0b10000000";
        for (unsigned i = 4696; i < 4761 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4761] = "0b10000000";
        for (unsigned i = 4762; i < 4785 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4785] = "0b00000001";
        for (unsigned i = 4786; i < 4837 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4837] = "0b00000001";
        for (unsigned i = 4838; i < 4875 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4875] = "0b00000001";
        for (unsigned i = 4876; i < 4888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4888] = "0b00000011";
        for (unsigned i = 4889; i < 4906 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4906] = "0b10000000";
        ram[4907] = "0b00000000";
        ram[4908] = "0b00000000";
        ram[4909] = "0b10000000";
        for (unsigned i = 4910; i < 4926 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4926] = "0b10000000";
        ram[4927] = "0b10000000";
        for (unsigned i = 4928; i < 4940 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4940] = "0b11000000";
        ram[4941] = "0b10000000";
        for (unsigned i = 4942; i < 4947 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4947] = "0b10000000";
        for (unsigned i = 4948; i < 4967 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4967] = "0b10000000";
        for (unsigned i = 4968; i < 5000 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5000] = "0b00000011";
        for (unsigned i = 5001; i < 5029 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5029] = "0b11000000";
        for (unsigned i = 5030; i < 5045 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5045] = "0b10000000";
        for (unsigned i = 5046; i < 5085 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5085] = "0b10000000";
        for (unsigned i = 5086; i < 5091 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5091] = "0b11000000";
        for (unsigned i = 5092; i < 5116 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5116] = "0b11000000";
        ram[5117] = "0b10000000";
        ram[5118] = "0b00000000";
        ram[5119] = "0b11000000";
        for (unsigned i = 5120; i < 5131 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5131] = "0b10000000";
        ram[5132] = "0b00000000";
        ram[5133] = "0b10000000";
        for (unsigned i = 5134; i < 5182 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5182] = "0b00000011";
        ram[5183] = "0b01000000";
        ram[5184] = "0b00000000";
        ram[5185] = "0b00000000";
        ram[5186] = "0b00000000";
        ram[5187] = "0b10000000";
        for (unsigned i = 5188; i < 5298 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5298] = "0b10000000";
        for (unsigned i = 5299; i < 5349 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5349] = "0b00000001";
        ram[5350] = "0b00000000";
        ram[5351] = "0b00000000";
        ram[5352] = "0b00000000";
        ram[5353] = "0b10000000";
        for (unsigned i = 5354; i < 5373 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5373] = "0b10000000";
        for (unsigned i = 5374; i < 5384 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5384] = "0b10000000";
        ram[5385] = "0b00000000";
        ram[5386] = "0b00000000";
        ram[5387] = "0b00000001";
        for (unsigned i = 5388; i < 5393 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5393] = "0b10000000";
        for (unsigned i = 5394; i < 5409 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5409] = "0b10000000";
        ram[5410] = "0b00000000";
        ram[5411] = "0b00000000";
        ram[5412] = "0b00000000";
        ram[5413] = "0b00000000";
        ram[5414] = "0b11100000";
        for (unsigned i = 5415; i < 5430 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5430] = "0b10000000";
        for (unsigned i = 5431; i < 5460 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5460] = "0b11000000";
        ram[5461] = "0b10000000";
        for (unsigned i = 5462; i < 5505 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5505] = "0b10000000";
        for (unsigned i = 5506; i < 5512 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5512] = "0b10000000";
        for (unsigned i = 5513; i < 5583 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5583] = "0b10000000";
        ram[5584] = "0b00000000";
        ram[5585] = "0b10000000";
        for (unsigned i = 5586; i < 5627 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5627] = "0b10000000";
        for (unsigned i = 5628; i < 5652 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5652] = "0b00000011";
        for (unsigned i = 5653; i < 5661 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5661] = "0b10000000";
        for (unsigned i = 5662; i < 5692 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5692] = "0b10000000";
        ram[5693] = "0b00000000";
        ram[5694] = "0b10000000";
        for (unsigned i = 5695; i < 5719 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5719] = "0b10000000";
        for (unsigned i = 5720; i < 5808 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5808] = "0b10000000";
        for (unsigned i = 5809; i < 5853 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5853] = "0b11000000";
        for (unsigned i = 5854; i < 5873 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5873] = "0b10000000";
        for (unsigned i = 5874; i < 5887 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5887] = "0b10000000";
        for (unsigned i = 5888; i < 5968 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5968] = "0b00000001";
        for (unsigned i = 5969; i < 5975 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5975] = "0b00000001";
        ram[5976] = "0b00000000";
        ram[5977] = "0b00000000";
        ram[5978] = "0b10000000";
        for (unsigned i = 5979; i < 5995 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5995] = "0b00000001";
        ram[5996] = "0b00000000";
        ram[5997] = "0b00000000";
        ram[5998] = "0b00000000";
        ram[5999] = "0b00000000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(knn_train_19) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 6000;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_train_19_ram* meminst;


SC_CTOR(knn_train_19) {
meminst = new knn_train_19_ram("knn_train_19_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_train_19() {
    delete meminst;
}


};//endmodule
#endif
