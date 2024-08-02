// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_train_26_H__
#define __knn_train_26_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_train_26_ram : public sc_core::sc_module {

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


   SC_CTOR(knn_train_26_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b00000000";
        ram[2] = "0b00000001";
        for (unsigned i = 3; i < 68 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[68] = "0b10000000";
        for (unsigned i = 69; i < 101 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[101] = "0b00000001";
        for (unsigned i = 102; i < 108 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[108] = "0b10000000";
        for (unsigned i = 109; i < 114 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[114] = "0b10000000";
        for (unsigned i = 115; i < 121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[121] = "0b10000000";
        for (unsigned i = 122; i < 156 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[156] = "0b10000000";
        for (unsigned i = 157; i < 229 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[229] = "0b10000000";
        for (unsigned i = 230; i < 249 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[249] = "0b10000000";
        for (unsigned i = 250; i < 260 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[260] = "0b10000000";
        for (unsigned i = 261; i < 283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[283] = "0b10000000";
        for (unsigned i = 284; i < 312 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[312] = "0b10000000";
        for (unsigned i = 313; i < 429 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[429] = "0b10000000";
        for (unsigned i = 430; i < 435 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[435] = "0b10000000";
        for (unsigned i = 436; i < 451 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[451] = "0b01100000";
        ram[452] = "0b00000000";
        ram[453] = "0b10000000";
        for (unsigned i = 454; i < 468 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[468] = "0b00000001";
        for (unsigned i = 469; i < 483 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[483] = "0b10000000";
        for (unsigned i = 484; i < 489 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[489] = "0b10000000";
        for (unsigned i = 490; i < 506 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[506] = "0b11000000";
        for (unsigned i = 507; i < 527 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[527] = "0b00000010";
        ram[528] = "0b00000000";
        ram[529] = "0b00000000";
        ram[530] = "0b00000000";
        ram[531] = "0b10000000";
        for (unsigned i = 532; i < 733 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[733] = "0b10000000";
        for (unsigned i = 734; i < 759 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[759] = "0b10000000";
        for (unsigned i = 760; i < 770 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[770] = "0b10000000";
        for (unsigned i = 771; i < 778 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[778] = "0b10000000";
        for (unsigned i = 779; i < 883 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[883] = "0b00000001";
        for (unsigned i = 884; i < 896 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[896] = "0b10000000";
        for (unsigned i = 897; i < 904 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[904] = "0b00000001";
        for (unsigned i = 905; i < 971 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[971] = "0b00000010";
        for (unsigned i = 972; i < 1023 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1023] = "0b00000011";
        ram[1024] = "0b00000000";
        ram[1025] = "0b00000000";
        ram[1026] = "0b00000000";
        ram[1027] = "0b00000000";
        ram[1028] = "0b10000000";
        for (unsigned i = 1029; i < 1047 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1047] = "0b10000000";
        for (unsigned i = 1048; i < 1102 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1102] = "0b10000000";
        for (unsigned i = 1103; i < 1190 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1190] = "0b10000000";
        for (unsigned i = 1191; i < 1219 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1219] = "0b10000000";
        for (unsigned i = 1220; i < 1311 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1311] = "0b11000000";
        for (unsigned i = 1312; i < 1319 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1319] = "0b10000000";
        for (unsigned i = 1320; i < 1363 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1363] = "0b10000000";
        for (unsigned i = 1364; i < 1380 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1380] = "0b00000001";
        for (unsigned i = 1381; i < 1386 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1386] = "0b10000000";
        for (unsigned i = 1387; i < 1411 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1411] = "0b10000000";
        ram[1412] = "0b00000000";
        ram[1413] = "0b00000000";
        ram[1414] = "0b00000000";
        ram[1415] = "0b00000000";
        ram[1416] = "0b00000111";
        for (unsigned i = 1417; i < 1448 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1448] = "0b10000000";
        for (unsigned i = 1449; i < 1461 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1461] = "0b10000000";
        ram[1462] = "0b00000000";
        ram[1463] = "0b00000000";
        ram[1464] = "0b00000000";
        ram[1465] = "0b00000000";
        ram[1466] = "0b11000000";
        for (unsigned i = 1467; i < 1477 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1477] = "0b11000000";
        for (unsigned i = 1478; i < 1495 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1495] = "0b10000000";
        for (unsigned i = 1496; i < 1522 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1522] = "0b00000001";
        for (unsigned i = 1523; i < 1531 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1531] = "0b10000000";
        for (unsigned i = 1532; i < 1537 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1537] = "0b10000000";
        ram[1538] = "0b10000000";
        for (unsigned i = 1539; i < 1590 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1590] = "0b10000000";
        for (unsigned i = 1591; i < 1645 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1645] = "0b10000000";
        for (unsigned i = 1646; i < 1662 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1662] = "0b10000000";
        for (unsigned i = 1663; i < 1672 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1672] = "0b00000001";
        for (unsigned i = 1673; i < 1678 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1678] = "0b10000000";
        for (unsigned i = 1679; i < 1688 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1688] = "0b10000000";
        for (unsigned i = 1689; i < 1723 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1723] = "0b10000000";
        ram[1724] = "0b00000000";
        ram[1725] = "0b10000000";
        for (unsigned i = 1726; i < 1797 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1797] = "0b10000000";
        ram[1798] = "0b10000000";
        for (unsigned i = 1799; i < 1819 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1819] = "0b10000000";
        for (unsigned i = 1820; i < 1828 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1828] = "0b10000000";
        for (unsigned i = 1829; i < 1851 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1851] = "0b00000001";
        for (unsigned i = 1852; i < 1868 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1868] = "0b10000000";
        for (unsigned i = 1869; i < 1876 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1876] = "0b10000000";
        for (unsigned i = 1877; i < 1916 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1916] = "0b10000000";
        for (unsigned i = 1917; i < 1956 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1956] = "0b10000000";
        for (unsigned i = 1957; i < 2009 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2009] = "0b10000000";
        for (unsigned i = 2010; i < 2121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2121] = "0b10000000";
        ram[2122] = "0b00000000";
        ram[2123] = "0b00000000";
        ram[2124] = "0b00000000";
        ram[2125] = "0b00000000";
        ram[2126] = "0b11000000";
        for (unsigned i = 2127; i < 2195 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2195] = "0b10000000";
        for (unsigned i = 2196; i < 2253 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2253] = "0b10000000";
        for (unsigned i = 2254; i < 2298 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2298] = "0b10000000";
        for (unsigned i = 2299; i < 2324 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2324] = "0b10000000";
        ram[2325] = "0b10000000";
        for (unsigned i = 2326; i < 2352 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2352] = "0b10000000";
        ram[2353] = "0b10000000";
        for (unsigned i = 2354; i < 2373 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2373] = "0b10000000";
        for (unsigned i = 2374; i < 2381 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2381] = "0b10000000";
        for (unsigned i = 2382; i < 2403 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2403] = "0b10000000";
        for (unsigned i = 2404; i < 2420 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2420] = "0b00000001";
        ram[2421] = "0b00000000";
        ram[2422] = "0b00000000";
        ram[2423] = "0b00000000";
        ram[2424] = "0b00000000";
        ram[2425] = "0b10000000";
        for (unsigned i = 2426; i < 2473 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2473] = "0b10000000";
        for (unsigned i = 2474; i < 2483 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2483] = "0b10000000";
        ram[2484] = "0b00000000";
        ram[2485] = "0b00000000";
        ram[2486] = "0b00000000";
        ram[2487] = "0b10000000";
        for (unsigned i = 2488; i < 2532 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2532] = "0b11000000";
        ram[2533] = "0b11000000";
        for (unsigned i = 2534; i < 2548 ; i = i + 1) {
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
        for (unsigned i = 2607; i < 2650 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2650] = "0b00000011";
        for (unsigned i = 2651; i < 2659 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2659] = "0b00000001";
        for (unsigned i = 2660; i < 2693 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2693] = "0b10000000";
        for (unsigned i = 2694; i < 2702 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2702] = "0b00000001";
        for (unsigned i = 2703; i < 2736 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2736] = "0b10000000";
        for (unsigned i = 2737; i < 2743 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2743] = "0b00000001";
        ram[2744] = "0b00000000";
        ram[2745] = "0b10000000";
        for (unsigned i = 2746; i < 2761 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2761] = "0b10000000";
        for (unsigned i = 2762; i < 2779 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2779] = "0b10000000";
        for (unsigned i = 2780; i < 2798 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2798] = "0b00000001";
        for (unsigned i = 2799; i < 2836 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2836] = "0b10000000";
        for (unsigned i = 2837; i < 2842 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2842] = "0b11000000";
        for (unsigned i = 2843; i < 2892 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2892] = "0b00000001";
        ram[2893] = "0b00000000";
        ram[2894] = "0b00000000";
        ram[2895] = "0b00000000";
        ram[2896] = "0b00000000";
        ram[2897] = "0b10000000";
        ram[2898] = "0b00000000";
        ram[2899] = "0b10000000";
        ram[2900] = "0b00000000";
        ram[2901] = "0b10000000";
        for (unsigned i = 2902; i < 2952 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2952] = "0b10000000";
        for (unsigned i = 2953; i < 3015 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3015] = "0b10000000";
        ram[3016] = "0b10000000";
        for (unsigned i = 3017; i < 3035 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3035] = "0b10000000";
        for (unsigned i = 3036; i < 3106 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3106] = "0b10000000";
        for (unsigned i = 3107; i < 3157 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3157] = "0b10000000";
        for (unsigned i = 3158; i < 3198 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3198] = "0b10000000";
        for (unsigned i = 3199; i < 3250 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3250] = "0b00000001";
        for (unsigned i = 3251; i < 3328 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3328] = "0b10000000";
        for (unsigned i = 3329; i < 3334 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3334] = "0b10000000";
        for (unsigned i = 3335; i < 3376 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3376] = "0b10000000";
        ram[3377] = "0b00000000";
        ram[3378] = "0b00000000";
        ram[3379] = "0b00000000";
        ram[3380] = "0b00000000";
        ram[3381] = "0b11000000";
        ram[3382] = "0b00000000";
        ram[3383] = "0b00000001";
        for (unsigned i = 3384; i < 3391 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3391] = "0b10000000";
        for (unsigned i = 3392; i < 3409 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3409] = "0b10000000";
        for (unsigned i = 3410; i < 3443 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3443] = "0b10000000";
        for (unsigned i = 3444; i < 3492 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3492] = "0b10000000";
        for (unsigned i = 3493; i < 3553 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3553] = "0b11000000";
        for (unsigned i = 3554; i < 3565 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3565] = "0b10000000";
        for (unsigned i = 3566; i < 3577 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3577] = "0b11000000";
        for (unsigned i = 3578; i < 3585 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3585] = "0b10000000";
        ram[3586] = "0b00000000";
        ram[3587] = "0b00000000";
        ram[3588] = "0b00000000";
        ram[3589] = "0b00000000";
        ram[3590] = "0b10000000";
        for (unsigned i = 3591; i < 3603 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3603] = "0b10000000";
        for (unsigned i = 3604; i < 3622 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3622] = "0b10000000";
        ram[3623] = "0b11000000";
        for (unsigned i = 3624; i < 3668 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3668] = "0b10000000";
        ram[3669] = "0b00000000";
        ram[3670] = "0b00000000";
        ram[3671] = "0b10000000";
        for (unsigned i = 3672; i < 3677 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3677] = "0b10000000";
        for (unsigned i = 3678; i < 3688 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3688] = "0b10000000";
        for (unsigned i = 3689; i < 3698 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3698] = "0b10000000";
        ram[3699] = "0b00000000";
        ram[3700] = "0b10000000";
        for (unsigned i = 3701; i < 3717 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3717] = "0b10000000";
        for (unsigned i = 3718; i < 3734 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3734] = "0b10000000";
        for (unsigned i = 3735; i < 3749 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3749] = "0b11000000";
        for (unsigned i = 3750; i < 3757 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3757] = "0b10000000";
        for (unsigned i = 3758; i < 3767 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3767] = "0b10000000";
        for (unsigned i = 3768; i < 3776 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3776] = "0b10000000";
        ram[3777] = "0b11000000";
        for (unsigned i = 3778; i < 3795 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3795] = "0b00000001";
        for (unsigned i = 3796; i < 3818 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3818] = "0b00000001";
        for (unsigned i = 3819; i < 3888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3888] = "0b10000000";
        for (unsigned i = 3889; i < 3943 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3943] = "0b10000000";
        ram[3944] = "0b00000000";
        ram[3945] = "0b00000000";
        ram[3946] = "0b10000000";
        for (unsigned i = 3947; i < 4041 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4041] = "0b00000001";
        for (unsigned i = 4042; i < 4100 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4100] = "0b11110000";
        for (unsigned i = 4101; i < 4111 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4111] = "0b11000000";
        for (unsigned i = 4112; i < 4153 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4153] = "0b11000000";
        for (unsigned i = 4154; i < 4173 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4173] = "0b00000001";
        for (unsigned i = 4174; i < 4185 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4185] = "0b11100000";
        for (unsigned i = 4186; i < 4203 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4203] = "0b10000000";
        for (unsigned i = 4204; i < 4226 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4226] = "0b00000001";
        ram[4227] = "0b00000001";
        ram[4228] = "0b00000001";
        ram[4229] = "0b00000000";
        ram[4230] = "0b00000000";
        ram[4231] = "0b00000000";
        ram[4232] = "0b11000000";
        for (unsigned i = 4233; i < 4245 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4245] = "0b10000000";
        for (unsigned i = 4246; i < 4279 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4279] = "0b10000000";
        for (unsigned i = 4280; i < 4301 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4301] = "0b10000000";
        for (unsigned i = 4302; i < 4344 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4344] = "0b10000000";
        ram[4345] = "0b00000000";
        ram[4346] = "0b00000000";
        ram[4347] = "0b10000000";
        for (unsigned i = 4348; i < 4360 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4360] = "0b10000000";
        for (unsigned i = 4361; i < 4444 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4444] = "0b10000000";
        for (unsigned i = 4445; i < 4455 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4455] = "0b10000000";
        for (unsigned i = 4456; i < 4463 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4463] = "0b10000000";
        for (unsigned i = 4464; i < 4485 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4485] = "0b10000000";
        for (unsigned i = 4486; i < 4493 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4493] = "0b10000000";
        ram[4494] = "0b00000000";
        ram[4495] = "0b00000000";
        ram[4496] = "0b00000000";
        ram[4497] = "0b10000000";
        ram[4498] = "0b00000000";
        ram[4499] = "0b00000000";
        ram[4500] = "0b10000000";
        ram[4501] = "0b00000000";
        ram[4502] = "0b00000000";
        ram[4503] = "0b00000000";
        ram[4504] = "0b00000000";
        ram[4505] = "0b10000000";
        for (unsigned i = 4506; i < 4533 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4533] = "0b11000000";
        ram[4534] = "0b00000000";
        ram[4535] = "0b10000000";
        for (unsigned i = 4536; i < 4571 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4571] = "0b00000001";
        ram[4572] = "0b00000000";
        ram[4573] = "0b00000000";
        ram[4574] = "0b00000000";
        ram[4575] = "0b00000000";
        ram[4576] = "0b10000000";
        for (unsigned i = 4577; i < 4607 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4607] = "0b10000000";
        for (unsigned i = 4608; i < 4642 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4642] = "0b10000000";
        for (unsigned i = 4643; i < 4653 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4653] = "0b10000000";
        for (unsigned i = 4654; i < 4682 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4682] = "0b10000000";
        ram[4683] = "0b10000000";
        for (unsigned i = 4684; i < 4713 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4713] = "0b10000000";
        for (unsigned i = 4714; i < 4785 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4785] = "0b00000001";
        for (unsigned i = 4786; i < 4794 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4794] = "0b00000001";
        for (unsigned i = 4795; i < 4817 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4817] = "0b10000000";
        for (unsigned i = 4818; i < 4837 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4837] = "0b00000001";
        ram[4838] = "0b00000000";
        ram[4839] = "0b00000000";
        ram[4840] = "0b00000000";
        ram[4841] = "0b10000000";
        for (unsigned i = 4842; i < 4852 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4852] = "0b10000000";
        ram[4853] = "0b00000000";
        ram[4854] = "0b00000000";
        ram[4855] = "0b00000000";
        ram[4856] = "0b00000000";
        ram[4857] = "0b11000000";
        for (unsigned i = 4858; i < 4888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4888] = "0b00000001";
        for (unsigned i = 4889; i < 4905 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4905] = "0b10000000";
        ram[4906] = "0b10000000";
        ram[4907] = "0b00000000";
        ram[4908] = "0b00000000";
        ram[4909] = "0b10000000";
        for (unsigned i = 4910; i < 4926 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4926] = "0b10000000";
        ram[4927] = "0b11000000";
        for (unsigned i = 4928; i < 4949 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4949] = "0b01000000";
        for (unsigned i = 4950; i < 5045 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5045] = "0b10000000";
        for (unsigned i = 5046; i < 5068 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5068] = "0b10000000";
        for (unsigned i = 5069; i < 5074 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5074] = "0b10000000";
        for (unsigned i = 5075; i < 5116 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5116] = "0b10000000";
        for (unsigned i = 5117; i < 5131 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5131] = "0b10000000";
        for (unsigned i = 5132; i < 5181 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5181] = "0b00000001";
        ram[5182] = "0b00000011";
        ram[5183] = "0b00000000";
        ram[5184] = "0b00000000";
        ram[5185] = "0b00000000";
        ram[5186] = "0b00000000";
        ram[5187] = "0b10000000";
        for (unsigned i = 5188; i < 5196 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5196] = "0b10000000";
        for (unsigned i = 5197; i < 5202 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5202] = "0b10000000";
        for (unsigned i = 5203; i < 5248 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5248] = "0b10000000";
        for (unsigned i = 5249; i < 5298 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5298] = "0b10000000";
        for (unsigned i = 5299; i < 5334 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5334] = "0b10000000";
        for (unsigned i = 5335; i < 5353 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5353] = "0b10000000";
        for (unsigned i = 5354; i < 5364 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5364] = "0b10000000";
        for (unsigned i = 5365; i < 5373 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5373] = "0b10000000";
        for (unsigned i = 5374; i < 5384 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5384] = "0b10000000";
        for (unsigned i = 5385; i < 5393 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5393] = "0b10000000";
        for (unsigned i = 5394; i < 5416 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5416] = "0b00000011";
        for (unsigned i = 5417; i < 5430 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5430] = "0b11000000";
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
        for (unsigned i = 5513; i < 5585 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5585] = "0b10000000";
        for (unsigned i = 5586; i < 5627 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5627] = "0b10000000";
        for (unsigned i = 5628; i < 5634 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5634] = "0b10000000";
        for (unsigned i = 5635; i < 5652 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5652] = "0b00000011";
        for (unsigned i = 5653; i < 5692 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5692] = "0b10000000";
        ram[5693] = "0b00000000";
        ram[5694] = "0b10000000";
        for (unsigned i = 5695; i < 5800 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5800] = "0b11000000";
        ram[5801] = "0b00000000";
        ram[5802] = "0b10000000";
        for (unsigned i = 5803; i < 5808 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5808] = "0b10000000";
        for (unsigned i = 5809; i < 5886 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5886] = "0b10000000";
        for (unsigned i = 5887; i < 5968 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5968] = "0b00000001";
        for (unsigned i = 5969; i < 5978 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5978] = "0b10000000";
        for (unsigned i = 5979; i < 6000 ; i = i + 1) {
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


SC_MODULE(knn_train_26) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 6000;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_train_26_ram* meminst;


SC_CTOR(knn_train_26) {
meminst = new knn_train_26_ram("knn_train_26_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_train_26() {
    delete meminst;
}


};//endmodule
#endif
