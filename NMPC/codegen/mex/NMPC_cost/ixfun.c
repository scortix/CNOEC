/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ixfun.c
 *
 * Code generation for function 'ixfun'
 *
 */

/* Include files */
#include "ixfun.h"
#include "NMPC_cost_emxutil.h"
#include "NMPC_cost_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI =
    {
        160,            /* lineNo */
        23,             /* colNo */
        "expand_atan2", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "ixfun.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI =
    {
        169,     /* lineNo */
        20,      /* colNo */
        "ixfun", /* fName */
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "ixfun.m" /* pName */
};

/* Function Definitions */
void expand_atan2(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real_T *b, emxArray_real_T *c)
{
  const real_T *a_data;
  const real_T *b_data;
  real_T *c_data;
  int32_T acoef;
  int32_T bcoef;
  int32_T sak;
  int32_T sbk;
  b_data = b->data;
  a_data = a->data;
  sak = a->size[1];
  sbk = b->size[1];
  if (b->size[1] == 1) {
    sak = a->size[1];
  } else if (a->size[1] == 1) {
    sak = b->size[1];
  } else {
    sak = muIntScalarMin_sint32(sak, sbk);
    if (a->size[1] != b->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
  }
  sbk = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = sak;
  emxEnsureCapacity_real_T(sp, c, sbk, &eb_emlrtRTEI);
  c_data = c->data;
  if (sak != 0) {
    acoef = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    sbk = sak - 1;
    for (sak = 0; sak <= sbk; sak++) {
      c_data[sak] =
          muDoubleScalarAtan2(a_data[acoef * sak], b_data[bcoef * sak]);
    }
  }
}

/* End of code generation (ixfun.c) */
