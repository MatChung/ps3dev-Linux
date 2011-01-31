#pragma once

#include <rsx/gcm.h>
#include "rsx/reality_program.h"

#ifdef __cplusplus
extern "C" {
#endif

#define REALITY_TRANSFER_SURFACE_FMT_Y32		0x0b

// Set the colour for clearing buffers, should be in ARGB format.
void realitySetClearColor(gcmContextData *context, uint32_t color);
void realitySetClearDepthValue(gcmContextData *context, uint32_t value);

// For actually clearing the bufders
#define REALITY_CLEAR_BUFFERS_DEPTH				0x00000001
#define REALITY_CLEAR_BUFFERS_STENCIL				0x00000002
#define REALITY_CLEAR_BUFFERS_COLOR_R				0x00000010
#define REALITY_CLEAR_BUFFERS_COLOR_G				0x00000020
#define REALITY_CLEAR_BUFFERS_COLOR_B				0x00000040
#define REALITY_CLEAR_BUFFERS_COLOR_A				0x00000080
void realityClearBuffers(gcmContextData *context, uint32_t buffers);

// For when you need to do nothing
void realityNop(gcmContextData *context);

#define REALITY_RSX_MEMORY	0
#define REALITY_LOCATION_CELL_MEMORY	1

enum surfaces {REALITY_SURFACE_COLOR0, REALITY_SURFACE_COLOR1, REALITY_SURFACE_COLOR2, 
		REALITY_SURFACE_COLOR3, REALITY_SURFACE_ZETA};
void realitySetRenderSurface(gcmContextData *context, uint8_t sufrace, uint8_t location, uint32_t offset, uint32_t pitch);


#define REALITY_TARGET_NONE	0x00 /* Don't render anything */
#define REALITY_TARGET_0	0x01 /* Render to color surface 0 */
#define REALITY_TARGET_1	0x02 /* Render to color surface 1 */
#define	REALITY_TARGET_MRT1	0x13 /* Render to both color surfaces 0 and 1 */
#define	REALITY_TARGET_MRT2	0x17 /* Render to color surface 0, 1 and 2 */
#define	REALITY_TARGET_MRT3	0x1F /* Render to color surface 0, 1, 2 and 3 */

#define REALITY_TARGET_FORMAT_COLOR_X1R5G5B5			0x00000001
#define REALITY_TARGET_FORMAT_COLOR_R5G6B5			0x00000003
#define REALITY_TARGET_FORMAT_COLOR_X8R8G8B8			0x00000005
#define REALITY_TARGET_FORMAT_COLOR_A8R8G8B8			0x00000008
#define REALITY_TARGET_FORMAT_COLOR_B8				0x00000009
#define REALITY_TARGET_FORMAT_COLOR_A16B16G16R16_FLOAT		0x0000000b
#define REALITY_TARGET_FORMAT_COLOR_A32B32G32R32_FLOAT		0x0000000c
#define REALITY_TARGET_FORMAT_COLOR_R32_FLOAT			0x0000000d
#define REALITY_TARGET_FORMAT_COLOR_X8B8G8R8			0x0000000f
#define REALITY_TARGET_FORMAT_COLOR_A8B8G8R8			0x00000010

#define REALITY_TARGET_FORMAT_ZETA_Z16				0x00000020
#define REALITY_TARGET_FORMAT_ZETA_Z24S8			0x00000040

#define REALITY_TARGET_FORMAT_TYPE_LINEAR			0x00000100
#define REALITY_TARGET_FORMAT_TYPE_SWIZZLED			0x00000200

#define REALITY_TARGET_FORMAT_MSAA_NONE				0x00000000
#define REALITY_TARGET_FORMAT_MSAA_2X				0x00003000
#define REALITY_TARGET_FORMAT_MSAA_4X				0x00004000
#define REALITY_TARGET_FORMAT_MSAA_4X_ROTATED			0x00005000

void realitySelectRenderTarget(gcmContextData *context, uint8_t target, uint32_t format, 
				uint16_t width, uint16_t height, uint16_t x, uint16_t y);

void realityViewport(gcmContextData *context, uint16_t width, uint16_t height);
void realityViewportClip(gcmContextData *context, u8 sel, uint16_t width, uint16_t height);
void realityViewportTranslate(gcmContextData *context, float x, float y, float z, float w);
void realityViewportScale(gcmContextData *context, float x, float y, float z, float w);


// Vertex begin, end and 4f, excatly like glbegin, glend and glvertex.
// You really should be using vertex buffers instead.
#define REALITY_POINTS				0x00000001
#define REALITY_LINES				0x00000002
#define REALITY_LINE_LOOP			0x00000003
#define REALITY_LINE_STRIP			0x00000004
#define REALITY_TRIANGLES			0x00000005
#define REALITY_TRIANGLE_STRIP			0x00000006
#define REALITY_TRIANGLE_FAN			0x00000007
#define REALITY_QUADS				0x00000008
#define REALITY_QUAD_STRIP			0x00000009
#define REALITY_POLYGON				0x0000000a
void realityVertexBegin(gcmContextData *context, uint32_t type);
void realityVertexEnd(gcmContextData *context);
void realityVertex4f(gcmContextData *context, float x, float y, float z, float w);

void realityTexCoord2f(gcmContextData *context, float s, float t);

//Vertex buffers
//Bind an input attribute to a vertex buffer array

#define REALITY_BUFFER_DATATYPE_FLOAT	2
#define REALITY_BUFFER_DATATYPE_BYTE	4

void realityBindVertexBufferAttribute(gcmContextData *context, uint8_t attribute, uint32_t offset, uint8_t stride, uint8_t elements, uint8_t dataType, uint8_t location);

void realityDrawVertexBuffer(gcmContextData *context, uint32_t type, uint32_t start, uint32_t count);


#define REALITY_INDEX_DATATYPE_U32	0x00
#define REALITY_INDEX_DATATYPE_U16	0x10
void realityDrawVertexBufferIndex(gcmContextData *context, uint32_t type, uint32_t offset, uint32_t count, uint8_t dataType, uint8_t location);

typedef struct {
	uint32_t size;
	uint32_t in_reg;
	uint32_t out_reg;
	uint32_t data[];
} realityVertexProgram_old; 

typedef struct {
	uint32_t offset;
	uint32_t size;
	uint32_t num_regs;
	uint32_t data[];
} realityFragmentProgram_old; 

void realityLoadVertexProgram(gcmContextData *context, realityVertexProgram *prog);
void realityLoadVertexProgram_old(gcmContextData *context, realityVertexProgram_old *prog);
void realitySetVertexProgramConstant4f(gcmContextData *context, int constant, float values[4]);
void realitySetVertexProgramConstant4fBlock(gcmContextData *context, realityVertexProgram *prog, int index, int num4fConstants, float *values);
void realityLoadFragmentProgram(gcmContextData *context, realityFragmentProgram *prog,u32 offset,u32 location);
void realitySetFragmentProgramParameter(gcmContextData *context,realityFragmentProgram *program,s32 index,const f32 *value,u32 offset);

void realityInstallFragmentProgram_old(gcmContextData *context, realityFragmentProgram_old *prog, uint32_t *addr);
void realityLoadFragmentProgram_old(gcmContextData *context, realityFragmentProgram_old *prog);

typedef struct {
	uint32_t offset;
	uint32_t format;
	uint32_t wrap;
	uint32_t enable;
	uint32_t swizzle;
	uint32_t filter;
	uint16_t width;
	uint16_t height;
	uint32_t borderColor;
	uint32_t stride;
} realityTexture;

void realitySetTexture(gcmContextData *context, uint32_t unit, realityTexture *tex);

#define REALITY_FRONT_FACE_CW 			0x00000900
#define REALITY_FRONT_FACE_CCW			0x00000901

#define REALITY_CULL_FACE_FRONT			0x00000404
#define REALITY_CULL_FACE_BACK			0x00000405
#define REALITY_CULL_FACE_FRONT_AND_BACK	0x00000408

void realityCullFace(gcmContextData *context, uint32_t face);
void realityFrontFace(gcmContextData *context, uint32_t face);
void realityCullEnable(gcmContextData *context, uint32_t enable);

void realityAlphaFunc(gcmContextData *context, uint32_t func);
void realityAlphaRef(gcmContextData *context, uint32_t ref);
void realityAlphaEnable(gcmContextData *context, uint32_t enable);

void realityBlendFunc(gcmContextData *context, uint32_t src, uint32_t dest);
void realityBlendEquation(gcmContextData *context, uint32_t equation);
void realityBlendEnable(gcmContextData *context, uint32_t enable);

#define REALITY_ZFUNC_NEVER				0x00000200
#define REALITY_ZFUNC_LESS					0x00000201
#define REALITY_ZFUNC_EQUAL				0x00000202
#define REALITY_ZFUNC_LESSOREQUAL				0x00000203
#define REALITY_ZFUNC_GREATER				0x00000204
#define REALITY_ZFUNC_NOTEQUAL				0x00000205
#define REALITY_ZFUNC_GREATEROREQUAL				0x00000206
#define REALITY_ZFUNC_ALWAYS				0x00000207

void realityDepthTestEnable(gcmContextData *context, uint32_t enable);
void realityDepthTestFunc(gcmContextData *context, uint32_t function);
void realityDepthWriteEnable(gcmContextData *context, uint32_t enable);

void realityZControl(gcmContextData *context, uint8_t cullNearFar, uint8_t zClampEnable, uint8_t cullIngnoreW);

void realityInlineTransfer(gcmContextData *context,const u32 dstOffset,const void *srcAddress,const u32 sizeInWords,const u8 location);

#ifdef __cplusplus
}
#endif
