#pragma once

#include <psl1ght/types.h>

#include "rsx/gcm.h"
#include "rsx/reality_program.h"

EXTERN_BEGIN

/* realityFlushBuffer:
 * Flushes the RSX Command buffer.
 */
void realityFlushBuffer(gcmContextData *context);

/* realityInit:
 * Maps the memory at ioAddress into the RSX's memory space so the userspace thread
 * and the RSX can comunicate.
 * This shared memory must be 1mb aligned, and at least 1mb long.
 * Also Initilizes a RSX command buffer of cmdSize inside the shared memory. 
 * 
 * Returns a context structure that controls the current status of thecommand buffer.
 */
gcmContextData *realityInit(const u32 cmdSize, const u32 ioSize, const void* ioAddress);

s32 realityAddressToOffset(void *ptr, u32 *offset);

// RSX memory allocators
void *rsxMemAlign(s32 alignment, s32 size);
void *rsxMem(s32 size);

EXTERN_END
