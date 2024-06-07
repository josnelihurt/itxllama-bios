/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD Family_14 Microcode patch.
 *
 * Fam14 Microcode Patch rev 05000101 for 5020 or equivalent.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/FAMILY/0x14
 * @e \$Revision: 37850 $   @e \$Date: 2010-09-13 18:09:57 -0400 (Mon, 13 Sep 2010) $
 *
 */
/*
 ******************************************************************************
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
 ******************************************************************************
 */
/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

// Encrypt Patch code 05000101 for 5020 and equivalent

CONST MICROCODE_PATCHES ROMDATA CpuF14MicrocodePatch05000101 =
{{
  0x11,
  0x20,
  0x06,
  0x04,
  0x01,
  0x01,
  0x00,
  0x05,
  0x01,
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x50,
  0x00,
  0x00,
  0x00,
  0xaa,
  0xaa,
  0xaa,
  0x01,
  0xe9,
  0xee,
  0x42,
  0x6b,
  0x45,
  0xbd,
  0xcf,
  0x76,
  0xf0,
  0x6d,
  0x38,
  0xf1,
  0x7e,
  0x5e,
  0xb7,
  0x22,
  0x7d,
  0xdb,
  0x04,
  0xff,
  0xa4,
  0xb6,
  0x6c,
  0x5d,
  0x03,
  0x3d,
  0x35,
  0x7d,
  0x41,
  0x02,
  0x97,
  0x28,
  0xc9,
  0x02,
  0xd6,
  0x84,
  0xb6,
  0x3d,
  0xe6,
  0x2f,
  0x30,
  0x3f,
  0xc6,
  0x8c,
  0x5a,
  0xe3,
  0xbf,
  0x50,
  0x92,
  0xd7,
  0x1c,
  0x86,
  0xde,
  0xb9,
  0x48,
  0x63,
  0x02,
  0xa2,
  0xe6,
  0x80,
  0x7a,
  0x73,
  0x4f,
  0xe8,
  0xf7,
  0xee,
  0x3c,
  0xfc,
  0x8c,
  0xf3,
  0x9b,
  0x34,
  0x84,
  0x37,
  0x99,
  0x4a,
  0x8b,
  0x7d,
  0xbb,
  0xa8,
  0x30,
  0xf0,
  0x2f,
  0xad,
  0xac,
  0x74,
  0x14,
  0x18,
  0xa6,
  0x49,
  0x70,
  0x2d,
  0x75,
  0xe1,
  0x7e,
  0x97,
  0xa6,
  0xd6,
  0xc0,
  0xc7,
  0x7d,
  0x4f,
  0x1a,
  0x69,
  0xbf,
  0xb6,
  0xd5,
  0x5e,
  0xb8,
  0x66,
  0x63,
  0xd7,
  0xed,
  0x5c,
  0x07,
  0x02,
  0xb7,
  0x9e,
  0xc8,
  0x41,
  0x19,
  0x1f,
  0x72,
  0x02,
  0x5c,
  0xa7,
  0x58,
  0xd2,
  0x30,
  0x42,
  0x54,
  0x4f,
  0xd4,
  0xc7,
  0xc7,
  0x5e,
  0x35,
  0x5e,
  0x79,
  0x9a,
  0x82,
  0x31,
  0xa9,
  0xe3,
  0x56,
  0x15,
  0x63,
  0x29,
  0xe6,
  0xfc,
  0x8a,
  0xa6,
  0x50,
  0x9b,
  0xec,
  0xe1,
  0x1c,
  0x1d,
  0xef,
  0xcb,
  0x6f,
  0x08,
  0x4d,
  0x8a,
  0x5e,
  0xa8,
  0xb6,
  0x97,
  0x6c,
  0x97,
  0x32,
  0x0b,
  0x8a,
  0x26,
  0x44,
  0xce,
  0xdd,
  0xbb,
  0xdd,
  0xa3,
  0x53,
  0xc1,
  0x22,
  0xfd,
  0xf6,
  0xb2,
  0x5b,
  0x94,
  0x6e,
  0x47,
  0x48,
  0xae,
  0xc8,
  0xfb,
  0x5d,
  0x43,
  0x29,
  0xd2,
  0x37,
  0xd6,
  0xc0,
  0x3c,
  0x00,
  0xb0,
  0x8f,
  0xa7,
  0x4b,
  0x9d,
  0x33,
  0xb3,
  0x17,
  0xfb,
  0x12,
  0x0e,
  0x52,
  0xe3,
  0xd5,
  0xfe,
  0xf9,
  0xf4,
  0x25,
  0xf3,
  0x91,
  0xe1,
  0x9a,
  0x26,
  0x5a,
  0x47,
  0xfe,
  0xb9,
  0xb8,
  0xc9,
  0x12,
  0x74,
  0xca,
  0x50,
  0x54,
  0x1e,
  0x57,
  0x39,
  0x40,
  0xec,
  0x5e,
  0x71,
  0x07,
  0xc4,
  0x72,
  0x58,
  0xb1,
  0xb8,
  0xf9,
  0x30,
  0x39,
  0x77,
  0x8b,
  0x7c,
  0xaf,
  0x08,
  0xdf,
  0x27,
  0xae,
  0x42,
  0xe7,
  0x45,
  0xf0,
  0x05,
  0x9a,
  0xfa,
  0x30,
  0x3f,
  0xaf,
  0x8b,
  0xf0,
  0xcf,
  0xab,
  0x48,
  0x96,
  0x65,
  0x8e,
  0xde,
  0x3f,
  0x9f,
  0x65,
  0x42,
  0x96,
  0x6a,
  0x19,
  0xb6,
  0xb9,
  0xd5,
  0x53,
  0x0c,
  0x21,
  0xe9,
  0xd7,
  0xf6,
  0xd1,
  0xc8,
  0x59,
  0x17,
  0xdb,
  0x77,
  0x91,
  0x19,
  0xb9,
  0xb9,
  0xb6,
  0x3a,
  0x65,
  0xbe,
  0x65,
  0x79,
  0x77,
  0x83,
  0xc4,
  0x9f,
  0xae,
  0xc5,
  0x76,
  0x29,
  0x39,
  0x44,
  0x2f,
  0x06,
  0x6d,
  0x08,
  0xbb,
  0x33,
  0x27,
  0x4e,
  0x50,
  0x43,
  0x9f,
  0x88,
  0x28,
  0xb6,
  0x57,
  0x8e,
  0x53,
  0x15,
  0x20,
  0xb0,
  0xf8,
  0x78,
  0x24,
  0x32,
  0xf8,
  0xf7,
  0x45,
  0x4b,
  0x05,
  0xa4,
  0xe0,
  0xbe,
  0xfe,
  0xc5,
  0x70,
  0xd3,
  0xbe,
  0x70,
  0xd7,
  0xa2,
  0xf6,
  0x33,
  0x4f,
  0x57,
  0x34,
  0xbc,
  0x36,
  0x3e,
  0x78,
  0x92,
  0xfc,
  0xcd,
  0x4e,
  0xe0,
  0x64,
  0x69,
  0x4f,
  0x49,
  0x07,
  0x07,
  0x32,
  0xba,
  0x52,
  0x01,
  0xcb,
  0xb7,
  0x8f,
  0x92,
  0x4c,
  0x0f,
  0x6d,
  0x27,
  0x8c,
  0x9c,
  0x0a,
  0x53,
  0x5d,
  0x70,
  0xd8,
  0xb2,
  0x2f,
  0xe5,
  0x42,
  0x10,
  0x0f,
  0x71,
  0x90,
  0x71,
  0xea,
  0x9c,
  0x3d,
  0xa4,
  0x7f,
  0x1a,
  0xcc,
  0x1b,
  0xd3,
  0x75,
  0x6f,
  0x3a,
  0xaa,
  0xa7,
  0xaf,
  0x97,
  0x2c,
  0xf4,
  0x16,
  0x03,
  0xe0,
  0x0c,
  0xfc,
  0xe8,
  0x8b,
  0x42,
  0x5f,
  0x4e,
  0x6b,
  0xc1,
  0x99,
  0x4a,
  0x7f,
  0x50,
  0x45,
  0x81,
  0x51,
  0x2c,
  0xab,
  0x1e,
  0x90,
  0x78,
  0xf5,
  0xb5,
  0x41,
  0xf0,
  0x9d,
  0xd1,
  0x7e,
  0x98,
  0x16,
  0x66,
  0xba,
  0xa3,
  0xa3,
  0xf5,
  0x69,
  0xa3,
  0x5d,
  0x64,
  0x2d,
  0x1f,
  0x07,
  0x5a,
  0x84,
  0x62,
  0x6d,
  0xa2,
  0xa7,
  0xbb,
  0x12,
  0x18,
  0x33,
  0x17,
  0x57,
  0x5f,
  0x0a,
  0x11,
  0x6a,
  0x39,
  0x61,
  0x9f,
  0x77,
  0x9e,
  0xcc,
  0xe6,
  0x74,
  0xee,
  0x42,
  0x16,
  0x34,
  0xf0,
  0x22,
  0xe5,
  0xf6,
  0xef,
  0xc7,
  0xfe,
  0x40,
  0xed,
  0xbd,
  0xa6,
  0xe4,
  0x38,
  0x5a,
  0x46,
  0x98,
  0x63,
  0x24,
  0xac,
  0x1a,
  0x42,
  0x04,
  0x50,
  0x92,
  0x77,
  0x22,
  0x8e,
  0xfc,
  0x25,
  0xcc,
  0x70,
  0x9c,
  0x47,
  0x79,
  0xca,
  0x98,
  0x58,
  0x27,
  0x21,
  0x99,
  0x93,
  0x13,
  0xdd,
  0x0b,
  0xe1,
  0x1f,
  0xd3,
  0x9b,
  0x71,
  0xe2,
  0xac,
  0xd5,
  0x04,
  0xf2,
  0x99,
  0x0e,
  0x02,
  0x40,
  0x59,
  0xff,
  0x0b,
  0x80,
  0x3f,
  0x44,
  0x3e,
  0xd1,
  0xc7,
  0x53,
  0x0b,
  0x49,
  0x47,
  0xc4,
  0xdf,
  0x98,
  0x4b,
  0xc9,
  0x64,
  0xd2,
  0x2e,
  0xfd,
  0x3e,
  0x29,
  0xa3,
  0xea,
  0x9a,
  0x61,
  0xee,
  0xac,
  0xc2,
  0x01,
  0x37,
  0x81,
  0x25,
  0x9f,
  0x52,
  0x61,
  0x63,
  0xf7,
  0xbe,
  0x9d,
  0x6c,
  0x53,
  0x22,
  0xcb,
  0x28,
  0xba,
  0xcb,
  0xc1,
  0xc2,
  0xf9,
  0x37,
  0xa2,
  0xd9,
  0xdc,
  0x72,
  0x10,
  0xf7,
  0xea,
  0xf4,
  0x00,
  0x8d,
  0xc4,
  0xfd,
  0xe2,
  0x53,
  0xf3,
  0xe9,
  0x2c,
  0xa6,
  0x84,
  0xe9,
  0xf8,
  0xdf,
  0xe8,
  0xcf,
  0xed,
  0xce,
  0x8b,
  0xc9,
  0xef,
  0x8f,
  0xcf,
  0x17,
  0xe2,
  0x13,
  0xa4,
  0xfa,
  0x82,
  0xb8,
  0x9b,
  0x9e,
  0xd3,
  0x14,
  0xed,
  0x33,
  0x67,
  0xdc,
  0x88,
  0x4e,
  0x46,
  0x3d,
  0xe1,
  0x1a,
  0xe7,
  0x18,
  0xd8,
  0xe9,
  0xc1,
  0xe3,
  0x71,
  0x3a,
  0x10,
  0x9e,
  0x47,
  0xa9,
  0x27,
  0xfe,
  0x7e,
  0x9f,
  0x06,
  0x55,
  0x1b,
  0xa2,
  0xbd,
  0x40,
  0xc3,
  0xc8,
  0x6b,
  0xe3,
  0x4b,
  0xff,
  0x95,
  0x73,
  0xeb,
  0xff,
  0xe9,
  0x26,
  0xc6,
  0x5a,
  0x2f,
  0xc4,
  0x5e,
  0x45,
  0xf4,
  0xd9,
  0x4e,
  0x88,
  0x0a,
  0xaf,
  0x29,
  0xfb,
  0x09,
  0x29,
  0xe5,
  0x86,
  0xb7,
  0x87,
  0x5f,
  0xea,
  0x4b,
  0xc4,
  0x42,
  0x88,
  0x3b,
  0xfc,
  0x34,
  0x57,
  0x3d,
  0xf4,
  0xef,
  0xee,
  0x14,
  0x28,
  0x7b,
  0x6c,
  0x05,
  0x41,
  0xe9,
  0x28,
  0xd8,
  0xd5,
  0xba,
  0x71,
  0x7a,
  0x52,
  0x89,
  0x2f,
  0x86,
  0x38,
  0x32,
  0x9f,
  0xbd,
  0x3c,
  0xa0,
  0x89,
  0x5c,
  0xb5,
  0x8d,
  0xb9,
  0x90,
  0x6c,
  0xb2,
  0xd5,
  0x59,
  0x73,
  0xa4,
  0x30,
  0xa9,
  0xf3,
  0x58,
  0xfb,
  0xc6,
  0x3c,
  0x0b,
  0x45,
  0xac,
  0x7d,
  0x72,
  0x32,
  0xa6,
  0x30,
  0x76,
  0x3a,
  0xde,
  0xf6,
  0x98,
  0xfc,
  0xca,
  0x69,
  0xbf,
  0xa9,
  0xf0,
  0x17,
  0x7a,
  0xc4,
  0x54,
  0x49,
  0x8e,
  0x91,
  0xa6,
  0x59,
  0xab,
  0x2b,
  0x84,
  0xb3,
  0x90,
  0xab,
  0xf8,
  0xf0,
  0x7d,
  0x6d,
  0xa3,
  0x33,
  0xb5,
  0x7d,
  0xe0,
  0x4b,
  0x9e,
  0x39,
  0x67,
  0x92,
  0x1a,
  0x56,
  0xa9,
  0x9c,
  0x95,
  0x34,
  0xd7,
  0x1d,
  0x0b,
  0x45,
  0x9d,
  0xa5,
  0x82,
  0x39,
  0x36,
  0x35,
  0x31,
  0xe3,
  0x73,
  0xf7,
  0x79,
  0xda,
  0x0b,
  0x0d,
  0xea,
  0x6b,
  0x8a,
  0xff,
  0xc0,
  0x2a,
  0x3f,
  0x7a,
  0x9c,
  0x9e,
  0xbd,
  0x53,
  0x65,
  0x1c,
  0x8c,
  0xed,
  0xb5,
  0x45,
  0x85,
  0xa4,
  0xfb,
  0xa9,
  0xb0,
  0xf3,
  0x3c,
  0xe5,
  0xc2,
  0xb5,
  0xb0,
  0xf2,
  0x7f,
  0xf1,
  0x2d,
  0xa1,
  0xe7,
  0x2f,
  0xa3,
  0x67,
  0xf4,
  0xd6,
  0x4b,
  0xa7,
  0xb5,
  0xb9,
  0xc3,
  0x28,
  0x80,
  0x52,
  0xd2,
  0x44,
  0x18,
  0x20,
  0xca,
  0x58,
  0x74,
  0x11,
  0x23,
  0x53,
  0x79,
  0x10,
  0xd5,
  0xf3,
  0x85,
  0xda,
  0x31,
  0x1c,
  0x4e,
  0x42,
  0x6c,
  0x16,
  0x9f,
  0x4d,
  0xfa,
  0x2d,
  0x24,
  0x26,
  0xcd,
  0xc1,
  0x74,
  0x3c,
  0x06,
  0xe0,
  0x1d,
  0xcf,
  0xee,
  0x55,
  0x6a,
  0xa2,
  0x23,
  0x00,
  0x0a,
  0x69,
  0x4a,
  0x9a,
  0xd1,
  0x58,
  0xfe,
  0xe3,
  0x25,
  0x13,
  0xef,
  0xde,
  0x87,
  0x5b,
  0x25,
  0xa9,
  0xba,
  0x3b,
  0x9d,
  0xd0,
  0xb2,
  0xbb,
  0xc4,
  0x17,
  0x72,
  0xe4,
  0xeb,
  0x02,
  0x8f,
  0x08,
  0x4a,
  0x57,
  0xee,
  0x58,
  0x3f,
  0x7a,
  0x24,
  0xef,
  0x8b,
  0xe3,
  0xbb,
  0xeb,
  0x7b,
  0x5a,
  0x02,
  0x24,
  0x74,
  0xfb,
  0xe1,
  0x03,
  0xe4,
  0x8c,
  0x3e,
  0x7b,
  0xe8,
  0x5f,
  0x38,
  0x0d,
  0x78,
  0x3d,
  0x89,
  0xff,
  0xa6,
  0x17,
  0xb0,
  0xdd,
  0x80,
  0x3b,
  0x60,
  0x62,
  0x81,
  0x7b,
  0x55,
  0xc7,
  0xc6,
  0x69,
  0xda,
  0xf7,
  0x17,
  0xa3,
  0x2f,
  0xf9,
  0x00,
  0x77,
  0x4b,
  0x3f,
  0xfd,
  0x94,
  0x08,
  0x10,
  0x35,
  0xb6,
  0x3d,
  0xa1,
  0x1d,
  0x8f,
  0x0e,
  0xcc,
  0xe5,
  0xe7,
  0x19,
  0x86,
  0x13,
  0xea,
  0x5f,
  0x08,
  0x7a,
  0x4f,
  0x59,
  0x72,
  0x59,
  0xa5,
  0xc1,
  0x93,
  0x60,
  0x46,
  0x7d,
  0x99,
  0xf7,
  0xff,
  0x85,
  0x9b,
  0x63,
  0x15,
  0x7f,
  0xb3,
  0xab,
  0xfb,
  0x49,
  0xd9,
  0xcf,
  0xdd,
  0xe7,
  0x6a,
  0x9b,
  0xeb,
  0x97,
  0x34,
  0x08,
  0x11,
  0xa9,
  0x3e,
  0x49,
  0x21,
  0xe5,
  0x74,
  0xf0,
  0x6e,
  0x9a,
  0x47,
  0x51,
  0xc0,
  0x3f,
  0x5f,
  0xa3,
  0xf0,
  0xf8,
  0x37,
  0x3e,
  0xc7,
  0xb2,
  0xd9,
  0x6f,
  0xc9,
  0x15,
  0x9d,
  0x3f,
  0xa3,
  0x00,
  0xec,
  0x1b,
  0xec,
  0x03,
  0xd7,
  0x4b,
  0x45,
  0x0a,
  0xb6,
  0xbd,
  0xac,
  0x5f,
  0xdf,
  0x47,
  0x0c,
  0x3a,
  0xd6,
  0x71,
  0xaf,
  0x5f,
  0x73,
  0xbd,
  0x31,
  0xf9,
  0xa6,
  0x41,
  0x27,
  0x6a,
  0x01,
  0x22,
  0xc5,
  0x1c,
  0x9f,
  0x24,
  0x88,
  0xd2,
  0xa5,
  0x7b,
  0x03,
  0xd5,
  0x91,
  0x50,
  0x1a,
  0xfc,
  0x40,
  0x32,
  0x3d,
  0x05,
  0x2f,
  0xda,
  0x67,
  0x04,
  0x0e,
  0x9b,
  0x6b,
  0xfd,
  0xa5,
  0xba,
  0xe3,
  0x85,
  0x23,
  0x7c,
  0x35,
  0x70,
  0x06,
  0x38,
  0x15,
  0x4f,
  0x29,
  0x98,
  0xaa,
  0x83,
  0xc0,
  0xf2,
  0xd3,
  0x29,
  0x78,
  0xbd,
  0x7c,
  0x58,
  0x15,
  0xb0,
  0x15,
  0x13,
  0x46,
  0x47,
  0xa8,
  0x09,
  0xec,
  0x79,
  0x40,
  0x62,
  0xd4,
  0xf3,
  0x05,
  0xc7,
  0x49,
  0x75,
  0x9f,
  0x16,
  0xf7,
  0x2d,
  0xd8,
  0x11,
  0xed,
  0x4a,
  0x0e,
  0xe4,
  0x41,
  0xa1,
  0xe6,
  0x20,
  0x09,
  0x44,
  0x77,
  0xbb,
  0xaa,
  0x2b,
  0xaf,
  0x4c,
  0x89,
  0x89,
  0x30,
  0x71,
  0xf2,
  0xe4,
  0x57,
  0xd3,
  0xa1,
  0x08,
  0x6a,
  0x92,
  0xcc,
  0xa1,
  0x30,
  0x16,
  0xe1,
  0xb0,
  0x7a,
  0x84,
  0xfb,
  0xd6,
  0x68,
  0xee,
  0x34,
  0xd6,
  0x61,
  0x62,
  0x2d,
  0xde,
  0x9c,
  0x08,
  0xdb,
  0x45,
  0x47,
  0x8f,
  0xc6,
  0xf9,
  0x26,
  0xfd,
  0xc2,
  0xdc,
  0xc2,
  0xfe,
  0xcd,
  0x2b,
  0xde,
  0x66,
  0x95,
  0x36,
  0x63,
  0x42,
  0x8f,
  0x72,
  0x52,
  0x8b,
  0x5a,
  0x6c,
  0x1f,
  0x8c,
  0x90,
  0x50,
  0xf8,
  0xec,
  0x9c,
  0xcb,
  0xb2,
  0xfa,
  0x29,
  0x57,
  0xaa,
  0x99,
  0x66,
  0x49,
  0xac,
  0x87,
  0x76,
  0xfd,
  0xa9,
  0x44,
  0x7e,
  0x40,
  0x66,
  0x0e,
  0xcc,
  0x74,
  0x75,
  0x21,
  0xa7,
  0xae,
  0xe0,
  0xeb,
  0x06,
  0x59,
  0xf6,
  0x05,
  0xd9,
  0x05,
  0xde,
  0x91,
  0x64,
  0xb5,
  0x38,
  0x13,
  0x68,
  0x1a,
  0xd2,
  0x84,
  0x5c,
  0x5f,
  0x06,
  0x41,
  0x5b,
  0x2e,
  0x8d,
  0xa7,
  0x6f,
  0x04,
  0x86,
  0x93,
  0xf3,
  0xca,
  0xee,
  0x1f,
  0xe3,
  0xc6,
  0x31,
  0x1b,
  0xaf,
  0xa0,
  0x89,
  0xa1,
  0xb2,
  0x30,
  0x37,
  0x3d,
  0x4d,
  0x92,
  0x9e,
  0x77,
  0x20,
  0xe5,
  0xe9,
  0xb7,
  0x64,
  0xbe,
  0x4e,
  0x08,
  0x79,
  0x8d,
  0xe6,
  0x24,
  0x1b,
  0x26,
  0x62,
  0x18,
  0xc5,
  0x27,
  0xb0,
  0x47,
  0x18,
  0x51,
  0xf4,
  0xb8,
  0x1a,
  0x7b,
  0xda,
  0xf1,
  0xa2,
  0x34,
  0x6e,
  0xa8,
  0x75,
  0x61,
  0x79,
  0x99,
  0x2d,
  0x49,
  0x79,
  0xe8,
  0x85,
  0x6e,
  0xc8,
  0x36,
  0xd7,
  0xba,
  0x3d,
  0x67,
  0xeb,
  0x20,
  0x36,
  0x42,
  0x6f,
  0xe8,
  0x5a,
  0xde,
  0x34,
  0xa9,
  0xce,
  0xac,
  0x4d,
  0xeb,
  0x77,
  0x7a,
  0x1f,
  0x93,
  0xd4,
  0xdf,
  0x32,
  0x43,
  0x8f,
  0x81,
  0x43,
  0xc9,
  0xa1,
  0xc9,
  0xc5,
  0xe6,
  0x81,
  0xb7,
  0xc4,
  0x10,
  0x09,
  0x74,
  0xa8,
  0xa9,
  0xc3,
  0x36,
  0x25,
  0x91,
  0x7f,
  0xfc,
  0xb6,
  0x78,
  0xae,
  0x12,
  0xa3,
  0x47,
  0xe0,
  0xde,
  0x3f,
  0xd9,
  0xad,
  0x1e,
  0x7b,
  0xda,
  0xab,
  0xe3,
  0x6e,
  0xeb,
  0xeb,
  0x86,
  0xad,
  0x8a,
  0x44,
  0x90,
  0x0d,
  0x34,
  0x80,
  0x00,
  0x6a,
  0x6b,
  0x62,
  0x31,
  0xb3,
  0xa8,
  0x10,
  0x8a,
  0x06,
  0x94,
  0x97,
  0x88,
  0x3e,
  0x5d,
  0x0c,
  0xff,
  0xee,
  0xd7,
  0x22,
  0x6b,
  0x6e,
  0x8a,
  0xf1,
  0xa1,
  0x1c,
  0x59,
  0x2c,
  0x3f,
  0x99,
  0xcf,
  0xea,
  0x1b,
  0x11,
  0x23,
  0x96,
  0x80,
  0x21,
  0x58,
  0xff,
  0xc4,
  0x6a,
  0xb0,
  0xd1,
  0x7d,
  0xd4,
  0xe7,
  0x1a,
  0x68,
  0xd7,
  0x00
}};

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */