/*
** $Id: LineBreakDataMg.c 123 2010-06-22 09:55:14Z xwyan $
**
** line_break_dataMg.c: unicode Line break data file.
**
** Copyright(C) 2007 Feynman Software.
**
** All rights reserved by Feynman Software.
**
** Create date: 2007-5-22
*/

#define   BREAKDATA_NUM   1009
#define   CHINESE_START1   65
#define   CHINESE_END1     102
#define   CHINESE_START2   1007
#define   CHINESE_END2     1007


static const  LINEBREAKCLASS_DB  class_data[] ={
/*ASCII  (63)*/
{0x0,0x8,CM},{0x9,0x9,BA},{0xA,0xA,LB_LF},{0xB,0xC,BK},{0xD,0xD,LB_CR},{0xE,0x1F,CM},{0x20,0x20,SP},
{0x21,0x21,EX},{0x22,0x22,QU},{0x23,0x23,AL},{0x24,0x24,PR},{0x25,0x25,PO},{0x26,0x26,AL},{0x27,0x27,QU},
{0x28,0x28,OP},{0x29,0x29,CP},{0x2A,0x2A,AL},{0x2B,0x2B,PR},{0x2C,0x2C,IS},{0x2D,0x2D,HY},{0x2E,0x2E,IS},
{0x2F,0x2F,SY},{0x30,0x39,NU},{0x3A,0x3B,IS},{0x3C,0x3E,AL},{0x3F,0x3F,EX},{0x40,0x5A,AL},{0x5B,0x5B,OP},
{0x5C,0x5C,PR},{0x5D,0x5D,CP},{0x5E,0x7A,AL},{0x7B,0x7B,OP},{0x7C,0x7C,BA},{0x7D,0x7D,CL},{0x7E,0x7E,AL},
{0x7F,0x84,CM},{0x85,0x85,NL},{0x86,0x9F,CM},{0xA0,0xA0,GL},{0xA1,0xA1,AI},{0xA2,0xA2,PO},{0xA3,0xA5,PR},
{0xA6,0xA6,AL},{0xA7,0xA8,AI},{0xA9,0xA9,AL},{0xAA,0xAA,AI},{0xAB,0xAB,QU},{0xAC,0xAC,AL},{0xAD,0xAD,BA},
{0xAE,0xAF,AL},{0xB0,0xB0,PO},{0xB1,0xB1,PR},{0xB2,0xB3,AI},{0xB4,0xB4,BB},{0xB5,0xB5,AL},{0xB6,0xBA,AI},
{0xBB,0xBB,QU},{0xBC,0xBF,AI},{0xC0,0xD6,AL},{0xD7,0xD7,AI},{0xD8,0xF6,AL},{0xF7,0xF7,AI},{0xF8,0xFF,AL},
/*Hangul  (3)  ++=66*/
{0x1100,0x115F,JL},{0x1160,0x11A2,JV},{0x11A8,0x11F9,JT},
/*Han  (37)  ++=103*/
{0x2E00,0x2E0D,QU},{0x2E0E,0x2E15,BA},{0x2E16,0x2E16,AL},{0x2E17,0x2E17,BA},{0x2E1C,0x2E1D,QU},{0x2E80,0x3000,ID},
{0x3001,0x3002,CL},{0x3003,0x3004,ID},{0x3005,0x3005,NS},{0x3006,0x3007,ID},{0x3008,0x3008,OP},{0x3009,0x3009,CL},
{0x300A,0x300A,OP},{0x300B,0x300B,CL},{0x300C,0x300C,OP},{0x300D,0x300D,CL},{0x300E,0x300E,OP},{0x300F,0x300F,CL},
{0x3010,0x3010,OP},{0x3011,0x3011,CL},{0x3012,0x3013,ID},{0x3014,0x3014,OP},{0x3015,0x3015,CL},{0x3016,0x3016,OP},
{0x3017,0x3017,CL},{0x3018,0x3018,OP},{0x3019,0x3019,CL},{0x301A,0x301A,OP},{0x301B,0x301B,CL},{0x301C,0x301C,NS},
{0x301D,0x301D,OP},{0x301E,0x301F,CL},{0x3020,0x3029,ID},{0x302A,0x302F,CM},{0x3030,0x303A,ID},{0x303B,0x303C,NS},
{0x303D,0x303F,ID},
/*Han:Hiragana  (24)  ++=127*/
{0x3041,0x3041,NS},{0x3042,0x3042,ID},{0x3043,0x3043,NS},{0x3044,0x3044,ID},{0x3045,0x3045,NS},{0x3046,0x3046,ID},
{0x3047,0x3047,NS},{0x3048,0x3048,ID},{0x3049,0x3049,NS},{0x304A,0x3062,ID},{0x3063,0x3063,NS},{0x3064,0x3082,ID},
{0x3083,0x3083,NS},{0x3084,0x3084,ID},{0x3085,0x3085,NS},{0x3086,0x3086,ID},{0x3087,0x3087,NS},{0x3088,0x308D,ID},
{0x308E,0x308E,NS},{0x308F,0x3094,ID},{0x3095,0x3096,NS},{0x3099,0x309A,CM},{0x309B,0x309E,NS},{0x309F,0x309F,ID},
/*Han:KATAKANA  (24)  ++=151*/
{0x30A0,0x30A1,NS},{0x30A2,0x30A2,ID},{0x30A3,0x30A3,NS},{0x30A4,0x30A4,ID},{0x30A5,0x30A5,NS},{0x30A6,0x30A6,ID},
{0x30A7,0x30A7,NS},{0x30A8,0x30A8,ID},{0x30A9,0x30A9,NS},{0x30AA,0x30C2,ID},{0x30C3,0x30C3,NS},{0x30C4,0x30E2,ID},
{0x30E3,0x30E3,NS},{0x30E4,0x30E4,ID},{0x30E5,0x30E5,NS},{0x30E6,0x30E6,ID},{0x30E7,0x30E7,NS},{0x30E8,0x30ED,ID},
{0x30EE,0x30EE,NS},{0x30EF,0x30F4,ID},{0x30F5,0x30F6,NS},{0x30F7,0x30FA,ID},{0x30FB,0x30FE,NS},{0x30FF,0x30FF,ID},
/*Han:BOPOMOFO*/
{0x3105,0x312C,ID},
/*HANGUL*/
{0x3131,0x318E,ID},
/*Han*/
{0x3190,0x319F,ID},
/*Han:BOPOMOFO*/
{0x31A0,0x31B7,ID},
/*Han:CJK*/
{0x31C0,0x31CF,ID},
/*Han:KATAKANA  ++=157*/
{0x31F0,0x31FF,NS},
/*HANGUL  (3)  ++=160*/
{0x3200,0x321E,ID},{0x3220,0x3243,ID},{0x3250,0x32CF,ID},
/*Han:KATAKANA  (1)*/
{0x32D0,0x32FE,ID},
/*Han:CJK Ideograph Extension A  (2)  ++=163*/
{0x3300,0x4DB5,ID},{0x4E00,0x9FBB,ID},
/*HANGUL  (798)  ++=961*/
{0xAC00,0xAC00,H2},{0xAC01,0xAC1B,H3},{0xAC1C,0xAC1C,H2},{0xAC1D,0xAC37,H3},{0xAC38,0xAC38,H2},{0xAC39,0xAC53,H3},
{0xAC54,0xAC54,H2},{0xAC55,0xAC6F,H3},{0xAC70,0xAC70,H2},{0xAC71,0xAC8B,H3},{0xAC8C,0xAC8C,H2},{0xAC8D,0xACA7,H3},
{0xACA8,0xACA8,H2},{0xACA9,0xACC3,H3},{0xACC4,0xACC4,H2},{0xACC5,0xACDF,H3},{0xACE0,0xACE0,H2},{0xACE1,0xACFB,H3},
{0xACFC,0xACFC,H2},{0xACFD,0xAD17,H3},{0xAD18,0xAD18,H2},{0xAD19,0xAD33,H3},{0xAD34,0xAD34,H2},{0xAD35,0xAD4F,H3},
{0xAD50,0xAD50,H2},{0xAD51,0xAD6B,H3},{0xAD6C,0xAD6C,H2},{0xAD6D,0xAD87,H3},{0xAD88,0xAD88,H2},{0xAD89,0xADA3,H3},
{0xADA4,0xADA4,H2},{0xADA5,0xADBF,H3},{0xADC0,0xADC0,H2},{0xADC1,0xADDB,H3},{0xADDC,0xADDC,H2},{0xADDD,0xADF7,H3},
{0xADF8,0xADF8,H2},{0xADF9,0xAE13,H3},{0xAE14,0xAE14,H2},{0xAE15,0xAE2F,H3},{0xAE30,0xAE30,H2},{0xAE31,0xAE4B,H3},
{0xAE4C,0xAE4C,H2},{0xAE4D,0xAE67,H3},{0xAE68,0xAE68,H2},{0xAE69,0xAE83,H3},{0xAE84,0xAE84,H2},{0xAE85,0xAE9F,H3},
{0xAEA0,0xAEA0,H2},{0xAEA1,0xAEBB,H3},{0xAEBC,0xAEBC,H2},{0xAEBD,0xAED7,H3},{0xAED8,0xAED8,H2},{0xAED9,0xAEF3,H3},
{0xAEF4,0xAEF4,H2},{0xAEF5,0xAF0F,H3},{0xAF10,0xAF10,H2},{0xAF11,0xAF2B,H3},{0xAF2C,0xAF2C,H2},{0xAF2D,0xAF47,H3},
{0xAF48,0xAF48,H2},{0xAF49,0xAF63,H3},{0xAF64,0xAF64,H2},{0xAF65,0xAF7F,H3},{0xAF80,0xAF80,H2},{0xAF81,0xAF9B,H3},
{0xAF9C,0xAF9C,H2},{0xAF9D,0xAFB7,H3},{0xAFB8,0xAFB8,H2},{0xAFB9,0xAFD3,H3},{0xAFD4,0xAFD4,H2},{0xAFD5,0xAFEF,H3},
{0xAFF0,0xAFF0,H2},{0xAFF1,0xB00B,H3},{0xB00C,0xB00C,H2},{0xB00D,0xB027,H3},{0xB028,0xB028,H2},{0xB029,0xB043,H3},
{0xB044,0xB044,H2},{0xB045,0xB05F,H3},{0xB060,0xB060,H2},{0xB061,0xB07B,H3},{0xB07C,0xB07C,H2},{0xB07D,0xB097,H3},
{0xB098,0xB098,H2},{0xB099,0xB0B3,H3},{0xB0B4,0xB0B4,H2},{0xB0B5,0xB0CF,H3},{0xB0D0,0xB0D0,H2},{0xB0D1,0xB0EB,H3},
{0xB0EC,0xB0EC,H2},{0xB0ED,0xB107,H3},{0xB108,0xB108,H2},{0xB109,0xB123,H3},{0xB124,0xB124,H2},{0xB125,0xB13F,H3},
{0xB140,0xB140,H2},{0xB141,0xB15B,H3},{0xB15C,0xB15C,H2},{0xB15D,0xB177,H3},{0xB178,0xB178,H2},{0xB179,0xB193,H3},
{0xB194,0xB194,H2},{0xB195,0xB1AF,H3},{0xB1B0,0xB1B0,H2},{0xB1B1,0xB1CB,H3},{0xB1CC,0xB1CC,H2},{0xB1CD,0xB1E7,H3},
{0xB1E8,0xB1E8,H2},{0xB1E9,0xB203,H3},{0xB204,0xB204,H2},{0xB205,0xB21F,H3},{0xB220,0xB220,H2},{0xB221,0xB23B,H3},
{0xB23C,0xB23C,H2},{0xB23D,0xB257,H3},{0xB258,0xB258,H2},{0xB259,0xB273,H3},{0xB274,0xB274,H2},{0xB275,0xB28F,H3},
{0xB290,0xB290,H2},{0xB291,0xB2AB,H3},{0xB2AC,0xB2AC,H2},{0xB2AD,0xB2C7,H3},{0xB2C8,0xB2C8,H2},{0xB2C9,0xB2E3,H3},
{0xB2E4,0xB2E4,H2},{0xB2E5,0xB2FF,H3},{0xB300,0xB300,H2},{0xB301,0xB31B,H3},{0xB31C,0xB31C,H2},{0xB31D,0xB337,H3},
{0xB338,0xB338,H2},{0xB339,0xB353,H3},{0xB354,0xB354,H2},{0xB355,0xB36F,H3},{0xB370,0xB370,H2},{0xB371,0xB38B,H3},
{0xB38C,0xB38C,H2},{0xB38D,0xB3A7,H3},{0xB3A8,0xB3A8,H2},{0xB3A9,0xB3C3,H3},{0xB3C4,0xB3C4,H2},{0xB3C5,0xB3DF,H3},
{0xB3E0,0xB3E0,H2},{0xB3E1,0xB3FB,H3},{0xB3FC,0xB3FC,H2},{0xB3FD,0xB417,H3},{0xB418,0xB418,H2},{0xB419,0xB433,H3},
{0xB434,0xB434,H2},{0xB435,0xB44F,H3},{0xB450,0xB450,H2},{0xB451,0xB46B,H3},{0xB46C,0xB46C,H2},{0xB46D,0xB487,H3},
{0xB488,0xB488,H2},{0xB489,0xB4A3,H3},{0xB4A4,0xB4A4,H2},{0xB4A5,0xB4BF,H3},{0xB4C0,0xB4C0,H2},{0xB4C1,0xB4DB,H3},
{0xB4DC,0xB4DC,H2},{0xB4DD,0xB4F7,H3},{0xB4F8,0xB4F8,H2},{0xB4F9,0xB513,H3},{0xB514,0xB514,H2},{0xB515,0xB52F,H3},
{0xB530,0xB530,H2},{0xB531,0xB54B,H3},{0xB54C,0xB54C,H2},{0xB54D,0xB567,H3},{0xB568,0xB568,H2},{0xB569,0xB583,H3},
{0xB584,0xB584,H2},{0xB585,0xB59F,H3},{0xB5A0,0xB5A0,H2},{0xB5A1,0xB5BB,H3},{0xB5BC,0xB5BC,H2},{0xB5BD,0xB5D7,H3},
{0xB5D8,0xB5D8,H2},{0xB5D9,0xB5F3,H3},{0xB5F4,0xB5F4,H2},{0xB5F5,0xB60F,H3},{0xB610,0xB610,H2},{0xB611,0xB62B,H3},
{0xB62C,0xB62C,H2},{0xB62D,0xB647,H3},{0xB648,0xB648,H2},{0xB649,0xB663,H3},{0xB664,0xB664,H2},{0xB665,0xB67F,H3},
{0xB680,0xB680,H2},{0xB681,0xB69B,H3},{0xB69C,0xB69C,H2},{0xB69D,0xB6B7,H3},{0xB6B8,0xB6B8,H2},{0xB6B9,0xB6D3,H3},
{0xB6D4,0xB6D4,H2},{0xB6D5,0xB6EF,H3},{0xB6F0,0xB6F0,H2},{0xB6F1,0xB70B,H3},{0xB70C,0xB70C,H2},{0xB70D,0xB727,H3},
{0xB728,0xB728,H2},{0xB729,0xB743,H3},{0xB744,0xB744,H2},{0xB745,0xB75F,H3},{0xB760,0xB760,H2},{0xB761,0xB77B,H3},
{0xB77C,0xB77C,H2},{0xB77D,0xB797,H3},{0xB798,0xB798,H2},{0xB799,0xB7B3,H3},{0xB7B4,0xB7B4,H2},{0xB7B5,0xB7CF,H3},
{0xB7D0,0xB7D0,H2},{0xB7D1,0xB7EB,H3},{0xB7EC,0xB7EC,H2},{0xB7ED,0xB807,H3},{0xB808,0xB808,H2},{0xB809,0xB823,H3},
{0xB824,0xB824,H2},{0xB825,0xB83F,H3},{0xB840,0xB840,H2},{0xB841,0xB85B,H3},{0xB85C,0xB85C,H2},{0xB85D,0xB877,H3},
{0xB878,0xB878,H2},{0xB879,0xB893,H3},{0xB894,0xB894,H2},{0xB895,0xB8AF,H3},{0xB8B0,0xB8B0,H2},{0xB8B1,0xB8CB,H3},
{0xB8CC,0xB8CC,H2},{0xB8CD,0xB8E7,H3},{0xB8E8,0xB8E8,H2},{0xB8E9,0xB903,H3},{0xB904,0xB904,H2},{0xB905,0xB91F,H3},
{0xB920,0xB920,H2},{0xB921,0xB93B,H3},{0xB93C,0xB93C,H2},{0xB93D,0xB957,H3},{0xB958,0xB958,H2},{0xB959,0xB973,H3},
{0xB974,0xB974,H2},{0xB975,0xB98F,H3},{0xB990,0xB990,H2},{0xB991,0xB9AB,H3},{0xB9AC,0xB9AC,H2},{0xB9AD,0xB9C7,H3},
{0xB9C8,0xB9C8,H2},{0xB9C9,0xB9E3,H3},{0xB9E4,0xB9E4,H2},{0xB9E5,0xB9FF,H3},{0xBA00,0xBA00,H2},{0xBA01,0xBA1B,H3},
{0xBA1C,0xBA1C,H2},{0xBA1D,0xBA37,H3},{0xBA38,0xBA38,H2},{0xBA39,0xBA53,H3},{0xBA54,0xBA54,H2},{0xBA55,0xBA6F,H3},
{0xBA70,0xBA70,H2},{0xBA71,0xBA8B,H3},{0xBA8C,0xBA8C,H2},{0xBA8D,0xBAA7,H3},{0xBAA8,0xBAA8,H2},{0xBAA9,0xBAC3,H3},
{0xBAC4,0xBAC4,H2},{0xBAC5,0xBADF,H3},{0xBAE0,0xBAE0,H2},{0xBAE1,0xBAFB,H3},{0xBAFC,0xBAFC,H2},{0xBAFD,0xBB17,H3},
{0xBB18,0xBB18,H2},{0xBB19,0xBB33,H3},{0xBB34,0xBB34,H2},{0xBB35,0xBB4F,H3},{0xBB50,0xBB50,H2},{0xBB51,0xBB6B,H3},
{0xBB6C,0xBB6C,H2},{0xBB6D,0xBB87,H3},{0xBB88,0xBB88,H2},{0xBB89,0xBBA3,H3},{0xBBA4,0xBBA4,H2},{0xBBA5,0xBBBF,H3},
{0xBBC0,0xBBC0,H2},{0xBBC1,0xBBDB,H3},{0xBBDC,0xBBDC,H2},{0xBBDD,0xBBF7,H3},{0xBBF8,0xBBF8,H2},{0xBBF9,0xBC13,H3},
{0xBC14,0xBC14,H2},{0xBC15,0xBC2F,H3},{0xBC30,0xBC30,H2},{0xBC31,0xBC4B,H3},{0xBC4C,0xBC4C,H2},{0xBC4D,0xBC67,H3},
{0xBC68,0xBC68,H2},{0xBC69,0xBC83,H3},{0xBC84,0xBC84,H2},{0xBC85,0xBC9F,H3},{0xBCA0,0xBCA0,H2},{0xBCA1,0xBCBB,H3},
{0xBCBC,0xBCBC,H2},{0xBCBD,0xBCD7,H3},{0xBCD8,0xBCD8,H2},{0xBCD9,0xBCF3,H3},{0xBCF4,0xBCF4,H2},{0xBCF5,0xBD0F,H3},
{0xBD10,0xBD10,H2},{0xBD11,0xBD2B,H3},{0xBD2C,0xBD2C,H2},{0xBD2D,0xBD47,H3},{0xBD48,0xBD48,H2},{0xBD49,0xBD63,H3},
{0xBD64,0xBD64,H2},{0xBD65,0xBD7F,H3},{0xBD80,0xBD80,H2},{0xBD81,0xBD9B,H3},{0xBD9C,0xBD9C,H2},{0xBD9D,0xBDB7,H3},
{0xBDB8,0xBDB8,H2},{0xBDB9,0xBDD3,H3},{0xBDD4,0xBDD4,H2},{0xBDD5,0xBDEF,H3},{0xBDF0,0xBDF0,H2},{0xBDF1,0xBE0B,H3},
{0xBE0C,0xBE0C,H2},{0xBE0D,0xBE27,H3},{0xBE28,0xBE28,H2},{0xBE29,0xBE43,H3},{0xBE44,0xBE44,H2},{0xBE45,0xBE5F,H3},
{0xBE60,0xBE60,H2},{0xBE61,0xBE7B,H3},{0xBE7C,0xBE7C,H2},{0xBE7D,0xBE97,H3},{0xBE98,0xBE98,H2},{0xBE99,0xBEB3,H3},
{0xBEB4,0xBEB4,H2},{0xBEB5,0xBECF,H3},{0xBED0,0xBED0,H2},{0xBED1,0xBEEB,H3},{0xBEEC,0xBEEC,H2},{0xBEED,0xBF07,H3},
{0xBF08,0xBF08,H2},{0xBF09,0xBF23,H3},{0xBF24,0xBF24,H2},{0xBF25,0xBF3F,H3},{0xBF40,0xBF40,H2},{0xBF41,0xBF5B,H3},
{0xBF5C,0xBF5C,H2},{0xBF5D,0xBF77,H3},{0xBF78,0xBF78,H2},{0xBF79,0xBF93,H3},{0xBF94,0xBF94,H2},{0xBF95,0xBFAF,H3},
{0xBFB0,0xBFB0,H2},{0xBFB1,0xBFCB,H3},{0xBFCC,0xBFCC,H2},{0xBFCD,0xBFE7,H3},{0xBFE8,0xBFE8,H2},{0xBFE9,0xC003,H3},
{0xC004,0xC004,H2},{0xC005,0xC01F,H3},{0xC020,0xC020,H2},{0xC021,0xC03B,H3},{0xC03C,0xC03C,H2},{0xC03D,0xC057,H3},
{0xC058,0xC058,H2},{0xC059,0xC073,H3},{0xC074,0xC074,H2},{0xC075,0xC08F,H3},{0xC090,0xC090,H2},{0xC091,0xC0AB,H3},
{0xC0AC,0xC0AC,H2},{0xC0AD,0xC0C7,H3},{0xC0C8,0xC0C8,H2},{0xC0C9,0xC0E3,H3},{0xC0E4,0xC0E4,H2},{0xC0E5,0xC0FF,H3},
{0xC100,0xC100,H2},{0xC101,0xC11B,H3},{0xC11C,0xC11C,H2},{0xC11D,0xC137,H3},{0xC138,0xC138,H2},{0xC139,0xC153,H3},
{0xC154,0xC154,H2},{0xC155,0xC16F,H3},{0xC170,0xC170,H2},{0xC171,0xC18B,H3},{0xC18C,0xC18C,H2},{0xC18D,0xC1A7,H3},
{0xC1A8,0xC1A8,H2},{0xC1A9,0xC1C3,H3},{0xC1C4,0xC1C4,H2},{0xC1C5,0xC1DF,H3},{0xC1E0,0xC1E0,H2},{0xC1E1,0xC1FB,H3},
{0xC1FC,0xC1FC,H2},{0xC1FD,0xC217,H3},{0xC218,0xC218,H2},{0xC219,0xC233,H3},{0xC234,0xC234,H2},{0xC235,0xC24F,H3},
{0xC250,0xC250,H2},{0xC251,0xC26B,H3},{0xC26C,0xC26C,H2},{0xC26D,0xC287,H3},{0xC288,0xC288,H2},{0xC289,0xC2A3,H3},
{0xC2A4,0xC2A4,H2},{0xC2A5,0xC2BF,H3},{0xC2C0,0xC2C0,H2},{0xC2C1,0xC2DB,H3},{0xC2DC,0xC2DC,H2},{0xC2DD,0xC2F7,H3},
{0xC2F8,0xC2F8,H2},{0xC2F9,0xC313,H3},{0xC314,0xC314,H2},{0xC315,0xC32F,H3},{0xC330,0xC330,H2},{0xC331,0xC34B,H3},
{0xC34C,0xC34C,H2},{0xC34D,0xC367,H3},{0xC368,0xC368,H2},{0xC369,0xC383,H3},{0xC384,0xC384,H2},{0xC385,0xC39F,H3},
{0xC3A0,0xC3A0,H2},{0xC3A1,0xC3BB,H3},{0xC3BC,0xC3BC,H2},{0xC3BD,0xC3D7,H3},{0xC3D8,0xC3D8,H2},{0xC3D9,0xC3F3,H3},
{0xC3F4,0xC3F4,H2},{0xC3F5,0xC40F,H3},{0xC410,0xC410,H2},{0xC411,0xC42B,H3},{0xC42C,0xC42C,H2},{0xC42D,0xC447,H3},
{0xC448,0xC448,H2},{0xC449,0xC463,H3},{0xC464,0xC464,H2},{0xC465,0xC47F,H3},{0xC480,0xC480,H2},{0xC481,0xC49B,H3},
{0xC49C,0xC49C,H2},{0xC49D,0xC4B7,H3},{0xC4B8,0xC4B8,H2},{0xC4B9,0xC4D3,H3},{0xC4D4,0xC4D4,H2},{0xC4D5,0xC4EF,H3},
{0xC4F0,0xC4F0,H2},{0xC4F1,0xC50B,H3},{0xC50C,0xC50C,H2},{0xC50D,0xC527,H3},{0xC528,0xC528,H2},{0xC529,0xC543,H3},
{0xC544,0xC544,H2},{0xC545,0xC55F,H3},{0xC560,0xC560,H2},{0xC561,0xC57B,H3},{0xC57C,0xC57C,H2},{0xC57D,0xC597,H3},
{0xC598,0xC598,H2},{0xC599,0xC5B3,H3},{0xC5B4,0xC5B4,H2},{0xC5B5,0xC5CF,H3},{0xC5D0,0xC5D0,H2},{0xC5D1,0xC5EB,H3},
{0xC5EC,0xC5EC,H2},{0xC5ED,0xC607,H3},{0xC608,0xC608,H2},{0xC609,0xC623,H3},{0xC624,0xC624,H2},{0xC625,0xC63F,H3},
{0xC640,0xC640,H2},{0xC641,0xC65B,H3},{0xC65C,0xC65C,H2},{0xC65D,0xC677,H3},{0xC678,0xC678,H2},{0xC679,0xC693,H3},
{0xC694,0xC694,H2},{0xC695,0xC6AF,H3},{0xC6B0,0xC6B0,H2},{0xC6B1,0xC6CB,H3},{0xC6CC,0xC6CC,H2},{0xC6CD,0xC6E7,H3},
{0xC6E8,0xC6E8,H2},{0xC6E9,0xC703,H3},{0xC704,0xC704,H2},{0xC705,0xC71F,H3},{0xC720,0xC720,H2},{0xC721,0xC73B,H3},
{0xC73C,0xC73C,H2},{0xC73D,0xC757,H3},{0xC758,0xC758,H2},{0xC759,0xC773,H3},{0xC774,0xC774,H2},{0xC775,0xC78F,H3},
{0xC790,0xC790,H2},{0xC791,0xC7AB,H3},{0xC7AC,0xC7AC,H2},{0xC7AD,0xC7C7,H3},{0xC7C8,0xC7C8,H2},{0xC7C9,0xC7E3,H3},
{0xC7E4,0xC7E4,H2},{0xC7E5,0xC7FF,H3},{0xC800,0xC800,H2},{0xC801,0xC81B,H3},{0xC81C,0xC81C,H2},{0xC81D,0xC837,H3},
{0xC838,0xC838,H2},{0xC839,0xC853,H3},{0xC854,0xC854,H2},{0xC855,0xC86F,H3},{0xC870,0xC870,H2},{0xC871,0xC88B,H3},
{0xC88C,0xC88C,H2},{0xC88D,0xC8A7,H3},{0xC8A8,0xC8A8,H2},{0xC8A9,0xC8C3,H3},{0xC8C4,0xC8C4,H2},{0xC8C5,0xC8DF,H3},
{0xC8E0,0xC8E0,H2},{0xC8E1,0xC8FB,H3},{0xC8FC,0xC8FC,H2},{0xC8FD,0xC917,H3},{0xC918,0xC918,H2},{0xC919,0xC933,H3},
{0xC934,0xC934,H2},{0xC935,0xC94F,H3},{0xC950,0xC950,H2},{0xC951,0xC96B,H3},{0xC96C,0xC96C,H2},{0xC96D,0xC987,H3},
{0xC988,0xC988,H2},{0xC989,0xC9A3,H3},{0xC9A4,0xC9A4,H2},{0xC9A5,0xC9BF,H3},{0xC9C0,0xC9C0,H2},{0xC9C1,0xC9DB,H3},
{0xC9DC,0xC9DC,H2},{0xC9DD,0xC9F7,H3},{0xC9F8,0xC9F8,H2},{0xC9F9,0xCA13,H3},{0xCA14,0xCA14,H2},{0xCA15,0xCA2F,H3},
{0xCA30,0xCA30,H2},{0xCA31,0xCA4B,H3},{0xCA4C,0xCA4C,H2},{0xCA4D,0xCA67,H3},{0xCA68,0xCA68,H2},{0xCA69,0xCA83,H3},
{0xCA84,0xCA84,H2},{0xCA85,0xCA9F,H3},{0xCAA0,0xCAA0,H2},{0xCAA1,0xCABB,H3},{0xCABC,0xCABC,H2},{0xCABD,0xCAD7,H3},
{0xCAD8,0xCAD8,H2},{0xCAD9,0xCAF3,H3},{0xCAF4,0xCAF4,H2},{0xCAF5,0xCB0F,H3},{0xCB10,0xCB10,H2},{0xCB11,0xCB2B,H3},
{0xCB2C,0xCB2C,H2},{0xCB2D,0xCB47,H3},{0xCB48,0xCB48,H2},{0xCB49,0xCB63,H3},{0xCB64,0xCB64,H2},{0xCB65,0xCB7F,H3},
{0xCB80,0xCB80,H2},{0xCB81,0xCB9B,H3},{0xCB9C,0xCB9C,H2},{0xCB9D,0xCBB7,H3},{0xCBB8,0xCBB8,H2},{0xCBB9,0xCBD3,H3},
{0xCBD4,0xCBD4,H2},{0xCBD5,0xCBEF,H3},{0xCBF0,0xCBF0,H2},{0xCBF1,0xCC0B,H3},{0xCC0C,0xCC0C,H2},{0xCC0D,0xCC27,H3},
{0xCC28,0xCC28,H2},{0xCC29,0xCC43,H3},{0xCC44,0xCC44,H2},{0xCC45,0xCC5F,H3},{0xCC60,0xCC60,H2},{0xCC61,0xCC7B,H3},
{0xCC7C,0xCC7C,H2},{0xCC7D,0xCC97,H3},{0xCC98,0xCC98,H2},{0xCC99,0xCCB3,H3},{0xCCB4,0xCCB4,H2},{0xCCB5,0xCCCF,H3},
{0xCCD0,0xCCD0,H2},{0xCCD1,0xCCEB,H3},{0xCCEC,0xCCEC,H2},{0xCCED,0xCD07,H3},{0xCD08,0xCD08,H2},{0xCD09,0xCD23,H3},
{0xCD24,0xCD24,H2},{0xCD25,0xCD3F,H3},{0xCD40,0xCD40,H2},{0xCD41,0xCD5B,H3},{0xCD5C,0xCD5C,H2},{0xCD5D,0xCD77,H3},
{0xCD78,0xCD78,H2},{0xCD79,0xCD93,H3},{0xCD94,0xCD94,H2},{0xCD95,0xCDAF,H3},{0xCDB0,0xCDB0,H2},{0xCDB1,0xCDCB,H3},
{0xCDCC,0xCDCC,H2},{0xCDCD,0xCDE7,H3},{0xCDE8,0xCDE8,H2},{0xCDE9,0xCE03,H3},{0xCE04,0xCE04,H2},{0xCE05,0xCE1F,H3},
{0xCE20,0xCE20,H2},{0xCE21,0xCE3B,H3},{0xCE3C,0xCE3C,H2},{0xCE3D,0xCE57,H3},{0xCE58,0xCE58,H2},{0xCE59,0xCE73,H3},
{0xCE74,0xCE74,H2},{0xCE75,0xCE8F,H3},{0xCE90,0xCE90,H2},{0xCE91,0xCEAB,H3},{0xCEAC,0xCEAC,H2},{0xCEAD,0xCEC7,H3},
{0xCEC8,0xCEC8,H2},{0xCEC9,0xCEE3,H3},{0xCEE4,0xCEE4,H2},{0xCEE5,0xCEFF,H3},{0xCF00,0xCF00,H2},{0xCF01,0xCF1B,H3},
{0xCF1C,0xCF1C,H2},{0xCF1D,0xCF37,H3},{0xCF38,0xCF38,H2},{0xCF39,0xCF53,H3},{0xCF54,0xCF54,H2},{0xCF55,0xCF6F,H3},
{0xCF70,0xCF70,H2},{0xCF71,0xCF8B,H3},{0xCF8C,0xCF8C,H2},{0xCF8D,0xCFA7,H3},{0xCFA8,0xCFA8,H2},{0xCFA9,0xCFC3,H3},
{0xCFC4,0xCFC4,H2},{0xCFC5,0xCFDF,H3},{0xCFE0,0xCFE0,H2},{0xCFE1,0xCFFB,H3},{0xCFFC,0xCFFC,H2},{0xCFFD,0xD017,H3},
{0xD018,0xD018,H2},{0xD019,0xD033,H3},{0xD034,0xD034,H2},{0xD035,0xD04F,H3},{0xD050,0xD050,H2},{0xD051,0xD06B,H3},
{0xD06C,0xD06C,H2},{0xD06D,0xD087,H3},{0xD088,0xD088,H2},{0xD089,0xD0A3,H3},{0xD0A4,0xD0A4,H2},{0xD0A5,0xD0BF,H3},
{0xD0C0,0xD0C0,H2},{0xD0C1,0xD0DB,H3},{0xD0DC,0xD0DC,H2},{0xD0DD,0xD0F7,H3},{0xD0F8,0xD0F8,H2},{0xD0F9,0xD113,H3},
{0xD114,0xD114,H2},{0xD115,0xD12F,H3},{0xD130,0xD130,H2},{0xD131,0xD14B,H3},{0xD14C,0xD14C,H2},{0xD14D,0xD167,H3},
{0xD168,0xD168,H2},{0xD169,0xD183,H3},{0xD184,0xD184,H2},{0xD185,0xD19F,H3},{0xD1A0,0xD1A0,H2},{0xD1A1,0xD1BB,H3},
{0xD1BC,0xD1BC,H2},{0xD1BD,0xD1D7,H3},{0xD1D8,0xD1D8,H2},{0xD1D9,0xD1F3,H3},{0xD1F4,0xD1F4,H2},{0xD1F5,0xD20F,H3},
{0xD210,0xD210,H2},{0xD211,0xD22B,H3},{0xD22C,0xD22C,H2},{0xD22D,0xD247,H3},{0xD248,0xD248,H2},{0xD249,0xD263,H3},
{0xD264,0xD264,H2},{0xD265,0xD27F,H3},{0xD280,0xD280,H2},{0xD281,0xD29B,H3},{0xD29C,0xD29C,H2},{0xD29D,0xD2B7,H3},
{0xD2B8,0xD2B8,H2},{0xD2B9,0xD2D3,H3},{0xD2D4,0xD2D4,H2},{0xD2D5,0xD2EF,H3},{0xD2F0,0xD2F0,H2},{0xD2F1,0xD30B,H3},
{0xD30C,0xD30C,H2},{0xD30D,0xD327,H3},{0xD328,0xD328,H2},{0xD329,0xD343,H3},{0xD344,0xD344,H2},{0xD345,0xD35F,H3},
{0xD360,0xD360,H2},{0xD361,0xD37B,H3},{0xD37C,0xD37C,H2},{0xD37D,0xD397,H3},{0xD398,0xD398,H2},{0xD399,0xD3B3,H3},
{0xD3B4,0xD3B4,H2},{0xD3B5,0xD3CF,H3},{0xD3D0,0xD3D0,H2},{0xD3D1,0xD3EB,H3},{0xD3EC,0xD3EC,H2},{0xD3ED,0xD407,H3},
{0xD408,0xD408,H2},{0xD409,0xD423,H3},{0xD424,0xD424,H2},{0xD425,0xD43F,H3},{0xD440,0xD440,H2},{0xD441,0xD45B,H3},
{0xD45C,0xD45C,H2},{0xD45D,0xD477,H3},{0xD478,0xD478,H2},{0xD479,0xD493,H3},{0xD494,0xD494,H2},{0xD495,0xD4AF,H3},
{0xD4B0,0xD4B0,H2},{0xD4B1,0xD4CB,H3},{0xD4CC,0xD4CC,H2},{0xD4CD,0xD4E7,H3},{0xD4E8,0xD4E8,H2},{0xD4E9,0xD503,H3},
{0xD504,0xD504,H2},{0xD505,0xD51F,H3},{0xD520,0xD520,H2},{0xD521,0xD53B,H3},{0xD53C,0xD53C,H2},{0xD53D,0xD557,H3},
{0xD558,0xD558,H2},{0xD559,0xD573,H3},{0xD574,0xD574,H2},{0xD575,0xD58F,H3},{0xD590,0xD590,H2},{0xD591,0xD5AB,H3},
{0xD5AC,0xD5AC,H2},{0xD5AD,0xD5C7,H3},{0xD5C8,0xD5C8,H2},{0xD5C9,0xD5E3,H3},{0xD5E4,0xD5E4,H2},{0xD5E5,0xD5FF,H3},
{0xD600,0xD600,H2},{0xD601,0xD61B,H3},{0xD61C,0xD61C,H2},{0xD61D,0xD637,H3},{0xD638,0xD638,H2},{0xD639,0xD653,H3},
{0xD654,0xD654,H2},{0xD655,0xD66F,H3},{0xD670,0xD670,H2},{0xD671,0xD68B,H3},{0xD68C,0xD68C,H2},{0xD68D,0xD6A7,H3},
{0xD6A8,0xD6A8,H2},{0xD6A9,0xD6C3,H3},{0xD6C4,0xD6C4,H2},{0xD6C5,0xD6DF,H3},{0xD6E0,0xD6E0,H2},{0xD6E1,0xD6FB,H3},
{0xD6FC,0xD6FC,H2},{0xD6FD,0xD717,H3},{0xD718,0xD718,H2},{0xD719,0xD733,H3},{0xD734,0xD734,H2},{0xD735,0xD74F,H3},
{0xD750,0xD750,H2},{0xD751,0xD76B,H3},{0xD76C,0xD76C,H2},{0xD76D,0xD787,H3},{0xD788,0xD788,H2},{0xD789,0xD7A3,H3},
/*High Surrogate, Private Use High Surrogate and Low Surrogate ,Private Use  (2) ++=963*/
{0xD800,0xDFFF,SG},{0xE000,0xF8FF,XX},
/*Han:CJK  (1)*/
{0xF900,0xFAD9,ID},
/*Han:FULLWIDTH  (43)  ++=1007*/
{0xFEFF,0xFEFF,WJ},{0xFF01,0xFF01,EX},{0xFF02,0xFF03,ID},{0xFF04,0xFF04,PR},{0xFF05,0xFF05,PO},{0xFF06,0xFF07,ID},
{0xFF08,0xFF08,OP},{0xFF09,0xFF09,CL},{0xFF0A,0xFF0B,ID},{0xFF0C,0xFF0C,CL},{0xFF0D,0xFF0D,ID},{0xFF0E,0xFF0E,CL},
{0xFF0F,0xFF19,ID},{0xFF1A,0xFF1B,NS},{0xFF1C,0xFF1E,ID},{0xFF1F,0xFF1F,EX},{0xFF20,0xFF3A,ID},{0xFF3B,0xFF3B,OP},
{0xFF3C,0xFF3C,ID},{0xFF3D,0xFF3D,CL},{0xFF3E,0xFF5A,ID},{0xFF5B,0xFF5B,OP},{0xFF5C,0xFF5C,ID},{0xFF5D,0xFF5D,CL},
{0xFF5E,0xFF5E,ID},{0xFF5F,0xFF5F,OP},{0xFF60,0xFF61,CL},{0xFF62,0xFF62,OP},{0xFF63,0xFF64,CL},{0xFF65,0xFF65,NS},
{0xFF66,0xFF66,AL},{0xFF67,0xFF70,NS},{0xFF71,0xFF9D,AL},{0xFF9E,0xFF9F,NS},{0xFFA0,0xFFDC,AL},{0xFFE0,0xFFE0,PO},
{0xFFE1,0xFFE1,PR},{0xFFE2,0xFFE4,ID},{0xFFE5,0xFFE6,PR},{0xFFE8,0xFFEE,AL},{0xFFF9,0xFFFB,CM},{0xFFFC,0xFFFC,CB},
{0xFFFD,0xFFFD,AI},
/*Han:CJK Ideograph Extension B*/
{0x20000,0x2A6D6,ID},
/*Han:CJK COMPATIBILITY  ++=1009*/
{0x2F800,0x2FA1D,ID}
};

