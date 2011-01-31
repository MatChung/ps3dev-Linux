#pragma once

#include <psl1ght/types.h>
#include <psl1ght/lv2/memory.h>

EXTERN_BEGIN

#define CAMERA_ERRO_DOUBLE_INIT			0x80140801
#define CAMERA_ERRO_NEED_INIT			0x80140803
#define CAMERA_ERRO_BAD_PARAM			0x80140804
#define CAMERA_ERRO_DOUBLE_OPEN			0x80140805
#define CAMERA_ERRO_NEED_OPEN			0x80140806
#define CAMERA_ERRO_NO_DEVICE_FOUND		0x80140807
#define CAMERA_ERRO_DEVICE_DEACTIVATED	0x80140808
#define CAMERA_ERRO_NEED_START			0x80140809
#define CAMERA_ERRO_UNKNOWN_FORMAT		0x8014080a
#define CAMERA_ERRO_UNKNOWN_RESOLUTION	0x8014080b
#define CAMERA_ERRO_BAD_FRAMERATE		0x8014080c
#define CAMERA_ERRO_TIMEOUT				0x8014080d
#define CAMERA_ERRO_BUSY				0x8014080e
#define CAMERA_ERRO_FATAL				0x8014080f
#define CAMERA_ERRO_MUTEX				0x80140810

typedef enum CameraAttribute {
	CAM_ATTR_GAIN,
	CAM_ATTR_RED_BLUE_GAIN,
	CAM_ATTR_SATURATION,
	CAM_ATTR_EXPOSURE,
	CAM_ATTR_BRIGHTNESS,
	CAM_ATTR_AUTO_EXPOSURE,
	CAM_ATTR_AUTO_GAIN_CONTROL,
	CAM_ATTR_AUTO_WHITE_BALANCE,
	CAM_ATTR_AUTO_BRIGHTNESS,
	CAM_ATTR_LED,
	CAM_ATTR_AUDIO_GAIN,
	CAM_ATTR_QS,
	CAM_ATTR_NONZERO_COEFFS,
	CAM_ATTR_YUV_FLAG,
	CAM_ATTR_JPEG_FLAG,
	CAM_ATTR_BACKLIGHT_COMPENSATION,
	CAM_ATTR_MIRROR_FLAG,
	CAM_ATTR_MEASURED_QS,
	CAM_ATTR_422_FLAG,
	CAM_ATTR_USBLOAD,
	CAM_ATTR_GAMMA,
	CAM_ATTR_GREEN_GAIN,
	CAM_ATTR_AUTO_GAIN_CONTROL_LIMIT,
	CAM_ATTR_DENOISE,
	CAM_ATTR_FRAMERATE_ADJUST,
	CAM_ATTR_PIXEL_OUTLIER_FILTER,
	CAM_ATTR_AUTO_GAIN_CONTROL_LOW,
	CAM_ATTR_AUTO_GAIN_CONTROL_HIGH,

	CAM_ATTR_FORMAT_CAP=100,
	CAM_ATTR_FORMAT_INDEX,
	CAM_ATTR_FRAME_NUM,
	CAM_ATTR_FRAME_INDEX,
	CAM_ATTR_FRAME_SIZE,
	CAM_ATTR_INTERVAL_TYPE,
	CAM_ATTR_INTERVAL_INDEX,
	CAM_ATTR_INTERVAL_VALUE,
	CAM_ATTR_COLOR_MATCHING,
	CAM_ATTR_PL_FREQ, 
	CAM_ATTR_DEV_ID,
	CAM_ATTR_DEV_CAP,
	CAM_ATTR_DEV_SPEED,
	CAM_ATTR_USBVIDCLASS_REQUEST_CODE, 
	CAM_ATTR_USBVIDCLASS_REQUEST_DATA, 
	CAM_ATTR_DEVICE_ID,	

	CAM_ATTR_READ_MODE=300,
	CAM_ATTR_GAME_PID,		
	CAM_ATTR_PBUFFER,		
	CAM_ATTR_READ_FINISH,
	
	CAM_ATTR_UNKNOWN=500,
} CameraAttribute;

typedef enum CameraType {
	CAM_TYPE_UNKNOWN,
	CAM_TYPE_EYETOY,
	CAM_TYPE_PLAYSTATION_EYE,
	CAM_TYPE_USBVIDEO_CLASS,
} CameraType;


typedef enum CameraFormat {
	CAM_FORM_UNKNOWN,
	CAM_FORM_JPG,
	CAM_FORM_RAW8,
	CAM_FORM_YUV422,
	CAM_FORM_RAW10,
	CAM_FORM_RGBA,
	CAM_FORM_YUV420
} CameraFormat;


typedef enum CameraResolution {
	CAM_RESO_UNKNOWN,
	CAM_RESO_VGA,
	CAM_RESO_QVGA,
	CAM_RESO_WGA,
	CAM_RESO_SPECIFIED
} CameraResolution;

typedef struct CameraInfo {
	CameraFormat format;
	CameraResolution resolution;
	s32 framerate;
	u32 buffer;
	s32 bytesize;
	s32 width;
	s32 height;
	s32 dev_num;
	s32 guid;
	s32 info_ver;
	mem_container_t container;
} CameraInfo;

typedef struct CameraInfoEx {
	CameraFormat format;
	CameraResolution resolution;
	s32 framerate;
	u32 buffer;
	s32 bytesize;
	s32 width;
	s32 height;
	s32 dev_num;
	s32 guid;

	s32 info_ver;
	mem_container_t container;

	s32 readmode;
	u32 pbuf[2];
} CameraInfoEx;

typedef struct CameraReadEx {
	s32 version;
	u32 frame;
	u32 readcount;
	s64 timestamp;
	u32 buffer;
} CameraReadEx;


s32 cameraInit();
s32 cameraEnd();
s32 cameraStart(s32 num);
s32 cameraStop(s32 num);
s32 cameraOpenEx(s32 num, CameraInfoEx* info);
s32 cameraClose(s32 num);

s32 cameraRead(s32 num, s32* frame, s32* readcount);
s32 cameraReadEx(s32 num, CameraReadEx *info);
s32 cameraGetBufferInfoEx(s32 num, CameraInfoEx *info);
s32 cameraReset(s32 num);
s32 cameraGetAttribute(s32 num, CameraAttribute attribute, u32* arg1, u32* arg2);
s32 cameraSetAttribute(s32 num, CameraAttribute attribute, u32 arg1, u32 arg2);
s32 cameraGetType(s32 num, CameraType* type);
s32 cameraGetDeviceGUID(s32 num, u32* guid);
s32 cameraGetBufferSize(s32 num, CameraInfoEx* info);

s32 cameraIsStarted(s32 num);
s32 cameraIsOpen(s32 num);
s32 cameraIsAvailable(s32 num);
s32 cameraIsAttached(s32 num);

s32 cameraSetNotifyEventQueue(u64 key);
s32 cameraSetNotifyEventQueue2(u64 key, u64 source, u64 flag);
s32 cameraRemoveNotifyEventQueue(u64 key);
s32 cameraRemoveNotifyEventQueue2(u64 key);
s32 cameraReadComplete(s32 num, u32 buf, u32 arg);
s32 cameraPrepExtensionUnit(s32 num, u8* guidExtCode);
s32 cameraCtrlExtensionUnit(s32 num, u8 req, u16 wval, u16 wlen, u8* data);
s32 cameraGetExtensionUnit(s32 num, u16 wval, u16 wlen, u8* data);
s32 cameraSetExtensionUnit(s32 num, u16 wval, u16 wlen, u8* data);



EXTERN_END
