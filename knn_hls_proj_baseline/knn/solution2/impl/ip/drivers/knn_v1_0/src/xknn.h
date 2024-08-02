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

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
    u32 word_3;
    u32 word_4;
    u32 word_5;
    u32 word_6;
    u32 word_7;
    u32 word_8;
    u32 word_9;
    u32 word_10;
    u32 word_11;
    u32 word_12;
} XKnn_Input_v;

typedef struct {
    u32 word_0;
    u32 word_1;
    u32 word_2;
    u32 word_3;
    u32 word_4;
    u32 word_5;
    u32 word_6;
    u32 word_7;
    u32 word_8;
    u32 word_9;
    u32 word_10;
    u32 word_11;
    u32 word_12;
} XKnn_Train_samples_v;

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

void XKnn_Set_input_V(XKnn *InstancePtr, XKnn_Input_v Data);
XKnn_Input_v XKnn_Get_input_V(XKnn *InstancePtr);
u32 XKnn_Get_output_V(XKnn *InstancePtr);
u32 XKnn_Get_output_V_vld(XKnn *InstancePtr);
u32 XKnn_Get_train_samples_V_BaseAddress(XKnn *InstancePtr);
u32 XKnn_Get_train_samples_V_HighAddress(XKnn *InstancePtr);
u32 XKnn_Get_train_samples_V_TotalBytes(XKnn *InstancePtr);
u32 XKnn_Get_train_samples_V_BitWidth(XKnn *InstancePtr);
u32 XKnn_Get_train_samples_V_Depth(XKnn *InstancePtr);
u32 XKnn_Write_train_samples_V_Words(XKnn *InstancePtr, int offset, int *data, int length);
u32 XKnn_Read_train_samples_V_Words(XKnn *InstancePtr, int offset, int *data, int length);
u32 XKnn_Write_train_samples_V_Bytes(XKnn *InstancePtr, int offset, char *data, int length);
u32 XKnn_Read_train_samples_V_Bytes(XKnn *InstancePtr, int offset, char *data, int length);

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
