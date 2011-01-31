#pragma once

#include <psl1ght/lv2.h>

LV2_SYSCALL lv2TimerUSleep(u64 time) { return Lv2Syscall1(141, time); }
LV2_SYSCALL lv2TimerSleep(u64 time) { return Lv2Syscall1(142, time); }

LV2_SYSCALL lv2GetCurrentTime(u64 *sec, u64 *nsec) { return Lv2Syscall2(145, (u64) sec, (u64) nsec); }
LV2_SYSCALL lv2SetCurrentTime(u64 sec, u64 nsec) { return Lv2Syscall2(146, sec, nsec); }
