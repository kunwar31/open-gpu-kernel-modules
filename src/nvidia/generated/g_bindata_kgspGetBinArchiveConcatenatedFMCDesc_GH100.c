/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */


/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT! */



#if defined(BINDATA_INCLUDE_DATA)
//
// FUNCTION: kgspGetBinArchiveConcatenatedFMCDesc_GH100("ucode_desc_prod")
// FILE NAME: kernel/inc/gspcc/bin/g_gsp_gh100_dyn_cc_prd_desc.bin
// FILE TYPE: BINARY
// VAR NAME: N/A
// COMPRESSION: YES
// COMPLEX_STRUCT: NO
// DATA SIZE (bytes): 84
// COMPRESSED SIZE (bytes): 28
//
static BINDATA_CONST NvU8 kgspBinArchiveConcatenatedFMCDesc_GH100_ucode_desc_prod_data[] = 
{
    0x63, 0x65, 0x20, 0x02, 0x70, 0x41, 0xf1, 0x0a, 0x20, 0xde, 0x04, 0xc4, 0x37, 0x19, 0x19, 0x18,
    0xf1, 0xe8, 0x03, 0x00, 0x92, 0x10, 0x68, 0x6c, 0x54, 0x00, 0x00, 0x00,
};
#endif // defined(BINDATA_INCLUDE_DATA)

#if defined(BINDATA_INCLUDE_STORAGE_PVT_DECL)
BINDATA_STORAGE_PVT kgspBinArchiveConcatenatedFMCDesc_GH100_ucode_desc_prod_storage_pvt;
#endif // defined(BINDATA_INCLUDE_STORAGE_PVT_DECL)

#if defined(BINDATA_INCLUDE_STORAGE_PVT_DEFN)
{
    84,                                                                // uncompressed data size (bytes)
    28,                                                                // compressed data size (bytes)
    kgspBinArchiveConcatenatedFMCDesc_GH100_ucode_desc_prod_data,      // compressed data pointer
    NV_TRUE,                                                           // is pData compressed?
    NV_TRUE,                                                           // contain information for file overriding?
    NV_FALSE,                                                          // is the data referenced during load? (Only valid when BINDATA_IS_MUTABLE is true)
},
#endif // defined(BINDATA_INCLUDE_STORAGE_PVT_DEFN)


#if defined(BINDATA_INCLUDE_ARCHIVE)
//
// Bindata Archive structure
//
static const BINDATA_ARCHIVE __kgspGetBinArchiveConcatenatedFMCDesc_GH100 =
{
    1,  // entryNum
    {
        // entries[] : { "name", pBinStorage }
        { "ucode_desc_prod"   , (const PBINDATA_STORAGE) &g_bindata_pvt.kgspBinArchiveConcatenatedFMCDesc_GH100_ucode_desc_prod_storage_pvt },
    }
};

#endif // defined(BINDATA_INCLUDE_ARCHIVE)



#if defined(BINDATA_INCLUDE_FUNCTION)
const BINDATA_ARCHIVE *kgspGetBinArchiveConcatenatedFMCDesc_GH100(struct KernelGsp *pKernelGsp)
{
    return &__kgspGetBinArchiveConcatenatedFMCDesc_GH100;
}
#endif // defined(BINDATA_INCLUDE_FUNCTION)


#if defined(BINDATA_INCLUDE_FUNCTION_STUB)
const BINDATA_ARCHIVE *kgspGetBinArchiveConcatenatedFMCDesc_GH100(struct KernelGsp *pKernelGsp)
{
    return NULL;
}
#endif // defined(BINDATA_INCLUDE_FUNCTION_STUB)





