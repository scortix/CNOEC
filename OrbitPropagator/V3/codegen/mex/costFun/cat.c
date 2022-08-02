/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "cat.h"
#include "costFun_data.h"
#include "costFun_emxutil.h"
#include "costFun_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo y_emlrtRTEI = {
    53,        /* lineNo */
    12,        /* colNo */
    "costFun", /* fName */
    "P:\\Projects\\CNOEC\\CNOEC_Project\\OrbitPropagator\\V3\\costFun.m" /* pName
                                                                          */
};

/* Function Definitions */
void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1, real_T in2,
                      real_T in3, real_T in4, real_T in5, const real_T in6[3],
                      const real_T in7[9], const emxArray_real_T *in8,
                      const emxArray_real_T *in9)
{
  emxArray_real_T *b_in8;
  const real_T *in8_data;
  const real_T *in9_data;
  real_T b_in6;
  real_T *b_in8_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in9_data = in9->data;
  in8_data = in8->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_in6 = 0.0;
  for (i = 0; i < 3; i++) {
    b_in6 += ((in6[0] * in7[3 * i] + in6[1] * in7[3 * i + 1]) +
              in6[2] * in7[3 * i + 2]) *
             in6[i];
  }
  emxInit_real_T(sp, &b_in8, 1, &y_emlrtRTEI);
  i = in8->size[1];
  stride_0_0 = b_in8->size[0];
  if (in9->size[1] == 1) {
    b_in8->size[0] = i;
  } else {
    b_in8->size[0] = in9->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in8, stride_0_0, &y_emlrtRTEI);
  b_in8_data = b_in8->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (in9->size[1] != 1);
  if (in9->size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in9->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in8_data[i] =
        in8_data[6 * (i * stride_0_0)] / in9_data[i * stride_1_0] - 6380.0;
  }
  i = in1->size[0];
  in1->size[0] = b_in8->size[0] + 2;
  emxEnsureCapacity_real_T(sp, in1, i, &s_emlrtRTEI);
  in1_data = in1->data;
  in1_data[0] = (in2 * in3 + (1.0 - in2) * (1.0 - in4 / in5)) + 10.0 * b_in6;
  in1_data[1] = in4 - 400.0;
  loop_ub = b_in8->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i + 2] = b_in8_data[i];
  }
  emxFree_real_T(sp, &b_in8);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (cat.c) */
