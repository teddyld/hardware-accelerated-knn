// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xknn.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XKnn_CfgInitialize(XKnn *InstancePtr, XKnn_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XKnn_Start(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL) & 0x80;
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XKnn_IsDone(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XKnn_IsIdle(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XKnn_IsReady(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XKnn_EnableAutoRestart(XKnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XKnn_DisableAutoRestart(XKnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_AP_CTRL, 0);
}

void XKnn_Set_input_0(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_0_DATA, Data);
}

u32 XKnn_Get_input_0(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_0_DATA);
    return Data;
}

void XKnn_Set_input_1(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_1_DATA, Data);
}

u32 XKnn_Get_input_1(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_1_DATA);
    return Data;
}

void XKnn_Set_input_2(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_2_DATA, Data);
}

u32 XKnn_Get_input_2(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_2_DATA);
    return Data;
}

void XKnn_Set_input_3(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_3_DATA, Data);
}

u32 XKnn_Get_input_3(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_3_DATA);
    return Data;
}

void XKnn_Set_input_4(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_4_DATA, Data);
}

u32 XKnn_Get_input_4(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_4_DATA);
    return Data;
}

void XKnn_Set_input_5(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_5_DATA, Data);
}

u32 XKnn_Get_input_5(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_5_DATA);
    return Data;
}

void XKnn_Set_input_6(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_6_DATA, Data);
}

u32 XKnn_Get_input_6(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_6_DATA);
    return Data;
}

void XKnn_Set_input_7(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_7_DATA, Data);
}

u32 XKnn_Get_input_7(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_7_DATA);
    return Data;
}

void XKnn_Set_input_8(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_8_DATA, Data);
}

u32 XKnn_Get_input_8(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_8_DATA);
    return Data;
}

void XKnn_Set_input_9(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_9_DATA, Data);
}

u32 XKnn_Get_input_9(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_9_DATA);
    return Data;
}

void XKnn_Set_input_10(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_10_DATA, Data);
}

u32 XKnn_Get_input_10(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_10_DATA);
    return Data;
}

void XKnn_Set_input_11(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_11_DATA, Data);
}

u32 XKnn_Get_input_11(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_11_DATA);
    return Data;
}

void XKnn_Set_input_12(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_12_DATA, Data);
}

u32 XKnn_Get_input_12(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_12_DATA);
    return Data;
}

void XKnn_Set_input_13(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_13_DATA, Data);
}

u32 XKnn_Get_input_13(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_13_DATA);
    return Data;
}

void XKnn_Set_input_14(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_14_DATA, Data);
}

u32 XKnn_Get_input_14(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_14_DATA);
    return Data;
}

void XKnn_Set_input_15(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_15_DATA, Data);
}

u32 XKnn_Get_input_15(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_15_DATA);
    return Data;
}

void XKnn_Set_input_16(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_16_DATA, Data);
}

u32 XKnn_Get_input_16(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_16_DATA);
    return Data;
}

void XKnn_Set_input_17(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_17_DATA, Data);
}

u32 XKnn_Get_input_17(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_17_DATA);
    return Data;
}

void XKnn_Set_input_18(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_18_DATA, Data);
}

u32 XKnn_Get_input_18(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_18_DATA);
    return Data;
}

void XKnn_Set_input_19(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_19_DATA, Data);
}

u32 XKnn_Get_input_19(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_19_DATA);
    return Data;
}

void XKnn_Set_input_20(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_20_DATA, Data);
}

u32 XKnn_Get_input_20(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_20_DATA);
    return Data;
}

void XKnn_Set_input_21(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_21_DATA, Data);
}

u32 XKnn_Get_input_21(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_21_DATA);
    return Data;
}

void XKnn_Set_input_22(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_22_DATA, Data);
}

u32 XKnn_Get_input_22(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_22_DATA);
    return Data;
}

void XKnn_Set_input_23(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_23_DATA, Data);
}

u32 XKnn_Get_input_23(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_23_DATA);
    return Data;
}

void XKnn_Set_input_24(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_24_DATA, Data);
}

u32 XKnn_Get_input_24(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_24_DATA);
    return Data;
}

void XKnn_Set_input_25(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_25_DATA, Data);
}

u32 XKnn_Get_input_25(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_25_DATA);
    return Data;
}

void XKnn_Set_input_26(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_26_DATA, Data);
}

u32 XKnn_Get_input_26(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_26_DATA);
    return Data;
}

void XKnn_Set_input_27(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_27_DATA, Data);
}

u32 XKnn_Get_input_27(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_27_DATA);
    return Data;
}

void XKnn_Set_input_28(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_28_DATA, Data);
}

u32 XKnn_Get_input_28(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_28_DATA);
    return Data;
}

void XKnn_Set_input_29(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_29_DATA, Data);
}

u32 XKnn_Get_input_29(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_29_DATA);
    return Data;
}

void XKnn_Set_input_30(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_30_DATA, Data);
}

u32 XKnn_Get_input_30(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_30_DATA);
    return Data;
}

void XKnn_Set_input_31(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_31_DATA, Data);
}

u32 XKnn_Get_input_31(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_31_DATA);
    return Data;
}

void XKnn_Set_input_32(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_32_DATA, Data);
}

u32 XKnn_Get_input_32(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_32_DATA);
    return Data;
}

void XKnn_Set_input_33(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_33_DATA, Data);
}

u32 XKnn_Get_input_33(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_33_DATA);
    return Data;
}

void XKnn_Set_input_34(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_34_DATA, Data);
}

u32 XKnn_Get_input_34(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_34_DATA);
    return Data;
}

void XKnn_Set_input_35(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_35_DATA, Data);
}

u32 XKnn_Get_input_35(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_35_DATA);
    return Data;
}

void XKnn_Set_input_36(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_36_DATA, Data);
}

u32 XKnn_Get_input_36(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_36_DATA);
    return Data;
}

void XKnn_Set_input_37(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_37_DATA, Data);
}

u32 XKnn_Get_input_37(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_37_DATA);
    return Data;
}

void XKnn_Set_input_38(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_38_DATA, Data);
}

u32 XKnn_Get_input_38(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_38_DATA);
    return Data;
}

void XKnn_Set_input_39(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_39_DATA, Data);
}

u32 XKnn_Get_input_39(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_39_DATA);
    return Data;
}

void XKnn_Set_input_40(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_40_DATA, Data);
}

u32 XKnn_Get_input_40(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_40_DATA);
    return Data;
}

void XKnn_Set_input_41(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_41_DATA, Data);
}

u32 XKnn_Get_input_41(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_41_DATA);
    return Data;
}

void XKnn_Set_input_42(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_42_DATA, Data);
}

u32 XKnn_Get_input_42(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_42_DATA);
    return Data;
}

void XKnn_Set_input_43(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_43_DATA, Data);
}

u32 XKnn_Get_input_43(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_43_DATA);
    return Data;
}

void XKnn_Set_input_44(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_44_DATA, Data);
}

u32 XKnn_Get_input_44(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_44_DATA);
    return Data;
}

void XKnn_Set_input_45(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_45_DATA, Data);
}

u32 XKnn_Get_input_45(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_45_DATA);
    return Data;
}

void XKnn_Set_input_46(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_46_DATA, Data);
}

u32 XKnn_Get_input_46(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_46_DATA);
    return Data;
}

void XKnn_Set_input_47(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_47_DATA, Data);
}

u32 XKnn_Get_input_47(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_47_DATA);
    return Data;
}

void XKnn_Set_input_48(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_48_DATA, Data);
}

u32 XKnn_Get_input_48(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_48_DATA);
    return Data;
}

void XKnn_Set_input_49(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_49_DATA, Data);
}

u32 XKnn_Get_input_49(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_49_DATA);
    return Data;
}

void XKnn_Set_input_50(XKnn *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_50_DATA, Data);
}

u32 XKnn_Get_input_50(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_50_DATA);
    return Data;
}

u32 XKnn_Get_output_V(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_OUTPUT_V_DATA);
    return Data;
}

u32 XKnn_Get_output_V_vld(XKnn *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_OUTPUT_V_CTRL);
    return Data & 0x1;
}

void XKnn_InterruptGlobalEnable(XKnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_GIE, 1);
}

void XKnn_InterruptGlobalDisable(XKnn *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_GIE, 0);
}

void XKnn_InterruptEnable(XKnn *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_IER);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_IER, Register | Mask);
}

void XKnn_InterruptDisable(XKnn *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_IER);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_IER, Register & (~Mask));
}

void XKnn_InterruptClear(XKnn *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_ISR, Mask);
}

u32 XKnn_InterruptGetEnabled(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_IER);
}

u32 XKnn_InterruptGetStatus(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_ISR);
}

