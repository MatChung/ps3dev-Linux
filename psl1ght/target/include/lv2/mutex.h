#pragma once

#include <psl1ght/types.h>
#include <sys/lock.h>

#define SYS_LWMUTEX_ATTR_PROTOCOL		0x0002
#define SYS_LWMUTEX_ATTR_RECURSIVE		0x0010

typedef struct sys_lwmutex sys_lwmutex_t;

typedef struct sys_lwmutex_attr
{
	u32 attr_protocol;
	u32 attr_recursive;
	char name[8];
} sys_lwmutex_attr_t;

EXTERN_BEGIN

s32 sysLwMutexCreate(sys_lwmutex_t* mutex, const sys_lwmutex_attr_t* attr);
s32 sysLwMutexDestroy(sys_lwmutex_t* mutex);
s32 sysLwMutexLock(sys_lwmutex_t* mutex, u64 timeout);
s32 sysLwMutexTryLock(sys_lwmutex_t* mutex);
s32 sysLwMutexUnlock(sys_lwmutex_t* mutex);

EXTERN_END
