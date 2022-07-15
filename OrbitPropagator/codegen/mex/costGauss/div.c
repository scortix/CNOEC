/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.c
 *
 * Code generation for function 'div'
 *
 */

/* Include files */
#include "div.h"
#include "assertCompatibleDims.h"
#include "costGauss_data.h"
#include "costGauss_emxutil.h"
#include "costGauss_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void binary_expand_op(const emlrtStack *sp, emlrtRSInfo in1,
                      const emxArray_real_T *in2, const emxArray_real_T *in3,
                      const emxArray_real_T *in4)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  emxArray_real_T *b_in3;
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *b_in2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &n_emlrtRTEI);
  loop_ub = in2->size[1];
  i = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  b_in2->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, i, &n_emlrtRTEI);
  b_in2_data = b_in2->data;
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[6 * i];
  }
  emxInit_real_T(sp, &b_in3, 2, &o_emlrtRTEI);
  i = b_in3->size[0] * b_in3->size[1];
  b_in3->size[0] = 1;
  if (in4->size[1] == 1) {
    b_in3->size[1] = in3->size[1];
  } else {
    b_in3->size[1] = in4->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in3, i, &o_emlrtRTEI);
  b_in2_data = b_in3->data;
  stride_0_1 = (in3->size[1] != 1);
  stride_1_1 = (in4->size[1] != 1);
  if (in4->size[1] == 1) {
    loop_ub = in3->size[1];
  } else {
    loop_ub = in4->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in3_data[i * stride_0_1] * in4_data[i * stride_1_1] + 1.0;
  }
  st.site = &in1;
  assertCompatibleDims(&st, b_in2, b_in3);
  emxFree_real_T(sp, &b_in3);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (div.c) */
