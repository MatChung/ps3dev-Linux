#pragma once

#include <psl1ght/types.h>
#include <stdlib.h>
#include <spurs/types.h>

EXTERN_BEGIN

#define MOVE_VERSION 2
#define MAX_MOVES					4
#define EXTERNAL_PORT_DATA_SIZE		32

#define GEM_TRACKING_POSITION_TRACKED 1
#define GEM_TRACKING_VISIBLE 2

#define STATE_CURRENT_TIME 0
#define STATE_LATEST_IMAGE_TIME 1
#define STATE_SPECIFY_TIME 2

typedef struct GemExtPortData {
	u16 isconnected;
	
	unsigned int				:  8;		/* reserved */
	/* Button information */
	/* 0: UP, 1: DOWN     */
	unsigned int BTN_LEFT 		:  1;
	unsigned int BTN_DOWN 		:  1;
	unsigned int BTN_RIGHT 		:  1;
	unsigned int BTN_UP 		:  1;
	unsigned int BTN_START 		:  1;
	unsigned int BTN_R3 		:  1;
	unsigned int BTN_L3 		:  1;
	unsigned int BTN_SELECT		:  1;
	
	unsigned int				:  8;		/* reserved */
	unsigned int BTN_SQUARE 	:  1;
	unsigned int BTN_CROSS 		:  1;
	unsigned int BTN_CIRCLE 	:  1;
	unsigned int BTN_TRIANGLE	:  1;
	unsigned int BTN_R1 		:  1;
	unsigned int BTN_L1 		:  1;
	unsigned int BTN_R2 		:  1;
	unsigned int BTN_L2			:  1;
	
	/* Analog nub information */
	/* 0x0000 - 0x00FF        */
	unsigned int ANA_R_H		: 16;
	unsigned int ANA_R_V		: 16;
	unsigned int ANA_L_H		: 16;
	unsigned int ANA_L_V		: 16;
	
	u8 data[5];
} GemExtPortData;

typedef struct GemPadData{
	u16 buttons;
	u16 ANA_T;
} GemPadData;

typedef struct GemState {
    vec_float4 pos;
    vec_float4 vel;
    vec_float4 accel; 
    vec_float4 quat;
    vec_float4 angvel;
    vec_float4 angaccel;
    vec_float4 handle_pos;
    vec_float4 handle_vel;
    vec_float4 handle_accel;
    GemPadData paddata;
    GemExtPortData extportdata;
    system_time_t time;
    float temperature;
    float camera_pitch_angle;
    u32 tracking;
} GemState;

typedef struct GemAttribute {
	u32 version;
	u32 max;
	lv2_void memory; //pointer to memory to use for gem lib, if you specify null it will automatically allocate for you
	lv2_void spurs; //pointer to Spurs object
	u8 spu_priorities[8]; 
} GemAttribute;

typedef struct GemCameraState {
  s32 exposure;
  float exposure_time;
  float gain;
  float pitch_angle;
  float pitch_angle_estimate;
} GemCameraState;

typedef struct GemImageState {
	system_time_t frame_time;
	system_time_t time;
	float u;
	float v;
	float r;
	float projectionx;
	float projectiony;
	float distance;
	u8 visible;
	u8 r_valid;
} GemImageState;

typedef struct GemInfo
{
    u32 max;
    u32 connected;
    u32 status[MAX_MOVES];
    u32 port[MAX_MOVES];
} GemInfo;

typedef enum
{
	GEM_NO_VIDEO_OUTPUT=1,
	GEM_RGBA_640x480,
	GEM_YUV_640x480,
	GEM_YUV422_640x480,
	GEM_YUV411_640x480,
	GEM_RGBA_320x240,
	GEM_BAYER_RESTORED,
	GEM_BAYER_RESTORED_RGGB,
	GEM_BAYER_RESTORED_RASTERIZED
} GemVideoConvertFormatEnum;

#define GEM_AUTO_WHITE_BALANCE 1
#define GEM_GAMMA_BOOST 2
#define GEM_COMBINE_PREVIOUS_INPUT_FRAME 4
#define GEM_FILTER_OUTLIER_PIXELS 8

typedef struct GemVideoConvertAttribute {
	int version; // set to MOVE_VERSION
	GemVideoConvertFormatEnum format;
	int conversion;
	float gain;
	float red_gain;
	float green_gain;
	float blue_gain;
	lv2_void buffer_memory;
	lv2_void video_data_out;
	u8 alpha;
} GemVideoConvertAttribute;

#define GEM_INERTIAL_LATEST 0
#define GEM_INERTIAL_PREVIOUS 1
#define GEM_INERTIAL_NEXT 2

typedef struct GemInertialState {
	vec_float4 accelerometer;
	vec_float4 gyro;
	vec_float4 accelerometer_bias;
	vec_float4 gyro_bias;
	GemPadData pad;
	GemExtPortData ext;
	system_time_t time;
	int counter;
	float temperature;
} GemInertialState;

s32 gemGetEnvironmentLightingColor(float* r, float* g, float* b);
s32 gemUpdateStart(const void* camera_frame, system_time_t timestamp);
s32 gemInit(const GemAttribute* attr);
s32 gemGetTrackerHue(u32 num, u32* hue);
s32 gemConvertVideoFinish();
s32 gemEnableMagnetometer(u32 num, s32 enable);
s32 gemGetRGB(u32 num, float* r, float* g, float* b);
s32 gemWriteExternalPort(u32 num, u8 data[EXTERNAL_PORT_DATA_SIZE]);

//hues points to an array that can hold 360 boolean values, my assumption is 360 bytes or 360 chars.
s32 gemGetAllTrackableHues(u8* hues);
s32 gemGetMemorySize(s32 max);
s32 gemUpdateFinish();
s32 gemEnableCameraPitchAngleCorrection(s32 enable);

s32 gemGetRumble(u32 num, u8* intensity);
s32 gemSetRumble(u32 num, u8 intensity);

s32	gemGetState(u32 num, u32 timeflag, system_time_t time, GemState* state);

s32 gemGetAccelerometerPositionInDevice(u32 num, vec_float4* pos);
s32 gemConvertVideoStart(const void* frame);

s32 gemFilterState(u32 num, u32 enable);
s32 gemSetYaw(u32 num, vec_float4 zdir);
s32 gemGetCameraState(GemCameraState* state);

s32 gemTrackHues(const u32* req_hues, u32* res_hues);

s32 gemGetImageState(u32 num, GemImageState* state);

s32 gemClearStatusFlags(u32 num, u64 mask);

s32 gemGetInfo(GemInfo* info);

s32 gemPrepareCamera(s32 maxexposure, float quality);

s32 gemCalibrate(u32 num);

s32 gemGetHuePixels(const void* frame, u32 hue, u8* pixels);
s32 gemPrepareVideoConvert(const GemVideoConvertAttribute* attr);
s32 gemHSVtoRGB(float h, float s, float v, float* r, float* g, float* b);
s32 gemForceRGB(u32 num, float r, float g, float b);
s32 gemGetInertialState(u32 num, u32 flag, system_time_t time, GemInertialState* inertial);
s32 gemReset(u32 num);
s32 gemEnd();
s32 gemInvalidateCalibration(u32 num);
s32 gemIsTrackableHue(u32 hue);
s32 gemGetStatusFlags(u32 num, u64* flags);


EXTERN_END
