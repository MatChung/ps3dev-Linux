#pragma once

#include <psl1ght/lv2.h>
#include <sys/reent.h>

EXTERN_BEGIN

s32 lv2Error(s32 lv2error);
s32 lv2Errno(s32 lv2error);
s32 lv2ErrnoReentrant(struct _reent* r, s32 lv2error);

EXTERN_END
