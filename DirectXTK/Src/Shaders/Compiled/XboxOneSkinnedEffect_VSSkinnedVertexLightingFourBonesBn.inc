#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0     NONE   float   xyzw
// NORMAL                   0   xyz         1     NONE   float   xyz 
// TEXCOORD                 0   xy          2     NONE   float   xy  
// BLENDINDICES             0   xyzw        3     NONE    uint   xyzw
// BLENDWEIGHT              0   xyzw        4     NONE   float   xyzw
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float   xy  
// SV_Position              0   xyzw        3      POS   float   xyzw
//
vs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[242], dynamicIndexed
dcl_input v0.xyzw
dcl_input v1.xyz
dcl_input v2.xy
dcl_input v3.xyzw
dcl_input v4.xyzw
dcl_output o0.xyzw
dcl_output o1.xyzw
dcl_output o2.xy
dcl_output_siv o3.xyzw, position
dcl_temps 7
mad r0.xyz, v1.xyzx, l(2.000000, 2.000000, 2.000000, 0.000000), l(-1.000000, -1.000000, -1.000000, 0.000000)
imul null, r1.xyzw, v3.xyzw, l(3, 3, 3, 3)
mul r2.xyzw, v4.yyyy, cb0[r1.y + 26].xyzw
mad r2.xyzw, cb0[r1.x + 26].xyzw, v4.xxxx, r2.xyzw
mad r2.xyzw, cb0[r1.z + 26].xyzw, v4.zzzz, r2.xyzw
mad r2.xyzw, cb0[r1.w + 26].xyzw, v4.wwww, r2.xyzw
dp3 r3.x, r0.xyzx, r2.xyzx
dp4 r2.x, v0.xyzw, r2.xyzw
mul r4.xyzw, v4.yyyy, cb0[r1.y + 27].xyzw
mad r4.xyzw, cb0[r1.x + 27].xyzw, v4.xxxx, r4.xyzw
mad r4.xyzw, cb0[r1.z + 27].xyzw, v4.zzzz, r4.xyzw
mad r4.xyzw, cb0[r1.w + 27].xyzw, v4.wwww, r4.xyzw
dp3 r3.y, r0.xyzx, r4.xyzx
dp4 r2.y, v0.xyzw, r4.xyzw
mul r4.xyzw, v4.yyyy, cb0[r1.y + 28].xyzw
mad r4.xyzw, cb0[r1.x + 28].xyzw, v4.xxxx, r4.xyzw
mad r4.xyzw, cb0[r1.z + 28].xyzw, v4.zzzz, r4.xyzw
mad r1.xyzw, cb0[r1.w + 28].xyzw, v4.wwww, r4.xyzw
dp3 r3.z, r0.xyzx, r1.xyzx
dp4 r2.z, v0.xyzw, r1.xyzw
dp3 r0.x, r3.xyzx, cb0[19].xyzx
dp3 r0.y, r3.xyzx, cb0[20].xyzx
dp3 r0.z, r3.xyzx, cb0[21].xyzx
dp3 r0.w, r0.xyzx, r0.xyzx
rsq r0.w, r0.w
mul r0.xyz, r0.wwww, r0.xyzx
dp3 r1.x, -cb0[3].xyzx, r0.xyzx
dp3 r1.y, -cb0[4].xyzx, r0.xyzx
dp3 r1.z, -cb0[5].xyzx, r0.xyzx
ge r3.xyz, r1.xyzx, l(0.000000, 0.000000, 0.000000, 0.000000)
and r3.xyz, r3.xyzx, l(0x3f800000, 0x3f800000, 0x3f800000, 0)
mul r4.xyz, r1.xyzx, r3.xyzx
mul r5.xyz, r4.yyyy, cb0[7].xyzx
mad r4.xyw, r4.xxxx, cb0[6].xyxz, r5.xyxz
mad r4.xyz, r4.zzzz, cb0[8].xyzx, r4.xywx
mad o0.xyz, r4.xyzx, cb0[0].xyzx, cb0[1].xyzx
mov o0.w, cb0[0].w
mov r2.w, v0.w
dp4 r4.x, r2.xyzw, cb0[15].xyzw
dp4 r4.y, r2.xyzw, cb0[16].xyzw
dp4 r4.z, r2.xyzw, cb0[17].xyzw
add r4.xyz, -r4.xyzx, cb0[12].xyzx
dp3 r0.w, r4.xyzx, r4.xyzx
rsq r0.w, r0.w
mad r5.xyz, r4.xyzx, r0.wwww, -cb0[3].xyzx
dp3 r1.w, r5.xyzx, r5.xyzx
rsq r1.w, r1.w
mul r5.xyz, r1.wwww, r5.xyzx
dp3 r5.x, r5.xyzx, r0.xyzx
mad r6.xyz, r4.xyzx, r0.wwww, -cb0[4].xyzx
mad r4.xyz, r4.xyzx, r0.wwww, -cb0[5].xyzx
dp3 r0.w, r6.xyzx, r6.xyzx
rsq r0.w, r0.w
mul r6.xyz, r0.wwww, r6.xyzx
dp3 r5.y, r6.xyzx, r0.xyzx
dp3 r0.w, r4.xyzx, r4.xyzx
rsq r0.w, r0.w
mul r4.xyz, r0.wwww, r4.xyzx
dp3 r5.z, r4.xyzx, r0.xyzx
max r0.xyz, r5.xyzx, l(0.000000, 0.000000, 0.000000, 0.000000)
mul r0.xyz, r3.xyzx, r0.xyzx
log r0.xyz, r0.xyzx
mul r0.xyz, r0.xyzx, cb0[2].wwww
exp r0.xyz, r0.xyzx
mul r0.xyz, r1.xyzx, r0.xyzx
mul r1.xyz, r0.yyyy, cb0[10].xyzx
mad r0.xyw, r0.xxxx, cb0[9].xyxz, r1.xyxz
mad r0.xyz, r0.zzzz, cb0[11].xyzx, r0.xywx
mul o1.xyz, r0.xyzx, cb0[2].xyzx
dp4_sat o1.w, r2.xyzw, cb0[14].xyzw
mov o2.xy, v2.xyxx
dp4 o3.x, r2.xyzw, cb0[22].xyzw
dp4 o3.y, r2.xyzw, cb0[23].xyzw
dp4 o3.z, r2.xyzw, cb0[24].xyzw
dp4 o3.w, r2.xyzw, cb0[25].xyzw
ret 
// Approximately 0 instruction slots used
#endif

const BYTE SkinnedEffect_VSSkinnedVertexLightingFourBonesBn[] =
{
     68,  88,  66,  67, 158,  54, 
    131,  71, 169, 230,  29,  20, 
    203,  80,  54,  49, 248, 185, 
    155, 151,   1,   0,   0,   0, 
    107,  12,   0,   0,   4,   0, 
      0,   0,  48,   0,   0,   0, 
    240,   0,   0,   0, 124,   1, 
      0,   0, 252,  11,   0,   0, 
     73,  83,  71,  78, 184,   0, 
      0,   0,   5,   0,   0,   0, 
      8,   0,   0,   0, 128,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,  15,   0,   0, 140,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
      7,   7,   0,   0, 147,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      3,   3,   0,   0, 156,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
     15,  15,   0,   0, 169,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   4,   0,   0,   0, 
     15,  15,   0,   0,  83,  86, 
     95,  80, 111, 115, 105, 116, 
    105, 111, 110,   0,  78,  79, 
     82,  77,  65,  76,   0,  84, 
     69,  88,  67,  79,  79,  82, 
     68,   0,  66,  76,  69,  78, 
     68,  73,  78,  68,  73,  67, 
     69,  83,   0,  66,  76,  69, 
     78,  68,  87,  69,  73,  71, 
     72,  84,   0, 171, 171, 171, 
     79,  83,  71,  78, 132,   0, 
      0,   0,   4,   0,   0,   0, 
      8,   0,   0,   0, 104,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0, 104,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     15,   0,   0,   0, 110,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   2,   0,   0,   0, 
      3,  12,   0,   0, 119,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
     15,   0,   0,   0,  67,  79, 
     76,  79,  82,   0,  84,  69, 
     88,  67,  79,  79,  82,  68, 
      0,  83,  86,  95,  80, 111, 
    115, 105, 116, 105, 111, 110, 
      0, 171,  83,  72,  69,  88, 
    120,  10,   0,   0,  80,   0, 
      1,   0, 158,   2,   0,   0, 
    106,   8,   0,   1,  89,   8, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0, 242,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   0,   0, 
      0,   0,  95,   0,   0,   3, 
    114,  16,  16,   0,   1,   0, 
      0,   0,  95,   0,   0,   3, 
     50,  16,  16,   0,   2,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   3,   0, 
      0,   0,  95,   0,   0,   3, 
    242,  16,  16,   0,   4,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   1,   0, 
      0,   0, 101,   0,   0,   3, 
     50,  32,  16,   0,   2,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   7,   0, 
      0,   0,  50,   0,   0,  15, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,  64, 
      0,   0,   0,  64,   0,   0, 
      0,  64,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128, 191,   0,   0, 128, 191, 
      0,   0, 128, 191,   0,   0, 
      0,   0,  38,   0,   0,  11, 
      0, 208,   0,   0, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  30,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      3,   0,   0,   0,   3,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      2,   0,   0,   0,  86,  21, 
     16,   0,   4,   0,   0,   0, 
     70, 142,  32,   6,   0,   0, 
      0,   0,  26,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  26,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   6,  16, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  26,   0, 
      0,   0,  42,   0,  16,   0, 
      1,   0,   0,   0, 166,  26, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  26,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0, 246,  31, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  16,   0,   0,   7, 
     18,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     17,   0,   0,   7,  18,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      4,   0,   0,   0,  86,  21, 
     16,   0,   4,   0,   0,   0, 
     70, 142,  32,   6,   0,   0, 
      0,   0,  27,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  27,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   6,  16, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  27,   0, 
      0,   0,  42,   0,  16,   0, 
      1,   0,   0,   0, 166,  26, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  27,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0, 246,  31, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  16,   0,   0,   7, 
     34,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     17,   0,   0,   7,  34,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      4,   0,   0,   0,  56,   0, 
      0,  10, 242,   0,  16,   0, 
      4,   0,   0,   0,  86,  21, 
     16,   0,   4,   0,   0,   0, 
     70, 142,  32,   6,   0,   0, 
      0,   0,  28,   0,   0,   0, 
     26,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  28,   0, 
      0,   0,  10,   0,  16,   0, 
      1,   0,   0,   0,   6,  16, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   4,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  28,   0, 
      0,   0,  42,   0,  16,   0, 
      1,   0,   0,   0, 166,  26, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  50,   0,   0,  12, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70, 142,  32,   6, 
      0,   0,   0,   0,  28,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0, 246,  31, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   4,   0, 
      0,   0,  16,   0,   0,   7, 
     66,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     17,   0,   0,   7,  66,   0, 
     16,   0,   2,   0,   0,   0, 
     70,  30,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  16,   0, 
      0,   8,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   3,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  19,   0,   0,   0, 
     16,   0,   0,   8,  34,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,  20,   0, 
      0,   0,  16,   0,   0,   8, 
     66,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      3,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     21,   0,   0,   0,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      0,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,   9, 
     18,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,   9, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,   9, 
     66,   0,  16,   0,   1,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  29,   0,   0,  10, 
    114,   0,  16,   0,   3,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,  10, 114,   0, 
     16,   0,   3,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   3,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   5,   0, 
      0,   0,  86,   5,  16,   0, 
      4,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,  50,   0, 
      0,  10, 178,   0,  16,   0, 
      4,   0,   0,   0,   6,   0, 
     16,   0,   4,   0,   0,   0, 
     70, 136,  32,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
     70,   8,  16,   0,   5,   0, 
      0,   0,  50,   0,   0,  10, 
    114,   0,  16,   0,   4,   0, 
      0,   0, 166,  10,  16,   0, 
      4,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  70,   3, 
     16,   0,   4,   0,   0,   0, 
     50,   0,   0,  11, 114,  32, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  54,   0,   0,   6, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  58, 128,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,   0,  16,   0,   2,   0, 
      0,   0,  58,  16,  16,   0, 
      0,   0,   0,   0,  17,   0, 
      0,   8,  18,   0,  16,   0, 
      4,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     17,   0,   0,   8,  34,   0, 
     16,   0,   4,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,  17,   0,   0,   8, 
     66,   0,  16,   0,   4,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     17,   0,   0,   0,   0,   0, 
      0,   9, 114,   0,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16, 128,  65,   0,   0,   0, 
      4,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
     12,   0,   0,   0,  16,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  68,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  11, 114,   0,  16,   0, 
      5,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
     16,   0,   0,   7, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   5,   0, 
      0,   0,  70,   2,  16,   0, 
      5,   0,   0,   0,  68,   0, 
      0,   5, 130,   0,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   5,   0,   0,   0, 
    246,  15,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      5,   0,   0,   0,  16,   0, 
      0,   7,  18,   0,  16,   0, 
      5,   0,   0,   0,  70,   2, 
     16,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  11, 
    114,   0,  16,   0,   6,   0, 
      0,   0,  70,   2,  16,   0, 
      4,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32, 128,  65,   0, 
      0,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  50,   0, 
      0,  11, 114,   0,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70, 130,  32, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     16,   0,   0,   7, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   6,   0, 
      0,   0,  70,   2,  16,   0, 
      6,   0,   0,   0,  68,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   6,   0,   0,   0, 
    246,  15,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      6,   0,   0,   0,  16,   0, 
      0,   7,  34,   0,  16,   0, 
      5,   0,   0,   0,  70,   2, 
     16,   0,   6,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  16,   0,   0,   7, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      4,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     68,   0,   0,   5, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   4,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
     16,   0,   0,   7,  66,   0, 
     16,   0,   5,   0,   0,   0, 
     70,   2,  16,   0,   4,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  52,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   5,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      3,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     47,   0,   0,   5, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0, 246, 143, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  25,   0, 
      0,   5, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0,  86,   5, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  10,   0,   0,   0, 
     50,   0,   0,  10, 178,   0, 
     16,   0,   0,   0,   0,   0, 
      6,   0,  16,   0,   0,   0, 
      0,   0,  70, 136,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  70,   8,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0, 166,  10, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  11,   0,   0,   0, 
     70,   3,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,  32,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  17,  32, 
      0,   8, 130,  32,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  14,   0,   0,   0, 
     54,   0,   0,   5,  50,  32, 
     16,   0,   2,   0,   0,   0, 
     70,  16,  16,   0,   2,   0, 
      0,   0,  17,   0,   0,   8, 
     18,  32,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     22,   0,   0,   0,  17,   0, 
      0,   8,  34,  32,  16,   0, 
      3,   0,   0,   0,  70,  14, 
     16,   0,   2,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  23,   0,   0,   0, 
     17,   0,   0,   8,  66,  32, 
     16,   0,   3,   0,   0,   0, 
     70,  14,  16,   0,   2,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,  24,   0, 
      0,   0,  17,   0,   0,   8, 
    130,  32,  16,   0,   3,   0, 
      0,   0,  70,  14,  16,   0, 
      2,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     25,   0,   0,   0,  62,   0, 
      0,   1,  88,  80,  68,  80, 
    103,   0,   0,   0,  68,  58, 
     92,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  92,  68, 
    105, 114, 101,  99, 116,  88, 
     84,  75,  92, 115, 114,  99, 
     92,  83, 104,  97, 100, 101, 
    114, 115,  92,  67, 111, 109, 
    112, 105, 108, 101, 100,  92, 
     88,  98, 111, 120,  79, 110, 
    101,  83, 107, 105, 110, 110, 
    101, 100,  69, 102, 102, 101, 
     99, 116,  95,  86,  83,  83, 
    107, 105, 110, 110, 101, 100, 
     86, 101, 114, 116, 101, 120, 
     76, 105, 103, 104, 116, 105, 
    110, 103,  70, 111, 117, 114, 
     66, 111, 110, 101, 115,  66, 
    110,  46, 112, 100,  98
};