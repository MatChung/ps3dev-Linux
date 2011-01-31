#pragma once

#include <psl1ght/types.h>
#include <stdlib.h>

EXTERN_BEGIN

#define VIDEO_RESOLUTION_1080	1
#define VIDEO_RESOLUTION_720	2
#define VIDEO_RESOLUTION_480	4
#define VIDEO_RESOLUTION_576	5

#define VIDEO_ASPECT_AUTO	0
#define VIDEO_ASPECT_4_3	1
#define VIDEO_ASPECT_16_9	2

typedef struct {
	uint16_t width;
	uint16_t height;
} VideoResolution;

typedef struct {
	uint8_t resolution;
	uint8_t scanMode; // Interlaced or Progressive
	uint8_t conversion;
	uint8_t aspect;
	uint8_t padding[2];
	uint16_t refreshRates;
} VideoDisplayMode;

#define VIDEO_STATE_DISABLED	0
#define VIDEO_STATE_ENABLED 	1
#define VIDEO_STATE_BUSY	3

 typedef struct {
	uint8_t state;
	uint8_t colorSpace;
	uint8_t padding[6];
	VideoDisplayMode displayMode;
} VideoState;

int videoGetResolution(int resolutionId, VideoResolution* resolution);

#define VIDEO_BUFFER_FORMAT_XRGB	0
#define VIDEO_BUFFER_FORMAT_XBGR	1
#define VIDEO_BUFFER_FORMAT_FLOAT	2

typedef struct {
	uint8_t resolution;
	uint8_t	format;
	uint8_t aspect;
	uint8_t padding[9];
	uint32_t pitch;
} VideoConfiguration;

int videoConfigure(int videoOut, VideoConfiguration *config, void *option, int blocking);
int videoGetState(int videoOut, int deviceIndex, VideoState *state);


EXTERN_END
