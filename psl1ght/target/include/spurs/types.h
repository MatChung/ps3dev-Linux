#pragma once

#include <psl1ght/types.h>

EXTERN_BEGIN

#define SPURS_ALIGN	128
#define SPURS_SIZE	4096

typedef struct Spurs {
	unsigned char space[SPURS_SIZE];
} __attribute__((aligned(SPURS_ALIGN))) Spurs;

EXTERN_END
