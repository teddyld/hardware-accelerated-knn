// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_train_53_H__
#define __knn_train_53_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_train_53_ram : public sc_core::sc_module {

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


   SC_CTOR(knn_train_53_ram) {
        ram[0] = "0b00000000";
        ram[1] = "0b00000000";
        ram[2] = "0b00000001";
        for (unsigned i = 3; i < 16 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[16] = "0b11000000";
        for (unsigned i = 17; i < 38 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[38] = "0b10000000";
        for (unsigned i = 39; i < 68 ; i = i + 1) {
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
        ram[109] = "0b11100000";
        ram[110] = "0b00000000";
        ram[111] = "0b00000000";
        ram[112] = "0b00000000";
        ram[113] = "0b00000000";
        ram[114] = "0b10000000";
        for (unsigned i = 115; i < 121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[121] = "0b10000000";
        for (unsigned i = 122; i < 150 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[150] = "0b10000000";
        for (unsigned i = 151; i < 209 ; i = i + 1) {
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
        for (unsigned i = 250; i < 259 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[259] = "0b00000001";
        ram[260] = "0b10000000";
        for (unsigned i = 261; i < 273 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[273] = "0b00000001";
        for (unsigned i = 274; i < 283 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[283] = "0b10000000";
        for (unsigned i = 284; i < 312 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[312] = "0b11000000";
        for (unsigned i = 313; i < 338 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[338] = "0b10000000";
        for (unsigned i = 339; i < 429 ; i = i + 1) {
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
        for (unsigned i = 441; i < 453 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[453] = "0b10000000";
        for (unsigned i = 454; i < 464 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[464] = "0b10000000";
        for (unsigned i = 465; i < 506 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[506] = "0b11000000";
        for (unsigned i = 507; i < 517 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[517] = "0b10000000";
        for (unsigned i = 518; i < 526 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[526] = "0b10000000";
        for (unsigned i = 527; i < 658 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[658] = "0b10000000";
        for (unsigned i = 659; i < 670 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[670] = "0b10000000";
        for (unsigned i = 671; i < 730 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[730] = "0b11000000";
        for (unsigned i = 731; i < 759 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[759] = "0b10000000";
        for (unsigned i = 760; i < 770 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[770] = "0b10000000";
        for (unsigned i = 771; i < 872 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[872] = "0b10000000";
        for (unsigned i = 873; i < 984 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[984] = "0b10000000";
        for (unsigned i = 985; i < 1028 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1028] = "0b10000000";
        for (unsigned i = 1029; i < 1180 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1180] = "0b10000000";
        for (unsigned i = 1181; i < 1190 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1190] = "0b10000000";
        for (unsigned i = 1191; i < 1213 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1213] = "0b10000000";
        ram[1214] = "0b00000000";
        ram[1215] = "0b10000000";
        ram[1216] = "0b00000000";
        ram[1217] = "0b00000000";
        ram[1218] = "0b00000000";
        ram[1219] = "0b10000000";
        for (unsigned i = 1220; i < 1239 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1239] = "0b11000000";
        for (unsigned i = 1240; i < 1259 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1259] = "0b01100000";
        for (unsigned i = 1260; i < 1266 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1266] = "0b10000000";
        for (unsigned i = 1267; i < 1276 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1276] = "0b10000000";
        for (unsigned i = 1277; i < 1363 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1363] = "0b10000000";
        ram[1364] = "0b00000000";
        ram[1365] = "0b00000000";
        ram[1366] = "0b10000000";
        for (unsigned i = 1367; i < 1380 ; i = i + 1) {
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
        for (unsigned i = 1412; i < 1448 ; i = i + 1) {
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
        for (unsigned i = 1478; i < 1522 ; i = i + 1) {
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
        ram[1539] = "0b00000000";
        ram[1540] = "0b00000000";
        ram[1541] = "0b10000000";
        for (unsigned i = 1542; i < 1573 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1573] = "0b10000000";
        for (unsigned i = 1574; i < 1586 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1586] = "0b11000000";
        ram[1587] = "0b00000000";
        ram[1588] = "0b00000000";
        ram[1589] = "0b00000000";
        ram[1590] = "0b10000000";
        ram[1591] = "0b00000000";
        ram[1592] = "0b00000000";
        ram[1593] = "0b00000000";
        ram[1594] = "0b00000000";
        ram[1595] = "0b00000001";
        for (unsigned i = 1596; i < 1662 ; i = i + 1) {
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
        for (unsigned i = 1726; i < 1798 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1798] = "0b10000000";
        for (unsigned i = 1799; i < 1828 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1828] = "0b10000000";
        for (unsigned i = 1829; i < 1861 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1861] = "0b10000000";
        for (unsigned i = 1862; i < 1876 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1876] = "0b10000000";
        for (unsigned i = 1877; i < 1916 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1916] = "0b10000000";
        for (unsigned i = 1917; i < 1952 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[1952] = "0b10000000";
        for (unsigned i = 1953; i < 2009 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2009] = "0b10000000";
        for (unsigned i = 2010; i < 2019 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2019] = "0b10000000";
        for (unsigned i = 2020; i < 2071 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2071] = "0b10000000";
        for (unsigned i = 2072; i < 2121 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2121] = "0b10000000";
        ram[2122] = "0b00000000";
        ram[2123] = "0b00000000";
        ram[2124] = "0b00000000";
        ram[2125] = "0b00000000";
        ram[2126] = "0b10000000";
        for (unsigned i = 2127; i < 2195 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2195] = "0b10000000";
        for (unsigned i = 2196; i < 2234 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2234] = "0b10000000";
        for (unsigned i = 2235; i < 2253 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2253] = "0b10000000";
        ram[2254] = "0b00000000";
        ram[2255] = "0b00000000";
        ram[2256] = "0b00000000";
        ram[2257] = "0b10000000";
        for (unsigned i = 2258; i < 2298 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2298] = "0b10000000";
        for (unsigned i = 2299; i < 2324 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2324] = "0b11000000";
        ram[2325] = "0b10000000";
        for (unsigned i = 2326; i < 2352 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2352] = "0b10000000";
        ram[2353] = "0b10000000";
        for (unsigned i = 2354; i < 2381 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2381] = "0b10000000";
        for (unsigned i = 2382; i < 2396 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2396] = "0b10000000";
        for (unsigned i = 2397; i < 2420 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2420] = "0b00000001";
        for (unsigned i = 2421; i < 2450 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2450] = "0b11000000";
        for (unsigned i = 2451; i < 2473 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2473] = "0b10000000";
        for (unsigned i = 2474; i < 2487 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2487] = "0b10000000";
        ram[2488] = "0b00000000";
        ram[2489] = "0b00000000";
        ram[2490] = "0b11000000";
        for (unsigned i = 2491; i < 2532 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2532] = "0b11000000";
        ram[2533] = "0b11000000";
        for (unsigned i = 2534; i < 2548 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2548] = "0b00000111";
        for (unsigned i = 2549; i < 2606 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2606] = "0b10000000";
        for (unsigned i = 2607; i < 2636 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2636] = "0b10000000";
        for (unsigned i = 2637; i < 2659 ; i = i + 1) {
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
        for (unsigned i = 2737; i < 2745 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2745] = "0b10000000";
        for (unsigned i = 2746; i < 2765 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2765] = "0b10000000";
        for (unsigned i = 2766; i < 2772 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2772] = "0b00000001";
        for (unsigned i = 2773; i < 2779 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2779] = "0b10000000";
        for (unsigned i = 2780; i < 2836 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2836] = "0b10000000";
        for (unsigned i = 2837; i < 2879 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2879] = "0b00000001";
        ram[2880] = "0b10000000";
        for (unsigned i = 2881; i < 2892 ; i = i + 1) {
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
        for (unsigned i = 2900; i < 2934 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2934] = "0b00000001";
        for (unsigned i = 2935; i < 2952 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[2952] = "0b10000000";
        for (unsigned i = 2953; i < 3012 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3012] = "0b10000000";
        ram[3013] = "0b00000000";
        ram[3014] = "0b00000000";
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
        for (unsigned i = 3107; i < 3198 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3198] = "0b10000000";
        for (unsigned i = 3199; i < 3214 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3214] = "0b10000000";
        for (unsigned i = 3215; i < 3247 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3247] = "0b00000001";
        for (unsigned i = 3248; i < 3328 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3328] = "0b10000000";
        ram[3329] = "0b00000000";
        ram[3330] = "0b10000000";
        ram[3331] = "0b00000000";
        ram[3332] = "0b00000000";
        ram[3333] = "0b00000000";
        ram[3334] = "0b10000000";
        for (unsigned i = 3335; i < 3376 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3376] = "0b10000000";
        ram[3377] = "0b00000000";
        ram[3378] = "0b00000000";
        ram[3379] = "0b00000000";
        ram[3380] = "0b00000000";
        ram[3381] = "0b10000000";
        for (unsigned i = 3382; i < 3391 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3391] = "0b10000000";
        for (unsigned i = 3392; i < 3409 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3409] = "0b10000000";
        ram[3410] = "0b00000000";
        ram[3411] = "0b00000000";
        ram[3412] = "0b00000000";
        ram[3413] = "0b10000000";
        for (unsigned i = 3414; i < 3424 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3424] = "0b00000001";
        for (unsigned i = 3425; i < 3492 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3492] = "0b10000000";
        for (unsigned i = 3493; i < 3553 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3553] = "0b10000000";
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
        for (unsigned i = 3633; i < 3671 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3671] = "0b11000000";
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
        ram[3699] = "0b00000000";
        ram[3700] = "0b10000000";
        for (unsigned i = 3701; i < 3717 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3717] = "0b10000000";
        for (unsigned i = 3718; i < 3749 ; i = i + 1) {
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
        ram[3818] = "0b00000001";
        for (unsigned i = 3819; i < 3846 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3846] = "0b10000000";
        for (unsigned i = 3847; i < 3888 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3888] = "0b10000000";
        for (unsigned i = 3889; i < 3930 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3930] = "0b10000000";
        for (unsigned i = 3931; i < 3943 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3943] = "0b10000000";
        ram[3944] = "0b00000000";
        ram[3945] = "0b00000000";
        ram[3946] = "0b10000000";
        for (unsigned i = 3947; i < 3969 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[3969] = "0b00000001";
        for (unsigned i = 3970; i < 4030 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4030] = "0b10000000";
        for (unsigned i = 4031; i < 4041 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4041] = "0b00000001";
        for (unsigned i = 4042; i < 4061 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4061] = "0b00000001";
        for (unsigned i = 4062; i < 4102 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4102] = "0b00000001";
        for (unsigned i = 4103; i < 4170 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4170] = "0b10000000";
        for (unsigned i = 4171; i < 4185 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4185] = "0b10000000";
        for (unsigned i = 4186; i < 4203 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4203] = "0b10000000";
        ram[4204] = "0b00000000";
        ram[4205] = "0b10000000";
        for (unsigned i = 4206; i < 4218 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4218] = "0b10000000";
        for (unsigned i = 4219; i < 4226 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4226] = "0b00000001";
        ram[4227] = "0b00000000";
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
        for (unsigned i = 4280; i < 4288 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4288] = "0b10000000";
        for (unsigned i = 4289; i < 4301 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4301] = "0b10000000";
        for (unsigned i = 4302; i < 4337 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4337] = "0b10000000";
        for (unsigned i = 4338; i < 4344 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4344] = "0b10000000";
        for (unsigned i = 4345; i < 4360 ; i = i + 1) {
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
        for (unsigned i = 4456; i < 4462 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4462] = "0b10000000";
        for (unsigned i = 4463; i < 4485 ; i = i + 1) {
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
        ram[4530] = "0b01000000";
        ram[4531] = "0b00000000";
        ram[4532] = "0b10000000";
        ram[4533] = "0b00000000";
        ram[4534] = "0b00000000";
        ram[4535] = "0b10000000";
        for (unsigned i = 4536; i < 4549 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4549] = "0b10000000";
        for (unsigned i = 4550; i < 4576 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
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
        ram[4683] = "0b11000000";
        for (unsigned i = 4684; i < 4699 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4699] = "0b10000000";
        for (unsigned i = 4700; i < 4707 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4707] = "0b10000000";
        for (unsigned i = 4708; i < 4713 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4713] = "0b10000000";
        for (unsigned i = 4714; i < 4741 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4741] = "0b10000000";
        for (unsigned i = 4742; i < 4758 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4758] = "0b00000001";
        for (unsigned i = 4759; i < 4770 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4770] = "0b10000000";
        ram[4771] = "0b00000000";
        ram[4772] = "0b00000000";
        ram[4773] = "0b10000000";
        for (unsigned i = 4774; i < 4793 ; i = i + 1) {
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
        ram[4835] = "0b00000000";
        ram[4836] = "0b00000000";
        ram[4837] = "0b00000001";
        ram[4838] = "0b00000000";
        ram[4839] = "0b00000000";
        ram[4840] = "0b00000000";
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
        ram[4867] = "0b10000000";
        for (unsigned i = 4868; i < 4905 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4905] = "0b10000000";
        ram[4906] = "0b10000000";
        for (unsigned i = 4907; i < 4926 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4926] = "0b10000000";
        for (unsigned i = 4927; i < 4949 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[4949] = "0b01100000";
        ram[4950] = "0b00000000";
        ram[4951] = "0b00000000";
        ram[4952] = "0b10000000";
        for (unsigned i = 4953; i < 5068 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5068] = "0b10000000";
        for (unsigned i = 5069; i < 5074 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5074] = "0b10000000";
        for (unsigned i = 5075; i < 5131 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5131] = "0b10000000";
        for (unsigned i = 5132; i < 5155 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5155] = "0b11000000";
        for (unsigned i = 5156; i < 5175 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5175] = "0b10000000";
        for (unsigned i = 5176; i < 5194 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5194] = "0b10000000";
        ram[5195] = "0b00000000";
        ram[5196] = "0b10000000";
        for (unsigned i = 5197; i < 5202 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5202] = "0b10000000";
        for (unsigned i = 5203; i < 5228 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5228] = "0b10000000";
        for (unsigned i = 5229; i < 5267 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5267] = "0b10000000";
        ram[5268] = "0b10000000";
        for (unsigned i = 5269; i < 5308 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5308] = "0b10000000";
        ram[5309] = "0b00000000";
        ram[5310] = "0b00000000";
        ram[5311] = "0b00000000";
        ram[5312] = "0b00000000";
        ram[5313] = "0b00000001";
        ram[5314] = "0b00000000";
        ram[5315] = "0b00000001";
        for (unsigned i = 5316; i < 5334 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5334] = "0b10000000";
        for (unsigned i = 5335; i < 5344 ; i = i + 1) {
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
        for (unsigned i = 5365; i < 5373 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5373] = "0b10000000";
        for (unsigned i = 5374; i < 5384 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5384] = "0b10000000";
        for (unsigned i = 5385; i < 5430 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5430] = "0b11000000";
        for (unsigned i = 5431; i < 5461 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5461] = "0b10000000";
        for (unsigned i = 5462; i < 5505 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5505] = "0b10000000";
        for (unsigned i = 5506; i < 5585 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5585] = "0b10000000";
        ram[5586] = "0b00000000";
        ram[5587] = "0b10000000";
        for (unsigned i = 5588; i < 5626 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5626] = "0b11000000";
        for (unsigned i = 5627; i < 5634 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5634] = "0b10000000";
        for (unsigned i = 5635; i < 5689 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5689] = "0b10000000";
        ram[5690] = "0b00000000";
        ram[5691] = "0b00000000";
        ram[5692] = "0b10000000";
        ram[5693] = "0b00000000";
        ram[5694] = "0b10000000";
        ram[5695] = "0b00000000";
        ram[5696] = "0b00000000";
        ram[5697] = "0b00000000";
        ram[5698] = "0b10000000";
        for (unsigned i = 5699; i < 5802 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5802] = "0b10000000";
        for (unsigned i = 5803; i < 5808 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5808] = "0b10000000";
        for (unsigned i = 5809; i < 5828 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5828] = "0b10000000";
        for (unsigned i = 5829; i < 5886 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5886] = "0b10000000";
        for (unsigned i = 5887; i < 5969 ; i = i + 1) {
            ram[i] = "0b00000000";
        }
        ram[5969] = "0b00000001";
        for (unsigned i = 5970; i < 5978 ; i = i + 1) {
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


SC_MODULE(knn_train_53) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 6000;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_train_53_ram* meminst;


SC_CTOR(knn_train_53) {
meminst = new knn_train_53_ram("knn_train_53_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_train_53() {
    delete meminst;
}


};//endmodule
#endif
