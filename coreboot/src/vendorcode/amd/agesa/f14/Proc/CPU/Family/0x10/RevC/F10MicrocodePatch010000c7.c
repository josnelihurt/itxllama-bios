/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD Family_10 Microcode patch.
 *
 * Fam10 Microcode Patch rev 010000c7 for 1062 or equivalent.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/FAMILY/0x10/REVC
 * @e \$Revision: 35136 $   @e \$Date: 2010-07-16 11:29:48 +0800 (Fri, 16 Jul 2010) $
 *
 */
/*
 *****************************************************************************
 *
 * Copyright (c) 2011, Advanced Micro Devices, Inc.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of 
 *       its contributors may be used to endorse or promote products derived 
 *       from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * ***************************************************************************
 *
 */
/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"
CODE_GROUP (G1_PEICC)
RDATA_GROUP (G1_PEICC)
/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

// Patch code 010000c7 for 1062 and equivalent
CONST MICROCODE_PATCHES ROMDATA CpuF10MicrocodePatch010000c7 =
{
0x10,
0x20,
0x11,
0x03,
0xc7,
0x00,
0x00,
0x01,
0x00,
0x80,
0x20,
0x00,
0xb8,
0x53,
0x63,
0x1d,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x00,
0x62,
0x10,
0x00,
0x00,
0x00,
0xaa,
0xaa,
0xaa,
0x9a,
0x0b,
0x00,
0x00,
0x16,
0x0c,
0x00,
0x00,
0x55,
0x03,
0x00,
0x00,
0xff,
0xff,
0xff,
0xff,
0x51,
0x03,
0x00,
0x00,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0xff,
0x6f,
0x58,
0x39,
0x00,
0x81,
0x3f,
0xa0,
0xd7,
0x04,
0x00,
0xfc,
0xb7,
0x0f,
0xff,
0x58,
0xf7,
0x72,
0xc0,
0xff,
0x6f,
0x3c,
0xfc,
0x03,
0xfc,
0xc0,
0x18,
0xd5,
0x00,
0x80,
0xff,
0x66,
0x3c,
0xeb,
0xc0,
0x9f,
0xd9,
0x4d,
0xee,
0xf8,
0xff,
0xff,
0x83,
0x7f,
0xa6,
0x07,
0xe8,
0xff,
0xff,
0xe8,
0x1f,
0xbe,
0xb5,
0x00,
0x60,
0x2f,
0x6a,
0xbf,
0xe8,
0x04,
0xff,
0xf5,
0xf3,
0xf0,
0xaf,
0x7a,
0x00,
0xff,
0xd9,
0x31,
0xc0,
0x83,
0x3f,
0xff,
0x03,
0x88,
0xff,
0x58,
0xc8,
0x0f,
0xef,
0x35,
0x00,
0xd0,
0x00,
0xfb,
0xbf,
0x85,
0xff,
0x03,
0xd8,
0x72,
0xf8,
0xad,
0x1c,
0x80,
0xfb,
0x1f,
0xc0,
0xe7,
0xa0,
0xbe,
0x71,
0x00,
0x86,
0x7f,
0x40,
0xaf,
0x07,
0xff,
0x1e,
0x00,
0xf8,
0x6f,
0x95,
0x03,
0x50,
0xf4,
0x03,
0xf8,
0x1c,
0xf8,
0xff,
0x3f,
0x00,
0xf0,
0xee,
0x84,
0xfc,
0xfe,
0xff,
0xff,
0x22,
0xc3,
0x1f,
0x51,
0x96,
0x50,
0x16,
0x0d,
0x00,
0xf8,
0xfe,
0xfe,
0x01,
0x0e,
0xfc,
0xb1,
0x01,
0xe5,
0xa6,
0xff,
0x1f,
0x79,
0xf8,
0x07,
0xf8,
0x80,
0xff,
0xc0,
0x3f,
0xbf,
0xe1,
0x1f,
0xc0,
0x00,
0xfa,
0xbf,
0x07,
0x01,
0xfc,
0x3f,
0xe3,
0x3e,
0x0f,
0xfd,
0x50,
0x03,
0xb0,
0xdf,
0x8c,
0xf9,
0x3c,
0xf4,
0x43,
0x0e,
0xc0,
0xfd,
0x32,
0xe5,
0xf3,
0xd0,
0x0f,
0x03,
0x00,
0xfb,
0x24,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0xfc,
0x03,
0xf8,
0x0f,
0x01,
0xfc,
0x1b,
0xfe,
0xf0,
0x0f,
0xe0,
0x3f,
0x07,
0xf0,
0x6f,
0xf8,
0xef,
0x01,
0x80,
0xff,
0xff,
0xff,
0x00,
0xfd,
0xbb,
0x14,
0xf2,
0xc3,
0x2f,
0xf8,
0x13,
0xcc,
0x7f,
0x0c,
0xb8,
0x0e,
0x74,
0xf5,
0x03,
0xf0,
0xf8,
0x33,
0x03,
0x1c,
0x2b,
0xd7,
0x00,
0x00,
0xeb,
0xe5,
0x1f,
0x80,
0xc0,
0x1f,
0x1b,
0xe0,
0x9e,
0x9b,
0x7f,
0x00,
0x03,
0x7f,
0x6c,
0x80,
0xf8,
0x7d,
0xfe,
0x01,
0x0e,
0xfc,
0xb1,
0x01,
0xe0,
0x6d,
0x62,
0x00,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x01,
0xfc,
0x07,
0xfe,
0xfe,
0x0d,
0xff,
0x00,
0x00,
0xf0,
0xff,
0x3d,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0x1e,
0x00,
0xf8,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0x81,
0x7f,
0x00,
0xff,
0x3f,
0x80,
0x7f,
0xc3,
0x7f,
0x0f,
0x00,
0xfc,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xc0,
0x3f,
0x80,
0xe1,
0x1f,
0xc0,
0xbf,
0xfe,
0xbf,
0x07,
0x00,
0xfc,
0x07,
0xfe,
0x01,
0x0d,
0xff,
0x00,
0xfe,
0xf0,
0x1f,
0xf8,
0x07,
0x37,
0xfc,
0x03,
0xf8,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0xdf,
0x03,
0x00,
0xfe,
0x03,
0xff,
0xff,
0x86,
0x7f,
0x00,
0x03,
0xf8,
0x0f,
0xfc,
0xfc,
0x1b,
0xfe,
0x01,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x01,
0x80,
0xff,
0xef,
0x7f,
0x00,
0xff,
0x81,
0x80,
0x7f,
0xc3,
0x3f,
0xfe,
0x01,
0xfc,
0x07,
0x00,
0xfe,
0x0d,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xd7,
0x00,
0x00,
0xfa,
0xc0,
0x3f,
0x80,
0xff,
0x1f,
0xc0,
0xbf,
0xe1,
0x03,
0xff,
0x00,
0xfe,
0x7f,
0x00,
0xff,
0x86,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0xfc,
0x6b,
0x00,
0xe0,
0xfc,
0xff,
0x3f,
0xcb,
0xf0,
0x8f,
0x75,
0xff,
0xe5,
0xff,
0xff,
0x2c,
0xc3,
0x3f,
0xd6,
0xf5,
0x1c,
0xf0,
0xff,
0x8b,
0x0f,
0xff,
0x00,
0x3f,
0xf0,
0xff,
0x3d,
0x00,
0xe0,
0xbf,
0x18,
0x0f,
0x3a,
0xf0,
0x27,
0xf6,
0xd1,
0x35,
0xfe,
0x7f,
0xe7,
0xe1,
0x9f,
0xe8,
0x5f,
0xc6,
0xff,
0xff,
0xeb,
0x87,
0x7f,
0xaf,
0x00,
0xf8,
0xff,
0x1e,
0x07,
0xf0,
0xbf,
0xad,
0x03,
0x3c,
0xf8,
0x13,
0x1f,
0xc0,
0x7f,
0xf6,
0x45,
0xff,
0xf0,
0xad,
0xff,
0x04,
0xff,
0xff,
0x83,
0xad,
0xc3,
0x2f,
0x04,
0x00,
0x2c,
0x80,
0xfe,
0x03,
0xf8,
0xff,
0xb5,
0xe8,
0x1f,
0xbe,
0xff,
0xdf,
0x65,
0xfc,
0x07,
0x38,
0x6b,
0xf8,
0xee,
0xbf,
0x96,
0xff,
0x5f,
0xeb,
0xff,
0xe1,
0xbf,
0x07,
0x00,
0xfe,
0x07,
0xfe,
0xb5,
0xfc,
0xbf,
0x5a,
0x57,
0x0e,
0xbf,
0xad,
0x07,
0xf0,
0xf4,
0x13,
0xf9,
0x3c,
0xf8,
0x80,
0x3f,
0x81,
0xf0,
0xcb,
0x60,
0xeb,
0xff,
0xdf,
0x03,
0x00,
0xfe,
0xb7,
0xf5,
0x00,
0x07,
0x7f,
0x62,
0x80,
0xf8,
0x0f,
0xfc,
0x03,
0x1f,
0xbe,
0xb5,
0xe8,
0x60,
0x7c,
0xc0,
0x9f,
0x75,
0xf8,
0x65,
0xb0,
0x00,
0x04,
0x90,
0x00,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x01,
0xfc,
0x07,
0xfe,
0xfe,
0x0d,
0xff,
0x00,
0x07,
0xf0,
0x1f,
0xf8,
0xf8,
0x37,
0xfc,
0x03,
0x00,
0xc0,
0xff,
0xf7,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0xff,
0x00,
0xfe,
0x03,
0x00,
0xff,
0x86,
0x7f,
0xfc,
0x03,
0xf8,
0x0f,
0x01,
0xfc,
0x1b,
0xfe,
0x7b,
0x00,
0xe0,
0xff,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0x81,
0x7f,
0x00,
0xff,
0x3f,
0x80,
0x7f,
0xc3,
0x07,
0xfe,
0x01,
0xfc,
0xff,
0x00,
0xfe,
0x0d,
0xff,
0x3d,
0x00,
0xf0,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xc0,
0x3f,
0x80,
0xe1,
0x1f,
0xc0,
0xbf,
0xfe,
0x03,
0xff,
0x00,
0x86,
0x7f,
0x00,
0xff,
0xf8,
0xff,
0x1e,
0x00,
0xf0,
0x1f,
0xf8,
0x07,
0x37,
0xfc,
0x03,
0xf8,
0xc0,
0x7f,
0xe0,
0x1f,
0xdf,
0xf0,
0x0f,
0xe0,
0x00,
0xff,
0x81,
0x7f,
0x7f,
0xc3,
0x3f,
0x80,
0x00,
0xfc,
0x7f,
0x0f,
0x03,
0xf8,
0x0f,
0xfc,
0xfc,
0x1b,
0xfe,
0x01,
0x0f,
0xe0,
0x3f,
0xf0,
0xf0,
0x6f,
0xf8,
0x07,
0x3f,
0x80,
0xff,
0xc0,
0xc0,
0xbf,
0xe1,
0x1f,
0x07,
0x00,
0xfe,
0xbf,
0xfe,
0x01,
0xfc,
0x07,
0x00,
0xfe,
0x0d,
0xff,
0xf8,
0x07,
0xf0,
0x1f,
0x03,
0xf8,
0x37,
0xfc,
0xe0,
0x1f,
0xc0,
0x7f,
0x0f,
0xe0,
0xdf,
0xf0,
0xdf,
0x03,
0x00,
0xff,
0x03,
0xff,
0x00,
0xfe,
0x7f,
0x00,
0xff,
0x86,
0x0f,
0xfc,
0x03,
0xf8,
0xfe,
0x01,
0xfc,
0x1b,
0x3f,
0xf0,
0x0f,
0xe0,
0xf8,
0x07,
0xf0,
0x6f,
0xff,
0xef,
0x01,
0x80
};

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */
