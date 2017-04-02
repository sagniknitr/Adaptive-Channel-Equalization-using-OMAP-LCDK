/* coeff.c                                  */
/*                                          */
/* Square-root raised-cosine filter         */
/* rolloff = 0.35, symbol rate = 2400 sps   */
/*                                          */
/* DF2 filter coefficients                  */
/* exported from MATLAB using fir_dump2c.m  */


#include "coeff.h"

float B[B_SIZE] = {
 -0.00127268,	/* B[0] */
 -0.00129946,	/* B[1] */
 -0.00126276,	/* B[2] */
 -0.00115797,	/* B[3] */
-0.000983033,	/* B[4] */
-0.000738758,	/* B[5] */
-0.000428979,	/* B[6] */
-6.06533e-005,	/* B[7] */
 0.000356172,	/* B[8] */
 0.000808517,	/* B[9] */
  0.00128075,	/* B[10] */
  0.00175499,	/* B[11] */
  0.00221162,	/* B[12] */
   0.0026299,	/* B[13] */
   0.0029887,	/* B[14] */
  0.00326722,	/* B[15] */
  0.00344585,	/* B[16] */
  0.00350698,	/* B[17] */
  0.00343581,	/* B[18] */
  0.00322111,	/* B[19] */
  0.00285597,	/* B[20] */
  0.00233835,	/* B[21] */
   0.0016716,	/* B[22] */
 0.000864772,	/* B[23] */
-6.7226e-005,	/* B[24] */
 -0.00110363,	/* B[25] */
 -0.00221804,	/* B[26] */
 -0.00337883,	/* B[27] */
  -0.0045497,	/* B[28] */
 -0.00569052,	/* B[29] */
 -0.00675821,	/* B[30] */
 -0.00770783,	/* B[31] */
 -0.00849382,	/* B[32] */
 -0.00907123,	/* B[33] */
 -0.00939707,	/* B[34] */
 -0.00943165,	/* B[35] */
 -0.00913989,	/* B[36] */
 -0.00849253,	/* B[37] */
  -0.0074673,	/* B[38] */
 -0.00604983,	/* B[39] */
 -0.00423451,	/* B[40] */
 -0.00202502,	/* B[41] */
 0.000565333,	/* B[42] */
  0.00351348,	/* B[43] */
   0.0067868,	/* B[44] */
   0.0103436,	/* B[45] */
   0.0141336,	/* B[46] */
   0.0180994,	/* B[47] */
   0.0221769,	/* B[48] */
   0.0262974,	/* B[49] */
   0.0303887,	/* B[50] */
   0.0343768,	/* B[51] */
   0.0381878,	/* B[52] */
   0.0417496,	/* B[53] */
   0.0449936,	/* B[54] */
   0.0478563,	/* B[55] */
   0.0502812,	/* B[56] */
   0.0522199,	/* B[57] */
   0.0536334,	/* B[58] */
   0.0544932,	/* B[59] */
   0.0547817,	/* B[60] */
   0.0544932,	/* B[61] */
   0.0536334,	/* B[62] */
   0.0522199,	/* B[63] */
   0.0502812,	/* B[64] */
   0.0478563,	/* B[65] */
   0.0449936,	/* B[66] */
   0.0417496,	/* B[67] */
   0.0381878,	/* B[68] */
   0.0343768,	/* B[69] */
   0.0303887,	/* B[70] */
   0.0262974,	/* B[71] */
   0.0221769,	/* B[72] */
   0.0180994,	/* B[73] */
   0.0141336,	/* B[74] */
   0.0103436,	/* B[75] */
   0.0067868,	/* B[76] */
  0.00351348,	/* B[77] */
 0.000565333,	/* B[78] */
 -0.00202502,	/* B[79] */
 -0.00423451,	/* B[80] */
 -0.00604983,	/* B[81] */
  -0.0074673,	/* B[82] */
 -0.00849253,	/* B[83] */
 -0.00913989,	/* B[84] */
 -0.00943165,	/* B[85] */
 -0.00939707,	/* B[86] */
 -0.00907123,	/* B[87] */
 -0.00849382,	/* B[88] */
 -0.00770783,	/* B[89] */
 -0.00675821,	/* B[90] */
 -0.00569052,	/* B[91] */
  -0.0045497,	/* B[92] */
 -0.00337883,	/* B[93] */
 -0.00221804,	/* B[94] */
 -0.00110363,	/* B[95] */
-6.7226e-005,	/* B[96] */
 0.000864772,	/* B[97] */
   0.0016716,	/* B[98] */
  0.00233835,	/* B[99] */
  0.00285597,	/* B[100] */
  0.00322111,	/* B[101] */
  0.00343581,	/* B[102] */
  0.00350698,	/* B[103] */
  0.00344585,	/* B[104] */
  0.00326722,	/* B[105] */
   0.0029887,	/* B[106] */
   0.0026299,	/* B[107] */
  0.00221162,	/* B[108] */
  0.00175499,	/* B[109] */
  0.00128075,	/* B[110] */
 0.000808517,	/* B[111] */
 0.000356172,	/* B[112] */
-6.06533e-005,	/* B[113] */
-0.000428979,	/* B[114] */
-0.000738758,	/* B[115] */
-0.000983033,	/* B[116] */
 -0.00115797,	/* B[117] */
 -0.00126276,	/* B[118] */
 -0.00129946,	/* B[119] */
 -0.00127268,	/* B[120] */
};
