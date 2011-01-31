#pragma once

#include <psl1ght/types.h>

EXTERN_BEGIN

typedef struct OpenPSID {
	u64 high;
	u64 low;
} OpenPSID;

LV2_SYSCALL sys_get_openpsid(OpenPSID *ptr) { return Lv2Syscall1(872, (u64)ptr); }

EXTERN_END
