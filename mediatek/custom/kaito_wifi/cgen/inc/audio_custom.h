/*******************************************************************************
 *
 * Filename:
 * ---------
 * aud_custom_exp.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * JY Huang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify audio parameter.
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify for Audio parameter
 *
 *    mtk80306
 * [DUMA00132370] waveform driver file re-structure.
 * waveform driver file re-structure.
 *
 * Jul 28 2009 mtk01352
 * [DUMA00009909] Check in TWO_IN_ONE_SPEAKER and rearrange
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_CUSTOM_H
#define AUDIO_CUSTOM_H

/* define Gain For Normal */
/* Normal volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_NOR_TON_VOL      8
#define GAIN_NOR_KEY_VOL      43
#define GAIN_NOR_MIC_VOL      26
#define GAIN_NOR_FMR_VOL      0
#define GAIN_NOR_SPH_VOL      20
#define GAIN_NOR_SID_VOL      100
#define GAIN_NOR_MED_VOL      25


/* define Gain For Headset */
/* Headset volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_HED_TON_VOL      8
#define GAIN_HED_KEY_VOL      24
#define GAIN_HED_MIC_VOL      20
#define GAIN_HED_FMR_VOL      24
#define GAIN_HED_SPH_VOL      12
#define GAIN_HED_SID_VOL      100
#define GAIN_HED_MED_VOL      12

/* define Gain For Handfree */
/* Handfree volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_HND_TON_VOL      15
#define GAIN_HND_KEY_VOL      24
#define GAIN_HND_MIC_VOL      20
#define GAIN_HND_FMR_VOL      24
#define GAIN_HND_SPH_VOL      6
#define GAIN_HND_SID_VOL      100
#define GAIN_HND_MED_VOL      12


/* 0: Input FIR coefficients for 2G/3G Normal mode */
/* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Input FIR coefficients for 2G/3G Handfree mode */
/* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Input FIR coefficients for VoIP Normal mode */
/* 5: Input FIR coefficients for VoIP Handfree mode */
#define SPEECH_INPUT_FIR_COEFF \
    66,  -404,   174,  -179,   -61,\
     -471,  -210,  -169,   509,  -348,\
      356,  1216, -2108,  2317, -1712,\
     3231, -1735,  3023, -5039,  4595,\
    -9686, 32767, 32767, -9686,  4595,\
    -5039,  3023, -1735,  3231, -1712,\
     2317, -2108,  1216,   356,  -348,\
      509,  -169,  -210,  -471,   -61,\
     -179,   174,  -404,    66,     0,\
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
      606,    59,   105,   707,   212,\
     -653,  -777,   149, -1360,   265,\
      279,   338, -1260,  1838, -2908,\
     3148, -5688,   894, -5858,  4868,\
   -10772, 23197, 23197,-10772,  4868,\
    -5858,   894, -5688,  3148, -2908,\
     1838, -1260,   338,   279,   265,\
    -1360,   149,  -777,  -653,   212,\
      707,   105,    59,   606,     0,\
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0

/* 0: Output FIR coefficients for 2G/3G Normal mode */
/* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Output FIR coefficients for 2G/3G Handfree mode */
/* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Output FIR coefficients for VoIP Normal mode */
/* 5: Output FIR coefficients for VoIP Handfree mode */
#define SPEECH_OUTPUT_FIR_COEFF \
       803,  -696,  1021,  -877,   889,\
       181,  -102,   270,  -877,  1435,\
     -1236,  1413, -3102,  3184, -3963,\
      4431, -6984,  4077, -9645, 12052,\
    -14934, 20675, 20675,-14934, 12052,\
     -9645,  4077, -6984,  4431, -3963,\
      3184, -3102,  1413, -1236,  1435,\
      -877,   270,  -102,   181,   889,\
      -877,  1021,  -696,   803,     0,\
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
     -778,   -56,   -46,  -676,   179,\
     -260,  -206, -1047,  -997,   593,\
     -991,  1785, -2027,  2628, -2700,\
     1707, -2221,  1304, -6527, -3602,\
    -3481, 20675, 20675, -3481, -3602,\
    -6527,  1304, -2221,  1707, -2700,\
     2628, -2027,  1785,  -991,   593,\
     -997, -1047,  -206,  -260,   179,\
     -676,   -46,   -56,  -778,     0,\
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0

#define   DG_DL_Speech    0xE3D
#define   DG_Microphone   0x1400
#define   FM_Record_Vol   6     /* 0 is smallest. each step increase 1dB.
                                    Be careful of distortion when increase too much.
                                    Generally, it's not suggested to tune this parameter */

/* 0: Input FIR coefficients for 2G/3G Normal mode */
/* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Input FIR coefficients for 2G/3G Handfree mode */
/* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Input FIR coefficients for VoIP Normal mode */
/* 5: Input FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Input_FIR_Coeff \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
      -34,   -33,    10,  -141,  -184,  -209,  -180,   106,   137,  -113,\
     -125,  -250,  -340,  -222,  -186,   -89,   240,    -1,  -718,  -848,\
     -450,   219,   665,   901,    16,  -363,   -59,  -608,  -716,  -139,\
     -248,   515,    68, -1493,  -800,  -487,  -662, -1598, -1275,  -619,\
      953, -3274,  2664,   184, 16422, 16422,   184,  2664, -3274,   953,\
     -619, -1275, -1598,  -662,  -487,  -800, -1493,    68,   515,  -248,\
     -139,  -716,  -608,   -59,  -363,    16,   901,   665,   219,  -450,\
     -848,  -718,    -1,   240,   -89,  -186,  -222,  -340,  -250,  -125,\
     -113,   137,   106,  -180,  -209,  -184,  -141,    10,   -33,   -34,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
      -34,   -33,    10,  -141,  -184,  -209,  -180,   106,   137,  -113,\
     -125,  -250,  -340,  -222,  -186,   -89,   240,    -1,  -718,  -848,\
     -450,   219,   665,   901,    16,  -363,   -59,  -608,  -716,  -139,\
     -248,   515,    68, -1493,  -800,  -487,  -662, -1598, -1275,  -619,\
      953, -3274,  2664,   184, 16422, 16422,   184,  2664, -3274,   953,\
     -619, -1275, -1598,  -662,  -487,  -800, -1493,    68,   515,  -248,\
     -139,  -716,  -608,   -59,  -363,    16,   901,   665,   219,  -450,\
     -848,  -718,    -1,   240,   -89,  -186,  -222,  -340,  -250,  -125,\
     -113,   137,   106,  -180,  -209,  -184,  -141,    10,   -33,   -34
#define WB_Speech_Output_FIR_Coeff \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,\
                                       \
       92,   101,    85,   -13,  -132,  -137,   -49,    15,     9,   -64,\
      -16,    94,   207,   113,   -11,   -56,    48,   -31,  -381,  -373,\
      -54,   371,   365,   164,   100,   152,  -113,  -434,  -626,    82,\
      596,   458,  -517,  -875,  -169,  1098,  1543,   163,  -739, -1664,\
    -1330, -1552,  1478,  9220, 20675, 20675,  9220,  1478, -1552, -1330,\
    -1664,  -739,   163,  1543,  1098,  -169,  -875,  -517,   458,   596,\
       82,  -626,  -434,  -113,   152,   100,   164,   365,   371,   -54,\
     -373,  -381,   -31,    48,   -56,   -11,   113,   207,    94,   -16,\
      -64,     9,    15,   -49,  -137,  -132,   -13,    85,   101,    92,\
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0

/*
 * The Bluetooth DAI Hardware COnfiguration Parameter
 */
#define DEFAULT_BLUETOOTH_SYNC_TYPE               0
#define DEFAULT_BLUETOOTH_SYNC_LENGTH             1

#endif
