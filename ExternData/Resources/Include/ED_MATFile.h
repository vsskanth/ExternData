/* ED_MATFile.h - MAT functions header
 *
 * Copyright (C) 2015-2016, tbeu
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#if !defined(ED_MATFILE_H)
#define ED_MATFILE_H

#include <stdlib.h>

void* ED_createMAT(const char* fileName);
void ED_destroyMAT(void* _mat);
void ED_getDoubleArray2DFromMAT(void* _mat, const char* varName, double* a, size_t m, size_t n);

#if defined(_MSC_VER)
/* Visual Studio compatibility handling for linking hdf5.lib compiled by Visual Studio 2010 */

#if _MSC_VER >= 1400

#include <time.h>
#include "gconstructor.h"

extern long timezone = 0;

#if defined(G_HAS_CONSTRUCTORS)
#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(Timezone_initialize)
#endif
G_DEFINE_CONSTRUCTOR(Timezone_initialize)
static void Timezone_initialize(void) {
	_get_timezone(&timezone);
}
#endif

#endif

#if _MSC_VER >= 1900

#include <stdio.h>

extern FILE _iob[3];

#undef stdin
#undef stdout
#undef stderr
#define stdin _iob
#define stdout (_iob+1)
#define stderr (_iob+2)

FILE* __iob_func(void) {
	return _iob;
}

#pragma comment( lib, "legacy_stdio_definitions.lib" )

#endif

#endif

#endif
