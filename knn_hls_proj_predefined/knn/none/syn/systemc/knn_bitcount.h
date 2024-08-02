// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __knn_bitcount_H__
#define __knn_bitcount_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct knn_bitcount_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 4;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(knn_bitcount_ram) {
        ram[0] = "0b0000";
        ram[1] = "0b0001";
        ram[2] = "0b0001";
        ram[3] = "0b0010";
        ram[4] = "0b0001";
        ram[5] = "0b0010";
        ram[6] = "0b0010";
        ram[7] = "0b0011";
        ram[8] = "0b0001";
        ram[9] = "0b0010";
        ram[10] = "0b0010";
        ram[11] = "0b0011";
        ram[12] = "0b0010";
        ram[13] = "0b0011";
        ram[14] = "0b0011";
        ram[15] = "0b0100";
        ram[16] = "0b0001";
        ram[17] = "0b0010";
        ram[18] = "0b0010";
        ram[19] = "0b0011";
        ram[20] = "0b0010";
        ram[21] = "0b0011";
        ram[22] = "0b0011";
        ram[23] = "0b0100";
        ram[24] = "0b0010";
        ram[25] = "0b0011";
        ram[26] = "0b0011";
        ram[27] = "0b0100";
        ram[28] = "0b0011";
        ram[29] = "0b0100";
        ram[30] = "0b0100";
        ram[31] = "0b0101";
        ram[32] = "0b0001";
        ram[33] = "0b0010";
        ram[34] = "0b0010";
        ram[35] = "0b0011";
        ram[36] = "0b0010";
        ram[37] = "0b0011";
        ram[38] = "0b0011";
        ram[39] = "0b0100";
        ram[40] = "0b0010";
        ram[41] = "0b0011";
        ram[42] = "0b0011";
        ram[43] = "0b0100";
        ram[44] = "0b0011";
        ram[45] = "0b0100";
        ram[46] = "0b0100";
        ram[47] = "0b0101";
        ram[48] = "0b0010";
        ram[49] = "0b0011";
        ram[50] = "0b0011";
        ram[51] = "0b0100";
        ram[52] = "0b0011";
        ram[53] = "0b0100";
        ram[54] = "0b0100";
        ram[55] = "0b0101";
        ram[56] = "0b0011";
        ram[57] = "0b0100";
        ram[58] = "0b0100";
        ram[59] = "0b0101";
        ram[60] = "0b0100";
        ram[61] = "0b0101";
        ram[62] = "0b0101";
        ram[63] = "0b0110";
        ram[64] = "0b0001";
        ram[65] = "0b0010";
        ram[66] = "0b0010";
        ram[67] = "0b0011";
        ram[68] = "0b0010";
        ram[69] = "0b0011";
        ram[70] = "0b0011";
        ram[71] = "0b0100";
        ram[72] = "0b0010";
        ram[73] = "0b0011";
        ram[74] = "0b0011";
        ram[75] = "0b0100";
        ram[76] = "0b0011";
        ram[77] = "0b0100";
        ram[78] = "0b0100";
        ram[79] = "0b0101";
        ram[80] = "0b0010";
        ram[81] = "0b0011";
        ram[82] = "0b0011";
        ram[83] = "0b0100";
        ram[84] = "0b0011";
        ram[85] = "0b0100";
        ram[86] = "0b0100";
        ram[87] = "0b0101";
        ram[88] = "0b0011";
        ram[89] = "0b0100";
        ram[90] = "0b0100";
        ram[91] = "0b0101";
        ram[92] = "0b0100";
        ram[93] = "0b0101";
        ram[94] = "0b0101";
        ram[95] = "0b0110";
        ram[96] = "0b0010";
        ram[97] = "0b0011";
        ram[98] = "0b0011";
        ram[99] = "0b0100";
        ram[100] = "0b0011";
        ram[101] = "0b0100";
        ram[102] = "0b0100";
        ram[103] = "0b0101";
        ram[104] = "0b0011";
        ram[105] = "0b0100";
        ram[106] = "0b0100";
        ram[107] = "0b0101";
        ram[108] = "0b0100";
        ram[109] = "0b0101";
        ram[110] = "0b0101";
        ram[111] = "0b0110";
        ram[112] = "0b0011";
        ram[113] = "0b0100";
        ram[114] = "0b0100";
        ram[115] = "0b0101";
        ram[116] = "0b0100";
        ram[117] = "0b0101";
        ram[118] = "0b0101";
        ram[119] = "0b0110";
        ram[120] = "0b0100";
        ram[121] = "0b0101";
        ram[122] = "0b0101";
        ram[123] = "0b0110";
        ram[124] = "0b0101";
        ram[125] = "0b0110";
        ram[126] = "0b0110";
        ram[127] = "0b0111";
        ram[128] = "0b0001";
        ram[129] = "0b0010";
        ram[130] = "0b0010";
        ram[131] = "0b0011";
        ram[132] = "0b0010";
        ram[133] = "0b0011";
        ram[134] = "0b0011";
        ram[135] = "0b0100";
        ram[136] = "0b0010";
        ram[137] = "0b0011";
        ram[138] = "0b0011";
        ram[139] = "0b0100";
        ram[140] = "0b0011";
        ram[141] = "0b0100";
        ram[142] = "0b0100";
        ram[143] = "0b0101";
        ram[144] = "0b0010";
        ram[145] = "0b0011";
        ram[146] = "0b0011";
        ram[147] = "0b0100";
        ram[148] = "0b0011";
        ram[149] = "0b0100";
        ram[150] = "0b0100";
        ram[151] = "0b0101";
        ram[152] = "0b0011";
        ram[153] = "0b0100";
        ram[154] = "0b0100";
        ram[155] = "0b0101";
        ram[156] = "0b0100";
        ram[157] = "0b0101";
        ram[158] = "0b0101";
        ram[159] = "0b0110";
        ram[160] = "0b0010";
        ram[161] = "0b0011";
        ram[162] = "0b0011";
        ram[163] = "0b0100";
        ram[164] = "0b0011";
        ram[165] = "0b0100";
        ram[166] = "0b0100";
        ram[167] = "0b0101";
        ram[168] = "0b0011";
        ram[169] = "0b0100";
        ram[170] = "0b0100";
        ram[171] = "0b0101";
        ram[172] = "0b0100";
        ram[173] = "0b0101";
        ram[174] = "0b0101";
        ram[175] = "0b0110";
        ram[176] = "0b0011";
        ram[177] = "0b0100";
        ram[178] = "0b0100";
        ram[179] = "0b0101";
        ram[180] = "0b0100";
        ram[181] = "0b0101";
        ram[182] = "0b0101";
        ram[183] = "0b0110";
        ram[184] = "0b0100";
        ram[185] = "0b0101";
        ram[186] = "0b0101";
        ram[187] = "0b0110";
        ram[188] = "0b0101";
        ram[189] = "0b0110";
        ram[190] = "0b0110";
        ram[191] = "0b0111";
        ram[192] = "0b0010";
        ram[193] = "0b0011";
        ram[194] = "0b0011";
        ram[195] = "0b0100";
        ram[196] = "0b0011";
        ram[197] = "0b0100";
        ram[198] = "0b0100";
        ram[199] = "0b0101";
        ram[200] = "0b0011";
        ram[201] = "0b0100";
        ram[202] = "0b0100";
        ram[203] = "0b0101";
        ram[204] = "0b0100";
        ram[205] = "0b0101";
        ram[206] = "0b0101";
        ram[207] = "0b0110";
        ram[208] = "0b0011";
        ram[209] = "0b0100";
        ram[210] = "0b0100";
        ram[211] = "0b0101";
        ram[212] = "0b0100";
        ram[213] = "0b0101";
        ram[214] = "0b0101";
        ram[215] = "0b0110";
        ram[216] = "0b0100";
        ram[217] = "0b0101";
        ram[218] = "0b0101";
        ram[219] = "0b0110";
        ram[220] = "0b0101";
        ram[221] = "0b0110";
        ram[222] = "0b0110";
        ram[223] = "0b0111";
        ram[224] = "0b0011";
        ram[225] = "0b0100";
        ram[226] = "0b0100";
        ram[227] = "0b0101";
        ram[228] = "0b0100";
        ram[229] = "0b0101";
        ram[230] = "0b0101";
        ram[231] = "0b0110";
        ram[232] = "0b0100";
        ram[233] = "0b0101";
        ram[234] = "0b0101";
        ram[235] = "0b0110";
        ram[236] = "0b0101";
        ram[237] = "0b0110";
        ram[238] = "0b0110";
        ram[239] = "0b0111";
        ram[240] = "0b0100";
        ram[241] = "0b0101";
        ram[242] = "0b0101";
        ram[243] = "0b0110";
        ram[244] = "0b0101";
        ram[245] = "0b0110";
        ram[246] = "0b0110";
        ram[247] = "0b0111";
        ram[248] = "0b0101";
        ram[249] = "0b0110";
        ram[250] = "0b0110";
        ram[251] = "0b0111";
        ram[252] = "0b0110";
        ram[253] = "0b0111";
        ram[254] = "0b0111";
        ram[255] = "0b1000";


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


SC_MODULE(knn_bitcount) {


static const unsigned DataWidth = 4;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


knn_bitcount_ram* meminst;


SC_CTOR(knn_bitcount) {
meminst = new knn_bitcount_ram("knn_bitcount_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~knn_bitcount() {
    delete meminst;
}


};//endmodule
#endif
