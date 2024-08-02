// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_train_2_H__
#define __knn_train_2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_train_2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
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


   SC_CTOR(knn_train_2_ram) {
        ram[0] = "0b000000";
        ram[1] = "0b000000";
        ram[2] = "0b001100";
        for (unsigned i = 3; i < 12 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[12] = "0b011111";
        for (unsigned i = 13; i < 20 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[20] = "0b011100";
        ram[21] = "0b000000";
        ram[22] = "0b000000";
        ram[23] = "0b000000";
        ram[24] = "0b000000";
        ram[25] = "0b000001";
        ram[26] = "0b000000";
        ram[27] = "0b000011";
        ram[28] = "0b001111";
        for (unsigned i = 29; i < 44 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[44] = "0b000011";
        for (unsigned i = 45; i < 76 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[76] = "0b000011";
        for (unsigned i = 77; i < 86 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[86] = "0b011111";
        for (unsigned i = 87; i < 108 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[108] = "0b000001";
        ram[109] = "0b000000";
        ram[110] = "0b000000";
        ram[111] = "0b000111";
        for (unsigned i = 112; i < 120 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[120] = "0b001111";
        for (unsigned i = 121; i < 134 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[134] = "0b000011";
        for (unsigned i = 135; i < 149 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[149] = "0b000011";
        for (unsigned i = 150; i < 164 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[164] = "0b000011";
        ram[165] = "0b000000";
        ram[166] = "0b000000";
        ram[167] = "0b000000";
        ram[168] = "0b000001";
        for (unsigned i = 169; i < 198 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[198] = "0b000111";
        for (unsigned i = 199; i < 220 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[220] = "0b000111";
        ram[221] = "0b000000";
        ram[222] = "0b000011";
        for (unsigned i = 223; i < 228 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[228] = "0b000111";
        for (unsigned i = 229; i < 246 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[246] = "0b000001";
        for (unsigned i = 247; i < 252 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[252] = "0b000011";
        for (unsigned i = 253; i < 284 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[284] = "0b000111";
        for (unsigned i = 285; i < 298 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[298] = "0b000001";
        for (unsigned i = 299; i < 316 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[316] = "0b000011";
        for (unsigned i = 317; i < 356 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[356] = "0b000001";
        ram[357] = "0b000000";
        ram[358] = "0b000000";
        ram[359] = "0b000000";
        ram[360] = "0b000011";
        for (unsigned i = 361; i < 378 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[378] = "0b000001";
        ram[379] = "0b000000";
        ram[380] = "0b000001";
        for (unsigned i = 381; i < 386 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[386] = "0b000001";
        for (unsigned i = 387; i < 392 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[392] = "0b000111";
        for (unsigned i = 393; i < 400 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[400] = "0b000111";
        for (unsigned i = 401; i < 439 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[439] = "0b001000";
        ram[440] = "0b000001";
        ram[441] = "0b000000";
        ram[442] = "0b000000";
        ram[443] = "0b000000";
        ram[444] = "0b000011";
        for (unsigned i = 445; i < 452 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[452] = "0b000001";
        for (unsigned i = 453; i < 458 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[458] = "0b000001";
        for (unsigned i = 459; i < 464 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[464] = "0b000011";
        for (unsigned i = 465; i < 483 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[483] = "0b000001";
        ram[484] = "0b000000";
        ram[485] = "0b000000";
        ram[486] = "0b000001";
        for (unsigned i = 487; i < 500 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[500] = "0b000111";
        ram[501] = "0b000000";
        ram[502] = "0b000000";
        ram[503] = "0b000000";
        ram[504] = "0b000001";
        for (unsigned i = 505; i < 530 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[530] = "0b000111";
        for (unsigned i = 531; i < 546 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[546] = "0b000001";
        ram[547] = "0b000010";
        for (unsigned i = 548; i < 557 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[557] = "0b000011";
        ram[558] = "0b000000";
        ram[559] = "0b000000";
        ram[560] = "0b000001";
        for (unsigned i = 561; i < 568 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[568] = "0b001111";
        for (unsigned i = 569; i < 606 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[606] = "0b011110";
        ram[607] = "0b000000";
        ram[608] = "0b000011";
        for (unsigned i = 609; i < 620 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[620] = "0b000001";
        ram[621] = "0b000000";
        ram[622] = "0b000000";
        ram[623] = "0b000000";
        ram[624] = "0b000001";
        for (unsigned i = 625; i < 670 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[670] = "0b000111";
        for (unsigned i = 671; i < 688 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[688] = "0b000011";
        for (unsigned i = 689; i < 706 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[706] = "0b000111";
        for (unsigned i = 707; i < 730 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[730] = "0b000011";
        ram[731] = "0b000000";
        ram[732] = "0b000001";
        ram[733] = "0b000000";
        ram[734] = "0b000111";
        for (unsigned i = 735; i < 752 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[752] = "0b000001";
        for (unsigned i = 753; i < 770 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[770] = "0b000111";
        for (unsigned i = 771; i < 792 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[792] = "0b000001";
        for (unsigned i = 793; i < 804 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[804] = "0b000111";
        for (unsigned i = 805; i < 814 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[814] = "0b000011";
        for (unsigned i = 815; i < 828 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[828] = "0b000001";
        ram[829] = "0b000000";
        ram[830] = "0b000111";
        for (unsigned i = 831; i < 862 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[862] = "0b000001";
        ram[863] = "0b000000";
        ram[864] = "0b000000";
        ram[865] = "0b000000";
        ram[866] = "0b001111";
        ram[867] = "0b000000";
        ram[868] = "0b000111";
        ram[869] = "0b000000";
        ram[870] = "0b000000";
        ram[871] = "0b000000";
        ram[872] = "0b000001";
        ram[873] = "0b000000";
        ram[874] = "0b000001";
        ram[875] = "0b000011";
        for (unsigned i = 876; i < 886 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[886] = "0b000011";
        for (unsigned i = 887; i < 924 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[924] = "0b000111";
        for (unsigned i = 925; i < 934 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[934] = "0b001111";
        for (unsigned i = 935; i < 966 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[966] = "0b011111";
        for (unsigned i = 967; i < 981 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[981] = "0b001000";
        for (unsigned i = 982; i < 992 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[992] = "0b000011";
        for (unsigned i = 993; i < 1047 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1047] = "0b000001";
        ram[1048] = "0b000001";
        for (unsigned i = 1049; i < 1064 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1064] = "0b000001";
        for (unsigned i = 1065; i < 1074 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1074] = "0b000001";
        for (unsigned i = 1075; i < 1097 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1097] = "0b000001";
        for (unsigned i = 1098; i < 1108 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1108] = "0b001111";
        for (unsigned i = 1109; i < 1120 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1120] = "0b000001";
        for (unsigned i = 1121; i < 1134 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1134] = "0b000001";
        for (unsigned i = 1135; i < 1143 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1143] = "0b000001";
        for (unsigned i = 1144; i < 1158 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1158] = "0b000111";
        for (unsigned i = 1159; i < 1164 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1164] = "0b000001";
        ram[1165] = "0b000001";
        for (unsigned i = 1166; i < 1172 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1172] = "0b000001";
        for (unsigned i = 1173; i < 1194 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1194] = "0b000001";
        ram[1195] = "0b000000";
        ram[1196] = "0b000111";
        for (unsigned i = 1197; i < 1206 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1206] = "0b000011";
        for (unsigned i = 1207; i < 1226 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1226] = "0b000001";
        for (unsigned i = 1227; i < 1253 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1253] = "0b000001";
        for (unsigned i = 1254; i < 1281 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1281] = "0b000001";
        for (unsigned i = 1282; i < 1290 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1290] = "0b000111";
        for (unsigned i = 1291; i < 1334 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1334] = "0b000011";
        ram[1335] = "0b000000";
        ram[1336] = "0b000011";
        ram[1337] = "0b000000";
        ram[1338] = "0b000011";
        for (unsigned i = 1339; i < 1344 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1344] = "0b000001";
        for (unsigned i = 1345; i < 1366 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1366] = "0b000001";
        for (unsigned i = 1367; i < 1397 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1397] = "0b000001";
        ram[1398] = "0b000000";
        ram[1399] = "0b000000";
        ram[1400] = "0b000111";
        for (unsigned i = 1401; i < 1420 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1420] = "0b000011";
        ram[1421] = "0b000000";
        ram[1422] = "0b000011";
        for (unsigned i = 1423; i < 1428 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1428] = "0b000011";
        ram[1429] = "0b000000";
        ram[1430] = "0b000000";
        ram[1431] = "0b000000";
        ram[1432] = "0b011111";
        for (unsigned i = 1433; i < 1438 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1438] = "0b000001";
        for (unsigned i = 1439; i < 1448 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1448] = "0b000111";
        for (unsigned i = 1449; i < 1460 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1460] = "0b000110";
        for (unsigned i = 1461; i < 1466 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1466] = "0b000011";
        ram[1467] = "0b000000";
        ram[1468] = "0b000000";
        ram[1469] = "0b000000";
        ram[1470] = "0b000011";
        ram[1471] = "0b000000";
        ram[1472] = "0b000000";
        ram[1473] = "0b000000";
        ram[1474] = "0b000001";
        for (unsigned i = 1475; i < 1480 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1480] = "0b000111";
        for (unsigned i = 1481; i < 1494 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1494] = "0b000001";
        for (unsigned i = 1495; i < 1526 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1526] = "0b000001";
        for (unsigned i = 1527; i < 1532 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1532] = "0b000001";
        for (unsigned i = 1533; i < 1583 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1583] = "0b000011";
        ram[1584] = "0b000000";
        ram[1585] = "0b000000";
        ram[1586] = "0b000011";
        ram[1587] = "0b000000";
        ram[1588] = "0b000011";
        for (unsigned i = 1589; i < 1602 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1602] = "0b001111";
        for (unsigned i = 1603; i < 1609 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1609] = "0b000001";
        ram[1610] = "0b000000";
        ram[1611] = "0b000000";
        ram[1612] = "0b000000";
        ram[1613] = "0b000000";
        ram[1614] = "0b000001";
        ram[1615] = "0b000000";
        ram[1616] = "0b000000";
        ram[1617] = "0b000000";
        ram[1618] = "0b000111";
        for (unsigned i = 1619; i < 1631 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1631] = "0b000011";
        for (unsigned i = 1632; i < 1644 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1644] = "0b000011";
        ram[1645] = "0b000000";
        ram[1646] = "0b000000";
        ram[1647] = "0b000000";
        ram[1648] = "0b000000";
        ram[1649] = "0b000001";
        for (unsigned i = 1650; i < 1677 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1677] = "0b000001";
        for (unsigned i = 1678; i < 1698 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1698] = "0b001111";
        for (unsigned i = 1699; i < 1753 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1753] = "0b000001";
        ram[1754] = "0b000000";
        ram[1755] = "0b000000";
        ram[1756] = "0b000111";
        for (unsigned i = 1757; i < 1774 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1774] = "0b000111";
        ram[1775] = "0b000000";
        ram[1776] = "0b000000";
        ram[1777] = "0b000000";
        ram[1778] = "0b000111";
        for (unsigned i = 1779; i < 1800 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1800] = "0b000111";
        for (unsigned i = 1801; i < 1809 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1809] = "0b000001";
        for (unsigned i = 1810; i < 1826 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1826] = "0b000011";
        for (unsigned i = 1827; i < 1842 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1842] = "0b000011";
        ram[1843] = "0b000001";
        for (unsigned i = 1844; i < 1874 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1874] = "0b000011";
        for (unsigned i = 1875; i < 1900 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1900] = "0b000001";
        for (unsigned i = 1901; i < 1918 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1918] = "0b000001";
        for (unsigned i = 1919; i < 1926 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1926] = "0b000001";
        for (unsigned i = 1927; i < 1947 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1947] = "0b000111";
        ram[1948] = "0b000000";
        ram[1949] = "0b000000";
        ram[1950] = "0b000000";
        ram[1951] = "0b000000";
        ram[1952] = "0b000001";
        for (unsigned i = 1953; i < 1972 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1972] = "0b000001";
        for (unsigned i = 1973; i < 1987 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1987] = "0b000011";
        for (unsigned i = 1988; i < 1994 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[1994] = "0b000011";
        for (unsigned i = 1995; i < 2017 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2017] = "0b000011";
        ram[2018] = "0b000001";
        ram[2019] = "0b000011";
        for (unsigned i = 2020; i < 2032 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2032] = "0b000011";
        ram[2033] = "0b000000";
        ram[2034] = "0b000001";
        ram[2035] = "0b000000";
        ram[2036] = "0b000011";
        for (unsigned i = 2037; i < 2064 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2064] = "0b000001";
        for (unsigned i = 2065; i < 2072 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2072] = "0b000001";
        ram[2073] = "0b000000";
        ram[2074] = "0b000011";
        ram[2075] = "0b000000";
        ram[2076] = "0b000000";
        ram[2077] = "0b000000";
        ram[2078] = "0b000011";
        for (unsigned i = 2079; i < 2092 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2092] = "0b000001";
        for (unsigned i = 2093; i < 2102 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2102] = "0b000110";
        ram[2103] = "0b000000";
        ram[2104] = "0b000000";
        ram[2105] = "0b000000";
        ram[2106] = "0b000000";
        ram[2107] = "0b000001";
        for (unsigned i = 2108; i < 2126 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2126] = "0b000001";
        ram[2127] = "0b000000";
        ram[2128] = "0b000011";
        for (unsigned i = 2129; i < 2146 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2146] = "0b011111";
        ram[2147] = "0b000000";
        ram[2148] = "0b000000";
        ram[2149] = "0b000001";
        for (unsigned i = 2150; i < 2170 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2170] = "0b000011";
        ram[2171] = "0b000000";
        ram[2172] = "0b000011";
        for (unsigned i = 2173; i < 2180 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2180] = "0b000001";
        for (unsigned i = 2181; i < 2200 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2200] = "0b000011";
        ram[2201] = "0b000000";
        ram[2202] = "0b000000";
        ram[2203] = "0b000001";
        ram[2204] = "0b000011";
        for (unsigned i = 2205; i < 2228 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2228] = "0b000011";
        ram[2229] = "0b000000";
        ram[2230] = "0b000001";
        ram[2231] = "0b000000";
        ram[2232] = "0b000000";
        ram[2233] = "0b000000";
        ram[2234] = "0b000001";
        for (unsigned i = 2235; i < 2241 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2241] = "0b000011";
        ram[2242] = "0b000000";
        ram[2243] = "0b000000";
        ram[2244] = "0b000000";
        ram[2245] = "0b000000";
        ram[2246] = "0b001110";
        for (unsigned i = 2247; i < 2256 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2256] = "0b000111";
        for (unsigned i = 2257; i < 2264 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2264] = "0b000111";
        for (unsigned i = 2265; i < 2270 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2270] = "0b000001";
        for (unsigned i = 2271; i < 2280 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2280] = "0b001111";
        ram[2281] = "0b000000";
        ram[2282] = "0b000000";
        ram[2283] = "0b000000";
        ram[2284] = "0b000011";
        for (unsigned i = 2285; i < 2305 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2305] = "0b000001";
        ram[2306] = "0b000000";
        ram[2307] = "0b000000";
        ram[2308] = "0b000000";
        ram[2309] = "0b000001";
        for (unsigned i = 2310; i < 2328 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2328] = "0b000001";
        for (unsigned i = 2329; i < 2342 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2342] = "0b000001";
        for (unsigned i = 2343; i < 2350 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2350] = "0b000011";
        ram[2351] = "0b000000";
        ram[2352] = "0b000000";
        ram[2353] = "0b000000";
        ram[2354] = "0b000001";
        for (unsigned i = 2355; i < 2360 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2360] = "0b000001";
        for (unsigned i = 2361; i < 2390 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2390] = "0b000011";
        ram[2391] = "0b000000";
        ram[2392] = "0b000000";
        ram[2393] = "0b000001";
        for (unsigned i = 2394; i < 2400 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2400] = "0b000001";
        for (unsigned i = 2401; i < 2410 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2410] = "0b000001";
        ram[2411] = "0b000000";
        ram[2412] = "0b000000";
        ram[2413] = "0b000000";
        ram[2414] = "0b000001";
        ram[2415] = "0b000000";
        ram[2416] = "0b000000";
        ram[2417] = "0b000000";
        ram[2418] = "0b000001";
        for (unsigned i = 2419; i < 2430 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2430] = "0b000001";
        for (unsigned i = 2431; i < 2454 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2454] = "0b000011";
        ram[2455] = "0b000000";
        ram[2456] = "0b000000";
        ram[2457] = "0b000000";
        ram[2458] = "0b000000";
        ram[2459] = "0b100000";
        for (unsigned i = 2460; i < 2468 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2468] = "0b000011";
        ram[2469] = "0b000000";
        ram[2470] = "0b000000";
        ram[2471] = "0b000000";
        ram[2472] = "0b000111";
        for (unsigned i = 2473; i < 2502 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2502] = "0b011100";
        ram[2503] = "0b000000";
        ram[2504] = "0b000000";
        ram[2505] = "0b000000";
        ram[2506] = "0b001111";
        ram[2507] = "0b000000";
        ram[2508] = "0b000001";
        for (unsigned i = 2509; i < 2520 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2520] = "0b000011";
        ram[2521] = "0b000000";
        ram[2522] = "0b000000";
        ram[2523] = "0b000000";
        ram[2524] = "0b000011";
        for (unsigned i = 2525; i < 2534 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2534] = "0b000001";
        for (unsigned i = 2535; i < 2574 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2574] = "0b000001";
        ram[2575] = "0b000000";
        ram[2576] = "0b001111";
        for (unsigned i = 2577; i < 2587 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2587] = "0b000001";
        for (unsigned i = 2588; i < 2603 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2603] = "0b000001";
        for (unsigned i = 2604; i < 2613 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2613] = "0b000110";
        ram[2614] = "0b000000";
        ram[2615] = "0b000000";
        ram[2616] = "0b000000";
        ram[2617] = "0b000000";
        ram[2618] = "0b000001";
        ram[2619] = "0b000000";
        ram[2620] = "0b000000";
        ram[2621] = "0b000000";
        ram[2622] = "0b000011";
        for (unsigned i = 2623; i < 2648 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2648] = "0b111000";
        ram[2649] = "0b000000";
        ram[2650] = "0b000000";
        ram[2651] = "0b000000";
        ram[2652] = "0b001111";
        for (unsigned i = 2653; i < 2660 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2660] = "0b000111";
        for (unsigned i = 2661; i < 2672 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2672] = "0b000001";
        ram[2673] = "0b000001";
        ram[2674] = "0b000000";
        ram[2675] = "0b000000";
        ram[2676] = "0b000111";
        for (unsigned i = 2677; i < 2682 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2682] = "0b000011";
        ram[2683] = "0b000000";
        ram[2684] = "0b000001";
        for (unsigned i = 2685; i < 2706 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2706] = "0b000001";
        for (unsigned i = 2707; i < 2714 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2714] = "0b000001";
        for (unsigned i = 2715; i < 2721 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2721] = "0b000001";
        ram[2722] = "0b000000";
        ram[2723] = "0b000000";
        ram[2724] = "0b000000";
        ram[2725] = "0b000000";
        ram[2726] = "0b000001";
        for (unsigned i = 2727; i < 2732 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2732] = "0b000011";
        ram[2733] = "0b001111";
        ram[2734] = "0b000000";
        ram[2735] = "0b001111";
        ram[2736] = "0b000000";
        ram[2737] = "0b000111";
        for (unsigned i = 2738; i < 2749 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2749] = "0b000001";
        for (unsigned i = 2750; i < 2760 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2760] = "0b000001";
        for (unsigned i = 2761; i < 2771 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2771] = "0b000111";
        ram[2772] = "0b000000";
        ram[2773] = "0b001111";
        for (unsigned i = 2774; i < 2780 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2780] = "0b000011";
        for (unsigned i = 2781; i < 2786 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2786] = "0b000011";
        ram[2787] = "0b000000";
        ram[2788] = "0b000001";
        for (unsigned i = 2789; i < 2796 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2796] = "0b000111";
        for (unsigned i = 2797; i < 2808 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2808] = "0b000001";
        for (unsigned i = 2809; i < 2819 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2819] = "0b000001";
        for (unsigned i = 2820; i < 2829 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2829] = "0b000001";
        for (unsigned i = 2830; i < 2866 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2866] = "0b000011";
        ram[2867] = "0b000000";
        ram[2868] = "0b000000";
        ram[2869] = "0b000000";
        ram[2870] = "0b000000";
        ram[2871] = "0b000111";
        for (unsigned i = 2872; i < 2880 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2880] = "0b000111";
        ram[2881] = "0b000000";
        ram[2882] = "0b000000";
        ram[2883] = "0b000001";
        for (unsigned i = 2884; i < 2891 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2891] = "0b000001";
        ram[2892] = "0b000000";
        ram[2893] = "0b000000";
        ram[2894] = "0b000000";
        ram[2895] = "0b000011";
        for (unsigned i = 2896; i < 2908 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2908] = "0b000001";
        for (unsigned i = 2909; i < 2916 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2916] = "0b000001";
        for (unsigned i = 2917; i < 2926 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2926] = "0b000011";
        for (unsigned i = 2927; i < 2941 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2941] = "0b000111";
        for (unsigned i = 2942; i < 2962 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2962] = "0b000110";
        for (unsigned i = 2963; i < 2976 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[2976] = "0b000001";
        for (unsigned i = 2977; i < 3016 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3016] = "0b000001";
        for (unsigned i = 3017; i < 3026 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3026] = "0b000001";
        for (unsigned i = 3027; i < 3040 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3040] = "0b000001";
        for (unsigned i = 3041; i < 3052 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3052] = "0b000001";
        ram[3053] = "0b000000";
        ram[3054] = "0b000000";
        ram[3055] = "0b000000";
        ram[3056] = "0b000111";
        for (unsigned i = 3057; i < 3064 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3064] = "0b000111";
        ram[3065] = "0b000000";
        ram[3066] = "0b000011";
        ram[3067] = "0b000000";
        ram[3068] = "0b000000";
        ram[3069] = "0b000000";
        ram[3070] = "0b000011";
        for (unsigned i = 3071; i < 3079 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3079] = "0b000001";
        for (unsigned i = 3080; i < 3092 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3092] = "0b000111";
        for (unsigned i = 3093; i < 3110 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3110] = "0b000011";
        for (unsigned i = 3111; i < 3142 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3142] = "0b000011";
        for (unsigned i = 3143; i < 3156 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3156] = "0b000001";
        for (unsigned i = 3157; i < 3174 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3174] = "0b000001";
        ram[3175] = "0b000000";
        ram[3176] = "0b000011";
        for (unsigned i = 3177; i < 3200 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3200] = "0b000011";
        for (unsigned i = 3201; i < 3208 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3208] = "0b000011";
        for (unsigned i = 3209; i < 3216 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3216] = "0b000001";
        for (unsigned i = 3217; i < 3222 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3222] = "0b000001";
        ram[3223] = "0b000000";
        ram[3224] = "0b000001";
        for (unsigned i = 3225; i < 3258 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3258] = "0b000011";
        for (unsigned i = 3259; i < 3266 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3266] = "0b000111";
        for (unsigned i = 3267; i < 3280 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3280] = "0b000001";
        for (unsigned i = 3281; i < 3314 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3314] = "0b000001";
        ram[3315] = "0b000000";
        ram[3316] = "0b000000";
        ram[3317] = "0b000001";
        for (unsigned i = 3318; i < 3332 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3332] = "0b000011";
        ram[3333] = "0b000000";
        ram[3334] = "0b000000";
        ram[3335] = "0b000000";
        ram[3336] = "0b000001";
        for (unsigned i = 3337; i < 3342 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3342] = "0b000001";
        ram[3343] = "0b000000";
        ram[3344] = "0b000000";
        ram[3345] = "0b000000";
        ram[3346] = "0b000000";
        ram[3347] = "0b001100";
        for (unsigned i = 3348; i < 3362 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3362] = "0b000001";
        for (unsigned i = 3363; i < 3370 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3370] = "0b001111";
        for (unsigned i = 3371; i < 3383 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3383] = "0b000111";
        ram[3384] = "0b000000";
        ram[3385] = "0b000000";
        ram[3386] = "0b000011";
        ram[3387] = "0b000000";
        ram[3388] = "0b000000";
        ram[3389] = "0b000000";
        ram[3390] = "0b000111";
        for (unsigned i = 3391; i < 3400 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3400] = "0b000011";
        ram[3401] = "0b000000";
        ram[3402] = "0b000011";
        ram[3403] = "0b000000";
        ram[3404] = "0b000111";
        for (unsigned i = 3405; i < 3452 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3452] = "0b000111";
        for (unsigned i = 3453; i < 3460 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3460] = "0b011111";
        for (unsigned i = 3461; i < 3466 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3466] = "0b000111";
        for (unsigned i = 3467; i < 3480 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3480] = "0b000001";
        for (unsigned i = 3481; i < 3512 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3512] = "0b000001";
        for (unsigned i = 3513; i < 3522 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3522] = "0b000111";
        for (unsigned i = 3523; i < 3542 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3542] = "0b000011";
        ram[3543] = "0b000000";
        ram[3544] = "0b000001";
        for (unsigned i = 3545; i < 3552 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3552] = "0b000011";
        ram[3553] = "0b000000";
        ram[3554] = "0b000001";
        for (unsigned i = 3555; i < 3564 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3564] = "0b000001";
        for (unsigned i = 3565; i < 3572 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3572] = "0b000011";
        ram[3573] = "0b000000";
        ram[3574] = "0b000011";
        for (unsigned i = 3575; i < 3591 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3591] = "0b000111";
        ram[3592] = "0b000000";
        ram[3593] = "0b000000";
        ram[3594] = "0b000000";
        ram[3595] = "0b000000";
        ram[3596] = "0b001111";
        for (unsigned i = 3597; i < 3606 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3606] = "0b000011";
        ram[3607] = "0b000000";
        ram[3608] = "0b000000";
        ram[3609] = "0b000011";
        ram[3610] = "0b000000";
        ram[3611] = "0b000000";
        ram[3612] = "0b000000";
        ram[3613] = "0b000000";
        ram[3614] = "0b000011";
        ram[3615] = "0b000000";
        ram[3616] = "0b000001";
        for (unsigned i = 3617; i < 3640 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3640] = "0b000011";
        for (unsigned i = 3641; i < 3656 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3656] = "0b000001";
        ram[3657] = "0b000001";
        for (unsigned i = 3658; i < 3670 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3670] = "0b000011";
        ram[3671] = "0b000000";
        ram[3672] = "0b000000";
        ram[3673] = "0b000000";
        ram[3674] = "0b000011";
        for (unsigned i = 3675; i < 3680 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3680] = "0b000011";
        ram[3681] = "0b000000";
        ram[3682] = "0b000001";
        ram[3683] = "0b000001";
        for (unsigned i = 3684; i < 3690 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3690] = "0b000011";
        for (unsigned i = 3691; i < 3710 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3710] = "0b000111";
        ram[3711] = "0b000000";
        ram[3712] = "0b000011";
        for (unsigned i = 3713; i < 3734 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3734] = "0b000001";
        ram[3735] = "0b000000";
        ram[3736] = "0b000000";
        ram[3737] = "0b000000";
        ram[3738] = "0b000001";
        for (unsigned i = 3739; i < 3768 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3768] = "0b000111";
        for (unsigned i = 3769; i < 3791 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3791] = "0b000001";
        ram[3792] = "0b000001";
        ram[3793] = "0b000000";
        ram[3794] = "0b000000";
        ram[3795] = "0b000000";
        ram[3796] = "0b000000";
        ram[3797] = "0b110000";
        for (unsigned i = 3798; i < 3804 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3804] = "0b000111";
        for (unsigned i = 3805; i < 3815 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3815] = "0b000001";
        for (unsigned i = 3816; i < 3824 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3824] = "0b000001";
        for (unsigned i = 3825; i < 3830 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3830] = "0b000111";
        for (unsigned i = 3831; i < 3855 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3855] = "0b000001";
        for (unsigned i = 3856; i < 3890 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3890] = "0b000011";
        for (unsigned i = 3891; i < 3916 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3916] = "0b000001";
        ram[3917] = "0b000000";
        ram[3918] = "0b000000";
        ram[3919] = "0b000000";
        ram[3920] = "0b000011";
        for (unsigned i = 3921; i < 3929 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3929] = "0b000001";
        ram[3930] = "0b000000";
        ram[3931] = "0b000000";
        ram[3932] = "0b000000";
        ram[3933] = "0b000000";
        ram[3934] = "0b000001";
        ram[3935] = "0b000000";
        ram[3936] = "0b000000";
        ram[3937] = "0b000000";
        ram[3938] = "0b001111";
        for (unsigned i = 3939; i < 3990 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[3990] = "0b000001";
        for (unsigned i = 3991; i < 4000 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4000] = "0b000011";
        ram[4001] = "0b000000";
        ram[4002] = "0b000000";
        ram[4003] = "0b000000";
        ram[4004] = "0b000001";
        for (unsigned i = 4005; i < 4016 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4016] = "0b000001";
        for (unsigned i = 4017; i < 4022 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4022] = "0b000001";
        for (unsigned i = 4023; i < 4038 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4038] = "0b000001";
        ram[4039] = "0b000000";
        ram[4040] = "0b000000";
        ram[4041] = "0b000000";
        ram[4042] = "0b000000";
        ram[4043] = "0b000001";
        for (unsigned i = 4044; i < 4050 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4050] = "0b000011";
        for (unsigned i = 4051; i < 4080 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4080] = "0b000111";
        for (unsigned i = 4081; i < 4114 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4114] = "0b000001";
        for (unsigned i = 4115; i < 4138 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4138] = "0b001111";
        for (unsigned i = 4139; i < 4156 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4156] = "0b011111";
        for (unsigned i = 4157; i < 4174 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4174] = "0b000001";
        for (unsigned i = 4175; i < 4191 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4191] = "0b000011";
        for (unsigned i = 4192; i < 4212 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4212] = "0b000111";
        ram[4213] = "0b000000";
        ram[4214] = "0b000000";
        ram[4215] = "0b000000";
        ram[4216] = "0b001110";
        for (unsigned i = 4217; i < 4232 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4232] = "0b000011";
        ram[4233] = "0b000000";
        ram[4234] = "0b000000";
        ram[4235] = "0b000000";
        ram[4236] = "0b000011";
        ram[4237] = "0b000000";
        ram[4238] = "0b011111";
        for (unsigned i = 4239; i < 4246 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4246] = "0b001111";
        ram[4247] = "0b000000";
        ram[4248] = "0b000000";
        ram[4249] = "0b000000";
        ram[4250] = "0b000001";
        for (unsigned i = 4251; i < 4256 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4256] = "0b001111";
        for (unsigned i = 4257; i < 4274 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4274] = "0b000001";
        for (unsigned i = 4275; i < 4325 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4325] = "0b001100";
        for (unsigned i = 4326; i < 4342 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4342] = "0b000011";
        ram[4343] = "0b000000";
        ram[4344] = "0b000001";
        for (unsigned i = 4345; i < 4352 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4352] = "0b011111";
        for (unsigned i = 4353; i < 4360 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4360] = "0b000011";
        for (unsigned i = 4361; i < 4366 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4366] = "0b000001";
        for (unsigned i = 4367; i < 4376 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4376] = "0b000001";
        ram[4377] = "0b000000";
        ram[4378] = "0b000000";
        ram[4379] = "0b000000";
        ram[4380] = "0b001111";
        for (unsigned i = 4381; i < 4394 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4394] = "0b000011";
        for (unsigned i = 4395; i < 4418 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4418] = "0b000111";
        for (unsigned i = 4419; i < 4432 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4432] = "0b000011";
        ram[4433] = "0b000000";
        ram[4434] = "0b000011";
        for (unsigned i = 4435; i < 4444 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4444] = "0b000001";
        ram[4445] = "0b000000";
        ram[4446] = "0b000111";
        for (unsigned i = 4447; i < 4462 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4462] = "0b000001";
        for (unsigned i = 4463; i < 4469 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4469] = "0b000001";
        ram[4470] = "0b000000";
        ram[4471] = "0b000011";
        ram[4472] = "0b000000";
        ram[4473] = "0b000000";
        ram[4474] = "0b000000";
        ram[4475] = "0b000111";
        for (unsigned i = 4476; i < 4481 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4481] = "0b000001";
        for (unsigned i = 4482; i < 4491 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4491] = "0b000011";
        for (unsigned i = 4492; i < 4508 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4508] = "0b000001";
        ram[4509] = "0b000000";
        ram[4510] = "0b000011";
        ram[4511] = "0b000000";
        ram[4512] = "0b000001";
        ram[4513] = "0b000001";
        ram[4514] = "0b000000";
        ram[4515] = "0b000000";
        ram[4516] = "0b000000";
        ram[4517] = "0b000000";
        ram[4518] = "0b000111";
        for (unsigned i = 4519; i < 4527 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4527] = "0b000001";
        for (unsigned i = 4528; i < 4542 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4542] = "0b000011";
        ram[4543] = "0b000011";
        for (unsigned i = 4544; i < 4552 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4552] = "0b000001";
        for (unsigned i = 4553; i < 4570 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4570] = "0b000001";
        for (unsigned i = 4571; i < 4579 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4579] = "0b000011";
        ram[4580] = "0b000000";
        ram[4581] = "0b000111";
        ram[4582] = "0b000000";
        ram[4583] = "0b000001";
        ram[4584] = "0b000001";
        for (unsigned i = 4585; i < 4610 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4610] = "0b000111";
        for (unsigned i = 4611; i < 4626 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4626] = "0b000111";
        for (unsigned i = 4627; i < 4651 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4651] = "0b000111";
        for (unsigned i = 4652; i < 4679 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4679] = "0b000001";
        ram[4680] = "0b000000";
        ram[4681] = "0b001111";
        ram[4682] = "0b000001";
        ram[4683] = "0b000000";
        ram[4684] = "0b000001";
        ram[4685] = "0b000000";
        ram[4686] = "0b000001";
        ram[4687] = "0b000000";
        ram[4688] = "0b000011";
        ram[4689] = "0b000000";
        ram[4690] = "0b000000";
        ram[4691] = "0b000000";
        ram[4692] = "0b000001";
        ram[4693] = "0b000000";
        ram[4694] = "0b000011";
        for (unsigned i = 4695; i < 4717 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4717] = "0b000001";
        ram[4718] = "0b000000";
        ram[4719] = "0b011111";
        ram[4720] = "0b000000";
        ram[4721] = "0b001110";
        ram[4722] = "0b000000";
        ram[4723] = "0b000001";
        ram[4724] = "0b000000";
        ram[4725] = "0b000000";
        ram[4726] = "0b000000";
        ram[4727] = "0b000011";
        ram[4728] = "0b000000";
        ram[4729] = "0b000000";
        ram[4730] = "0b000001";
        ram[4731] = "0b000000";
        ram[4732] = "0b000000";
        ram[4733] = "0b000000";
        ram[4734] = "0b000000";
        ram[4735] = "0b000011";
        ram[4736] = "0b000001";
        ram[4737] = "0b000011";
        ram[4738] = "0b000000";
        ram[4739] = "0b000001";
        ram[4740] = "0b000000";
        ram[4741] = "0b000011";
        for (unsigned i = 4742; i < 4757 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4757] = "0b000111";
        for (unsigned i = 4758; i < 4777 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4777] = "0b000001";
        ram[4778] = "0b000000";
        ram[4779] = "0b000001";
        ram[4780] = "0b000000";
        ram[4781] = "0b000011";
        ram[4782] = "0b000000";
        ram[4783] = "0b000011";
        ram[4784] = "0b000011";
        ram[4785] = "0b000000";
        ram[4786] = "0b000000";
        ram[4787] = "0b001111";
        ram[4788] = "0b000000";
        ram[4789] = "0b000000";
        ram[4790] = "0b000000";
        ram[4791] = "0b000011";
        ram[4792] = "0b000000";
        ram[4793] = "0b000000";
        ram[4794] = "0b000000";
        ram[4795] = "0b000111";
        ram[4796] = "0b000001";
        ram[4797] = "0b000001";
        ram[4798] = "0b000000";
        ram[4799] = "0b000000";
        ram[4800] = "0b000000";
        ram[4801] = "0b000001";
        for (unsigned i = 4802; i < 4820 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4820] = "0b000001";
        ram[4821] = "0b000000";
        ram[4822] = "0b000000";
        ram[4823] = "0b000011";
        ram[4824] = "0b000000";
        ram[4825] = "0b000000";
        ram[4826] = "0b000000";
        ram[4827] = "0b000001";
        ram[4828] = "0b000000";
        ram[4829] = "0b001111";
        ram[4830] = "0b000000";
        ram[4831] = "0b000000";
        ram[4832] = "0b000000";
        ram[4833] = "0b000011";
        ram[4834] = "0b000000";
        ram[4835] = "0b000001";
        ram[4836] = "0b000001";
        ram[4837] = "0b000000";
        ram[4838] = "0b000000";
        ram[4839] = "0b000011";
        ram[4840] = "0b000000";
        ram[4841] = "0b000000";
        ram[4842] = "0b000011";
        ram[4843] = "0b000001";
        ram[4844] = "0b000000";
        ram[4845] = "0b000001";
        ram[4846] = "0b000000";
        ram[4847] = "0b000011";
        ram[4848] = "0b000000";
        ram[4849] = "0b000000";
        ram[4850] = "0b000011";
        for (unsigned i = 4851; i < 4859 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4859] = "0b000001";
        ram[4860] = "0b000000";
        ram[4861] = "0b000000";
        ram[4862] = "0b000000";
        ram[4863] = "0b000000";
        ram[4864] = "0b011111";
        ram[4865] = "0b000000";
        ram[4866] = "0b000000";
        ram[4867] = "0b000000";
        ram[4868] = "0b000011";
        for (unsigned i = 4869; i < 4877 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4877] = "0b000001";
        ram[4878] = "0b000001";
        ram[4879] = "0b000000";
        ram[4880] = "0b000000";
        ram[4881] = "0b000011";
        ram[4882] = "0b000000";
        ram[4883] = "0b001111";
        ram[4884] = "0b000000";
        ram[4885] = "0b000001";
        for (unsigned i = 4886; i < 4891 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4891] = "0b001111";
        ram[4892] = "0b000001";
        for (unsigned i = 4893; i < 4898 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4898] = "0b000111";
        for (unsigned i = 4899; i < 4909 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4909] = "0b000001";
        ram[4910] = "0b000000";
        ram[4911] = "0b000000";
        ram[4912] = "0b000000";
        ram[4913] = "0b000000";
        ram[4914] = "0b000111";
        for (unsigned i = 4915; i < 4922 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4922] = "0b000001";
        for (unsigned i = 4923; i < 4952 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4952] = "0b000110";
        ram[4953] = "0b000000";
        ram[4954] = "0b000001";
        ram[4955] = "0b000000";
        ram[4956] = "0b000001";
        for (unsigned i = 4957; i < 4964 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4964] = "0b000001";
        for (unsigned i = 4965; i < 4986 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4986] = "0b000011";
        for (unsigned i = 4987; i < 4996 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[4996] = "0b000001";
        for (unsigned i = 4997; i < 5032 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5032] = "0b000011";
        for (unsigned i = 5033; i < 5062 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5062] = "0b000001";
        ram[5063] = "0b000000";
        ram[5064] = "0b000011";
        for (unsigned i = 5065; i < 5076 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5076] = "0b000011";
        ram[5077] = "0b000000";
        ram[5078] = "0b000001";
        for (unsigned i = 5079; i < 5088 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5088] = "0b000011";
        ram[5089] = "0b000000";
        ram[5090] = "0b000000";
        ram[5091] = "0b000000";
        ram[5092] = "0b000111";
        ram[5093] = "0b000000";
        ram[5094] = "0b000001";
        for (unsigned i = 5095; i < 5102 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5102] = "0b000011";
        for (unsigned i = 5103; i < 5139 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5139] = "0b000011";
        for (unsigned i = 5140; i < 5146 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5146] = "0b000001";
        for (unsigned i = 5147; i < 5153 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5153] = "0b000001";
        ram[5154] = "0b000000";
        ram[5155] = "0b000000";
        ram[5156] = "0b001111";
        for (unsigned i = 5157; i < 5162 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5162] = "0b011111";
        for (unsigned i = 5163; i < 5186 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5186] = "0b000001";
        for (unsigned i = 5187; i < 5198 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5198] = "0b000011";
        for (unsigned i = 5199; i < 5236 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5236] = "0b001111";
        for (unsigned i = 5237; i < 5248 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5248] = "0b000011";
        ram[5249] = "0b000000";
        ram[5250] = "0b000001";
        for (unsigned i = 5251; i < 5284 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5284] = "0b000001";
        for (unsigned i = 5285; i < 5306 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5306] = "0b000111";
        for (unsigned i = 5307; i < 5312 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5312] = "0b000001";
        for (unsigned i = 5313; i < 5320 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5320] = "0b000111";
        ram[5321] = "0b000001";
        for (unsigned i = 5322; i < 5334 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5334] = "0b000001";
        ram[5335] = "0b000000";
        ram[5336] = "0b000000";
        ram[5337] = "0b000001";
        for (unsigned i = 5338; i < 5352 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5352] = "0b000111";
        ram[5353] = "0b000000";
        ram[5354] = "0b000001";
        ram[5355] = "0b000000";
        ram[5356] = "0b000000";
        ram[5357] = "0b000001";
        ram[5358] = "0b000000";
        ram[5359] = "0b000011";
        for (unsigned i = 5360; i < 5366 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5366] = "0b000011";
        for (unsigned i = 5367; i < 5376 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5376] = "0b000001";
        ram[5377] = "0b000000";
        ram[5378] = "0b000000";
        ram[5379] = "0b000001";
        ram[5380] = "0b000000";
        ram[5381] = "0b000000";
        ram[5382] = "0b000000";
        ram[5383] = "0b000000";
        ram[5384] = "0b000001";
        ram[5385] = "0b000000";
        ram[5386] = "0b000000";
        ram[5387] = "0b000000";
        ram[5388] = "0b000011";
        for (unsigned i = 5389; i < 5400 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5400] = "0b000011";
        for (unsigned i = 5401; i < 5418 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5418] = "0b000001";
        ram[5419] = "0b000000";
        ram[5420] = "0b000111";
        ram[5421] = "0b000000";
        ram[5422] = "0b000111";
        for (unsigned i = 5423; i < 5430 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5430] = "0b000001";
        ram[5431] = "0b000000";
        ram[5432] = "0b000000";
        ram[5433] = "0b000000";
        ram[5434] = "0b000001";
        ram[5435] = "0b000000";
        ram[5436] = "0b000011";
        ram[5437] = "0b000000";
        ram[5438] = "0b000011";
        ram[5439] = "0b000000";
        ram[5440] = "0b000000";
        ram[5441] = "0b000000";
        ram[5442] = "0b000111";
        for (unsigned i = 5443; i < 5452 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5452] = "0b000001";
        ram[5453] = "0b000000";
        ram[5454] = "0b000000";
        ram[5455] = "0b000111";
        for (unsigned i = 5456; i < 5465 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5465] = "0b000011";
        ram[5466] = "0b000000";
        ram[5467] = "0b000011";
        for (unsigned i = 5468; i < 5474 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5474] = "0b000011";
        for (unsigned i = 5475; i < 5511 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5511] = "0b000001";
        for (unsigned i = 5512; i < 5578 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5578] = "0b000001";
        ram[5579] = "0b000000";
        ram[5580] = "0b000001";
        for (unsigned i = 5581; i < 5588 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5588] = "0b000001";
        for (unsigned i = 5589; i < 5606 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5606] = "0b000011";
        for (unsigned i = 5607; i < 5626 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5626] = "0b000001";
        for (unsigned i = 5627; i < 5634 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5634] = "0b000111";
        ram[5635] = "0b000000";
        ram[5636] = "0b000001";
        ram[5637] = "0b000000";
        ram[5638] = "0b000111";
        ram[5639] = "0b000000";
        ram[5640] = "0b000000";
        ram[5641] = "0b000000";
        ram[5642] = "0b000111";
        for (unsigned i = 5643; i < 5674 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5674] = "0b000001";
        for (unsigned i = 5675; i < 5684 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5684] = "0b001111";
        for (unsigned i = 5685; i < 5702 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5702] = "0b000011";
        for (unsigned i = 5703; i < 5710 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5710] = "0b000011";
        ram[5711] = "0b000000";
        ram[5712] = "0b000001";
        for (unsigned i = 5713; i < 5724 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5724] = "0b000001";
        for (unsigned i = 5725; i < 5734 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5734] = "0b000001";
        for (unsigned i = 5735; i < 5744 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5744] = "0b000011";
        ram[5745] = "0b000000";
        ram[5746] = "0b000000";
        ram[5747] = "0b000000";
        ram[5748] = "0b001111";
        for (unsigned i = 5749; i < 5758 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5758] = "0b000111";
        for (unsigned i = 5759; i < 5788 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5788] = "0b001111";
        for (unsigned i = 5789; i < 5802 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5802] = "0b000011";
        for (unsigned i = 5803; i < 5812 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5812] = "0b000001";
        for (unsigned i = 5813; i < 5842 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5842] = "0b000011";
        for (unsigned i = 5843; i < 5914 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5914] = "0b000001";
        for (unsigned i = 5915; i < 5927 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5927] = "0b001000";
        ram[5928] = "0b000011";
        for (unsigned i = 5929; i < 5942 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5942] = "0b000001";
        for (unsigned i = 5943; i < 5952 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5952] = "0b011111";
        for (unsigned i = 5953; i < 5958 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5958] = "0b000011";
        for (unsigned i = 5959; i < 5967 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5967] = "0b000011";
        ram[5968] = "0b000000";
        ram[5969] = "0b000000";
        ram[5970] = "0b000000";
        ram[5971] = "0b000000";
        ram[5972] = "0b000011";
        for (unsigned i = 5973; i < 5980 ; i = i + 1) {
            ram[i] = "0b000000";
        }
        ram[5980] = "0b000011";
        ram[5981] = "0b000000";
        ram[5982] = "0b001111";
        ram[5983] = "0b000000";
        ram[5984] = "0b000000";
        ram[5985] = "0b000000";
        ram[5986] = "0b000000";
        ram[5987] = "0b000001";
        ram[5988] = "0b000011";
        for (unsigned i = 5989; i < 6000 ; i = i + 1) {
            ram[i] = "0b000000";
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


SC_MODULE(knn_train_2) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 6000;
static const unsigned AddressWidth = 13;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_train_2_ram* meminst;


SC_CTOR(knn_train_2) {
meminst = new knn_train_2_ram("knn_train_2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_train_2() {
    delete meminst;
}


};//endmodule
#endif
