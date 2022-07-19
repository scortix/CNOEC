/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * costGaussGrad2_initialize.c
 *
 * Code generation for function 'costGaussGrad2_initialize'
 *
 */

/* Include files */
#include "costGaussGrad2_initialize.h"
#include "_coder_costGaussGrad2_mex.h"
#include "costGaussGrad2_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void costGaussGrad2_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (costGaussGrad2_initialize.c) */
