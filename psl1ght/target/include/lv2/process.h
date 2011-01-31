#pragma once

#include <psl1ght/types.h>
#include <stdlib.h>

EXTERN_BEGIN

void sysProcessExit(int status) __attribute__((noreturn));

#define SYS_PROCESS_SPAWN_STACK_SIZE_32K	0x10
#define SYS_PROCESS_SPAWN_STACK_SIZE_64K	0x20
#define SYS_PROCESS_SPAWN_STACK_SIZE_96K	0x30
#define SYS_PROCESS_SPAWN_STACK_SIZE_128K	0x40
#define SYS_PROCESS_SPAWN_STACK_SIZE_256K	0x50
#define SYS_PROCESS_SPAWN_STACK_SIZE_512K	0x60
#define SYS_PROCESS_SPAWN_STACK_SIZE_1M		0x70
void sysProcessExitSpawn2(
		const char* path, const char* argv[], const char* envp[],
		void* data, size_t size,
		int priority, u64 flags);

EXTERN_END
