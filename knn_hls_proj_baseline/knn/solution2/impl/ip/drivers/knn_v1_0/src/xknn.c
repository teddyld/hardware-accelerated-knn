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

void XKnn_Set_input_V(XKnn *InstancePtr, XKnn_Input_v Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 0, Data.word_0);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 4, Data.word_1);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 8, Data.word_2);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 12, Data.word_3);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 16, Data.word_4);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 20, Data.word_5);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 24, Data.word_6);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 28, Data.word_7);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 32, Data.word_8);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 36, Data.word_9);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 40, Data.word_10);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 44, Data.word_11);
    XKnn_WriteReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 48, Data.word_12);
}

XKnn_Input_v XKnn_Get_input_V(XKnn *InstancePtr) {
    XKnn_Input_v Data;

    Data.word_0 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 0);
    Data.word_1 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 4);
    Data.word_2 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 8);
    Data.word_3 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 12);
    Data.word_4 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 16);
    Data.word_5 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 20);
    Data.word_6 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 24);
    Data.word_7 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 28);
    Data.word_8 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 32);
    Data.word_9 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 36);
    Data.word_10 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 40);
    Data.word_11 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 44);
    Data.word_12 = XKnn_ReadReg(InstancePtr->Axilites_BaseAddress, XKNN_AXILITES_ADDR_INPUT_V_DATA + 48);
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

u32 XKnn_Get_train_samples_V_BaseAddress(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE);
}

u32 XKnn_Get_train_samples_V_HighAddress(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH);
}

u32 XKnn_Get_train_samples_V_TotalBytes(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH - XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + 1);
}

u32 XKnn_Get_train_samples_V_BitWidth(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKNN_AXILITES_WIDTH_TRAIN_SAMPLES_V;
}

u32 XKnn_Get_train_samples_V_Depth(XKnn *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XKNN_AXILITES_DEPTH_TRAIN_SAMPLES_V;
}

u32 XKnn_Write_train_samples_V_Words(XKnn *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH - XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XKnn_Read_train_samples_V_Words(XKnn *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH - XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XKnn_Write_train_samples_V_Bytes(XKnn *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH - XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XKnn_Read_train_samples_V_Bytes(XKnn *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_HIGH - XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XKNN_AXILITES_ADDR_TRAIN_SAMPLES_V_BASE + offset + i);
    }
    return length;
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

