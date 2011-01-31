#pragma once

#include <psl1ght/types.h>

#include <sys/types.h>
#include <signal.h>
#include <time.h>
#include <sys/time.h>

EXTERN_BEGIN

int select(int, fd_set*, fd_set*, fd_set*, struct timeval_32*);
int pselect(int, fd_set*, fd_set*, fd_set*, const struct timespec*, const sigset_t*);

EXTERN_END
