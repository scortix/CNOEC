/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vecnorm.c
 *
 * Code generation for function 'vecnorm'
 *
 */

/* Include files */
#include "vecnorm.h"
#include "costGaussGrad2_data.h"
#include "costGaussGrad2_emxutil.h"
#include "costGaussGrad2_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = {
    51,        /* lineNo */
    "vecnorm", /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" /* pathName
                                                                        */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    50,        /* lineNo */
    24,        /* colNo */
    "vecnorm", /* fName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\vecnorm.m" /* pName
                                                                        */
};

/* Function Definitions */
void vecnorm(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *x_data;
  real_T *y_data;
  int32_T ix0;
  int32_T j;
  int32_T k;
  int32_T ncols;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x_data = x->data;
  ncols = x->size[1];
  ix0 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, y, ix0, &kc_emlrtRTEI);
  y_data = y->data;
  st.site = &gc_emlrtRSI;
  if (x->size[1] > 2147483646) {
    b_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (j = 0; j < ncols; j++) {
    real_T b_y;
    real_T scale;
    int32_T kend;
    ix0 = j * 3;
    b_y = 0.0;
    scale = 3.3121686421112381E-170;
    kend = ix0 + 3;
    for (k = ix0 + 1; k <= kend; k++) {
      real_T absxk;
      absxk = muDoubleScalarAbs(x_data[k - 1]);
      if (absxk > scale) {
        real_T t;
        t = scale / absxk;
        b_y = b_y * t * t + 1.0;
        scale = absxk;
      } else {
        real_T t;
        t = absxk / scale;
        b_y += t * t;
      }
    }
    y_data[j] = scale * muDoubleScalarSqrt(b_y);
  }
}

/* End of code generation (vecnorm.c) */
