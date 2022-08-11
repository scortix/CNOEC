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
#include "costFun_data.h"
#include "costFun_emxutil.h"
#include "costFun_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bb_emlrtRSI = {
    13,      /* lineNo */
    "atan2", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\atan2.m" /* pathName
                                                                     */
};

static emlrtRSInfo cb_emlrtRSI = {
    66,      /* lineNo */
    "ixfun", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                         */
};

static emlrtRSInfo db_emlrtRSI = {
    45,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    66,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRSInfo fb_emlrtRSI =
    {
        19,             /* lineNo */
        "scalexpAlloc", /* fcnName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\scalexpAlloc.m" /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = {
    216,        /* lineNo */
    "flatIter", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

static emlrtRTEInfo g_emlrtRTEI =
    {
        14,             /* lineNo */
        15,             /* colNo */
        "scalexpCheck", /* fName */
        "P:\\Matlab\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\scalexpCheck.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
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
  int32_T k;
  int32_T nx;
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
  st.site = &bb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  nx = muIntScalarMin_sint32(y->size[1], x->size[1]);
  d_st.site = &fb_emlrtRSI;
  p = true;
  if (nx == y->size[1]) {
    if (nx != x->size[1]) {
      p = false;
    }
  } else {
    p = false;
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  c_st.site = &eb_emlrtRSI;
  nx = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = muIntScalarMin_sint32(y->size[1], x->size[1]);
  emxEnsureCapacity_real_T(&c_st, r, nx, &y_emlrtRTEI);
  r_data = r->data;
  nx = muIntScalarMin_sint32(y->size[1], x->size[1]);
  d_st.site = &gb_emlrtRSI;
  if (r->size[1] > 2147483646) {
    e_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (k = 0; k < nx; k++) {
    r_data[k] = muDoubleScalarAtan2(y_data[k], x_data[k]);
  }
}

/* End of code generation (atan2.c) */
