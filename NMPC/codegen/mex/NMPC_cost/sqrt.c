/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "NMPC_cost_data.h"
#include "NMPC_cost_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = {
    16,                                                            /* lineNo */
    "sqrt",                                                        /* fcnName */
    "P:\\Matlab\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pathName
                                                                    */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T x[36])
{
  int32_T k;
  boolean_T p;
  p = false;
  for (k = 0; k < 36; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (k = 0; k < 36; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

void c_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T *x_data;
  int32_T k;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  p = false;
  nx = x->size[1];
  for (k = 0; k < nx; k++) {
    if (p || (x_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &m_emlrtRSI;
  nx = x->size[1];
  b_st.site = &n_emlrtRSI;
  if (x->size[1] > 2147483646) {
    c_st.site = &o_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nx; k++) {
    x_data[k] = muDoubleScalarSqrt(x_data[k]);
  }
}

/* End of code generation (sqrt.c) */
