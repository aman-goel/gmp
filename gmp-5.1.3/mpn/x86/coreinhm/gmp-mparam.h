/* x86/coreinhm gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,
2008, 2009, 2010, 2011 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 32
#define BYTES_PER_MP_LIMB 4

/* Generated by tuneup.c, 2011-11-25, gcc 4.5 */

#define MOD_1_NORM_THRESHOLD                24
#define MOD_1_UNNORM_THRESHOLD              15
#define MOD_1N_TO_MOD_1_1_THRESHOLD          8
#define MOD_1U_TO_MOD_1_1_THRESHOLD          7
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        11
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      5
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           16

#define MUL_TOOM22_THRESHOLD                28
#define MUL_TOOM33_THRESHOLD                81
#define MUL_TOOM44_THRESHOLD               214
#define MUL_TOOM6H_THRESHOLD               306
#define MUL_TOOM8H_THRESHOLD               454

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     137
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     148
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     132
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     131

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 42
#define SQR_TOOM3_THRESHOLD                149
#define SQR_TOOM4_THRESHOLD                226
#define SQR_TOOM6_THRESHOLD                333
#define SQR_TOOM8_THRESHOLD                494

#define MULMID_TOOM42_THRESHOLD             78

#define MULMOD_BNM1_THRESHOLD               17
#define SQRMOD_BNM1_THRESHOLD               21

#define POWM_SEC_TABLE  2,33,294,1298,2870

#define MUL_FFT_MODF_THRESHOLD             606  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    606, 5}, {     28, 6}, {     15, 5}, {     33, 6}, \
    {     29, 7}, {     15, 6}, {     33, 7}, {     17, 6}, \
    {     36, 7}, {     19, 6}, {     39, 7}, {     23, 6}, \
    {     47, 7}, {     29, 8}, {     15, 7}, {     37, 8}, \
    {     19, 7}, {     41, 8}, {     23, 7}, {     47, 8}, \
    {     31, 7}, {     63, 8}, {     43, 9}, {     23, 8}, \
    {     51, 9}, {     31, 8}, {     67, 9}, {     39, 8}, \
    {     79, 9}, {     47, 8}, {     95,10}, {     31, 9}, \
    {     79,10}, {     47, 9}, {     95,11}, {     31,10}, \
    {     63, 9}, {    135,10}, {     79, 9}, {    159,10}, \
    {     95, 9}, {    191,11}, {     63,10}, {    159,11}, \
    {     95,10}, {    191,12}, {     63,11}, {    127,10}, \
    {    255, 9}, {    511,10}, {    271,11}, {    159,10}, \
    {    319, 9}, {    639,10}, {    335,11}, {    191,10}, \
    {    383, 9}, {    767,10}, {    399,12}, {   4096,13}, \
    {   8192,14}, {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 63
#define MUL_FFT_THRESHOLD                 6784

#define SQR_FFT_MODF_THRESHOLD             505  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    505, 5}, {     28, 6}, {     15, 5}, {     33, 6}, \
    {     17, 5}, {     35, 6}, {     29, 7}, {     15, 6}, \
    {     33, 7}, {     17, 6}, {     36, 7}, {     19, 6}, \
    {     39, 7}, {     23, 6}, {     47, 7}, {     29, 8}, \
    {     15, 7}, {     35, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     47, 8}, {     27, 7}, {     55, 8}, \
    {     31, 7}, {     63, 8}, {     43, 9}, {     23, 8}, \
    {     55, 9}, {     31, 8}, {     67, 9}, {     39, 8}, \
    {     79, 9}, {     47, 8}, {     95, 9}, {     55,10}, \
    {     31, 9}, {     79,10}, {     47, 9}, {     95,11}, \
    {     31,10}, {     63, 9}, {    135,10}, {     79, 9}, \
    {    159,10}, {     95,11}, {     63,10}, {    143, 9}, \
    {    287,10}, {    159,11}, {     95,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,10}, {    271, 9}, \
    {    543,10}, {    287,11}, {    159,10}, {    319, 9}, \
    {    639,10}, {    335, 9}, {    671,10}, {    351,11}, \
    {    191,10}, {    383, 9}, {    767,10}, {    399, 9}, \
    {    799,10}, {    415,12}, {   4096,13}, {   8192,14}, \
    {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 74
#define SQR_FFT_THRESHOLD                 4800

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  35
#define MULLO_MUL_N_THRESHOLD            13463

#define DC_DIV_QR_THRESHOLD                 21
#define DC_DIVAPPR_Q_THRESHOLD              42
#define DC_BDIV_QR_THRESHOLD                84
#define DC_BDIV_Q_THRESHOLD                156

#define INV_MULMOD_BNM1_THRESHOLD           54
#define INV_NEWTON_THRESHOLD                17
#define INV_APPR_THRESHOLD                  17

#define BINV_NEWTON_THRESHOLD              348
#define REDC_1_TO_REDC_N_THRESHOLD          83

#define MU_DIV_QR_THRESHOLD                979
#define MU_DIVAPPR_Q_THRESHOLD             501
#define MUPI_DIV_QR_THRESHOLD                0  /* always */
#define MU_BDIV_QR_THRESHOLD              1589
#define MU_BDIV_Q_THRESHOLD               1787

#define MATRIX22_STRASSEN_THRESHOLD         20
#define HGCD_THRESHOLD                      57
#define HGCD_APPR_THRESHOLD                 50
#define HGCD_REDUCE_THRESHOLD             3524
#define GCD_DC_THRESHOLD                   253
#define GCDEXT_DC_THRESHOLD                233
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        20
#define SET_STR_DC_THRESHOLD               127
#define SET_STR_PRECOMPUTE_THRESHOLD       646
