/*
 * OpenMAMA: The open middleware agnostic messaging API
 * Copyright (C) 2011 NYSE Technologies, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef MamaPayloadLibraryManagerH__
#define MamaPayloadLibraryManagerH__

#include <mama/types.h>
#include "librarymanager.h"
#include <mama/msg.h>

#if defined(__cplusplus)
extern "C"
{
#endif /* __cplusplus */

extern mama_status
mamaPayloadLibraryManager_create (mamaLibraryTypeManager manager);

extern void
mamaPayloadLibraryManager_destroy (void);

extern mama_status
mamaPayloadLibraryManager_loadLibrary (mamaLibrary library);

extern void
mamaPayloadLibraryManager_unloadLibrary (mamaLibrary library);

extern mamaLibraryType
mamaPayloadLibraryManager_classifyLibraryType (const char* libraryName,
                                               LIB_HANDLE  libraryLib);

extern mama_status
mamaPayloadLibraryManager_getBridges (mamaPayloadBridge* bridges,
                                      mama_size_t*       size);

/*Deprecated function for converting the payload enum to a string representation*/
extern const char*
mamaPayloadLibraryManager_convertToString (mamaPayloadType payloadType);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* MamaPayloadLibraryManagerH__ */

