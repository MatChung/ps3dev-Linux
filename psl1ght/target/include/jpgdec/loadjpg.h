/* libjpg.h

Copyright (c) 2010 Hermes <www.elotrolado.net>
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are 
permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice, this list of 
  conditions and the following disclaimer. 
- Redistributions in binary form must reproduce the above copyright notice, this list 
  of conditions and the following disclaimer in the documentation and/or other 
  materials provided with the distribution. 
- The names of the contributors may not be used to endorse or promote products derived 
  from this software without specific prior written permission. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY 
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL 
THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, 
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, 
STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF 
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef _LIBJPG_H_
#define _LIBJPG_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <jpgdec/jpgdec.h>

typedef struct JpgDatas {
	
	void * jpg_in;		// ignored except if char *filename == NULL in LoadPNG()
	uint32_t jpg_size;  // ignored except if char *filename == NULL  in LoadPNG()
	
	void * bmp_out;		// internally allocated (bmp 32 bits color ARGB format)

	int	wpitch;			// output width pitch in bytes
	int width;			// output
	int height;			// output
	
} JpgDatas;

int LoadJPG(JpgDatas *jpg, char *filename);

#ifdef __cplusplus
  }
#endif

#endif

