#pragma once

#include <psl1ght/lv2.h>

#include <sys/thread.h>

LV2_SYSCALL lv2ThreadYield() { return Lv2Syscall0(43); }
LV2_SYSCALL lv2ThreadJoin(sys_ppu_thread_t threadid, u64 *retval) { return Lv2Syscall2(44, threadid, (u64)retval); }
LV2_SYSCALL lv2ThreadDetach(sys_ppu_thread_t threadid) { return Lv2Syscall1(45, threadid); }
LV2_SYSCALL lv2ThreadJoinState(s32* isjoinable) { return Lv2Syscall1(46, (u64)isjoinable); }
LV2_SYSCALL lv2ThreadSetPriority(sys_ppu_thread_t threadid, s32 priority) { return Lv2Syscall2(47, threadid, priority); }
LV2_SYSCALL lv2ThreadGetPriority(sys_ppu_thread_t threadid, s32* priority) { return Lv2Syscall2(48, threadid, (u64)priority); }
LV2_SYSCALL lv2ThreadGetStackInformation(sys_ppu_thread_stack_t_32 *stackinfo) { return Lv2Syscall1(49, (u64)stackinfo); }
LV2_SYSCALL lv2ThreadRename(sys_ppu_thread_t id, char*name) { return Lv2Syscall2(56, id, (u64)name); }
LV2_SYSCALL lv2ThreadRecoverPageFault(sys_ppu_thread_t threadid) { return Lv2Syscall1(57, threadid); }

LV2_SYSCALL lv2MutexCreate(sys_mutex_t * mutexid, const sys_mutex_attribute_t *attr) { return Lv2Syscall2(100, (u64)mutexid, (u64)attr); }
LV2_SYSCALL lv2MutexDestroy(sys_mutex_t mutexid) { return Lv2Syscall1(101, mutexid); }
LV2_SYSCALL lv2MutexLock(sys_mutex_t mutexid, u64 timeout_usec) { return Lv2Syscall2(102, mutexid, timeout_usec); }
LV2_SYSCALL lv2MutexTrylock(sys_mutex_t mutexid) { return Lv2Syscall1(103, mutexid); }
LV2_SYSCALL lv2MutexUnlock(sys_mutex_t mutexid) { return Lv2Syscall1(104, mutexid); }
LV2_SYSCALL lv2CondCreate(sys_cond_t * condid, sys_mutex_t mutexid, const sys_cond_attribute_t *attr) { return Lv2Syscall3(105, (u64)condid, mutexid, (u64)attr); }
LV2_SYSCALL lv2CondDestroy(sys_cond_t condid) { return Lv2Syscall1(106, condid); }
LV2_SYSCALL lv2CondWait(sys_cond_t condid, u64 timeout_usec) { return Lv2Syscall2(107, condid, timeout_usec); }
LV2_SYSCALL lv2CondSignal(sys_cond_t condid) { return Lv2Syscall1(108, condid); }
LV2_SYSCALL lv2CondSignalAll(sys_cond_t condid) { return Lv2Syscall1(109, condid); }
LV2_SYSCALL lv2SemaphoreCreate(sys_semaphore_t *semaid, const sys_semaphore_attribute_t *attr, s32 initial_value, s32 max_value) { return Lv2Syscall4(90, (u64)semaid, (u64)attr, initial_value, max_value); }
LV2_SYSCALL lv2SemaphoreDestroy(sys_semaphore_t semaid) { return Lv2Syscall1(91, semaid); }
LV2_SYSCALL lv2SemaphoreWait(sys_semaphore_t semaid, u64 timeout_usec) { return Lv2Syscall2(92, semaid, timeout_usec); }
LV2_SYSCALL lv2SemaphoreTrywait(sys_semaphore_t semaid) { return Lv2Syscall1(93, semaid); }
LV2_SYSCALL lv2SemaphorePost(sys_semaphore_t semaid, s32 count) { return Lv2Syscall2(94, semaid, count); }
LV2_SYSCALL lv2SemaphoreGetValue(sys_semaphore_t semaid, s32 *count) { return Lv2Syscall2(114, semaid, (u64)count); }

LV2_SYSCALL lv2QEventDestroy(sys_event_queue_t eveid, s32 mode) { return Lv2Syscall2(129, eveid, mode); }
LV2_SYSCALL lv2QEventRcv(sys_event_queue_t eveid, sys_event_t * sysev, s32 timeout_usec) { return Lv2Syscall3(130, eveid, (u64)sysev, timeout_usec); }
LV2_SYSCALL lv2QEventDrain(sys_event_queue_t eveid) { return Lv2Syscall1(133, eveid); }

