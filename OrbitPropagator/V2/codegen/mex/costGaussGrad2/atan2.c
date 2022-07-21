/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * atan2.c
 *
 * Code generation for function 'atan2'
 *
 */

/* Include files */
#include "atan2.h"
#include "costGaussGrad2_data.h"
#include "costGaussGrad2_emxutil.h"
#include "costGaussGrad2_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = {
    13,      /* lineNo */
    "atan2", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m" /* pathName
                                                                     */
};

static emlrtRSInfo pb_emlrtRSI = {
    66,      /* lineNo */
    "ixfun", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                         */
};

static emlrtRSInfo qb_emlrtRSI = {
    45,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    66,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI =
    {
        19,             /* lineNo */
        "scalexpAlloc", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\scalexpAlloc.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    216,        /* lineNo */
    "flatIter", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRTEInfo m_emlrtRTEI =
    {
        14,             /* lineNo */
        15,             /* colNo */
        "scalexpCheck", /* fName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\scalexpCheck.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    129,                         /* lineNo */
    6,                           /* colNo */
    "applyBinaryScalarFunction", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pName */
};

/* Function Definitions */
void b_atan2(const emlrtStack *sp, const emxArray_real_T *y,
             const emxArray_real_T *x, emxArray_real_T *r)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const real_T *x_data;
  const real_T *y_data;
  real_T *r_data;
  int32_T csz_idx_1;
  int32_T z_size_idx_1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  x_data = x->data;
  y_data = y->data;
  st.site = &ob_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  z_size_idx_1 = muIntScalarMin_sint32(y->size[1], x->size[1]);
  d_st.site = &sb_emlrtRSI;
  p = true;
  if (z_size_idx_1 == y->size[1]) {
    if (z_size_idx_1 != x->size[1]) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &m_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  c_st.site = &rb_emlrtRSI;
  csz_idx_1 = muIntScalarMin_sint32(y->size[1], x->size[1]);
  z_size_idx_1 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = muIntScalarMin_sint32(y->size[1], x->size[1]);
  emxEnsureCapacity_real_T(&c_st, r, z_size_idx_1, &jc_emlrtRTEI);
  r_data = r->data;
  d_st.site = &tb_emlrtRSI;
  if (csz_idx_1 > 2147483646) {
    e_st.site = &y_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (z_size_idx_1 = 0; z_size_idx_1 < csz_idx_1; z_size_idx_1++) {
    r_data[z_size_idx_1] =
        muDoubleScalarAtan2(y_data[z_size_idx_1], x_data[z_size_idx_1]);
  }
}

/* End of code generation (atan2.c) */
