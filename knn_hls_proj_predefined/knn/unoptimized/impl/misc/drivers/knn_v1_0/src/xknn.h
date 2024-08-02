// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XKNN_H
#define XKNN_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xknn_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XKnn_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XKnn;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XKnn_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XKnn_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XKnn_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XKnn_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XKnn_Initialize(XKnn *InstancePtr, u16 DeviceId);
XKnn_Config* XKnn_LookupConfig(u16 DeviceId);
int XKnn_CfgInitialize(XKnn *InstancePtr, XKnn_Config *ConfigPtr);
#else
int XKnn_Initialize(XKnn *InstancePtr, const char* InstanceName);
int XKnn_Release(XKnn *InstancePtr);
#endif

void XKnn_Start(XKnn *InstancePtr);
u32 XKnn_IsDone(XKnn *InstancePtr);
u32 XKnn_IsIdle(XKnn *InstancePtr);
u32 XKnn_IsReady(XKnn *InstancePtr);
void XKnn_EnableAutoRestart(XKnn *InstancePtr);
void XKnn_DisableAutoRestart(XKnn *InstancePtr);

void XKnn_Set_input_0(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_0(XKnn *InstancePtr);
void XKnn_Set_input_1(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_1(XKnn *InstancePtr);
void XKnn_Set_input_2(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_2(XKnn *InstancePtr);
void XKnn_Set_input_3(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_3(XKnn *InstancePtr);
void XKnn_Set_input_4(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_4(XKnn *InstancePtr);
void XKnn_Set_input_5(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_5(XKnn *InstancePtr);
void XKnn_Set_input_6(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_6(XKnn *InstancePtr);
void XKnn_Set_input_7(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_7(XKnn *InstancePtr);
void XKnn_Set_input_8(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_8(XKnn *InstancePtr);
void XKnn_Set_input_9(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_9(XKnn *InstancePtr);
void XKnn_Set_input_10(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_10(XKnn *InstancePtr);
void XKnn_Set_input_11(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_11(XKnn *InstancePtr);
void XKnn_Set_input_12(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_12(XKnn *InstancePtr);
void XKnn_Set_input_13(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_13(XKnn *InstancePtr);
void XKnn_Set_input_14(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_14(XKnn *InstancePtr);
void XKnn_Set_input_15(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_15(XKnn *InstancePtr);
void XKnn_Set_input_16(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_16(XKnn *InstancePtr);
void XKnn_Set_input_17(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_17(XKnn *InstancePtr);
void XKnn_Set_input_18(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_18(XKnn *InstancePtr);
void XKnn_Set_input_19(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_19(XKnn *InstancePtr);
void XKnn_Set_input_20(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_20(XKnn *InstancePtr);
void XKnn_Set_input_21(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_21(XKnn *InstancePtr);
void XKnn_Set_input_22(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_22(XKnn *InstancePtr);
void XKnn_Set_input_23(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_23(XKnn *InstancePtr);
void XKnn_Set_input_24(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_24(XKnn *InstancePtr);
void XKnn_Set_input_25(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_25(XKnn *InstancePtr);
void XKnn_Set_input_26(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_26(XKnn *InstancePtr);
void XKnn_Set_input_27(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_27(XKnn *InstancePtr);
void XKnn_Set_input_28(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_28(XKnn *InstancePtr);
void XKnn_Set_input_29(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_29(XKnn *InstancePtr);
void XKnn_Set_input_30(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_30(XKnn *InstancePtr);
void XKnn_Set_input_31(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_31(XKnn *InstancePtr);
void XKnn_Set_input_32(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_32(XKnn *InstancePtr);
void XKnn_Set_input_33(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_33(XKnn *InstancePtr);
void XKnn_Set_input_34(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_34(XKnn *InstancePtr);
void XKnn_Set_input_35(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_35(XKnn *InstancePtr);
void XKnn_Set_input_36(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_36(XKnn *InstancePtr);
void XKnn_Set_input_37(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_37(XKnn *InstancePtr);
void XKnn_Set_input_38(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_38(XKnn *InstancePtr);
void XKnn_Set_input_39(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_39(XKnn *InstancePtr);
void XKnn_Set_input_40(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_40(XKnn *InstancePtr);
void XKnn_Set_input_41(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_41(XKnn *InstancePtr);
void XKnn_Set_input_42(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_42(XKnn *InstancePtr);
void XKnn_Set_input_43(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_43(XKnn *InstancePtr);
void XKnn_Set_input_44(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_44(XKnn *InstancePtr);
void XKnn_Set_input_45(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_45(XKnn *InstancePtr);
void XKnn_Set_input_46(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_46(XKnn *InstancePtr);
void XKnn_Set_input_47(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_47(XKnn *InstancePtr);
void XKnn_Set_input_48(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_48(XKnn *InstancePtr);
void XKnn_Set_input_49(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_49(XKnn *InstancePtr);
void XKnn_Set_input_50(XKnn *InstancePtr, u32 Data);
u32 XKnn_Get_input_50(XKnn *InstancePtr);
u32 XKnn_Get_output_V(XKnn *InstancePtr);
u32 XKnn_Get_output_V_vld(XKnn *InstancePtr);

void XKnn_InterruptGlobalEnable(XKnn *InstancePtr);
void XKnn_InterruptGlobalDisable(XKnn *InstancePtr);
void XKnn_InterruptEnable(XKnn *InstancePtr, u32 Mask);
void XKnn_InterruptDisable(XKnn *InstancePtr, u32 Mask);
void XKnn_InterruptClear(XKnn *InstancePtr, u32 Mask);
u32 XKnn_InterruptGetEnabled(XKnn *InstancePtr);
u32 XKnn_InterruptGetStatus(XKnn *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
