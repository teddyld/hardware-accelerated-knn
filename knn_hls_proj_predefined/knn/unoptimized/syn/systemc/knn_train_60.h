// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_train_60_H__
#define __knn_train_60_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_train_60_ram : public sc_core::sc_module {

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


   SC_CTOR(knn_train_60_ram) {
        for (unsigned i = 0; i < 16 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[16] = "0b10000000";
        for (unsigned i = 17; i < 68 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[68] = "0b10000000";
        for (unsigned i = 69; i < 108 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[108] = "0b10000000";
        ram[109] = "0b11100000";
        ram[110] = "0b00000000";
        ram[111] = "0b00000000";
        ram[112] = "0b00000000";
        ram[113] = "0b00000000";
        ram[114] = "0b10000000";
        ram[115] = "0b00000000";
        ram[116] = "0b00000000";
        ram[117] = "0b10000000";
        ram[118] = "0b00000000";
        ram[119] = "0b00000000";
        ram[120] = "0b00000000";
        ram[121] = "0b10000000";
        for (unsigned i = 122; i < 143 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[143] = "0b10000000";
        for (unsigned i = 144; i < 159 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[159] = "0b11000000";
        for (unsigned i = 160; i < 171 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[171] = "0b11000000";
        for (unsigned i = 172; i < 187 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[187] = "0b10000000";
        ram[188] = "0b00000000";
        ram[189] = "0b11000000";
        for (unsigned i = 190; i < 199 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[199] = "0b10000000";
        for (unsigned i = 200; i < 209 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[209] = "0b10000000";
        for (unsigned i = 210; i < 229 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[229] = "0b10000000";
        for (unsigned i = 230; i < 246 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[246] = "0b10000000";
        ram[247] = "0b00000000";
        ram[248] = "0b00000000";
        ram[249] = "0b10000000";
        ram[250] = "0b00000000";
        ram[251] = "0b00000000";
        ram[252] = "0b00000000";
        ram[253] = "0b00000001";
        ram[254] = "0b00000000";
        ram[255] = "0b00000001";
        ram[256] = "0b00000000";
        ram[257] = "0b00000000";
        ram[258] = "0b00000000";
        ram[259] = "0b00000001";
        ram[260] = "0b10000000";
        for (unsigned i = 261; i < 268 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[268] = "0b10000000";
        ram[269] = "0b00000000";
        ram[270] = "0b00000000";
        ram[271] = "0b00000000";
        ram[272] = "0b00000000";
        ram[273] = "0b00000001";
        ram[274] = "0b00000000";
        ram[275] = "0b00000000";
        ram[276] = "0b00000000";
        ram[277] = "0b00000001";
        for (unsigned i = 278; i < 283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[283] = "0b10000000";
        for (unsigned i = 284; i < 341 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[341] = "0b00000001";
        for (unsigned i = 342; i < 385 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[385] = "0b00000001";
        for (unsigned i = 386; i < 405 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[405] = "0b00000001";
        ram[406] = "0b00000000";
        ram[407] = "0b00000000";
        ram[408] = "0b00000000";
        ram[409] = "0b00000000";
        ram[410] = "0b11000000";
        for (unsigned i = 411; i < 429 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[429] = "0b10000000";
        for (unsigned i = 430; i < 435 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[435] = "0b10000000";
        ram[436] = "0b00000000";
        ram[437] = "0b00000000";
        ram[438] = "0b00000000";
        ram[439] = "0b00000000";
        ram[440] = "0b10000000";
        for (unsigned i = 441; i < 464 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[464] = "0b10000000";
        for (unsigned i = 465; i < 476 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[476] = "0b01000000";
        for (unsigned i = 477; i < 506 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[506] = "0b10000000";
        for (unsigned i = 507; i < 526 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[526] = "0b10000000";
        for (unsigned i = 527; i < 598 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[598] = "0b10000000";
        for (unsigned i = 599; i < 621 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[621] = "0b00000011";
        for (unsigned i = 622; i < 658 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[658] = "0b11000000";
        for (unsigned i = 659; i < 670 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[670] = "0b10000000";
        for (unsigned i = 671; i < 693 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[693] = "0b10000000";
        for (unsigned i = 694; i < 704 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[704] = "0b00000001";
        for (unsigned i = 705; i < 795 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[795] = "0b10000000";
        for (unsigned i = 796; i < 807 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[807] = "0b10000000";
        for (unsigned i = 808; i < 850 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[850] = "0b10000000";
        for (unsigned i = 851; i < 872 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[872] = "0b10000000";
        for (unsigned i = 873; i < 917 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[917] = "0b00000001";
        for (unsigned i = 918; i < 984 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[984] = "0b10000000";
        for (unsigned i = 985; i < 1019 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1019] = "0b00000001";
        for (unsigned i = 1020; i < 1028 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1028] = "0b10000000";
        ram[1029] = "0b00000000";
        ram[1030] = "0b10000000";
        for (unsigned i = 1031; i < 1097 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1097] = "0b00000001";
        for (unsigned i = 1098; i < 1164 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1164] = "0b11000000";
        for (unsigned i = 1165; i < 1213 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1213] = "0b10000000";
        for (unsigned i = 1214; i < 1220 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1220] = "0b10000000";
        for (unsigned i = 1221; i < 1241 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1241] = "0b00000001";
        for (unsigned i = 1242; i < 1249 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1249] = "0b10000000";
        for (unsigned i = 1250; i < 1255 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1255] = "0b10000000";
        for (unsigned i = 1256; i < 1266 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1266] = "0b10000000";
        for (unsigned i = 1267; i < 1276 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1276] = "0b10000000";
        for (unsigned i = 1277; i < 1299 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1299] = "0b10000000";
        for (unsigned i = 1300; i < 1361 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1361] = "0b10000000";
        ram[1362] = "0b00000000";
        ram[1363] = "0b00000000";
        ram[1364] = "0b00000000";
        ram[1365] = "0b00000000";
        ram[1366] = "0b11000000";
        for (unsigned i = 1367; i < 1386 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1386] = "0b10000000";
        for (unsigned i = 1387; i < 1427 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1427] = "0b00000001";
        for (unsigned i = 1428; i < 1447 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1447] = "0b00000001";
        ram[1448] = "0b10000000";
        for (unsigned i = 1449; i < 1466 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1466] = "0b11000000";
        for (unsigned i = 1467; i < 1539 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1539] = "0b00000001";
        for (unsigned i = 1540; i < 1563 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1563] = "0b00000001";
        for (unsigned i = 1564; i < 1580 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1580] = "0b10000000";
        for (unsigned i = 1581; i < 1586 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1586] = "0b10000000";
        ram[1587] = "0b00000000";
        ram[1588] = "0b00000000";
        ram[1589] = "0b00000000";
        ram[1590] = "0b10000000";
        ram[1591] = "0b00000000";
        ram[1592] = "0b00000000";
        ram[1593] = "0b00000000";
        ram[1594] = "0b00000000";
        ram[1595] = "0b00000001";
        for (unsigned i = 1596; i < 1798 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1798] = "0b10000000";
        ram[1799] = "0b00000000";
        ram[1800] = "0b10000000";
        for (unsigned i = 1801; i < 1841 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1841] = "0b10000000";
        ram[1842] = "0b00000000";
        ram[1843] = "0b00000000";
        ram[1844] = "0b10000000";
        ram[1845] = "0b10000000";
        for (unsigned i = 1846; i < 1861 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1861] = "0b11000000";
        for (unsigned i = 1862; i < 1876 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1876] = "0b10000000";
        ram[1877] = "0b00000000";
        ram[1878] = "0b00000000";
        ram[1879] = "0b00000000";
        ram[1880] = "0b00000000";
        ram[1881] = "0b11100000";
        for (unsigned i = 1882; i < 1935 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1935] = "0b00000011";
        for (unsigned i = 1936; i < 1952 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1952] = "0b10000000";
        for (unsigned i = 1953; i < 1987 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1987] = "0b10000000";
        for (unsigned i = 1988; i < 2019 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2019] = "0b11000000";
        for (unsigned i = 2020; i < 2034 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2034] = "0b10000000";
        for (unsigned i = 2035; i < 2068 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2068] = "0b10000000";
        ram[2069] = "0b00000000";
        ram[2070] = "0b00000000";
        ram[2071] = "0b00000000";
        ram[2072] = "0b00000000";
        ram[2073] = "0b10000000";
        for (unsigned i = 2074; i < 2121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2121] = "0b10000000";
        for (unsigned i = 2122; i < 2195 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2195] = "0b10000000";
        for (unsigned i = 2196; i < 2234 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2234] = "0b10000000";
        ram[2235] = "0b00000000";
        ram[2236] = "0b00000000";
        ram[2237] = "0b00000000";
        ram[2238] = "0b00000000";
        ram[2239] = "0b10000000";
        for (unsigned i = 2240; i < 2253 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2253] = "0b10000000";
        ram[2254] = "0b00000000";
        ram[2255] = "0b00000000";
        ram[2256] = "0b00000000";
        ram[2257] = "0b10000000";
        for (unsigned i = 2258; i < 2270 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2270] = "0b11000000";
        for (unsigned i = 2271; i < 2283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2283] = "0b10000000";
        for (unsigned i = 2284; i < 2322 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2322] = "0b10000000";
        ram[2323] = "0b00000000";
        ram[2324] = "0b11000000";
        ram[2325] = "0b10000000";
        for (unsigned i = 2326; i < 2352 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2352] = "0b10000000";
        ram[2353] = "0b10000000";
        for (unsigned i = 2354; i < 2379 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2379] = "0b00000001";
        for (unsigned i = 2380; i < 2396 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2396] = "0b10000000";
        for (unsigned i = 2397; i < 2450 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2450] = "0b11000000";
        for (unsigned i = 2451; i < 2490 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2490] = "0b10000000";
        for (unsigned i = 2491; i < 2503 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2503] = "0b00000001";
        for (unsigned i = 2504; i < 2532 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2532] = "0b11000000";
        for (unsigned i = 2533; i < 2634 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2634] = "0b11000000";
        ram[2635] = "0b00000000";
        ram[2636] = "0b10000000";
        for (unsigned i = 2637; i < 2670 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2670] = "0b00000001";
        for (unsigned i = 2671; i < 2693 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2693] = "0b10000000";
        for (unsigned i = 2694; i < 2736 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2736] = "0b10000000";
        ram[2737] = "0b00000000";
        ram[2738] = "0b00000000";
        ram[2739] = "0b00000000";
        ram[2740] = "0b00000000";
        ram[2741] = "0b10000000";
        ram[2742] = "0b00000000";
        ram[2743] = "0b00000000";
        ram[2744] = "0b00000000";
        ram[2745] = "0b10000000";
        for (unsigned i = 2746; i < 2765 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2765] = "0b10000000";
        for (unsigned i = 2766; i < 2785 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2785] = "0b10000000";
        for (unsigned i = 2786; i < 2815 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2815] = "0b00000001";
        for (unsigned i = 2816; i < 2851 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2851] = "0b10000000";
        for (unsigned i = 2852; i < 2875 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2875] = "0b00000001";
        ram[2876] = "0b00000000";
        ram[2877] = "0b00000001";
        ram[2878] = "0b00000000";
        ram[2879] = "0b00000001";
        ram[2880] = "0b10000000";
        for (unsigned i = 2881; i < 2892 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2892] = "0b00000001";
        ram[2893] = "0b00110000";
        ram[2894] = "0b00000000";
        ram[2895] = "0b00000000";
        ram[2896] = "0b00000000";
        ram[2897] = "0b10000000";
        ram[2898] = "0b00000000";
        ram[2899] = "0b10000000";
        for (unsigned i = 2900; i < 2942 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2942] = "0b10000000";
        for (unsigned i = 2943; i < 2952 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2952] = "0b10000000";
        for (unsigned i = 2953; i < 3016 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3016] = "0b10000000";
        ram[3017] = "0b10000000";
        for (unsigned i = 3018; i < 3106 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3106] = "0b10000000";
        for (unsigned i = 3107; i < 3128 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3128] = "0b10000000";
        for (unsigned i = 3129; i < 3156 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3156] = "0b10000000";
        for (unsigned i = 3157; i < 3171 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3171] = "0b00000011";
        for (unsigned i = 3172; i < 3200 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3200] = "0b10000000";
        for (unsigned i = 3201; i < 3328 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3328] = "0b10000000";
        ram[3329] = "0b00000000";
        ram[3330] = "0b10000000";
        for (unsigned i = 3331; i < 3362 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3362] = "0b11000000";
        for (unsigned i = 3363; i < 3391 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3391] = "0b10000000";
        ram[3392] = "0b10000000";
        for (unsigned i = 3393; i < 3415 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3415] = "0b00000001";
        for (unsigned i = 3416; i < 3424 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3424] = "0b00000001";
        for (unsigned i = 3425; i < 3492 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3492] = "0b10000000";
        for (unsigned i = 3493; i < 3562 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3562] = "0b10000000";
        ram[3563] = "0b00000000";
        ram[3564] = "0b11000000";
        ram[3565] = "0b10000000";
        for (unsigned i = 3566; i < 3577 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3577] = "0b11000000";
        for (unsigned i = 3578; i < 3590 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3590] = "0b10000000";
        for (unsigned i = 3591; i < 3597 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3597] = "0b10000000";
        for (unsigned i = 3598; i < 3603 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3603] = "0b10000000";
        for (unsigned i = 3604; i < 3615 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3615] = "0b10000000";
        for (unsigned i = 3616; i < 3622 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3622] = "0b10000000";
        ram[3623] = "0b11000000";
        for (unsigned i = 3624; i < 3632 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3632] = "0b10000000";
        for (unsigned i = 3633; i < 3659 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3659] = "0b00000001";
        for (unsigned i = 3660; i < 3671 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3671] = "0b10000000";
        ram[3672] = "0b00000000";
        ram[3673] = "0b00000000";
        ram[3674] = "0b00000000";
        ram[3675] = "0b00000000";
        ram[3676] = "0b11100000";
        ram[3677] = "0b10000000";
        for (unsigned i = 3678; i < 3698 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3698] = "0b10000000";
        for (unsigned i = 3699; i < 3749 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3749] = "0b10000000";
        for (unsigned i = 3750; i < 3757 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3757] = "0b10000000";
        for (unsigned i = 3758; i < 3767 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3767] = "0b10000000";
        ram[3768] = "0b10000000";
        for (unsigned i = 3769; i < 3776 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3776] = "0b10000000";
        ram[3777] = "0b10000000";
        ram[3778] = "0b00000000";
        ram[3779] = "0b10000000";
        for (unsigned i = 3780; i < 3789 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3789] = "0b11000000";
        for (unsigned i = 3790; i < 3817 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3817] = "0b10000000";
        for (unsigned i = 3818; i < 3888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3888] = "0b10000000";
        ram[3889] = "0b00000000";
        ram[3890] = "0b11000000";
        ram[3891] = "0b00000000";
        ram[3892] = "0b00000000";
        ram[3893] = "0b00000011";
        for (unsigned i = 3894; i < 3923 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3923] = "0b00000001";
        for (unsigned i = 3924; i < 3936 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3936] = "0b10000000";
        ram[3937] = "0b00000000";
        ram[3938] = "0b00000000";
        ram[3939] = "0b00000000";
        ram[3940] = "0b00000000";
        ram[3941] = "0b00000011";
        ram[3942] = "0b00000000";
        ram[3943] = "0b10000000";
        for (unsigned i = 3944; i < 3969 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3969] = "0b00000001";
        for (unsigned i = 3970; i < 3997 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3997] = "0b00000001";
        for (unsigned i = 3998; i < 4030 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4030] = "0b11000000";
        for (unsigned i = 4031; i < 4061 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4061] = "0b00000001";
        for (unsigned i = 4062; i < 4071 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4071] = "0b00000001";
        ram[4072] = "0b00000000";
        ram[4073] = "0b00000001";
        for (unsigned i = 4074; i < 4102 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4102] = "0b00000001";
        for (unsigned i = 4103; i < 4116 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4116] = "0b10000000";
        for (unsigned i = 4117; i < 4170 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4170] = "0b10000000";
        for (unsigned i = 4171; i < 4179 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4179] = "0b00000001";
        ram[4180] = "0b00000000";
        ram[4181] = "0b00000000";
        ram[4182] = "0b00000000";
        ram[4183] = "0b11000000";
        for (unsigned i = 4184; i < 4205 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4205] = "0b10000000";
        for (unsigned i = 4206; i < 4214 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4214] = "0b11000000";
        ram[4215] = "0b00000000";
        ram[4216] = "0b00000000";
        ram[4217] = "0b00000000";
        ram[4218] = "0b10000000";
        ram[4219] = "0b00000000";
        ram[4220] = "0b00000000";
        ram[4221] = "0b00000000";
        ram[4222] = "0b00000000";
        ram[4223] = "0b00000001";
        for (unsigned i = 4224; i < 4231 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4231] = "0b10000000";
        ram[4232] = "0b11000000";
        for (unsigned i = 4233; i < 4245 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4245] = "0b10000000";
        for (unsigned i = 4246; i < 4344 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4344] = "0b10000000";
        for (unsigned i = 4345; i < 4360 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4360] = "0b10000000";
        for (unsigned i = 4361; i < 4414 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4414] = "0b10000000";
        for (unsigned i = 4415; i < 4442 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4442] = "0b10000000";
        ram[4443] = "0b00000000";
        ram[4444] = "0b10000000";
        for (unsigned i = 4445; i < 4462 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4462] = "0b10000000";
        for (unsigned i = 4463; i < 4469 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4469] = "0b11100000";
        for (unsigned i = 4470; i < 4477 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4477] = "0b10000000";
        for (unsigned i = 4478; i < 4497 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4497] = "0b11000000";
        ram[4498] = "0b00000000";
        ram[4499] = "0b00000000";
        ram[4500] = "0b10000000";
        ram[4501] = "0b00000000";
        ram[4502] = "0b00000000";
        ram[4503] = "0b00000000";
        ram[4504] = "0b00000000";
        ram[4505] = "0b10000000";
        for (unsigned i = 4506; i < 4530 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4530] = "0b10000000";
        ram[4531] = "0b00000000";
        ram[4532] = "0b10000000";
        ram[4533] = "0b00000000";
        ram[4534] = "0b00000000";
        ram[4535] = "0b10000000";
        for (unsigned i = 4536; i < 4541 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4541] = "0b11000000";
        for (unsigned i = 4542; i < 4607 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4607] = "0b10000000";
        for (unsigned i = 4608; i < 4642 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4642] = "0b10000000";
        for (unsigned i = 4643; i < 4649 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4649] = "0b11000000";
        ram[4650] = "0b11000000";
        ram[4651] = "0b00000000";
        ram[4652] = "0b00000000";
        ram[4653] = "0b10000000";
        for (unsigned i = 4654; i < 4664 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4664] = "0b11000000";
        for (unsigned i = 4665; i < 4679 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4679] = "0b10000000";
        ram[4680] = "0b00000000";
        ram[4681] = "0b00000000";
        ram[4682] = "0b10000000";
        ram[4683] = "0b10000000";
        ram[4684] = "0b00000000";
        ram[4685] = "0b00000000";
        ram[4686] = "0b00000000";
        ram[4687] = "0b00000000";
        ram[4688] = "0b10000000";
        for (unsigned i = 4689; i < 4699 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4699] = "0b10000000";
        ram[4700] = "0b00000000";
        ram[4701] = "0b11000000";
        for (unsigned i = 4702; i < 4713 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4713] = "0b10000000";
        for (unsigned i = 4714; i < 4729 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4729] = "0b10000000";
        for (unsigned i = 4730; i < 4741 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4741] = "0b10000000";
        for (unsigned i = 4742; i < 4753 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4753] = "0b11000000";
        for (unsigned i = 4754; i < 4770 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4770] = "0b10000000";
        ram[4771] = "0b00000000";
        ram[4772] = "0b00000000";
        ram[4773] = "0b10000000";
        for (unsigned i = 4774; i < 4783 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4783] = "0b00000001";
        for (unsigned i = 4784; i < 4793 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4793] = "0b10000000";
        for (unsigned i = 4794; i < 4817 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4817] = "0b10000000";
        ram[4818] = "0b00000000";
        ram[4819] = "0b00000000";
        ram[4820] = "0b11000000";
        for (unsigned i = 4821; i < 4834 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4834] = "0b10000000";
        for (unsigned i = 4835; i < 4841 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4841] = "0b11000000";
        for (unsigned i = 4842; i < 4849 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4849] = "0b10000000";
        ram[4850] = "0b00000000";
        ram[4851] = "0b00000000";
        ram[4852] = "0b10000000";
        ram[4853] = "0b00000000";
        ram[4854] = "0b00000000";
        ram[4855] = "0b00000000";
        ram[4856] = "0b00000000";
        ram[4857] = "0b11000000";
        for (unsigned i = 4858; i < 4867 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4867] = "0b11000000";
        for (unsigned i = 4868; i < 4873 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4873] = "0b10000000";
        for (unsigned i = 4874; i < 4889 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4889] = "0b10000000";
        for (unsigned i = 4890; i < 4905 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4905] = "0b10000000";
        ram[4906] = "0b10000000";
        ram[4907] = "0b00000000";
        ram[4908] = "0b00000000";
        ram[4909] = "0b10000000";
        for (unsigned i = 4910; i < 4949 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4949] = "0b01100000";
        for (unsigned i = 4950; i < 5016 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5016] = "0b11000000";
        for (unsigned i = 5017; i < 5031 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5031] = "0b00000001";
        for (unsigned i = 5032; i < 5126 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5126] = "0b10000000";
        ram[5127] = "0b00000001";
        ram[5128] = "0b00000000";
        ram[5129] = "0b00000000";
        ram[5130] = "0b00000000";
        ram[5131] = "0b10000000";
        for (unsigned i = 5132; i < 5153 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5153] = "0b00000001";
        for (unsigned i = 5154; i < 5171 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5171] = "0b00000001";
        ram[5172] = "0b00000000";
        ram[5173] = "0b00000000";
        ram[5174] = "0b00000000";
        ram[5175] = "0b10000000";
        for (unsigned i = 5176; i < 5193 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5193] = "0b00000011";
        ram[5194] = "0b10000000";
        ram[5195] = "0b00000000";
        ram[5196] = "0b10000000";
        for (unsigned i = 5197; i < 5202 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5202] = "0b10000000";
        for (unsigned i = 5203; i < 5217 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5217] = "0b10000000";
        for (unsigned i = 5218; i < 5228 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5228] = "0b10000000";
        for (unsigned i = 5229; i < 5265 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5265] = "0b00000001";
        ram[5266] = "0b00000000";
        ram[5267] = "0b10000000";
        ram[5268] = "0b10000000";
        for (unsigned i = 5269; i < 5295 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5295] = "0b10000000";
        for (unsigned i = 5296; i < 5307 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5307] = "0b11000000";
        for (unsigned i = 5308; i < 5313 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5313] = "0b00000001";
        ram[5314] = "0b00000000";
        ram[5315] = "0b00000001";
        for (unsigned i = 5316; i < 5344 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5344] = "0b10000000";
        for (unsigned i = 5345; i < 5353 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5353] = "0b10000000";
        for (unsigned i = 5354; i < 5364 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5364] = "0b10000000";
        for (unsigned i = 5365; i < 5380 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5380] = "0b10000000";
        ram[5381] = "0b00000000";
        ram[5382] = "0b00000000";
        ram[5383] = "0b00000000";
        ram[5384] = "0b10000000";
        for (unsigned i = 5385; i < 5397 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5397] = "0b00000001";
        for (unsigned i = 5398; i < 5430 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5430] = "0b11000000";
        for (unsigned i = 5431; i < 5461 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5461] = "0b10000000";
        for (unsigned i = 5462; i < 5528 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5528] = "0b10000000";
        for (unsigned i = 5529; i < 5585 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5585] = "0b10000000";
        ram[5586] = "0b00000000";
        ram[5587] = "0b10000000";
        for (unsigned i = 5588; i < 5613 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5613] = "0b00000001";
        for (unsigned i = 5614; i < 5634 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5634] = "0b10000000";
        for (unsigned i = 5635; i < 5647 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5647] = "0b00000001";
        for (unsigned i = 5648; i < 5659 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5659] = "0b00000001";
        for (unsigned i = 5660; i < 5689 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5689] = "0b10000000";
        for (unsigned i = 5690; i < 5698 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5698] = "0b10000000";
        for (unsigned i = 5699; i < 5707 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5707] = "0b00000001";
        for (unsigned i = 5708; i < 5717 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5717] = "0b00000011";
        for (unsigned i = 5718; i < 5802 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5802] = "0b10000000";
        for (unsigned i = 5803; i < 5828 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5828] = "0b10000000";
        for (unsigned i = 5829; i < 5886 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5886] = "0b10000000";
        for (unsigned i = 5887; i < 5902 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5902] = "0b11000000";
        for (unsigned i = 5903; i < 5911 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5911] = "0b00000001";
        ram[5912] = "0b00000000";
        ram[5913] = "0b00000000";
        ram[5914] = "0b11000000";
        for (unsigned i = 5915; i < 5948 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5948] = "0b10000000";
        for (unsigned i = 5949; i < 5969 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5969] = "0b00000001";
        for (unsigned i = 5970; i < 5978 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5978] = "0b10000000";
        for (unsigned i = 5979; i < 5988 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5988] = "0b10000000";
        ram[5989] = "0b00000000";
        ram[5990] = "0b00000000";
        ram[5991] = "0b00000000";
        ram[5992] = "0b00000000";
        ram[5993] = "0b10000000";
        for (unsigned i = 5994; i < 6000 ; i = i + 1) {
            ram[i] = "0b00000000";
        }


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


SC_MODULE(knn_train_60) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 6000;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_train_60_ram* meminst;


SC_CTOR(knn_train_60) {
meminst = new knn_train_60_ram("knn_train_60_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_train_60() {
    delete meminst;
}


};//endmodule
#endif
