#pragma once

#include <psl1ght/types.h>
#include <stdlib.h>

EXTERN_BEGIN

#define MAX_MICE		127
#define MOUSE_MAX_CODES	64

typedef struct MouseInfo
{
	u32 max;					/* max mice allowed to connect */
	u32 connected;				/* how many mice connected */
	u32 info;					/* bit 0 lets the system intercept pad? other bits are reserved */
	u16 vendor_id[MAX_MICE];	/* vendor id */
	u16 product_id[MAX_MICE];	/* product id */
	u8  status[MAX_MICE];		/* 0: Not connected, 1: Connected, 5: Connected to custom controller.*/
} MouseInfo;

typedef struct MouseInfoTablet
{
	u32 supported;
	u32 mode;
} MouseInfoTablet;

typedef struct MouseRawData
{
	s32 len;
	u8 data[MOUSE_MAX_CODES];
} MouseRawData;

typedef struct MouseData
{
	u8 update;
	u8 buttons;
	s8 x_axis;
	s8 y_axis;
	s8 wheel;
	s8 tilt;	
} MouseData;

#define MOUSE_MAX_DATA_LIST  (8)
typedef struct MouseDataList{
	u32 count;
	MouseData list[MOUSE_MAX_DATA_LIST];
}MouseDataList;

typedef struct MouseTabletData
{
	s32 len;
	u8 data[MOUSE_MAX_CODES];
} MouseTabletData;

typedef struct MouseTabletDataList
{
	u32 count;
	MouseTabletData list[MOUSE_MAX_DATA_LIST];
} MouseTabletDataList;

s32 ioMouseInit(u32 max);
s32 ioMouseEnd();
s32 ioMouseClearBuf(u32 port);
s32 ioMouseGetInfo(MouseInfo*);
s32 ioMouseGetRawData(u32 port, MouseRawData*);
s32 ioMouseGetData(u32 port, MouseData*);
s32 ioMouseGetDataList(u32 port, MouseDataList*);
s32 ioMouseGetTabletDataList(u32 port, MouseTabletDataList*);
s32 ioMouseInfoTabletMode(u32 port, MouseInfoTablet*);
s32 ioMouseSetTabletMode(u32 port, u32 mode);

EXTERN_END
