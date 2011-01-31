#pragma once

#include <psl1ght/types.h>
#include <sys/thread.h>

EXTERN_BEGIN

#define AUDIO_BLOCK_SAMPLES   256

#define AUDIO_STATUS_CLOSE   0x1010
#define AUDIO_STATUS_READY   1
#define AUDIO_STATUS_RUN     2

#define AUDIO_PORT_2CH  2
#define AUDIO_PORT_8CH  8

#define AUDIO_BLOCK_8    8
#define AUDIO_BLOCK_16   16
#define AUDIO_BLOCK_32   32

typedef struct{
	u64   numChannels;
	u64   numBlocks;
	u64   attr;
	float level;
} AudioPortParam;

typedef struct{
	u32 readIndex;//pointer to u32
	u32 status;
	u64 channelCount;
	u64 numBlocks;
	u32 portSize;
	u32 audioDataStart;//pointer to float
} AudioPortConfig;

int audioInit(void);
int audioPortOpen(AudioPortParam *param, u32 *portNum);
int audioPortStart(u32 portNum);
int audioPortStop(u32 portNum);
int audioGetPortConfig(u32 portNum, AudioPortConfig *portConfig);
int audioPortClose(u32 portNum);
int audioQuit(void);
int audioCreateNotifyEventQueue(sys_event_queue_t * queue_id, u64 * queue_key);
int audioSetNotifyEventQueue( u64 queue_key);
int audioRemoveNotifyEventQueue( u64 queue_key);

EXTERN_END
