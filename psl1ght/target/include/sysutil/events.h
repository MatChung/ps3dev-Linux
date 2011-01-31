#pragma once

#include <psl1ght/types.h>
#include <stdlib.h>

EXTERN_BEGIN

#define EVENT_REQUEST_EXITAPP 	0x101
#define EVENT_DRAWING_BEGIN 	0x121
#define EVENT_DRAWING_END		0x122
#define EVENT_MENU_OPEN 		0x131
#define EVENT_MENU_CLOSE 		0x132

typedef enum sysEventSlot{
	EVENT_SLOT0,
	EVENT_SLOT1,
	EVENT_SLOT2,
	EVENT_SLOT3,
	EVENT_SLOTMAX,
} sysEventSlot;

typedef void (*sysCallback)(u64 status,	u64 param, void * userdata);

s32 sysRegisterCallback(sysEventSlot slot, sysCallback func, void * userdata);
s32 sysRegisterCallback_ex(sysEventSlot slot, opd32* opdentry, void * userdata);
s32 sysCheckCallback();
s32 sysUnregisterCallback(sysEventSlot slot);

EXTERN_END

